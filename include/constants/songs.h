#ifndef GUARD_CONSTANTS_SONGS_H
#define GUARD_CONSTANTS_SONGS_H

// Original JP names listed on right, along with any additional notes

#define SOUND_EFFECTS_START         MUS_DUMMY
#define MUS_DUMMY                   0 // MUS_DUMMY
#define SE_USE_ITEM                 1 // SE_KAIFUKU
#define SE_PC_LOGIN                 2 // SE_PC_LOGIN
#define SE_PC_OFF                   3 // SE_PC_OFF
#define SE_PC_ON                    4 // SE_PC_ON
#define SE_SELECT                   5 // SE_SELECT
#define SE_WIN_OPEN                 6 // SE_WIN_OPEN
#define SE_WALL_HIT                 7 // SE_WALL_HIT
#define SE_DOOR                     8 // SE_DOOR
#define SE_EXIT                     9 // SE_KAIDAN
#define SE_LEDGE                    10 // SE_DANSA
#define SE_BIKE_BELL                11 // SE_JITENSYA
#define SE_NOT_EFFECTIVE            12 // SE_KOUKA_L
#define SE_EFFECTIVE                13 // SE_KOUKA_M
#define SE_SUPER_EFFECTIVE          14 // SE_KOUKA_H
#define SE_BALL_OPEN                15 // SE_BOWA2
#define SE_FAINT                    16 // SE_POKE_DEAD
#define SE_FLEE                     17 // SE_NIGERU
#define SE_SLIDING_DOOR             18 // SE_JIDO_DOA
#define SE_SHIP                     19 // SE_NAMINORI
#define SE_BANG                     20 // SE_BAN
#define SE_PIN                      21 // SE_PIN (General "good", commonly for "!")
#define SE_BOO                      22 // SE_BOO (General "bad")
#define SE_BALL                     23 // SE_BOWA (Giving Poké Ball to nurse, Poké Ball shake, etc)
#define SE_CONTEST_PLACE            24 // SE_JYUNI
#define SE_A                        25 // SE_A (Bard sounds)
#define SE_I                        26 // SE_I
#define SE_U                        27 // SE_U
#define SE_E                        28 // SE_E
#define SE_O                        29 // SE_O
#define SE_N                        30 // SE_N
#define SE_SUCCESS                  31 // SE_SEIKAI
#define SE_FAILURE                  32 // SE_HAZURE
#define SE_EXP                      33 // SE_EXP
#define SE_BIKE_HOP                 34 // SE_JITE_PYOKO
#define SE_SWITCH                   35 // SE_MU_PACHI
#define SE_CLICK                    36 // SE_TK_KASYA
#define SE_FU_ZAKU                  37 // SE_FU_ZAKU (Unknown purpose, unused)
#define SE_CONTEST_CONDITION_LOSE   38 // SE_FU_ZAKU2
#define SE_LAVARIDGE_FALL_WARP      39 // SE_FU_ZUZUZU
#define SE_ICE_STAIRS               40 // SE_RU_GASHIN
#define SE_ICE_BREAK                41 // SE_RU_GASYAN
#define SE_ICE_CRACK                42 // SE_RU_BARI
#define SE_FALL                     43 // SE_RU_HYUU
#define SE_UNLOCK                   44 // SE_KI_GASYAN
#define SE_WARP_IN                  45 // SE_TK_WARPIN
#define SE_WARP_OUT                 46 // SE_TK_WARPOUT
#define SE_REPEL                    47 // SE_TU_SAA
#define SE_ROTATING_GATE            48 // SE_HI_TURUN
#define SE_TRUCK_MOVE               49 // SE_TRACK_MOVE
#define SE_TRUCK_STOP               50 // SE_TRACK_STOP
#define SE_TRUCK_UNLOAD             51 // SE_TRACK_HAIKI
#define SE_TRUCK_DOOR               52 // SE_TRACK_DOOR
#define SE_BERRY_BLENDER            53 // SE_MOTER
#define SE_CARD                     54 // SE_CARD (Unused, different from the RS card SE)
#define SE_SAVE                     55 // SE_SAVE
#define SE_BALL_BOUNCE_1            56 // SE_KON
#define SE_BALL_BOUNCE_2            57 // SE_KON2
#define SE_BALL_BOUNCE_3            58 // SE_KON3
#define SE_BALL_BOUNCE_4            59 // SE_KON4
#define SE_BALL_TRADE               60 // SE_SUIKOMU
#define SE_BALL_THROW               61 // SE_NAGERU
#define SE_NOTE_C                   62 // SE_TOY_C
#define SE_NOTE_D                   63 // SE_TOY_D
#define SE_NOTE_E                   64 // SE_TOY_E
#define SE_NOTE_F                   65 // SE_TOY_F
#define SE_NOTE_G                   66 // SE_TOY_G
#define SE_NOTE_A                   67 // SE_TOY_A
#define SE_NOTE_B                   68 // SE_TOY_B
#define SE_NOTE_C_HIGH              69 // SE_TOY_C1
#define SE_PUDDLE                   70 // SE_MIZU
#define SE_BRIDGE_WALK              71 // SE_HASHI
#define SE_ITEMFINDER               72 // SE_DAUGI
#define SE_DING_DONG                73 // SE_PINPON
#define SE_BALLOON_RED              74 // SE_FUUSEN1
#define SE_BALLOON_BLUE             75 // SE_FUUSEN2
#define SE_BALLOON_YELLOW           76 // SE_FUUSEN3
#define SE_BREAKABLE_DOOR           77 // SE_TOY_KABE
#define SE_MUD_BALL                 78 // SE_TOY_DANGO
#define SE_FIELD_POISON             79 // SE_DOKU
#define SE_ESCALATOR                80 // SE_ESUKA
#define SE_THUNDERSTORM             81 // SE_T_AME
#define SE_THUNDERSTORM_STOP        82 // SE_T_AME_E
#define SE_DOWNPOUR                 83 // SE_T_OOAME
#define SE_DOWNPOUR_STOP            84 // SE_T_OOAME_E
#define SE_RAIN                     85 // SE_T_KOAME
#define SE_RAIN_STOP                86 // SE_T_KOAME_E
#define SE_THUNDER                  87 // SE_T_KAMI
#define SE_THUNDER2                 88 // SE_T_KAMI2
#define SE_ELEVATOR                 89 // SE_ELEBETA
#define SE_LOW_HEALTH               90 // SE_HINSI
#define SE_EXP_MAX                  91 // SE_EXPMAX
#define SE_ROULETTE_BALL            92 // SE_TAMAKORO
#define SE_ROULETTE_BALL2           93 // SE_TAMAKORO_E
#define SE_TAILLOW_WING_FLAP        94 // SE_BASABASA
#define SE_SHOP                     95 // SE_REGI
#define SE_CONTEST_HEART            96 // SE_C_GAJI
#define SE_CONTEST_CURTAIN_RISE     97 // SE_C_MAKU_U
#define SE_CONTEST_CURTAIN_FALL     98 // SE_C_MAKU_D
#define SE_CONTEST_ICON_CHANGE      99 // SE_C_PASI
#define SE_CONTEST_ICON_CLEAR       100 // SE_C_SYU
#define SE_CONTEST_MONS_TURN        101 // SE_C_PIKON
#define SE_SHINY                    102 // SE_REAPOKE
#define SE_INTRO_BLAST              103 // SE_OP_BASYU
#define SE_MUGSHOT                  104 // SE_BT_START
#define SE_APPLAUSE                 105 // SE_DENDOU
#define SE_VEND                     106 // SE_JIHANKI
#define SE_ORB                      107 // SE_TAMA
#define SE_DEX_SCROLL               108 // SE_Z_SCROLL
#define SE_DEX_PAGE                 109 // SE_Z_PAGE
#define SE_POKENAV_ON               110 // SE_PN_ON
#define SE_POKENAV_OFF              111 // SE_PN_OFF
#define SE_DEX_SEARCH               112 // SE_Z_SEARCH
#define SE_EGG_HATCH                113 // SE_TAMAGO
#define SE_BALL_TRAY_ENTER          114 // SE_TB_START
#define SE_BALL_TRAY_BALL           115 // SE_TB_KON
#define SE_BALL_TRAY_EXIT           116 // SE_TB_KARA
#define SE_GLASS_FLUTE              117 // SE_BIDORO
// Move SFX
#define SE_M_THUNDERBOLT            118 // SE_W085
#define SE_M_THUNDERBOLT2           119 // SE_W085B
#define SE_M_HARDEN                 120 // SE_W231
#define SE_M_NIGHTMARE              121 // SE_W171
#define SE_M_VITAL_THROW            122 // SE_W233
#define SE_M_VITAL_THROW2           123 // SE_W233B
#define SE_M_BUBBLE                 124 // SE_W145
#define SE_M_BUBBLE2                125 // SE_W145B
#define SE_M_BUBBLE3                126 // SE_W145C
#define SE_M_RAIN_DANCE             127 // SE_W240
#define SE_M_CUT                    128 // SE_W015
#define SE_M_STRING_SHOT            129 // SE_W081
#define SE_M_STRING_SHOT2           130 // SE_W081B
#define SE_M_ROCK_THROW             131 // SE_W088
#define SE_M_GUST                   132 // SE_W016
#define SE_M_GUST2                  133 // SE_W016B
#define SE_M_DOUBLE_SLAP            134 // SE_W003
#define SE_M_DOUBLE_TEAM            135 // SE_W104
#define SE_M_RAZOR_WIND             136 // SE_W013
#define SE_M_ICY_WIND               137 // SE_W196
#define SE_M_THUNDER_WAVE           138 // SE_W086
#define SE_M_COMET_PUNCH            139 // SE_W004
#define SE_M_MEGA_KICK              140 // SE_W025
#define SE_M_MEGA_KICK2             141 // SE_W025B
#define SE_M_CRABHAMMER             142 // SE_W152
#define SE_M_JUMP_KICK              143 // SE_W026
#define SE_M_FLAME_WHEEL            144 // SE_W172
#define SE_M_FLAME_WHEEL2           145 // SE_W172B
#define SE_M_FLAMETHROWER           146 // SE_W053
#define SE_M_FIRE_PUNCH             147 // SE_W007
#define SE_M_TOXIC                  148 // SE_W092
#define SE_M_SACRED_FIRE            149 // SE_W221
#define SE_M_SACRED_FIRE2           150 // SE_W221B
#define SE_M_EMBER                  151 // SE_W052
#define SE_M_TAKE_DOWN              152 // SE_W036
#define SE_M_BLIZZARD               153 // SE_W059
#define SE_M_BLIZZARD2              154 // SE_W059B
#define SE_M_SCRATCH                155 // SE_W010
#define SE_M_VICEGRIP               156 // SE_W011
#define SE_M_WING_ATTACK            157 // SE_W017
#define SE_M_FLY                    158 // SE_W019
#define SE_M_SAND_ATTACK            159 // SE_W028
#define SE_M_RAZOR_WIND2            160 // SE_W013B
#define SE_M_BITE                   161 // SE_W044
#define SE_M_HEADBUTT               162 // SE_W029
#define SE_M_SURF                   163 // SE_W057
#define SE_M_HYDRO_PUMP             164 // SE_W056
#define SE_M_WHIRLPOOL              165 // SE_W250
#define SE_M_HORN_ATTACK            166 // SE_W030
#define SE_M_TAIL_WHIP              167 // SE_W039
#define SE_M_MIST                   168 // SE_W054
#define SE_M_POISON_POWDER          169 // SE_W077
#define SE_M_BIND                   170 // SE_W020
#define SE_M_DRAGON_RAGE            171 // SE_W082
#define SE_M_SING                   172 // SE_W047
#define SE_M_PERISH_SONG            173 // SE_W195
#define SE_M_PAY_DAY                174 // SE_W006
#define SE_M_DIG                    175 // SE_W091
#define SE_M_DIZZY_PUNCH            176 // SE_W146
#define SE_M_SELF_DESTRUCT          177 // SE_W120
#define SE_M_EXPLOSION              178 // SE_W153
#define SE_M_ABSORB_2               179 // SE_W071B
#define SE_M_ABSORB                 180 // SE_W071
#define SE_M_SCREECH                181 // SE_W103
#define SE_M_BUBBLE_BEAM            182 // SE_W062
#define SE_M_BUBBLE_BEAM2           183 // SE_W062B
#define SE_M_SUPERSONIC             184 // SE_W048
#define SE_M_BELLY_DRUM             185 // SE_W187
#define SE_M_METRONOME              186 // SE_W118
#define SE_M_BONEMERANG             187 // SE_W155
#define SE_M_LICK                   188 // SE_W122
#define SE_M_PSYBEAM                189 // SE_W060
#define SE_M_FAINT_ATTACK           190 // SE_W185
#define SE_M_SWORDS_DANCE           191 // SE_W014
#define SE_M_LEER                   192 // SE_W043
#define SE_M_SWAGGER                193 // SE_W207
#define SE_M_SWAGGER2               194 // SE_W207B
#define SE_M_HEAL_BELL              195 // SE_W215
#define SE_M_CONFUSE_RAY            196 // SE_W109
#define SE_M_SNORE                  197 // SE_W173
#define SE_M_BRICK_BREAK            198 // SE_W280
#define SE_M_GIGA_DRAIN             199 // SE_W202
#define SE_M_PSYBEAM2               200 // SE_W060B
#define SE_M_SOLAR_BEAM             201 // SE_W076
#define SE_M_PETAL_DANCE            202 // SE_W080
#define SE_M_TELEPORT               203 // SE_W100
#define SE_M_MINIMIZE               204 // SE_W107
#define SE_M_SKETCH                 205 // SE_W166
#define SE_M_SWIFT                  206 // SE_W129
#define SE_M_REFLECT                207 // SE_W115
#define SE_M_BARRIER                208 // SE_W112
#define SE_M_DETECT                 209 // SE_W197
#define SE_M_LOCK_ON                210 // SE_W199
#define SE_M_MOONLIGHT              211 // SE_W236
#define SE_M_CHARM                  212 // SE_W204
#define SE_M_CHARGE                 213 // SE_W268
#define SE_M_STRENGTH               214 // SE_W070
#define SE_M_HYPER_BEAM             215 // SE_W063
#define SE_M_WATERFALL              216 // SE_W127
#define SE_M_REVERSAL               217 // SE_W179
#define SE_M_ACID_ARMOR             218 // SE_W151
#define SE_M_SANDSTORM              219 // SE_W201
#define SE_M_TRI_ATTACK             220 // SE_W161
#define SE_M_TRI_ATTACK2            221 // SE_W161B
#define SE_M_ENCORE                 222 // SE_W227
#define SE_M_ENCORE2                223 // SE_W227B
#define SE_M_BATON_PASS             224 // SE_W226
#define SE_M_MILK_DRINK             225 // SE_W208
#define SE_M_ATTRACT                226 // SE_W213
#define SE_M_ATTRACT2               227 // SE_W213B
#define SE_M_MORNING_SUN            228 // SE_W234
#define SE_M_FLATTER                229 // SE_W260
#define SE_M_SAND_TOMB              230 // SE_W328
#define SE_M_GRASSWHISTLE           231 // SE_W320
#define SE_M_SPIT_UP                232 // SE_W255
#define SE_M_DIVE                   233 // SE_W291
#define SE_M_EARTHQUAKE             234 // SE_W089
#define SE_M_TWISTER                235 // SE_W239
#define SE_M_SWEET_SCENT            236 // SE_W230
#define SE_M_YAWN                   237 // SE_W281
#define SE_M_SKY_UPPERCUT           238 // SE_W327
#define SE_M_STAT_INCREASE          239 // SE_W287
#define SE_M_HEAT_WAVE              240 // SE_W257
#define SE_M_UPROAR                 241 // SE_W253
#define SE_M_HAIL                   242 // SE_W258
#define SE_M_COSMIC_POWER           243 // SE_W322
#define SE_M_TEETER_DANCE           244 // SE_W298
#define SE_M_STAT_DECREASE          245 // SE_W287B
#define SE_M_HAZE                   246 // SE_W114
#define SE_M_HYPER_BEAM2            247 // SE_W063B
// FRLG SFX
#define SE_RG_DOOR                  248 // SE_RG_W_DOOR
#define SE_RG_CARD_FLIP             249 // SE_RG_CARD1
#define SE_RG_CARD_FLIPPING         250 // SE_RG_CARD2
#define SE_RG_CARD_OPEN             251 // SE_RG_CARD3
#define SE_RG_BAG_CURSOR            252 // SE_RG_BAG1
#define SE_RG_BAG_POCKET            253 // SE_RG_BAG2
#define SE_RG_BALL_CLICK            254 // SE_RG_GETTING
#define SE_RG_SHOP                  255 // SE_RG_SHOP
#define SE_RG_SS_ANNE_HORN          256 // SE_RG_KITEKI
#define SE_RG_HELP_OPEN             257 // SE_RG_HELP_OP
#define SE_RG_HELP_CLOSE            258 // SE_RG_HELP_CL
#define SE_RG_HELP_ERROR            259 // SE_RG_HELP_NG
#define SE_RG_DEOXYS_MOVE           260 // SE_RG_DEOMOV
#define SE_RG_POKE_JUMP_SUCCESS     261 // SE_RG_EXCELLENT
#define SE_RG_POKE_JUMP_FAILURE     262 // SE_RG_NAWAMISS
// New Emerald SFX
#define SE_POKENAV_CALL             263 // SE_TOREEYE
#define SE_POKENAV_HANG_UP          264 // SE_TOREOFF
#define SE_ARENA_TIMEUP1            265 // SE_HANTEI1
#define SE_ARENA_TIMEUP2            266 // SE_HANTEI2
#define SE_PIKE_CURTAIN_CLOSE       267 // SE_CURTAIN
#define SE_PIKE_CURTAIN_OPEN        268 // SE_CURTAIN1
#define SE_SUDOWOODO_SHAKE          269 // SE_USSOKI
#define END_SE                      SE_SUDOWOODO_SHAKE

