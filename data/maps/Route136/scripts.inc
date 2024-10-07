Route136_MapScripts::
# 5 "data/maps/Route136/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SamHeart2_Helper
# 2 "data/maps/Route136/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route136_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route136_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route136/scripts.pory"
	map_script_2 VAR_SAM_STATE, 4, Route136_Event_Script_SamHeart2
	.2byte 0


SamHeart2_Helper::
# 9 "data/maps/Route136/scripts.pory"
	setflag FLAG_HIDE_ROUTE_136_SAMTWOHEARTS
# 10 "data/maps/Route136/scripts.pory"
	compare VAR_SAM_STATE, 3
	goto_if_eq SamHeart2_Helper_1
	return

SamHeart2_Helper_1:
# 11 "data/maps/Route136/scripts.pory"
	setvar VAR_SAM_STATE, 4
	return


Route136_Event_Script_SamHeart2::
# 16 "data/maps/Route136/scripts.pory"
	lockall
# 17 "data/maps/Route136/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Route136/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_136_SAMTWOHEARTS
# 20 "data/maps/Route136/scripts.pory"
	addobject 1
# 21 "data/maps/Route136/scripts.pory"
	addobject 2
# 22 "data/maps/Route136/scripts.pory"
	addobject 3
# 23 "data/maps/Route136/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 17, 3
# 24 "data/maps/Route136/scripts.pory"
	setvar VAR_0x8004, 17
# 25 "data/maps/Route136/scripts.pory"
	setvar VAR_0x8005, 3
# 26 "data/maps/Route136/scripts.pory"
	special TeleportCamera
# 30 "data/maps/Route136/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/Route136/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/Route136/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 38 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart2_WalkDown4
# 39 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 42 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 43 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 46 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/Route136/scripts.pory"
	closemessage
# 50 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 51 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 52 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 53 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route136/scripts.pory"
	delay 30
# 58 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPRight
# 59 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 60 "data/maps/Route136/scripts.pory"
	delay 30
# 61 "data/maps/Route136/scripts.pory"
	applymovement 3, SamHeart2_JumpIPRight
# 62 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 63 "data/maps/Route136/scripts.pory"
	delay 30
# 64 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 65 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 66 "data/maps/Route136/scripts.pory"
	delay 30
# 67 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 69 "data/maps/Route136/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/Route136/scripts.pory"
	waitmovement 3
# 71 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPRight
# 72 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 73 "data/maps/Route136/scripts.pory"
	applymovement 3, SamHeart2_JumpIPRight
# 74 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 77 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_1, MSGBOX_DEFAULT
# 78 "data/maps/Route136/scripts.pory"
	closemessage
# 80 "data/maps/Route136/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 81 "data/maps/Route136/scripts.pory"
	waitmovement 3
# 82 "data/maps/Route136/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 83 "data/maps/Route136/scripts.pory"
	waitmovement 3
# 84 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 86 "data/maps/Route136/scripts.pory"
	delay 30
# 87 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPLeft
# 88 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 89 "data/maps/Route136/scripts.pory"
	delay 30
# 90 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 92 "data/maps/Route136/scripts.pory"
	delay 30
# 93 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPRight
# 94 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 95 "data/maps/Route136/scripts.pory"
	delay 30
# 96 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 98 "data/maps/Route136/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 99 "data/maps/Route136/scripts.pory"
	waitmovement 3
# 101 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_2, MSGBOX_DEFAULT
# 103 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_3, MSGBOX_DEFAULT
# 104 "data/maps/Route136/scripts.pory"
	closemessage
# 105 "data/maps/Route136/scripts.pory"
	delay 120
# 106 "data/maps/Route136/scripts.pory"
	playse SE_PIN
# 107 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 108 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 110 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 111 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route136/scripts.pory"
	delay 8
# 113 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 114 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_4, MSGBOX_YESNO
Route136_Event_Script_SamHeart2_2:
# 118 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route136_Event_Script_SamHeart2_3
# 122 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_6, MSGBOX_DEFAULT
# 123 "data/maps/Route136/scripts.pory"
	closemessage
