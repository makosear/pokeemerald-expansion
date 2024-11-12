static const u32 sFieldMugshotGfx_SamSmile[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Smile.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamHappy[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Happy.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamSmirk[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Smirk.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamJoy[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Joy.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamNeutral[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Neutral.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamConcern[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Concern.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamSad[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Sad.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamSurprised[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Surprised.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamAngry[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Angry.4bpp.lz");,
static const u32 sFieldMugshotGfx_SamBlush[] = INCBIN_U32("graphics/field_mugshots/sam/Sam_Blush.4bpp.lz");,

extern const u16 gObjectEventPal_Sam[];

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_SAM] =
    {
        [EMOTE_SMILE] = 
        {
            .gfx = sFieldMugShotGfx_SamSmile,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_HAPPY] = 
        {
            .gfx = sFieldMugShotGfx_SamHappy,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_SMIRK] = 
        {
            .gfx = sFieldMugShotGfx_SamSmirk,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_JOY] = 
        {
            .gfx = sFieldMugShotGfx_SamJoy
            .pal = gObjectEventPal_Sam,,
        },
        [EMOTE_NEUTRAL] = 
        {
            .gfx = sFieldMugShotGfx_SamNeutral,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_CONCERN] = 
        {
            .gfx = sFieldMugShotGfx_SamConcern,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_SAD] = 
        {
            .gfx = sFieldMugShotGfx_SamSad
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_SURPRISED] = 
        {
            .gfx = sFieldMugShotGfx_SamSurprised,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_ANGRY] = 
        {
            .gfx = sFieldMugShotGfx_SamAngry,
            .pal = gObjectEventPal_Sam,
        },
        [EMOTE_BLUSH] = 
        {
            .gfx = sFieldMugShotGfx_SamBlush,
            .pal = gObjectEventPal_Sam,
        },
    },
};