#define SOUND_EFFECTS_END           END_SE

// Music
#define START_MUS                   MUS_LITTLEROOT_TEST
#define SONGS_START                 START_MUS
#define MUS_LITTLEROOT_TEST         350 // MUS_TETSUJI          // Unused, likely a test track.
#define MUS_GSC_ROUTE38             351 // MUS_FIELD13          // Unused, likely a test track.
#define MUS_CAUGHT                  352 // MUS_KACHI22
#define MUS_VICTORY_WILD            353 // MUS_KACHI2
#define MUS_VICTORY_GYM_LEADER      354 // MUS_KACHI3           // Also used in Frontier Brain victories.
#define MUS_VICTORY_LEAGUE          355 // MUS_KACHI5
#define MUS_C_COMM_CENTER           356 // MUS_PCC              // Unused, likely a test track.
#define MUS_GSC_PEWTER              357 // MUS_NIBI             // Used in unused Contest Halls.
#define MUS_C_VS_LEGEND_BEAST       358 // MUS_SUIKUN           // Unused, likely a test track.
#define MUS_ROUTE101                359 // MUS_DOORO1           // Also used in Routes 102 and 103.
#define MUS_ROUTE110                360 // MUS_DOORO_X1         // Also used in Routes 112, 114, 117, 111's non-desert section and 118's west half.
#define MUS_ROUTE120                361 // MUS_DOORO_X3         // Also used in Routes 121, 124, 125, 126, 127 and 128.
#define MUS_PETALBURG               362 // MUS_MACHI_S2         // Also used in Mr. Briney's House and Pretty Petal Flower Shop.
#define MUS_OLDALE                  363 // MUS_MACHI_S4         // Also used in Lavaridge Town.
#define MUS_GYM                     364 // MUS_GIM
#define MUS_SURF                    365 // MUS_NAMINORI
#define MUS_PETALBURG_WOODS         366 // MUS_DAN01            // Also used in Artisan Cave, Fiery Path, Granite Cave, Jagged Pass, Marine Cave, Rusturf Tunnel, Scorched Slab and Terra Cave.
#define MUS_LEVEL_UP                367 // MUS_FANFA1
#define MUS_HEAL                    368 // MUS_ME_ASA
#define MUS_OBTAIN_BADGE            369 // MUS_ME_BACHI
#define MUS_OBTAIN_ITEM             370 // MUS_FANFA4
#define MUS_EVOLVED                 371 // MUS_FANFA5           // Also used in egg hatching, trades and upon catching.
#define MUS_OBTAIN_TMHM             372 // MUS_ME_WAZA
#define MUS_LILYCOVE_MUSEUM         373 // MUS_BIJYUTU          // Also used in the Battle Frontier's Ranking Hall.
#define MUS_ROUTE122                374 // MUS_DOORO_X4         // Also used in Route 123 and Birch's intro speech.
#define MUS_OCEANIC_MUSEUM          375 // MUS_FUNE_KAN
#define MUS_EVOLUTION_INTRO         376 // MUS_ME_SHINKA        // Also used in egg hatching.
#define MUS_EVOLUTION               377 // MUS_SHINKA           // Also used in egg hatching and trades.
#define MUS_MOVE_DELETED            378 // MUS_ME_WASURE
#define MUS_ENCOUNTER_GIRL          379 // MUS_SYOUJOEYE
#define MUS_ENCOUNTER_MALE          380 // MUS_BOYEYE
#define MUS_ABANDONED_SHIP          381 // MUS_DAN02            // Also used in Faraway and Southern Islands.
#define MUS_FORTREE                 382 // MUS_MACHI_S3         // Also used in Secret Bases and the Safari Zone's entrance.
#define MUS_BIRCH_LAB               383 // MUS_ODAMAKI
#define MUS_B_TOWER_RS              384 // MUS_B_TOWER          // Used in Battle Tents, Trainer Hill and Battle Frontier's lounges and Exchange Service Corner.
#define MUS_ENCOUNTER_SWIMMER       385 // MUS_SWIMEYE
#define MUS_CAVE_OF_ORIGIN          386 // MUS_DAN03            // Also used in Meteor Falls.
#define MUS_OBTAIN_BERRY            387 // MUS_ME_KINOMI
#define MUS_AWAKEN_LEGEND           388 // MUS_ME_TAMA
#define MUS_SLOTS_JACKPOT           389 // MUS_ME_B_BIG         // Also used in the Roulette.
#define MUS_SLOTS_WIN               390 // MUS_ME_B_SMALL       // Also used in the Roulette.
#define MUS_TOO_BAD                 391 // MUS_ME_ZANNEN
#define MUS_ROULETTE                392 // MUS_BD_TIME
#define MUS_LINK_CONTEST_P1         393 // MUS_TEST1
#define MUS_LINK_CONTEST_P2         394 // MUS_TEST2
#define MUS_LINK_CONTEST_P3         395 // MUS_TEST3
#define MUS_LINK_CONTEST_P4         396 // MUS_TEST4
#define MUS_ENCOUNTER_RICH          397 // MUS_TEST
#define MUS_VERDANTURF              398 // MUS_GOMACHI0
#define MUS_RUSTBORO                399 // MUS_GOTOWN           // Also used in Mauville City, Mossdeep City, Daycare, Weather Institute and several Route houses.
#define MUS_POKE_CENTER             400 // MUS_POKECEN          // Also used in the Pokémon League's lobby.
#define MUS_ROUTE104                401 // MUS_NEXTROAD         // Also used in Routes 105, 106, 107, 108, 109, 115 and 116.
#define MUS_ROUTE119                402 // MUS_GRANROAD         // Also used in Routes 129, 130, 131, 132, 133, 134 and 118's east half.
#define MUS_CYCLING                 403 // MUS_CYCLING
#define MUS_POKE_MART               404 // MUS_FRIENDLY         // Also used in Lilycove's Department Store.
#define MUS_LITTLEROOT              405 // MUS_MISHIRO
#define MUS_MT_CHIMNEY              406 // MUS_TOZAN            // Also used in Desert Underpass, Mirage Tower, Seafloor Cavern and Sky Pillar.
#define MUS_ENCOUNTER_FEMALE        407 // MUS_GIRLEYE
#define MUS_LILYCOVE                408 // MUS_MINAMO           // Also used in Pacifidlog Town and the Diving Treasure Hunter's house.
#define MUS_DESERT                  409 // MUS_ASHROAD
#define MUS_HELP                    410 // MUS_EVENT0
#define MUS_UNDERWATER              411 // MUS_DEEPDEEP
#define MUS_VICTORY_TRAINER         412 // MUS_KACHI1
#define MUS_TITLE                   413 // MUS_TITLE3
#define MUS_INTRO                   414 // MUS_DEMO1
#define MUS_ENCOUNTER_MAY           415 // MUS_GIRL_SUP
#define MUS_ENCOUNTER_INTENSE       416 // MUS_HAGESHII
#define MUS_ENCOUNTER_COOL          417 // MUS_KAKKOII
#define MUS_ROUTE113                418 // MUS_KAZANBAI
#define MUS_ENCOUNTER_AQUA          419 // MUS_AQA_0
#define MUS_FOLLOW_ME               420 // MUS_TSURETEK
#define MUS_ENCOUNTER_BRENDAN       421 // MUS_BOY_SUP
#define MUS_EVER_GRANDE             422 // MUS_RAINBOW          // Also used in link rooms.
#define MUS_ENCOUNTER_SUSPICIOUS    423 // MUS_AYASII
#define MUS_VICTORY_AQUA_MAGMA      424 // MUS_KACHI4
#define MUS_CABLE_CAR               425 // MUS_ROPEWAY
#define MUS_GAME_CORNER             426 // MUS_CASINO
#define MUS_DEWFORD                 427 // MUS_HIGHTOWN         // Also used in Route 109's Seashore house.
#define MUS_SAFARI_ZONE             428 // MUS_SAFARI
#define MUS_VICTORY_ROAD            429 // MUS_C_ROAD           // Also used in Pokémon League's E4/Champion rooms and halls.
#define MUS_AQUA_MAGMA_HIDEOUT      430 // MUS_AJITO
#define MUS_SAILING                 431 // MUS_M_BOAT
#define MUS_MT_PYRE                 432 // MUS_M_DUNGON         // Also used in New Mauville and Shoal Cave.
#define MUS_SLATEPORT               433 // MUS_FINECITY         // Also used in Cycling Road's entrances.
#define MUS_MT_PYRE_EXTERIOR        434 // MUS_MACHUPI
#define MUS_SCHOOL                  435 // MUS_P_SCHOOL
#define MUS_HALL_OF_FAME            436 // MUS_DENDOU
#define MUS_FALLARBOR               437 // MUS_TONEKUSA         // Also used in Route 114's houses.
#define MUS_SEALED_CHAMBER          438 // MUS_MABOROSI         // Also used in Ancient Tomb, Desert Ruins and Island Cave.
#define MUS_CONTEST_WINNER          439 // MUS_CON_FAN
#define MUS_CONTEST                 440 // MUS_CONTEST0
#define MUS_ENCOUNTER_MAGMA         441 // MUS_MGM0
#define MUS_INTRO_BATTLE            442 // MUS_T_BATTLE
#define MUS_ABNORMAL_WEATHER        443 // MUS_OOAME            // Replaces MUS_WEATHER_KYOGRE from R/S.
#define MUS_WEATHER_GROUDON         444 // MUS_HIDERI           // Unused, from R/S.
#define MUS_SOOTOPOLIS              445 // MUS_RUNECITY
#define MUS_CONTEST_RESULTS         446 // MUS_CON_K
#define MUS_HALL_OF_FAME_ROOM       447 // MUS_EIKOU_R
#define MUS_TRICK_HOUSE             448 // MUS_KARAKURI
#define MUS_ENCOUNTER_TWINS         449 // MUS_HUTAGO
#define MUS_ENCOUNTER_ELITE_FOUR    450 // MUS_SITENNOU
#define MUS_ENCOUNTER_HIKER         451 // MUS_YAMA_EYE
#define MUS_CONTEST_LOBBY           452 // MUS_CONLOBBY
#define MUS_ENCOUNTER_INTERVIEWER   453 // MUS_INTER_V          // Also used during Petalburg City report at the beginning of the game.
#define MUS_ENCOUNTER_CHAMPION      454 // MUS_DAIGO
#define MUS_CREDITS                 455 // MUS_THANKFOR
#define MUS_END                     456 // MUS_END
#define MUS_B_FRONTIER              457 // MUS_B_FRONTIER
#define MUS_B_ARENA                 458 // MUS_B_ARENA
#define MUS_OBTAIN_B_POINTS         459 // MUS_ME_POINTGET
#define MUS_REGISTER_MATCH_CALL     460 // MUS_ME_TORE_EYE
#define MUS_B_PYRAMID               461 // MUS_PYRAMID
#define MUS_B_PYRAMID_TOP           462 // MUS_PYRAMID_TOP
#define MUS_B_PALACE                463 // MUS_B_PALACE
#define MUS_RAYQUAZA_APPEARS        464 // MUS_REKKUU_KOURIN
#define MUS_B_TOWER                 465 // MUS_SATTOWER
#define MUS_OBTAIN_SYMBOL           466 // MUS_ME_SYMBOLGET
#define MUS_B_DOME                  467 // MUS_B_DOME
#define MUS_B_PIKE                  468 // MUS_B_TUBE
#define MUS_B_FACTORY               469 // MUS_B_FACTORY
#define MUS_VS_RAYQUAZA             470 // MUS_VS_REKKU         // Identical to MUS_VS_KYOGRE_GROUDON.
#define MUS_VS_FRONTIER_BRAIN       471 // MUS_VS_FRONT
#define MUS_VS_MEW                  472 // MUS_VS_MEW
#define MUS_B_DOME_LOBBY            473 // MUS_B_DOME1
#define MUS_VS_WILD                 474 // MUS_BATTLE27
#define MUS_VS_AQUA_MAGMA           475 // MUS_BATTLE31
#define MUS_VS_TRAINER              476 // MUS_BATTLE20
#define MUS_VS_GYM_LEADER           477 // MUS_BATTLE32
#define MUS_VS_CHAMPION             478 // MUS_BATTLE33
#define MUS_VS_REGI                 479 // MUS_BATTLE36
#define MUS_VS_KYOGRE_GROUDON       480 // MUS_BATTLE34
#define MUS_VS_RIVAL                481 // MUS_BATTLE35
#define MUS_VS_ELITE_FOUR           482 // MUS_BATTLE38
#define MUS_VS_AQUA_MAGMA_LEADER    483 // MUS_BATTLE30
// FRLG Music
#define MUS_RG_FOLLOW_ME            484 // MUS_RG_ANNAI
#define MUS_RG_GAME_CORNER          485 // MUS_RG_SLOT
#define MUS_RG_ROCKET_HIDEOUT       486 // MUS_RG_AJITO
#define MUS_RG_GYM                  487 // MUS_RG_GYM
#define MUS_RG_JIGGLYPUFF           488 // MUS_RG_PURIN
#define MUS_RG_INTRO_FIGHT          489 // MUS_RG_DEMO
#define MUS_RG_TITLE                490 // MUS_RG_TITLE
#define MUS_RG_CINNABAR             491 // MUS_RG_GUREN
#define MUS_RG_LAVENDER             492 // MUS_RG_SHION
#define MUS_RG_HEAL                 493 // MUS_RG_KAIHUKU
#define MUS_RG_CYCLING              494 // MUS_RG_CYCLING
#define MUS_RG_ENCOUNTER_ROCKET     495 // MUS_RG_ROCKET
#define MUS_RG_ENCOUNTER_GIRL       496 // MUS_RG_SHOUJO
#define MUS_RG_ENCOUNTER_BOY        497 // MUS_RG_SHOUNEN
#define MUS_RG_HALL_OF_FAME         498 // MUS_RG_DENDOU
#define MUS_RG_VIRIDIAN_FOREST      499 // MUS_RG_T_MORI
#define MUS_RG_MT_MOON              500 // MUS_RG_OTSUKIMI
#define MUS_RG_POKE_MANSION         501 // MUS_RG_POKEYASHI
#define MUS_RG_CREDITS              502 // MUS_RG_ENDING
#define MUS_RG_ROUTE1               503 // MUS_RG_LOAD01
#define MUS_RG_ROUTE24              504 // MUS_RG_OPENING
#define MUS_RG_ROUTE3               505 // MUS_RG_LOAD02
#define MUS_RG_ROUTE11              506 // MUS_RG_LOAD03
#define MUS_RG_VICTORY_ROAD         507 // MUS_RG_CHAMP_R
#define MUS_RG_VS_GYM_LEADER        508 // MUS_RG_VS_GYM
#define MUS_RG_VS_TRAINER           509 // MUS_RG_VS_TORE
#define MUS_RG_VS_WILD              510 // MUS_RG_VS_YASEI
#define MUS_RG_VS_CHAMPION          511 // MUS_RG_VS_LAST
#define MUS_RG_PALLET               512 // MUS_RG_MASARA
#define MUS_RG_OAK_LAB              513 // MUS_RG_KENKYU
#define MUS_RG_OAK                  514 // MUS_RG_OHKIDO
#define MUS_RG_POKE_CENTER          515 // MUS_RG_POKECEN
#define MUS_RG_SS_ANNE              516 // MUS_RG_SANTOAN
#define MUS_RG_SURF                 517 // MUS_RG_NAMINORI
#define MUS_RG_POKE_TOWER           518 // MUS_RG_P_TOWER
#define MUS_RG_SILPH                519 // MUS_RG_SHIRUHU
#define MUS_RG_FUCHSIA              520 // MUS_RG_HANADA
#define MUS_RG_CELADON              521 // MUS_RG_TAMAMUSI
#define MUS_RG_VICTORY_TRAINER      522 // MUS_RG_WIN_TRE       // Identical to MUS_VICTORY_TRAINER.
#define MUS_RG_VICTORY_WILD         523 // MUS_RG_WIN_YASEI     // Identical to MUS_VICTORY_WILD.
#define MUS_RG_VICTORY_GYM_LEADER   524 // MUS_RG_WIN_GYM       // Identical to MUS_VICTORY_GYM_LEADER.
#define MUS_RG_VERMILLION           525 // MUS_RG_KUCHIBA
#define MUS_RG_PEWTER               526 // MUS_RG_NIBI
#define MUS_RG_ENCOUNTER_RIVAL      527 // MUS_RG_RIVAL1
#define MUS_RG_RIVAL_EXIT           528 // MUS_RG_RIVAL2
#define MUS_RG_DEX_RATING           529 // MUS_RG_FAN2
#define MUS_RG_OBTAIN_KEY_ITEM      530 // MUS_RG_FAN5
#define MUS_RG_CAUGHT_INTRO         531 // MUS_RG_FAN6
#define MUS_RG_PHOTO                532 // MUS_ME_RG_PHOTO
#define MUS_RG_GAME_FREAK           533 // MUS_RG_TITLEROG
#define MUS_RG_CAUGHT               534 // MUS_RG_GET_YASEI
#define MUS_RG_NEW_GAME_INSTRUCT    535 // MUS_RG_SOUSA
#define MUS_RG_NEW_GAME_INTRO       536 // MUS_RG_SEKAIKAN
#define MUS_RG_NEW_GAME_EXIT        537 // MUS_RG_SEIBETU
#define MUS_RG_POKE_JUMP            538 // MUS_RG_JUMP
#define MUS_RG_UNION_ROOM           539 // MUS_RG_UNION
#define MUS_RG_NET_CENTER           540 // MUS_RG_NETWORK
#define MUS_RG_MYSTERY_GIFT         541 // MUS_RG_OKURIMONO
#define MUS_RG_BERRY_PICK           542 // MUS_RG_KINOMIKUI
#define MUS_RG_SEVII_CAVE           543 // MUS_RG_NANADUNGEON   // Identical to MUS_RG_MT_MOON.
#define MUS_RG_TEACHY_TV_SHOW       544 // MUS_RG_OSHIE_TV      // Identical to MUS_RG_FOLLOW_ME.
#define MUS_RG_SEVII_ROUTE          545 // MUS_RG_NANASHIMA
#define MUS_RG_SEVII_DUNGEON        546 // MUS_RG_NANAISEKI     // Identical to MUS_RG_VIRIDIAN_FOREST.
#define MUS_RG_SEVII_123            547 // MUS_RG_NANA123       // Identical to MUS_RG_PEWTER
#define MUS_RG_SEVII_45             548 // MUS_RG_NANA45
#define MUS_RG_SEVII_67             549 // MUS_RG_NANA67
#define MUS_RG_POKE_FLUTE           550 // MUS_RG_POKEFUE
#define MUS_RG_VS_DEOXYS            551 // MUS_RG_VS_DEO
#define MUS_RG_VS_MEWTWO            552 // MUS_RG_VS_MYU2
#define MUS_RG_VS_LEGEND            553 // MUS_RG_VS_DEN
#define MUS_RG_ENCOUNTER_GYM_LEADER 554 // MUS_RG_EXEYE
#define MUS_RG_ENCOUNTER_DEOXYS     555 // MUS_RG_DEOEYE
#define MUS_RG_TRAINER_TOWER        556 // MUS_RG_T_TOWER
#define MUS_RG_SLOW_PALLET          557 // MUS_RG_SLOWMASARA
#define MUS_RG_TEACHY_TV_MENU       558 // MUS_RG_TVNOIZE 

