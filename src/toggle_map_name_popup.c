#include "global.h"
#include "map_name_popup.h"
#include "menu.h"
#include "gpu_regs.h"
#include "main.h"
#include "map_name_popup.h"
#include "config/general.h"
#include "config/overworld.h"
#include "field_weather.h"
#include "constants/weather.h"
#include "toggle_map_name_popup.h"

void ToggleMapPopup(void)
{
    if (gSaveBlock1Ptr->isPopupActive == 1)
    {
        gSaveBlock1Ptr->isPopupActive = 0;

        #ifdef UBFIX
        if (GetMapNamePopUpWindowId() != WINDOW_NONE)
    #endif // UBFIX
        {
            ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), TRUE);
            RemoveMapNamePopUpWindow();
        }

        if (OW_POPUP_GENERATION == GEN_5)
        {
            if (GetSecondaryPopUpWindowId() != WINDOW_NONE)
            {
                ClearStdWindowAndFrame(GetSecondaryPopUpWindowId(), TRUE);
                RemoveSecondaryPopUpWindow();
            }

            DisableInterrupts(INTR_FLAG_HBLANK);
            SetHBlankCallback(NULL);

            if (OW_POPUP_BW_ALPHA_BLEND && !IsWeatherAlphaBlend())
            {
                SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN1_BG_ALL | WININ_WIN1_OBJ);
                SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_EFFECT_BLEND);
                SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(8, 10));
            }
        }
    }
    else
    {
        gSaveBlock1Ptr->isPopupActive = 1;
        ShowMapNamePopUpWindow();
        if (OW_POPUP_GENERATION == GEN_5)
            {
                EnableInterrupts(INTR_FLAG_HBLANK);
                SetHBlankCallback(HBlankCB_DoublePopupWindow);
            }
    }
}

#include "global.h"
#include "map_name_popup.h"
#include "menu.h"
#include "gpu_regs.h"
#include "main.h"
#include "map_name_popup.h"
#include "config/general.h"
#include "config/overworld.h"
#include "field_weather.h"
#include "constants/weather.h"
#include "toggle_map_name_popup.h"

void ToggleMapPopup(void)
{
    ShowMapNamePopup();
}
