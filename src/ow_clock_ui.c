#include "ow_clock_ui.h"
#include "gba/types.h"
#include "gba/defines.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "text_window.h"
#include "window.h"
#include "characters.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "menu.h"
#include "malloc.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "gpu_regs.h"

#include "rtc.h"
#include "strings.h"
#include "text.h"
#include "international_string_util.h"
/*

* THIS PART IS FOR LATER
* WHEN I'M ADDING A BG TO THE CLOCK WINDOW

static const u16 sFieldClock_Pal[]        = INCBIN_U16("graphics/interface/clockuitiles.gbapal");
static const u16 sFieldClock_Gfx[]        = INCBIN_U16("graphics/pokemon_storage/clockuitiles.4bpp.lz");

struct FieldClockGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct FieldClockGfx sFieldClock = {sFieldClock_Gfx, sFieldClock_Pal};
*/

EWRAM_DATA static u8 sShowFieldClockWindowId = 0;
EWRAM_DATA static s8 sInitShowFieldClockData[2] = {0};

static const struct WindowTemplate sWindowTemplate_StartClock = {
    // This window will print on BG0
    .bg = 0, 
    /*
         * The tilemap position for this window, if we imagine the tilemap as a 2D matrix. These positions refer to
         * tiles, so to get the actual pixel position you should multiply by 8.
    */
    .tilemapLeft = 20, 

    .tilemapTop = 1, 

    /*
         * The tilemap dimensions for this window, if we imagine the tilemap as a 2D matrix. These dimensions refer to
         * tiles, so to get the actual pixel dimensions you should multiply by 8.
    */

    .width = 9, // If you want to shorten the dates to Sat., Sun., etc., change this to 9. If you want to make the dates larger change this to 13.

    .height = 4, 

    /*
        * Use BG palette 15 for all tilemap entries that fall within this window. Tilemap entriesstore the     palette for
        * the given tile in bits F, E, D, C (top four) of the entry. We'll need to load the rightpalette   into BG
        * palette slot 15.
    */

    .paletteNum = 15,

    /*
        * The base block sets the starting tile offset in VRAM where the window’s graphics are stored.
        * If multiple windows are placed on the same background, each window’s base block must be carefully chosen to prevent them from overlapping.
        * Typically, you want to set the base block for a new window based on the size of the previous window:
        * newBaseBlock = previousBaseBlock + (prevWindowWidth * prevWindowHeight)
        * 
    
    */

    .baseBlock = 0x30

};

static void ShowTimeWindow(void);
void ShowFieldClockFromMenu(void);
static bool32 InitShowFieldClockStep(u8 taskId);
static void Task_ShowFieldClock(u8 taskId);
void ShowFieldClock(void);
void RemoveFieldClockWindow(void);

#define tPrintTimer    data[4]
#define FROM_MENU 1
#define REMOVE_FIELD_CLOCK 2

void ShowFieldClock(void) //we start here
{
    /* the task we're creating is Task_ShowFieldClock*/
    /* WE SHOULD use the data more and task states if we're adding the season icons */
    // * The function in func is called once every frame, and the data put into data can be used to keep state between frames.
    // * So we're calling Task_ShowFieldClock every frame
    // * So we're calling InitShowFieldClockStep every frame, which calls ShowTimeWindow
    if (!FuncIsActiveTask(Task_ShowFieldClock)) //create the task if its not created already
    {
        u8 taskId;
        sInitShowFieldClockData[0] = 0;
        sInitShowFieldClockData[1] = 0;
        taskId = CreateTask(Task_ShowFieldClock, 0x50);
        //just in case we need to use the taskId down the line LOL but we can prob remove this later TODO
    }
    /* i dont think we need a followup here bc in start_menu the followup is meant to handle user input */
}

static void Task_ShowFieldClock(u8 taskId)
{
    InitShowFieldClockStep(taskId);
}