#define PH_TRAP_BLEND               559
#define PH_TRAP_HELD                560
#define PH_TRAP_SOLO                561
#define PH_FACE_BLEND               562
#define PH_FACE_HELD                563
#define PH_FACE_SOLO                564
#define PH_CLOTH_BLEND              565
#define PH_CLOTH_HELD               566
#define PH_CLOTH_SOLO               567
#define PH_DRESS_BLEND              568
#define PH_DRESS_HELD               569
#define PH_DRESS_SOLO               570
#define PH_FLEECE_BLEND             571
#define PH_FLEECE_HELD              572
#define PH_FLEECE_SOLO              573
#define PH_KIT_BLEND                574
#define PH_KIT_HELD                 575
#define PH_KIT_SOLO                 576
#define PH_PRICE_BLEND              577
#define PH_PRICE_HELD               578
#define PH_PRICE_SOLO               579
#define PH_LOT_BLEND                580
#define PH_LOT_HELD                 581
#define PH_LOT_SOLO                 582
#define PH_GOAT_BLEND               583
#define PH_GOAT_HELD                584
#define PH_GOAT_SOLO                585
#define PH_THOUGHT_BLEND            586
#define PH_THOUGHT_HELD             587
#define PH_THOUGHT_SOLO             588
#define PH_CHOICE_BLEND             589
#define PH_CHOICE_HELD              590
#define PH_CHOICE_SOLO              591
#define PH_MOUTH_BLEND              592
#define PH_MOUTH_HELD               593
#define PH_MOUTH_SOLO               594
#define PH_FOOT_BLEND               595
#define PH_FOOT_HELD                596
#define PH_FOOT_SOLO                597
#define PH_GOOSE_BLEND              598
#define PH_GOOSE_HELD               599
#define PH_GOOSE_SOLO               600
#define PH_STRUT_BLEND              601
#define PH_STRUT_HELD               602
#define PH_STRUT_SOLO               603
#define PH_CURE_BLEND               604
#define PH_CURE_HELD                605
#define PH_CURE_SOLO                606
#define PH_NURSE_BLEND              607
#define PH_NURSE_HELD               608
#define PH_NURSE_SOLO               609

