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


//LOOK IF BW_PRIMARY.PNG is defined elsewhere, like where the compiler is making the .png into these files 
//doesnt look like it lol

static const u8 sFieldClock_Gfx[]        = INCBIN_U8("graphics/interface/fieldclock.4bpp");
static const u16 sFieldClock_Pal[16]        = INCBIN_U16("graphics/interface/fieldclock.gbapal");


// * SEASON DEFINES

enum IconOrPalette
{
    OPTION_ICON,
    OPTION_PALETTE
};

enum SeasonIcons
{
    SEASON_ICON_SPRING,
    SEASON_ICON_SUMMER,
    SEASON_ICON_FALL,
    SEASON_ICON_WINTER
};

static const u16 gSeasonIcon_Spring_Gfx[]          = INCBIN_U16("graphics/interface/seasons/spring.4bpp");
static const u16 gSeasonIcon_Summer_Gfx[]          = INCBIN_U16("graphics/interface/seasons/summer.4bpp");
static const u16 gSeasonIcon_Fall_Gfx[]            = INCBIN_U16("graphics/interface/seasons/fall.4bpp");
static const u16 gSeasonIcon_Winter_Gfx[]          = INCBIN_U16("graphics/interface/seasons/winter.4bpp");
static const u16 gSeasonIcon_Pal[16]               = INCBIN_U16("graphics/interface/seasons/season.gbapal");

// * TASK DEFINES

EWRAM_DATA static s8 sInitShowFieldClockData[2] = {0};
EWRAM_DATA u8 gFieldClockTaskId = 0;

#define tPrintTimer    data[4]
#define FROM_MENU 2

// * PROTOTYPES

static void LoadSeasonIconSprite(void);
static void ShowSeasonIcon(void);
static void LoadFieldClockWindowBg(void);
static void ShowTimeWindow(void);
void ShowFieldClockFromMenu(void);
static void InitShowFieldClockStep(u8 taskId);
static void Task_ShowFieldClock(u8 taskId);
void ShowFieldClock(void);
void HideFieldClockWindow(void);

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
            ShowSeasonIcon();
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

#define TIME_UPDATE_INTERVAL (1 << 6)

static void UpdateMenuClock(void)
{
    //MgbaPrintf(MGBA_LOG_WARN, "variable value: %u", gMain.vblankCounter1);
   //#if OW_USE_SEASONS_AS_MONTH == FALSE 
    //MgbaPrintf(MGBA_LOG_)
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
    //u8 seasonIconWindowId;

    //UpdateMenuClock();

    // * Below is for the standard window graphics (so like msgbox and stuff)
    //LoadMessageBoxAndBorderGfx(); 
    

    fieldClockWindowId = AddFieldClockWindow();
    LoadFieldClockWindowBg();
    //seasonIconWindowId = AddSeasonIconWindow();
    //LoadSeasonIconSprite();
    
    /*
     * this was also for the std window graphics (I think?)
        PutWindowTilemap(fieldClockWindowId);
        DrawStdWindowFrame(fieldClockWindowId, FALSE);
    */

//GET CONVERTED HOURS + SUFFIX (AM/PM)
    if (GetHour() < 12) {
        if (GetHour() == 0)
            convertedHours = 12;
        else
            convertedHours = GetHour();
        suffix = gText_AM;
    }

    else if (GetHour() == 12){
        convertedHours = 12;
        if (suffix == gText_AM);
            suffix = gText_PM;
    }
    else {
        convertedHours = GetHour() - 12;
        suffix = gText_PM;
    }

    u8 gText_DebugDayOfWeek[] = _("Nun");
    //GET DAY OF WEEK (MON/TUE/WED/THU/FRI/SAT/SUN)
    if (GetDayOfWeek() <= DAYS_PER_WEEK - 1) 
    {
        StringCopy(gStringVar4, gDayNameStringsTable[GetDayOfWeek()]);
    }
    else 
    {
        StringCopy(gStringVar4, gText_DebugDayOfWeek);
        if (GetDayOfWeek() == 0) MgbaPrintf(MGBA_LOG_WARN, "monday");
    }
    

    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, 4, 5, TEXT_SKIP_DRAW, NULL);

    ConvertIntToDecimalStringN(gStringVar4, GetDay(), STR_CONV_MODE_RIGHT_ALIGN, 2);

    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, 24, 5, TEXT_SKIP_DRAW, NULL);
    

    /* 
    * iiii think this just adds month year date to stringvar4?? whichi dont want yet
    ConvertIntToDecimalStringN(gStringVar1, GetDate(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar2, GetMonth(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar3, GetYear(), STR_CONV_MODE_RIGHT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar4, gText_Date);
    */
    

    

    //AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, 0, 16, 0xFF, NULL);

    ptr = ConvertIntToDecimalStringN(gStringVar4, convertedHours, STR_CONV_MODE_LEADING_ZEROS, 2);
    *ptr = 0xF0;

    /*
    //This gets minute and reduces it to counts of 10
    s8 minutesNotNormal = gLocalTime.minutes;
    if (minutesNotNormal % 10 != 0) minutesNotNormal = minutesNotNormal - (minutesNotNormal % 10);
    ConvertIntToDecimalStringN(ptr + 1, minutesNotNormal, STR_CONV_MODE_LEADING_ZEROS, 2); */

    ConvertIntToDecimalStringN(ptr + 1, GetMinute(), STR_CONV_MODE_LEADING_ZEROS, 2);



    AddTextPrinterParameterized(fieldClockWindowId, 1, gStringVar4, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH) - (CLOCK_WINDOW_WIDTH - GetStringRightAlignXOffset(1, gStringVar4, CLOCK_WINDOW_WIDTH) + 3) + 14, 5, 0xFF, NULL);
    
     // print time

    
    
    AddTextPrinterParameterized(fieldClockWindowId, 1, suffix, GetStringRightAlignXOffset(1, suffix, CLOCK_WINDOW_WIDTH) + 13, 5, 0xFF, NULL); // print am/pm
    
    CopyWindowToVram(fieldClockWindowId, COPYWIN_FULL);
}

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
            ClearStdWindowAndFrame(GetSeasonIconWindowId(), TRUE);
            RemoveSeasonIconWindow();
        }

        //SetGpuReg_ForcedBlank(REG_OFFSET_BG0VOFS, 0);
        DestroyTask(gFieldClockTaskId);
    }
}