static bool32 InitShowFieldClockStep(u8 taskId)
{
    s8 state = sInitShowFieldClockData[0];
    struct Task *task = &gTasks[taskId];

    switch (state)
    {
    case 0:
    if (++task->tPrintTimer > 180) //wait 3 seconds before showing the clock
        {
            ShowTimeWindow();
            task->tPrintTimer = 0;
            //sInitShowFieldClockData[0]++;
        }
        return TRUE;
    case FROM_MENU:
        ShowTimeWindow();
        //sInitShowFieldClockData[0]++;
        return TRUE;
    case REMOVE_FIELD_CLOCK: 
        PlaySE(SE_USE_ITEM);
        DestroyTask(taskId);
        ClearStdWindowAndFrame(sShowFieldClockWindowId, TRUE);
        ClearStdWindowAndFrameToTransparent(sShowFieldClockWindowId, FALSE);
        RemoveWindow(sShowFieldClockWindowId);
        sShowFieldClockWindowId = WINDOW_NONE;
        sInitShowFieldClockData[0] = 0;
        return TRUE;
    default:
        break;
    }

    return FALSE;
}


void ShowFieldClockFromMenu(void)
{
    sInitShowFieldClockData[0] = FROM_MENU;
    CreateTask(Task_ShowFieldClock, 0x50);
}

void Task_RemoveFieldClockWindow(u8 taskId)
{
    sInitShowFieldClockData[0] = REMOVE_FIELD_CLOCK;
    CreateTask(Task_ShowFieldClock, 0x50);
}

//basically need to add ShowTimeWindow(); to the field ui init 

#define CLOCK_WINDOW_WIDTH 70

#define TIME_UPDATE_INTERVAL (1 << 8)

static void UpdateMenuClock(void)
{
    switch (gSaveBlock1Ptr->clockState)
    {
    case 0:
        if (gMain.vblankCounter1 & TIME_UPDATE_INTERVAL)
        {
            RtcCalcLocalTime();
            gSaveBlock1Ptr->clockState++;
        }
        break;
    case 1:
        if (!(gMain.vblankCounter1 & TIME_UPDATE_INTERVAL))
            gSaveBlock1Ptr->clockState--;
        break;
    }
}

static void ShowTimeWindow(void)
{
    const u8 *suffix;
    u8* ptr;
    u8 convertedHours;

    UpdateMenuClock();

    // print window
    sShowFieldClockWindowId = AddWindow(&sWindowTemplate_StartClock);
    PutWindowTilemap(sShowFieldClockWindowId);
    DrawStdWindowFrame(sShowFieldClockWindowId, FALSE);
    if (gLocalTime.hours < 12) {
        if (gLocalTime.hours == 0)
            convertedHours = 12;
        else
            convertedHours = gLocalTime.hours;
        suffix = gText_AM;
    }

    else if (gLocalTime.hours == 12){
        convertedHours = 12;
        if (suffix == gText_AM);
            suffix = gText_PM;
    }
    else{
        convertedHours = gLocalTime.hours - 12;
        suffix = gText_PM;
    }

    if (gLocalTime.dayOfWeek <= DAY_SATURDAY)
        StringCopy(gStringVar4, gDayNameStringsTable[gLocalTime.dayOfWeek]);
    else
        StringCopy(gStringVar4, gText_None);

    AddTextPrinterParameterized(sShowFieldClockWindowId, 1, gStringVar4, 0, 1, 0xFF, NULL);
    ConvertIntToDecimalStringN(gStringVar1, GetDate(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar2, GetMonth(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar3, GetYear(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar4, gText_Date);
    AddTextPrinterParameterized(sShowFieldClockWindowId, 1, gStringVar4, 0, 16, 0xFF, NULL);
    ptr = ConvertIntToDecimalStringN(gStringVar4, convertedHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *ptr = 0xF0;
    ConvertIntToDecimalStringN(ptr + 1, gLocalTime.minutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized(sShowFieldClockWindowId, 1, gStringVar4, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH) - (CLOCK_WINDOW_WIDTH - GetStringRightAlignXOffset(1, gStringVar4, CLOCK_WINDOW_WIDTH) + 3), 1, 0xFF, NULL); // print time
    AddTextPrinterParameterized(sShowFieldClockWindowId, 1, suffix, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH), 1, 0xFF, NULL); // print am/pm
    CopyWindowToVram(sShowFieldClockWindowId, COPYWIN_GFX);
}

void RemoveFieldClockWindow(void) //we need to use this later
{
    if (sShowFieldClockWindowId != WINDOW_NONE)
    {
        CreateTask(Task_RemoveFieldClockWindow, 0x50);
    }
}



