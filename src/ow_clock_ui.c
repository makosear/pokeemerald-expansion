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

#define MUGSHOT_TEST 0

static const u16 sFieldClock_Pal[]        = INCBIN_U16("graphics/interface/clockuitiles.gbapal");
static const u16 sFieldClock_Gfx[]        = INCBIN_U16("graphics/pokemon_storage/clockuitiles.4bpp.lz");

struct FieldClockGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct FieldClockGfx sFieldMugshots = {sFieldClock_Gfx, sFieldClock_Pal};