# 124 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 125 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route136/scripts.pory"
	applymovement 2, SamHeart2_WalkDown3
# 129 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 130 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 131 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route136/scripts.pory"
	delay 16
# 133 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 134 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 136 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_7, MSGBOX_DEFAULT
# 137 "data/maps/Route136/scripts.pory"
	closemessage
# 140 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPLeft
# 141 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 142 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 143 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 144 "data/maps/Route136/scripts.pory"
	delay 30
# 146 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_8, MSGBOX_DEFAULT
# 147 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 148 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 149 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_9, MSGBOX_DEFAULT
# 151 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 152 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 153 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 154 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 155 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_10, MSGBOX_DEFAULT
# 156 "data/maps/Route136/scripts.pory"
	delay 30
# 157 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 158 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 159 "data/maps/Route136/scripts.pory"
	delay 30
# 161 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_11, MSGBOX_YESNO
Route136_Event_Script_SamHeart2_6:
# 163 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route136_Event_Script_SamHeart2_7
# 167 "data/maps/Route136/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 169 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_13, MSGBOX_DEFAULT
# 171 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_JumpIPLeft
# 172 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 173 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 174 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 176 "data/maps/Route136/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 178 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_14, MSGBOX_DEFAULT
# 180 "data/maps/Route136/scripts.pory"
	trainerbattle_two_trainers TRAINER_SAM_ONEHEART, Route136_Event_Script_SamHeart2_Text_15, TRAINER_VINCENT_SAMTWOHEART, Route136_Event_Script_SamHeart2_Text_16
# 182 "data/maps/Route136/scripts.pory"
	applymovement 2, SamHeart2_WalkUp2FaceLeft
# 184 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_17, MSGBOX_DEFAULT
# 186 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_18, MSGBOX_DEFAULT
# 187 "data/maps/Route136/scripts.pory"
	closemessage
# 190 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 191 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 192 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 193 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 194 "data/maps/Route136/scripts.pory"
	delay 30
# 196 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_19, MSGBOX_DEFAULT
# 197 "data/maps/Route136/scripts.pory"
	closemessage
# 200 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 201 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 202 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 203 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route136/scripts.pory"
	delay 60
# 205 "data/maps/Route136/scripts.pory"
	fadeoutbgm 0
# 206 "data/maps/Route136/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 208 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_20, MSGBOX_DEFAULT
# 209 "data/maps/Route136/scripts.pory"
	closemessage
# 212 "data/maps/Route136/scripts.pory"
	delay 60
# 214 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_21, MSGBOX_DEFAULT
# 215 "data/maps/Route136/scripts.pory"
	closemessage
# 219 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_SkipDownWalkUp3FaceLeft
# 220 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 221 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 222 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 223 "data/maps/Route136/scripts.pory"
	delay 30
# 225 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_22, MSGBOX_DEFAULT
# 226 "data/maps/Route136/scripts.pory"
	closemessage
# 227 "data/maps/Route136/scripts.pory"
	delay 30
# 229 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_23, MSGBOX_DEFAULT
# 230 "data/maps/Route136/scripts.pory"
	closemessage
# 238 "data/maps/Route136/scripts.pory"
	playbgm MUS_END, FALSE
# 243 "data/maps/Route136/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 244 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 245 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 246 "data/maps/Route136/scripts.pory"
	delay 60
# 248 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_24, MSGBOX_DEFAULT
# 249 "data/maps/Route136/scripts.pory"
	closemessage
# 251 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_25, MSGBOX_DEFAULT
# 252 "data/maps/Route136/scripts.pory"
	closemessage
# 255 "data/maps/Route136/scripts.pory"
	playse SE_PIN
# 256 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 257 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 258 "data/maps/Route136/scripts.pory"
	delay 30
# 260 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_26, MSGBOX_DEFAULT
# 262 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_27, MSGBOX_DEFAULT
# 264 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_28, MSGBOX_DEFAULT
# 265 "data/maps/Route136/scripts.pory"
	closemessage
# 266 "data/maps/Route136/scripts.pory"
	delay 30
