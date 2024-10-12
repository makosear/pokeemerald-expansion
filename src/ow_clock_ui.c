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
EWRAM_DATA static s8 sInitShowFieldClockData[2] = {0};
EWRAM_DATA u8 gFieldClockTaskId = 0;

static void ShowTimeWindow(void);
void ShowFieldClockFromMenu(void);
static void InitShowFieldClockStep(u8 taskId);
static void Task_ShowFieldClock(u8 taskId);
void ShowFieldClock(void);
void HideFieldClockWindow(void);

#define tPrintTimer    data[4]
#define FROM_MENU 2

void ShowFieldClock(void) //we start here
{
    /* the task we're creating is Task_ShowFieldClock*/
    /* WE SHOULD use the data more and task states if we're adding the season icons */
    // * The function in func is called once every frame, and the data put into data can be used to keep state between frames.
    // * So we're calling Task_ShowFieldClock every frame
    // * So we're calling InitShowFieldClockStep every frame, which calls ShowTimeWindow
    if (!FuncIsActiveTask(Task_ShowFieldClock)) //create the task if its not active already
    {
        sInitShowFieldClockData[0] = 0;
        sInitShowFieldClockData[1] = 0;
        gFieldClockTaskId = CreateTask(Task_ShowFieldClock, 110);
        //just in case we need to use the taskId down the line LOL but we can prob remove this later TODO
    }
    /* i dont think we need a followup here bc in start_menu the followup is meant to handle user input */
}

static void Task_ShowFieldClock(u8 taskId)
{
    InitShowFieldClockStep(taskId);
}

static void InitShowFieldClockStep(u8 taskId)
{
    s8 state = sInitShowFieldClockData[0];
    struct Task *task = &gTasks[taskId];

    switch (state)
    {
    case 0:
        sInitShowFieldClockData[0]++;
        break;
    case 1:
    if (++task->tPrintTimer > 210) //wait 3 seconds and like 30 frames before showing the clock
        {
            ShowTimeWindow();
            task->tPrintTimer = 0;
            //sInitShowFieldClockData[0]++;
        }
        return;
    case FROM_MENU:
        ShowTimeWindow();
        //sInitShowFieldClockData[0]++;
        return;
    default:
        break;
    }

    return;
}

void ShowFieldClockFromMenu(void)
{
    sInitShowFieldClockData[0] = FROM_MENU;
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
    u8 fieldClockWindowId;

    UpdateMenuClock();

    // print window
    //0, 20, 1, 9, 4, 15, 0x??
    LoadMessageBoxAndBorderGfx();
    fieldClockWindowId = AddFieldClockWindow();
    //LoadMapNamePopUpWindowBg();
    //PutWindowTilemap(fieldClockWindowId);
    DrawStdWindowFrame(fieldClockWindowId, FALSE);
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

    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, 0, 1, 0xFF, NULL);
    ConvertIntToDecimalStringN(gStringVar1, GetDate(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar2, GetMonth(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar3, GetYear(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar4, gText_Date);
    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, 0, 16, 0xFF, NULL);
    ptr = ConvertIntToDecimalStringN(gStringVar4, convertedHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *ptr = 0xF0;
    ConvertIntToDecimalStringN(ptr + 1, gLocalTime.minutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH) - (CLOCK_WINDOW_WIDTH - GetStringRightAlignXOffset(1, gStringVar4, CLOCK_WINDOW_WIDTH) + 3), 1, 0xFF, NULL); // print time
    AddTextPrinterParameterized(fieldClockWindowId, 1, suffix, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH), 1, 0xFF, NULL); // print am/pm
    
    CopyWindowToVram(fieldClockWindowId, COPYWIN_FULL);
}

/*
void RemoveFieldClockWindow(void) //we need to use this later
{
    if (sShowFieldClockWindowId != WINDOW_NONE)
    {
        //ClearStdWindowAndFrame(sShowFieldClockWindowId, TRUE);
        ClearStdWindowAndFrameToTransparent(sShowFieldClockWindowId, FALSE);

        //removew window
        {RemoveWindow(sShowFieldClockWindowId);
        sShowFieldClockWindowId = WINDOW_NONE;}
        //FreeAllWindowBuffers();
        DestroyTask(FindTaskIdByFunc(Task_ShowFieldClock));
    }
} */

void HideFieldClockWindow(void)
{
    if (FuncIsActiveTask(Task_ShowFieldClock))
    {
    #ifdef UBFIX
        if (GetFieldClockWindowId() != WINDOW_NONE)
    #endif // UBFIX
        {
            ClearStdWindowAndFrame(GetFieldClockWindowId(), TRUE);
            RemoveFieldClockWindow();
        }

        //SetGpuReg_ForcedBlank(REG_OFFSET_BG0VOFS, 0);
        DestroyTask(gFieldClockTaskId);
    }
}