#define MUS_CRITICAL_HEALTH         610
#define MUS_LAST_POKEMON            611
#define MUS_PELIPPERTOWN_SPRING     612
#define MUS_PELIPPERTOWN_SUMMER     613
#define MUS_PELIPPERTOWN_FALL       614
#define MUS_PELIPPERTOWN_WINTER     615
// Diamond & Pearl Music
#define DP_MUSIC_START                    (EM_MUSIC_END + 1)

#define MUS_DP_TWINLEAF_DAY             616 // Twinleaf Town (Day)
#define MUS_DP_SANDGEM_DAY              617 // Sandgem Town (Day)
#define MUS_DP_FLOAROMA_DAY             618 // Floaroma Town (Day)
#define MUS_DP_SOLACEON_DAY             619 // Solaceon Town (Day)
#define MUS_DP_ROUTE225_DAY             620 // Route 225 (Day)
#define MUS_DP_VALOR_LAKEFRONT_DAY      621 // Valor Lakefront (Day)
#define MUS_DP_JUBILIFE_DAY             622 // Jubilife City (Day)
#define MUS_DP_CANALAVE_DAY             623 // Canalave City (Day)
#define MUS_DP_OREBURGH_DAY             624 // Oreburgh City (Day)
#define MUS_DP_ETERNA_DAY               625 // Eterna City (Day)
#define MUS_DP_HEARTHOME_DAY            626 // Hearthome City (Day)
#define MUS_DP_VEILSTONE_DAY            627 // Veilstone City (Day)
#define MUS_DP_SUNYSHORE_DAY            628 // Sunyshore City (Day)
#define MUS_DP_SNOWPOINT_DAY            629 // Snowpoint City (Day)
#define MUS_DP_POKEMON_LEAGUE_DAY       630 // Pokémon League (Day)
#define MUS_DP_FIGHT_AREA_DAY           631 // Fight Area (Day)
#define MUS_DP_ROUTE201_DAY             632 // Route 201 (Day)
#define MUS_DP_ROUTE203_DAY             633 // Route 203 (Day)
#define MUS_DP_ROUTE205_DAY             634 // Route 205 (Day)
#define MUS_DP_ROUTE206_DAY             635 // Route 206 (Day)
#define MUS_DP_ROUTE209_DAY             636 // Route 209 (Day)
#define MUS_DP_ROUTE210_DAY             637 // Route 210 (Day)
#define MUS_DP_ROUTE216_DAY             638 // Route 216 (Day)
#define MUS_DP_ROUTE228_DAY             639 // Route 228 (Day)
#define MUS_DP_ROWAN                    640 // Introduction
#define MUS_DP_TV_BROADCAST             641 // Special Report "Search for the Red Gyarados!" (Part 1)
#define MUS_DP_TWINLEAF_NIGHT           642 // Twinleaf Town (Night)
#define MUS_DP_SANDGEM_NIGHT            643 // Sandgem Town (Night)
#define MUS_DP_FLOAROMA_NIGHT           644 // Floaroma Town (Night)
#define MUS_DP_SOLACEON_NIGHT           645 // Solaceon Town (Night)
#define MUS_DP_ROUTE225_NIGHT           646 // Route 225 (Night)
#define MUS_DP_VALOR_LAKEFRONT_NIGHT    647 // Valor Lakefront (Night)
#define MUS_DP_JUBILIFE_NIGHT           648 // Jubilife City (Night)
#define MUS_DP_CANALAVE_NIGHT           649 // Canalave City (Night)
#define MUS_DP_OREBURGH_NIGHT           650 // Oreburgh City (Night)
#define MUS_DP_ETERNA_NIGHT             651 // Eterna City (Night)
#define MUS_DP_HEARTHOME_NIGHT          652 // Hearthome City (Night)
#define MUS_DP_VEILSTONE_NIGHT          653 // Veilstone City (Night)
#define MUS_DP_SUNYSHORE_NIGHT          654 // Sunyshore City (Night)
#define MUS_DP_SNOWPOINT_NIGHT          655 // Snowpoint City (Night)
#define MUS_DP_POKEMON_LEAGUE_NIGHT     656 // Pokémon League (Night)
#define MUS_DP_FIGHT_AREA_NIGHT         657 // Fight Area (Night)
#define MUS_DP_ROUTE201_NIGHT           658 // Route 201 (Night)
#define MUS_DP_ROUTE203_NIGHT           659 // Route 203 (Night)
#define MUS_DP_ROUTE205_NIGHT           660 // Route 205 (Night)
#define MUS_DP_ROUTE206_NIGHT           661 // Route 206 (Night)
#define MUS_DP_ROUTE209_NIGHT           662 // Route 209 (Night)
#define MUS_DP_ROUTE210_NIGHT           663 // Route 210 (Night)
#define MUS_DP_ROUTE216_NIGHT           664 // Route 216 (Night)
#define MUS_DP_ROUTE228_NIGHT           665 // Route 228 (Night)
#define MUS_DP_UNDERGROUND              666 // The Underground
#define MUS_DP_FLAG_CAPTURED            667 // Captured a Flag Underground!
#define MUS_DP_VICTORY_ROAD             668 // Victory Road
#define MUS_DP_ETERNA_FOREST            669 // Eterna Forest
#define MUS_DP_OLD_CHATEAU              670 // Old Chateau
#define MUS_DP_LAKE_CAVERNS             671 // Lake Caverns
#define MUS_DP_AMITY_SQUARE             672 // Amity Square
#define MUS_DP_GALACTIC_HQ              673 // Team Galactic HQ
#define MUS_DP_GALACTIC_ETERNA_BUILDING 674 // Galactic Eterna Building
#define MUS_DP_GREAT_MARSH              675 // Great Marsh
#define MUS_DP_LAKE                     676 // Lake
#define MUS_DP_MT_CORONET               677 // Mt. Coronet
#define MUS_DP_SPEAR_PILLAR             678 // Spear Pillar
#define MUS_DP_STARK_MOUNTAIN           679 // Stark Mountain
#define MUS_DP_OREBURGH_GATE            680 // Oreburgh Gate
#define MUS_DP_OREBURGH_MINE            681 // Oreburgh Mine
#define MUS_DP_INSIDE_POKEMON_LEAGUE    682 // Decisive Battle! (Pokémon League)
#define MUS_DP_HALL_OF_FAME_ROOM        683 // Hall of Fame
#define MUS_DP_POKE_CENTER_DAY          684 // Pokémon Center (Day)
#define MUS_DP_POKE_CENTER_NIGHT        685 // Pokémon Center (Night)
#define MUS_DP_GYM                      686 // Pokémon Gym
#define MUS_DP_ROWAN_LAB                687 // The Pokémon Lab
#define MUS_DP_CONTEST_LOBBY            688 // Contest Hall
#define MUS_DP_POKE_MART                689 // Poké Mart
#define MUS_DP_GAME_CORNER              690 // Game Corner
#define MUS_DP_B_TOWER                  691 // Battle Tower
#define MUS_DP_TV_STATION               692 // TV Station
#define MUS_DP_GALACTIC_HQ_BASEMENT     693 // Deep Within Team Galactic HQ
#define MUS_DP_AZURE_FLUTE              694 // Azure Flute
#define MUS_DP_HALL_OF_ORIGIN           695 // Hall of Origin
#define MUS_DP_GTS                      696 // GTS
#define MUS_DP_ENCOUNTER_BOY            697 // Trainers' Eyes Meet (Youngster)
#define MUS_DP_ENCOUNTER_TWINS          698 // Trainers' Eyes Meet (Twins)
#define MUS_DP_ENCOUNTER_INTENSE        699 // Trainers' Eyes Meet (Black Belt)
#define MUS_DP_ENCOUNTER_GALACTIC       700 // Team Galactic Appears!
#define MUS_DP_ENCOUNTER_LADY           701 // Trainers' Eyes Meet (Aroma Lady)
#define MUS_DP_ENCOUNTER_HIKER          702 // Trainers' Eyes Meet (Hiker)
#define MUS_DP_ENCOUNTER_RICH           703 // Trainers' Eyes Meet (PI)
#define MUS_DP_ENCOUNTER_SAILOR         704 // Trainers' Eyes Meet (Sailor)
#define MUS_DP_ENCOUNTER_SUSPICIOUS     705 // Trainers' Eyes Meet (Collector)
#define MUS_DP_ENCOUNTER_ACE_TRAINER    706 // Trainers' Eyes Meet (Ace Trainer)
#define MUS_DP_ENCOUNTER_GIRL           707 // Trainers' Eyes Meet (Lass)
#define MUS_DP_ENCOUNTER_CYCLIST        708 // Trainers' Eyes Meet (Cyclist)
#define MUS_DP_ENCOUNTER_ARTIST         709 // Trainers' Eyes Meet (Artist)
#define MUS_DP_ENCOUNTER_ELITE_FOUR     710 // The Elite Four Appears!
#define MUS_DP_ENCOUNTER_CHAMPION       711 // Champion Cynthia
#define MUS_DP_VS_WILD                  712 // Battle! (Wild Pokémon)
#define MUS_DP_VS_GYM_LEADER            713 // Battle! (Gym Leader)
#define MUS_DP_VS_UXIE_MESPRIT_AZELF    714 // Battle! (Uxie / Mesprit / Azelf)
#define MUS_DP_VS_TRAINER               715 // Battle! (Trainer Battle)
#define MUS_DP_VS_GALACTIC_BOSS           716 // Battle! (Team Galactic Boss)
#define MUS_DP_VS_DIALGA_PALKIA           717 // Battle! (Dialga / Palkia)
#define MUS_DP_VS_CHAMPION                718 // Battle! (Champion)
#define MUS_DP_VS_GALACTIC                719 // Battle! (Team Galactic)
#define MUS_DP_VS_RIVAL                   720 // Battle! (Rival)
#define MUS_DP_VS_ARCEUS                  721 // Battle! Arceus
#define MUS_DP_VS_LEGEND                  722 // Battle! (Legendary Pokémon)
#define MUS_DP_VICTORY_WILD               723 // Victory! (Wild Pokémon)
#define MUS_DP_VICTORY_TRAINER            724 // Victory! (Trainer Battle)
#define MUS_DP_VICTORY_GYM_LEADER         725 // Victory! (Gym Leader)
#define MUS_DP_VICTORY_CHAMPION           726 // Victory! (Champion)
#define MUS_DP_VICTORY_GALACTIC           727 // Victory! (Team Galactic)
#define MUS_DP_VICTORY_ELITE_FOUR         728 // Victory (Elite Four)
#define MUS_DP_VS_GALACTIC_COMMANDER      729 // Battle! (Team Galactic Commander)
#define MUS_DP_CONTEST                    730 // Super Contest!
#define MUS_DP_VS_ELITE_FOUR              731 // Battle! (Elite Four)
#define MUS_DP_FOLLOW_ME                  732 // Hurry Along
#define MUS_DP_RIVAL                      733 // Rival
#define MUS_DP_LAKE_EVENT                 734 // A Surprise at the Lake!
#define MUS_DP_EVOLUTION                  735 // Evolution
#define MUS_DP_LUCAS                      736 // Lucas
#define MUS_DP_DAWN                       737 // Dawn
#define MUS_DP_LEGEND_APPEARS             738 // The Legendary Pokémon Appears!
#define MUS_DP_CATASTROPHE                739 // Catastrophe!
#define MUS_DP_POKE_RADAR                 740 // A Poké Radar Hit!
#define MUS_DP_SURF                       741 // Surf
#define MUS_DP_CYCLING                    742 // Bicycle
#define MUS_DP_LETS_GO_TOGETHER           743 // Let's Go Together
#define MUS_DP_TV_END                     744 // Special Report "Search for the Red Gyarados!" (Part 2)
#define MUS_DP_LEVEL_UP                   745 // Level Up!
#define MUS_DP_EVOLVED                    746 // Congratulations! Your Pokémon Evolved!
#define MUS_DP_OBTAIN_KEY_ITEM            747 // Obtained a Key Item!
#define MUS_DP_OBTAIN_ITEM                748 // Obtained an Item!
#define MUS_DP_CAUGHT_INTRO               749 // Fanfare: Pokémon Caught (Unused)
#define MUS_DP_DEX_RATING                 750 // Pokédex Evaluation (Unused)
#define MUS_DP_OBTAIN_BADGE               751 // Obtained a Badge!
#define MUS_DP_POKETCH                    752 // Obtained a Pokétch App!
#define MUS_DP_OBTAIN_TMHM                753 // Obtained a TM!
#define MUS_DP_OBTAIN_ACCESSORY           754 // Got an Accessory
#define MUS_DP_MOVE_DELETED               755 // Move Deleted
#define MUS_DP_HEAL                       756 // Pokémon Healed
#define MUS_DP_OBTAIN_BERRY               757 // Obtained a Berry!
#define MUS_DP_CONTEST_DRESS_UP           758 // Contest: Dress Up
#define MUS_DP_HALL_OF_FAME               759 // Congratulations on Entering the Hall of Fame!
#define MUS_DP_INTRO                      760 // Opening Movie (Part 1)
#define MUS_DP_TITLE                      761 // Opening Movie (Part 2)
#define MUS_DP_MYSTERY_GIFT               762 // Mystery Gift
#define MUS_DP_WFC                        763 // Nintendo Wi-Fi Connection
#define MUS_DP_DANCE_EASY                 764 // Dance: Easy
#define MUS_DP_DANCE_DIFFICULT            765 // Dance: Difficult
#define MUS_DP_CONTEST_RESULTS            766 // Contest: Results Announcement
#define MUS_DP_CONTEST_WINNER             767 // Contest: Winner
#define MUS_DP_POFFINS                    768 // Poffins
#define MUS_DP_SLOTS_WIN                  769 // You're a Winner!
#define MUS_DP_SLOTS_JACKPOT              770 // You're a Jackpot Winner!
#define MUS_DP_CREDITS                    771 // Ending Theme
#define MUS_DP_SLOTS_UNUSED               772 // ??