# 267 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_29, MSGBOX_DEFAULT
# 268 "data/maps/Route136/scripts.pory"
	closemessage
# 270 "data/maps/Route136/scripts.pory"
	fadenewbgm MUS_OLDALE
# 273 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_WalkDown3
# 274 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 275 "data/maps/Route136/scripts.pory"
	applymovement 3, SamHeart2_JumpIPLeft
# 276 "data/maps/Route136/scripts.pory"
	waitmovement 3
# 277 "data/maps/Route136/scripts.pory"
	delay 60
# 279 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_30, MSGBOX_DEFAULT
# 281 "data/maps/Route136/scripts.pory"
	dynmultichoice 8, 6, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route136_Event_Script_SamHeart2_Text_31, Route136_Event_Script_SamHeart2_Text_32
# 286 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_33, MSGBOX_DEFAULT
# 288 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route136_Event_Script_SamHeart2_10
# 292 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_35, MSGBOX_DEFAULT
Route136_Event_Script_SamHeart2_9:
# 295 "data/maps/Route136/scripts.pory"
	closemessage
# 298 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 299 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 300 "data/maps/Route136/scripts.pory"
	delay 60
# 301 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 302 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_36, MSGBOX_DEFAULT
# 305 "data/maps/Route136/scripts.pory"
	closemessage
# 306 "data/maps/Route136/scripts.pory"
	delay 30
# 308 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_37, MSGBOX_DEFAULT
# 309 "data/maps/Route136/scripts.pory"
	closemessage
# 310 "data/maps/Route136/scripts.pory"
	delay 30
# 312 "data/maps/Route136/scripts.pory"
	fadescreen FADE_TO_BLACK
# 313 "data/maps/Route136/scripts.pory"
	delay 30
# 314 "data/maps/Route136/scripts.pory"
	setvar VAR_SAM_STATE, 5
# 315 "data/maps/Route136/scripts.pory"
	setflag FLAG_HIDE_ROUTE_136_SAMTWOHEARTS
# 316 "data/maps/Route136/scripts.pory"
	removeobject 1
# 317 "data/maps/Route136/scripts.pory"
	removeobject 2
# 318 "data/maps/Route136/scripts.pory"
	removeobject 3
# 319 "data/maps/Route136/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 19, 0
# 320 "data/maps/Route136/scripts.pory"
	setvar VAR_0x8004, 19
# 321 "data/maps/Route136/scripts.pory"
	setvar VAR_0x8005, 0
# 322 "data/maps/Route136/scripts.pory"
	special TeleportCamera
# 323 "data/maps/Route136/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 324 "data/maps/Route136/scripts.pory"
	fadedefaultbgm
# 325 "data/maps/Route136/scripts.pory"
	releaseall
	return

Route136_Event_Script_SamHeart2_3:
# 119 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_5, MSGBOX_YESNO
	goto Route136_Event_Script_SamHeart2_2

Route136_Event_Script_SamHeart2_7:
# 164 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_12, MSGBOX_YESNO
	goto Route136_Event_Script_SamHeart2_6

Route136_Event_Script_SamHeart2_10:
# 289 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_34, MSGBOX_DEFAULT
	goto Route136_Event_Script_SamHeart2_9


# 328 "data/maps/Route136/scripts.pory"
SamHeart2_WalkDown4:
# 329 "data/maps/Route136/scripts.pory"
	walk_down
# 329 "data/maps/Route136/scripts.pory"
	walk_down
# 329 "data/maps/Route136/scripts.pory"
	walk_down
# 329 "data/maps/Route136/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/Route136/scripts.pory"
SamHeart2_WalkDown3:
# 333 "data/maps/Route136/scripts.pory"
	walk_down
# 333 "data/maps/Route136/scripts.pory"
	walk_down
# 333 "data/maps/Route136/scripts.pory"
	walk_down
	step_end

# 336 "data/maps/Route136/scripts.pory"
SamHeart2_JumpIPLeft:
# 337 "data/maps/Route136/scripts.pory"
	jump_in_place_left
	step_end