static void LoadFieldClockWindowBg(void)
{
    //u8 FieldCLockThemeId;
    u8 fieldClockWindowId = GetFieldClockWindowId();

    LoadPalette(sFieldClock_Pal, BG_PLTT_ID(14), sizeof(sFieldClock_Pal));
    
    CopyToWindowPixelBuffer(fieldClockWindowId, sFieldClock_Gfx, sizeof(sFieldClock_Gfx), 0);

    PutWindowTilemap(fieldClockWindowId);
}

static void ShowSeasonIcon(void)
{
    u8 seasonIconWindowId;
    seasonIconWindowId = AddSeasonIconWindow();
    LoadSeasonIconSprite();
    CopyWindowToVram(seasonIconWindowId, COPYWIN_FULL);
}

static void LoadSeasonIconSprite(void)
{
    u8 seasonIconWindowId = GetSeasonIconWindowId();

    LoadPalette(gSeasonIcon_Pal, BG_PLTT_ID(13), sizeof(gSeasonIcon_Pal));

    u8 season = GetMonth();
    MgbaPrintf(MGBA_LOG_WARN, "season: %u", season);

    switch (season)
    {
        case MONTH_SPRING:
            CopyToWindowPixelBuffer(seasonIconWindowId, gSeasonIcon_Spring_Gfx, sizeof(gSeasonIcon_Spring_Gfx), 0);
        break;
        case MONTH_SUMMER:
            CopyToWindowPixelBuffer(seasonIconWindowId, gSeasonIcon_Summer_Gfx, sizeof(gSeasonIcon_Summer_Gfx), 0);
        break;
        case MONTH_FALL:
            CopyToWindowPixelBuffer(seasonIconWindowId, gSeasonIcon_Fall_Gfx, sizeof(gSeasonIcon_Fall_Gfx), 0);
        break;
        case MONTH_WINTER:
            CopyToWindowPixelBuffer(seasonIconWindowId, gSeasonIcon_Winter_Gfx, sizeof(gSeasonIcon_Winter_Gfx), 0);
        break;
        default:
            CopyToWindowPixelBuffer(seasonIconWindowId, gSeasonIcon_Spring_Gfx, sizeof(gSeasonIcon_Spring_Gfx), 0);
    }

    PutWindowTilemap(seasonIconWindowId);
}