#define DP_MUSIC_END                      MUS_DP_SLOTS_UNUSED

// Platinum Music
#define PL_MUSIC_START                    (DP_MUSIC_END + 1)

#define MUS_PL_FIGHT_AREA_DAY             773 // Fight Area (Battle Frontier)
#define MUS_PL_TV_BROADCAST               774 // Special Program: "Let's Ask Prof. Rowan!" (Part 1)
#define MUS_PL_TV_END                     775 // Special Program: "Let's Ask Prof. Rowan!" (Part 2)
#define MUS_PL_INTRO                      776 // Title Screen
#define MUS_PL_TITLE                      777 // Press Start
#define MUS_PL_DISTORTION_WORLD           778 // Distortion World
#define MUS_PL_B_ARCADE                   779 // Battle Arcade
#define MUS_PL_B_HALL                     780 // Battle Hall
#define MUS_PL_B_CASTLE                   781 // Battle Castle
#define MUS_PL_B_FACTORY                  782 // Battle Factory
#define MUS_PL_GLOBAL_TERMINAL            783 // Global Terminal
#define MUS_PL_LILYCOVE_BOSSA_NOVA        784 // Villa Audio System: Bossa Nova Lilycove
#define MUS_PL_LOOKER                     785 // Looker's Theme
#define MUS_PL_VS_GIRATINA                786 // Battle! (Giratina)
#define MUS_PL_VS_FRONTIER_BRAIN          787 // Battle! (Frontier Brain)
#define MUS_PL_VICTORY_FRONTIER_BRAIN     788 // Victory! (Frontier Brain)
#define MUS_PL_VS_REGI                    789 // Battle! (Regirock / Regice / Registeel / Regigigas)
#define MUS_PL_CONTEST_COOL               790 // Super Contest: Coolness
#define MUS_PL_CONTEST_SMART              791 // Super Contest: Smartness
#define MUS_PL_CONTEST_CUTE               792 // Super Contest: Cuteness
#define MUS_PL_CONTEST_TOUGH              793 // Super Contest: Toughness
#define MUS_PL_CONTEST_BEAUTY             794 // Super Contest: Beauty
#define MUS_PL_SPIN_TRADE                 795 // Spin Trade
#define MUS_PL_WIFI_MINIGAMES             796 // Wi-Fi Plaza: Mini-Games
#define MUS_PL_WIFI_PLAZA                 797 // Wi-Fi Plaza
#define MUS_PL_WIFI_PARADE                798 // Wi-Fi Plaza: Parade
#define MUS_PL_GIRATINA_APPEARS_1         799 // Giratina Appears!
#define MUS_PL_GIRATINA_APPEARS_2         800 // Giratina Appears! Part 2
#define MUS_PL_MYSTERY_GIFT               801 // Mystery Gift
#define MUS_PL_TWINLEAF_MUSIC_BOX         802 // Villa Music Box: Twinleaf Tune
#define MUS_PL_OBTAIN_ARCADE_POINTS       803 // Received BP in the Battle Arcade!
#define MUS_PL_OBTAIN_CASTLE_POINTS       804 // Received Castle Points!
#define MUS_PL_OBTAIN_B_POINTS            805 // Received Battle Points!
#define MUS_PL_WIN_MINIGAME               806 // Cleared Wobbuffet Pop!