# 340 "data/maps/Route136/scripts.pory"
SamHeart2_SkipDownWalkUp3FaceLeft:
# 341 "data/maps/Route136/scripts.pory"
	jump_in_place_down
# 342 "data/maps/Route136/scripts.pory"
	walk_up
# 342 "data/maps/Route136/scripts.pory"
	walk_up
# 342 "data/maps/Route136/scripts.pory"
	walk_up
# 343 "data/maps/Route136/scripts.pory"
	face_left
	step_end

# 346 "data/maps/Route136/scripts.pory"
SamHeart2_WalkUp2FaceLeft:
# 347 "data/maps/Route136/scripts.pory"
	walk_up
# 347 "data/maps/Route136/scripts.pory"
	walk_up
# 348 "data/maps/Route136/scripts.pory"
	face_left
	step_end

# 351 "data/maps/Route136/scripts.pory"
SamHeart2_JumpIPRight:
# 352 "data/maps/Route136/scripts.pory"
	jump_in_place_right
	step_end

Route136_Event_Script_SamHeart2_Text_0:
# 46 "data/maps/Route136/scripts.pory"
	.string "SAM: Hello {PLAYER}. Nice day, isn't\n"
	.string "it?$"

Route136_Event_Script_SamHeart2_Text_1:
# 77 "data/maps/Route136/scripts.pory"
	.string "SAM: I'm just keeping an eye on my\n"
	.string "little brother. It's good for him to get\l"
	.string "some fresh air on a day like this.$"

Route136_Event_Script_SamHeart2_Text_2:
# 101 "data/maps/Route136/scripts.pory"
	.string "SAM: Vince wanted to go to the woods to\n"
	.string "find some Bug Pokemon, but Mom said it\l"
	.string "was too dangerous. He always gets\l"
	.string "lost...$"

Route136_Event_Script_SamHeart2_Text_3:
# 103 "data/maps/Route136/scripts.pory"
	.string "SAM: I didn't want to bum him out,\n"
	.string "though...$"

Route136_Event_Script_SamHeart2_Text_4:
# 116 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey, {PLAYER}! Do you think you\n"
	.string "can do me a favor?$"

Route136_Event_Script_SamHeart2_Text_5:
# 119 "data/maps/Route136/scripts.pory"
	.string "...Please?$"

Route136_Event_Script_SamHeart2_Text_6:
# 122 "data/maps/Route136/scripts.pory"
	.string "SAM: Just follow along.$"

Route136_Event_Script_SamHeart2_Text_7:
# 136 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey, Vince! {PLAYER} wants to\n"
	.string "battle you!$"

Route136_Event_Script_SamHeart2_Text_8:
# 146 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Really? I want to battle him\n"
	.string "too!$"

Route136_Event_Script_SamHeart2_Text_9:
# 149 "data/maps/Route136/scripts.pory"
	.string "Will you help me out, Sam?$"

Route136_Event_Script_SamHeart2_Text_10:
# 155 "data/maps/Route136/scripts.pory"
	.string "SAM: Huh? Oh, like a double battle?$"

Route136_Event_Script_SamHeart2_Text_11:
# 161 "data/maps/Route136/scripts.pory"
	.string "SAM: What do you say, {PLAYER}?$"

Route136_Event_Script_SamHeart2_Text_12:
# 164 "data/maps/Route136/scripts.pory"
	.string "C'mon, man, just this once...$"

Route136_Event_Script_SamHeart2_Text_13:
# 169 "data/maps/Route136/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Let's do this!$"

Route136_Event_Script_SamHeart2_Text_14:
# 178 "data/maps/Route136/scripts.pory"
	.string "VINCENT: I'm ready!$"

Route136_Event_Script_SamHeart2_Text_15:
# 180 "data/maps/Route136/scripts.pory"
	.string "Man...$"

Route136_Event_Script_SamHeart2_Text_16:
# 180 "data/maps/Route136/scripts.pory"
	.string "That was fun!\n I wanna be as strong as you one day,\n Mister!$"

Route136_Event_Script_SamHeart2_Text_17:
# 184 "data/maps/Route136/scripts.pory"
	.string "SAM: You really won against the both of\n"
	.string "us, huh...$"

Route136_Event_Script_SamHeart2_Text_18:
# 186 "data/maps/Route136/scripts.pory"
	.string "VINCENT: That was so cool!$"

Route136_Event_Script_SamHeart2_Text_19:
# 196 "data/maps/Route136/scripts.pory"
	.string "SAM: Thanks for humoring me,\n"
	.string "{PLAYER}. That was cool of you.$"

Route136_Event_Script_SamHeart2_Text_20:
# 208 "data/maps/Route136/scripts.pory"
	.string "SAM: ...$"

Route136_Event_Script_SamHeart2_Text_21:
# 214 "data/maps/Route136/scripts.pory"
	.string "SAM: Our Dad used to take us to the\n"
	.string "beach on sunny days like this.$"

Route136_Event_Script_SamHeart2_Text_22:
# 225 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Sam...?$"

Route136_Event_Script_SamHeart2_Text_23:
# 229 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Is Dad ever going to come\n"
	.string "home?$"

Route136_Event_Script_SamHeart2_Text_24:
# 248 "data/maps/Route136/scripts.pory"
	.string "SAM: Of course, Vince. Dad's going to\n"
	.string "come back as soon as he possibly can.$"

Route136_Event_Script_SamHeart2_Text_25:
# 251 "data/maps/Route136/scripts.pory"
	.string "VINCENT: But I heard some grown-ups\n"
	.string "saying that... that all of our troops are\l"
	.string "getting shot to pieces.$"

Route136_Event_Script_SamHeart2_Text_26:
# 260 "data/maps/Route136/scripts.pory"
	.string "SAM: Don't believe everything you hear!$"

Route136_Event_Script_SamHeart2_Text_27:
# 262 "data/maps/Route136/scripts.pory"
	.string "SAM: Don't you remember how strong Dad\n"
	.string "is? He'd never let a pathetic Gotoro\l"
	.string "grunt get him like that! Don't you\l"
	.string "worry!$"

Route136_Event_Script_SamHeart2_Text_28:
# 264 "data/maps/Route136/scripts.pory"
	.string "SAM: And always remember that Mom and I\n"
	.string "are here to play with you if you ever\l"
	.string "feel lonely.$"

Route136_Event_Script_SamHeart2_Text_29:
# 267 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Okay!$"

Route136_Event_Script_SamHeart2_Text_30:
# 279 "data/maps/Route136/scripts.pory"
	.string "SAM: To be honest, I have no idea if my\n"
	.string "old man will come back... We've all read\l"
	.string "the reports. Our soldiers are falling by\l"
	.string "the thousands.\n"
	.string "But what am I going to say to Vincent?$"

Route136_Event_Script_SamHeart2_Text_31:
# 281 "data/maps/Route136/scripts.pory"
	.string "It's best to be honest with kids.$"

Route136_Event_Script_SamHeart2_Text_32:
# 281 "data/maps/Route136/scripts.pory"
	.string "Kids should have hope.$"

Route136_Event_Script_SamHeart2_Text_33:
# 286 "data/maps/Route136/scripts.pory"
	.string "SAM: You think so?$"

Route136_Event_Script_SamHeart2_Text_34:
# 289 "data/maps/Route136/scripts.pory"
	.string "SAM: Maybe you're right... The world is a\n"
	.string "cruel place, but kids have to learn that\l"
	.string "one way or another.$"

Route136_Event_Script_SamHeart2_Text_35:
# 292 "data/maps/Route136/scripts.pory"
	.string "SAM: Yeah... kids should play and have\n"
	.string "fun while they still have the chance.$"

Route136_Event_Script_SamHeart2_Text_36:
# 303 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey, did I tell you the band's\n"
	.string "starting to come together?$"

Route136_Event_Script_SamHeart2_Text_37:
# 308 "data/maps/Route136/scripts.pory"
	.string "SAM: Yeah! It turns out Abigail's a\n"
	.string "pretty good drummer. And Sebastian\l"
	.string "seemed to really want her in the band...$"