#define PL_MUSIC_END                      MUS_PL_WIN_MINIGAME

// HeartGold & SoulSilver Music
#define HG_MUSIC_START                    (PL_MUSIC_END + 1)

#define MUS_HG_INTRO                      807 // Opening Movie
#define MUS_HG_TITLE                      808 // Title Screen
#define MUS_HG_NEW_GAME                   809 // An Adventure Begins!
#define MUS_HG_EVOLUTION                  810 // Evolution
#define MUS_HG_EVOLUTION_NO_INTRO         811 // Evolution (No intro)
#define MUS_HG_CYCLING                    812 // Bicycle
#define MUS_HG_SURF                       813 // Surf
#define MUS_HG_E_DENDOURIRI               814 // The Hall of Fame
#define MUS_HG_CREDITS                    815 // Ending Theme
#define MUS_HG_END                        816 // The End
#define MUS_HG_NEW_BARK                   817 // New Bark Town
#define MUS_HG_CHERRYGROVE                818 // Cherrygrove City
#define MUS_HG_VIOLET                     819 // Violet City
#define MUS_HG_AZALEA                     820 // Azalea Town
#define MUS_HG_GOLDENROD                  821 // Goldenrod City
#define MUS_HG_ECRUTEAK                   822 // Ecruteak City
#define MUS_HG_CIANWOOD                   823 // Cianwood City
#define MUS_HG_ROUTE29                    824 // Route 29
#define MUS_HG_ROUTE30                    825 // Route 30
#define MUS_HG_ROUTE34                    826 // Route 34
#define MUS_HG_ROUTE38                    827 // Route 38
#define MUS_HG_ROUTE42                    828 // Route 42
#define MUS_HG_VERMILION                  829 // Vermilion City
#define MUS_HG_PEWTER                     830 // Pewter City
#define MUS_HG_CERULEAN                   831 // Cerulean City
#define MUS_HG_LAVENDER                   832 // Lavender Town
#define MUS_HG_CELADON                    833 // Celadon City
#define MUS_HG_PALLET                     834 // Pallet Town
#define MUS_HG_CINNABAR                   835 // Cinnabar Island
#define MUS_HG_ROUTE1                     836 // Route 1
#define MUS_HG_ROUTE3                     837 // Route 3
#define MUS_HG_ROUTE11                    838 // Route 11
#define MUS_HG_ROUTE24                    839 // Route 24
#define MUS_HG_ROUTE26                    840 // Route 26
#define MUS_HG_POKE_CENTER                841 // Pokémon Center
#define MUS_HG_POKE_MART                  842 // Poké Mart
#define MUS_HG_GYM                        843 // Pokémon Gym
#define MUS_HG_ELM_LAB                    844 // Elm Pokémon Lab
#define MUS_HG_OAK                        845 // Professor Oak
#define MUS_HG_DANCE_THEATER              846 // Ecruteak Dance Theater
#define MUS_HG_GAME_CORNER                847 // Goldenrod Game Corner
#define MUS_HG_B_TOWER                    848 // Battle Tower (Johto)
#define MUS_HG_B_TOWER_RECEPTION          849 // Battle Tower Reception Desk
#define MUS_HG_SPROUT_TOWER               850 // Sprout Tower
#define MUS_HG_UNION_CAVE                 851 // Union Cave
#define MUS_HG_RUINS_OF_ALPH              852 // Ruins of Alph
#define MUS_HG_NATIONAL_PARK              853 // National Park
#define MUS_HG_BURNED_TOWER               854 // Burned Tower
#define MUS_HG_BELL_TOWER                 855 // Bell Tower
#define MUS_HG_LIGHTHOUSE                 856 // Olivine Lighthouse
#define MUS_HG_TEAM_ROCKET_HQ             857 // Team Rocket HQ
#define MUS_HG_ICE_PATH                   858 // Ice Path
#define MUS_HG_DRAGONS_DEN                859 // Dragon's Den
#define MUS_HG_ROCK_TUNNEL                860 // Rock Tunnel
#define MUS_HG_VIRIDIAN_FOREST            861 // Viridian Forest
#define MUS_HG_VICTORY_ROAD               862 // Victory Road
#define MUS_HG_POKEMON_LEAGUE             863 // The Pokémon League
#define MUS_HG_FOLLOW_ME_1                864 // Hurry Along
#define MUS_HG_FOLLOW_ME_2                865 // Hurry Along 2
#define MUS_HG_ENCOUNTER_RIVAL            866 // A Rival Appears!
#define MUS_HG_RIVAL_EXIT                 867 // A Rival Appears! (Version 2)
#define MUS_HG_BUG_CONTEST_PREP           868 // The Bug-Catching Contest Begins!
#define MUS_HG_BUG_CATCHING_CONTEST       869 // The Bug-Catching Contest
#define MUS_HG_RADIO_ROCKET               870 // Radio Transmission
#define MUS_HG_ROCKET_TAKEOVER            871 // Radio Tower Occupied!
#define MUS_HG_MAGNET_TRAIN               872 // Magnet Train
#define MUS_HG_SS_AQUA                    873 // S.S. Aqua
#define MUS_HG_MT_MOON_SQUARE             874 // Mt. Moon
#define MUS_HG_RADIO_JINGLE               875 // Pokégear Radio: Pokémon Channel
#define MUS_HG_RADIO_LULLABY              876 // Pokégear Radio: Pokémon Lullaby
#define MUS_HG_RADIO_MARCH                877 // Pokégear Radio: Pokémon March
#define MUS_HG_RADIO_UNOWN                878 // Pokégear Radio: Unown
#define MUS_HG_RADIO_POKE_FLUTE           879 // Pokégear Radio: Poké Flute
#define MUS_HG_RADIO_OAK                  880 // Pokégear Radio: Professor Oak's Pokémon Talk
#define MUS_HG_RADIO_BUENA                881 // Pokégear Radio: Buena's Password
#define MUS_HG_EUSINE                     882 // Eusine
#define MUS_HG_CLAIR                      883 // Clair
#define MUS_HG_ENCOUNTER_GIRL_1           884 // Trainers' Eyes Meet (Girl 1)
#define MUS_HG_ENCOUNTER_BOY_1            885 // Trainers' Eyes Meet (Boy 1)
#define MUS_HG_ENCOUNTER_SUSPICIOUS_1     886 // Trainers' Eyes Meet (Suspicious Figure 1)
#define MUS_HG_ENCOUNTER_SAGE             887 // Trainers' Eyes Meet (Sage)
#define MUS_HG_ENCOUNTER_KIMONO_GIRL      888 // Trainers' Eyes Meet (Kimono Girl)
#define MUS_HG_ENCOUNTER_ROCKET           889 // Trainers' Eyes Meet (Team Rocket)
#define MUS_HG_ENCOUNTER_GIRL_2           890 // Trainers' Eyes Meet (Girl 2)
#define MUS_HG_ENCOUNTER_BOY_2            891 // Trainers' Eyes Meet (Boy 2)
#define MUS_HG_ENCOUNTER_SUSPICIOUS_2     892 // Trainers' Eyes Meet (Suspicious Figure 2)
#define MUS_HG_VS_WILD                    893 // Battle! (Wild Pokémon - Johto Version)
#define MUS_HG_VS_TRAINER                 894 // Battle! (Trainer Battle - Johto Version)
#define MUS_HG_VS_GYM_LEADER              895 // Battle! (Gym Leader - Johto Version)
#define MUS_HG_VS_RIVAL                   896 // Battle! (Rival)
#define MUS_HG_VS_ROCKET                  897 // Battle! (Team Rocket)
#define MUS_HG_VS_SUICUNE                 898 // Battle! (Suicune)
#define MUS_HG_VS_ENTEI                   899 // Battle! (Entei)
#define MUS_HG_VS_RAIKOU                  900 // Battle! (Raikou)
#define MUS_HG_VS_CHAMPION                901 // Battle! (Champion)
#define MUS_HG_VS_WILD_KANTO              902 // Battle! (Wild Pokémon - Kanto Version)
#define MUS_HG_VS_TRAINER_KANTO           903 // Battle! (Trainer Battle - Kanto Version)
#define MUS_HG_VS_GYM_LEADER_KANTO        904 // Battle! (Gym Leader - Kanto Version)
#define MUS_HG_VICTORY_TRAINER            905 // Victory! (Trainer Battle)
#define MUS_HG_VICTORY_WILD               906 // Victory! (Wild Pokémon)
#define MUS_HG_CAUGHT                     907 // Victory! (Wild Pokémon) (No intro)
#define MUS_HG_VICTORY_GYM_LEADER         908 // Victory! (Gym Leader)
#define MUS_HG_VS_HO_OH                   909 // Battle! (Ho-Oh)
#define MUS_HG_VS_LUGIA                   910 // Battle! (Lugia)
#define MUS_HG_POKEATHLON_LOBBY           911 // Pokéathlon: In the Pokéathlon Dome
#define MUS_HG_POKEATHLON_START           912 // Pokéathlon: Opening Ceremony
#define MUS_HG_POKEATHLON_BEFORE          913 // Pokéathlon: An Event Begins!
#define MUS_HG_POKEATHLON_EVENT           914 // Pokéathlon: Event Time!
#define MUS_HG_POKEATHLON_FINALS          915 // Pokéathlon: Finals!
#define MUS_HG_POKEATHLON_RESULTS         916 // Pokéathlon: Results Announcement!
#define MUS_HG_POKEATHLON_END             917 // Pokéathlon: Medal Ceremony
#define MUS_HG_POKEATHLON_WINNER          918 // Pokéathlon: Winner!
#define MUS_HG_B_FACTORY                  919 // Battle Factory
#define MUS_HG_B_HALL                     920 // Battle Hall
#define MUS_HG_B_ARCADE                   921 // Battle Arcade
#define MUS_HG_B_CASTLE                   922 // Battle Castle
#define MUS_HG_VS_FRONTIER_BRAIN          923 // Battle! (Frontier Brain)
#define MUS_HG_VICTORY_FRONTIER_BRAIN     924 // Victory! (Frontier Brain)
#define MUS_HG_WFC                        925 // Nintendo Wi-Fi Connection
#define MUS_HG_MYSTERY_GIFT               926 // Mystery Gift
#define MUS_HG_WIFI_PLAZA                 927 // Wi-Fi Plaza
#define MUS_HG_WIFI_MINIGAMES             928 // Wi-Fi Plaza: Plaza Games
#define MUS_HG_WIFI_PARADE                929 // Wi-Fi Plaza: Parade
#define MUS_HG_GLOBAL_TERMINAL            930 // Global Terminal
#define MUS_HG_SPIN_TRADE                 931 // Spin Trade
#define MUS_HG_GTS                        932 // GTS
#define MUS_HG_ROUTE47                    933 // Route 47
#define MUS_HG_SAFARI_ZONE_GATE           934 // Safari Zone Gate
#define MUS_HG_SAFARI_ZONE                935 // Safari Zone
#define MUS_HG_ETHAN                      936 // Ethan
#define MUS_HG_LYRA                       937 // Lyra
#define MUS_HG_GAME_CORNER_WIN            938 // You're a Winner!
#define MUS_HG_KIMONO_GIRL_DANCE          939 // The Dance of Ecruteak
#define MUS_HG_KIMONO_GIRL                940 // Kimono Girl
#define MUS_HG_HO_OH_APPEARS              941 // Ho-Oh Appears!
#define MUS_HG_LUGIA_APPEARS              942 // Lugia Appears!
#define MUS_HG_SPIKY_EARED_PICHU          943 // Spiky-Eared Pichu Appears!
#define MUS_HG_SINJOU_RUINS               944 // Sinjoh Ruins
#define MUS_HG_RADIO_ROUTE101             945 // Pokégear Radio: Route 101
#define MUS_HG_RADIO_ROUTE201             946 // Pokégear Radio: Route 201
#define MUS_HG_RADIO_TRAINER              947 // Pokégear Radio: Trainer Channel
#define MUS_HG_RADIO_VARIETY              948 // Pokégear Radio: Variety Channel
#define MUS_HG_VS_KYOGRE_GROUDON          949 // Battle! (Super-Ancient Pokémon)
#define MUS_HG_POKEWALKER                 950 // Pokéwalker
#define MUS_HG_VS_ARCEUS                  951 // Arceus
#define MUS_HG_HEAL                       952 // Pokémon Healed
#define MUS_HG_LEVEL_UP                   953 // Level Up!
#define MUS_HG_OBTAIN_ITEM                954 // Picked Up an Item!
#define MUS_HG_OBTAIN_KEY_ITEM            955 // Obtained a Key Item!
#define MUS_HG_EVOLVED                    956 // Congratulations! Your Pokémon Evolved!
#define MUS_HG_OBTAIN_BADGE               957 // Received a Gym Badge!
#define MUS_HG_OBTAIN_TMHM                958 // Received a TM!
#define MUS_HG_OBTAIN_ACCESSORY           959 // Obtained an Accessory
#define MUS_HG_MOVE_DELETED               960 // Move Deleted
#define MUS_HG_OBTAIN_BERRY               961 // Obtained a Berry!
#define MUS_HG_DEX_RATING_1               962 // Pokédex Evaluation... No Good!
#define MUS_HG_DEX_RATING_2               963 // Pokédex Evaluation... You're on Your Way!
#define MUS_HG_DEX_RATING_3               964 // Pokédex Evaluation... Keep at It!
#define MUS_HG_DEX_RATING_4               965 // Pokédex Evaluation... Not Bad!
#define MUS_HG_DEX_RATING_5               966 // Pokédex Evaluation... Just a Little More!
#define MUS_HG_DEX_RATING_6               967 // Pokédex Evaluation... Complete!
#define MUS_HG_OBTAIN_EGG                 968 // Received a Pokémon Egg!
#define MUS_HG_BUG_CONTEST_1ST_PLACE      969 // Bug-Catching Contest: Winner
#define MUS_HG_BUG_CONTEST_2ND_PLACE      970 // Bug-Catching Contest: Second Place
#define MUS_HG_BUG_CONTEST_3RD_PLACE      971 // Bug-Catching Contest: Third Place
#define MUS_HG_CARD_FLIP                  972 // Voltorb Flip: Is this what you're expecting?!
#define MUS_HG_CARD_FLIP_GAME_OVER        973 // Voltorb Flip: Game Over
#define MUS_HG_POKEGEAR_REGISTERED        974 // Registered in the Pokégear!
#define MUS_HG_LETS_GO_TOGETHER           975 // Let's Go Together
#define MUS_HG_POKEATHLON_READY           976 // Pokéathlon: Getting Changed
#define MUS_HG_POKEATHLON_1ST_PLACE       977 // Pokéathlon: In First Place!
#define MUS_HG_RECEIVE_POKEMON            978 // Received a Pokémon!
#define MUS_HG_OBTAIN_ARCADE_POINTS       979 // Received Battle Points in the Battle Arcade!
#define MUS_HG_OBTAIN_CASTLE_POINTS       980 // Received Castle Points!
#define MUS_HG_OBTAIN_B_POINTS            981 // Received Battle Points!
#define MUS_HG_WIN_MINIGAME               982 // Cleared Wobbuffet Pop!

#define HG_MUSIC_END                      MUS_HG_WIN_MINIGAME

#define MUS_BW_ASPERTIA_CITY              983
#define MUS_BW_GATE                       984
#define CUSTOM_MUSIC_END                  MUS_BW_GATE

#define END_MUS                     CUSTOM_MUSIC_END
#define SONGS_END                   END_MUS

#define MUS_ROUTE118                0x7FFF  // Map is split into 2 music sections. controlled by GetCurrLocationDefaultMusic().

#define MUS_NONE                    0xFFFF

#endif  // GUARD_CONSTANTS_SONGS_H
