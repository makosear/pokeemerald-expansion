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
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart2_Movement_Player
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
# 49 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 50 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 51 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 52 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 62 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route136/scripts.pory"
	delay 16
# 64 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_4, MSGBOX_YESNO
Route136_Event_Script_SamHeart2_2:
# 69 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route136_Event_Script_SamHeart2_3
# 73 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_6, MSGBOX_DEFAULT
# 76 "data/maps/Route136/scripts.pory"
	applymovement 2, SamHeart2_Movement_2
# 77 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 78 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 79 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 81 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 83 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_7, MSGBOX_DEFAULT
# 86 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_Movement_1
# 87 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 88 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 89 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 91 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_8, MSGBOX_DEFAULT
# 93 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 94 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_9, MSGBOX_DEFAULT
# 96 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_10, MSGBOX_DEFAULT
# 98 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 99 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 100 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_11, MSGBOX_YESNO
Route136_Event_Script_SamHeart2_6:
# 102 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route136_Event_Script_SamHeart2_7
# 106 "data/maps/Route136/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 108 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_13, MSGBOX_DEFAULT
# 110 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_Movement_1
# 111 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 112 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 113 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 115 "data/maps/Route136/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, TRUE
# 117 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_14, MSGBOX_DEFAULT
# 119 "data/maps/Route136/scripts.pory"
	trainerbattle_two_trainers TRAINER_SAM_ONEHEART, Route136_Event_Script_SamHeart2_Text_15, TRAINER_VINCENT_SAMTWOHEART, Route136_Event_Script_SamHeart2_Text_16
# 121 "data/maps/Route136/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 123 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_17, MSGBOX_DEFAULT
# 125 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_18, MSGBOX_DEFAULT
# 127 "data/maps/Route136/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 130 "data/maps/Route136/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 132 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_19, MSGBOX_DEFAULT
# 135 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 136 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 137 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 138 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route136/scripts.pory"
	delay 16
# 142 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_20, MSGBOX_DEFAULT
# 145 "data/maps/Route136/scripts.pory"
	delay 16
# 147 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_21, MSGBOX_DEFAULT
# 151 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_Movement_1_2
# 152 "data/maps/Route136/scripts.pory"
	waitmovement 1
# 154 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_22, MSGBOX_DEFAULT
# 156 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_23, MSGBOX_DEFAULT
# 164 "data/maps/Route136/scripts.pory"
	playbgm MUS_END, TRUE
# 169 "data/maps/Route136/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 170 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 172 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_24, MSGBOX_DEFAULT
# 174 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_25, MSGBOX_DEFAULT
# 177 "data/maps/Route136/scripts.pory"
	playse SE_PIN
# 178 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 179 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 181 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_26, MSGBOX_DEFAULT
# 183 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_27, MSGBOX_DEFAULT
# 185 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_28, MSGBOX_DEFAULT
# 187 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_29, MSGBOX_DEFAULT
# 189 "data/maps/Route136/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 192 "data/maps/Route136/scripts.pory"
	applymovement 1, SamHeart2_Movement_2
# 194 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_30, MSGBOX_DEFAULT
# 196 "data/maps/Route136/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route136_Event_Script_SamHeart2_Text_31, Route136_Event_Script_SamHeart2_Text_32
# 201 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_33, MSGBOX_DEFAULT
# 203 "data/maps/Route136/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route136_Event_Script_SamHeart2_10
# 206 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_35, MSGBOX_DEFAULT
Route136_Event_Script_SamHeart2_9:
# 211 "data/maps/Route136/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 212 "data/maps/Route136/scripts.pory"
	waitmovement 2
# 213 "data/maps/Route136/scripts.pory"
	delay 16
# 214 "data/maps/Route136/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 215 "data/maps/Route136/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_36, MSGBOX_DEFAULT
# 218 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_37, MSGBOX_DEFAULT
# 220 "data/maps/Route136/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/Route136/scripts.pory"
	setvar VAR_SAM_STATE, 5
# 223 "data/maps/Route136/scripts.pory"
	setflag FLAG_HIDE_ROUTE_136_SAMTWOHEARTS
# 224 "data/maps/Route136/scripts.pory"
	removeobject 1
# 225 "data/maps/Route136/scripts.pory"
	removeobject 2
# 226 "data/maps/Route136/scripts.pory"
	removeobject 3
# 227 "data/maps/Route136/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 19, 0
# 228 "data/maps/Route136/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 229 "data/maps/Route136/scripts.pory"
	fadedefaultbgm
# 230 "data/maps/Route136/scripts.pory"
	releaseall
	return

Route136_Event_Script_SamHeart2_3:
# 70 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_5, MSGBOX_YESNO
	goto Route136_Event_Script_SamHeart2_2

Route136_Event_Script_SamHeart2_7:
# 103 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_12, MSGBOX_YESNO
	goto Route136_Event_Script_SamHeart2_6

Route136_Event_Script_SamHeart2_10:
# 204 "data/maps/Route136/scripts.pory"
	msgbox Route136_Event_Script_SamHeart2_Text_34, MSGBOX_DEFAULT
	goto Route136_Event_Script_SamHeart2_9


# 233 "data/maps/Route136/scripts.pory"
SamHeart2_Movement_Player:
# 234 "data/maps/Route136/scripts.pory"
	walk_down
# 234 "data/maps/Route136/scripts.pory"
	walk_down
# 234 "data/maps/Route136/scripts.pory"
	walk_down
# 234 "data/maps/Route136/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/Route136/scripts.pory"
SamHeart2_Movement_2:
# 238 "data/maps/Route136/scripts.pory"
	walk_down
# 238 "data/maps/Route136/scripts.pory"
	walk_down
# 238 "data/maps/Route136/scripts.pory"
	walk_down
	step_end

# 241 "data/maps/Route136/scripts.pory"
SamHeart2_Movement_1:
# 242 "data/maps/Route136/scripts.pory"
	jump_in_place_left
	step_end

# 245 "data/maps/Route136/scripts.pory"
SamHeart2_Movement_1_2:
# 246 "data/maps/Route136/scripts.pory"
	jump_in_place_down
# 247 "data/maps/Route136/scripts.pory"
	walk_up
# 247 "data/maps/Route136/scripts.pory"
	walk_up
# 247 "data/maps/Route136/scripts.pory"
	walk_up
# 248 "data/maps/Route136/scripts.pory"
	face_left
	step_end

Route136_Event_Script_SamHeart2_Text_0:
# 46 "data/maps/Route136/scripts.pory"
	.string "SAM: Hello {PLAYER}. Nice day, isn't\n"
	.string "it?$"

Route136_Event_Script_SamHeart2_Text_1:
# 54 "data/maps/Route136/scripts.pory"
	.string "SAM: I'm just keeping an eye on my\n"
	.string "little brother. It's good for him to get\l"
	.string "some fresh air on a day like this.$"

Route136_Event_Script_SamHeart2_Text_2:
# 56 "data/maps/Route136/scripts.pory"
	.string "SAM: Vince wanted to go to the woods to\n"
	.string "find some Bug Pokemon, but Mom said it\l"
	.string "was too dangerous. He always gets\l"
	.string "lost...$"

Route136_Event_Script_SamHeart2_Text_3:
# 58 "data/maps/Route136/scripts.pory"
	.string "SAM: I didn't want to bum him out,\n"
	.string "though...$"

Route136_Event_Script_SamHeart2_Text_4:
# 67 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey, {PLAYER}! Do you think you\n"
	.string "can do me a favor?$"

Route136_Event_Script_SamHeart2_Text_5:
# 70 "data/maps/Route136/scripts.pory"
	.string "...Please?$"

Route136_Event_Script_SamHeart2_Text_6:
# 73 "data/maps/Route136/scripts.pory"
	.string "SAM: Just follow along.$"

Route136_Event_Script_SamHeart2_Text_7:
# 83 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey, Vince! {PLAYER} wants to\n"
	.string "battle you!$"

Route136_Event_Script_SamHeart2_Text_8:
# 91 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Really? I want to battle him\n"
	.string "too!$"

Route136_Event_Script_SamHeart2_Text_9:
# 94 "data/maps/Route136/scripts.pory"
	.string "Will you help me out, Sam?$"

Route136_Event_Script_SamHeart2_Text_10:
# 96 "data/maps/Route136/scripts.pory"
	.string "SAM: Huh? Oh, like a double battle?$"

Route136_Event_Script_SamHeart2_Text_11:
# 100 "data/maps/Route136/scripts.pory"
	.string "SAM: What do you say, {PLAYER}?$"

Route136_Event_Script_SamHeart2_Text_12:
# 103 "data/maps/Route136/scripts.pory"
	.string "C'mon, man, just this once...$"

Route136_Event_Script_SamHeart2_Text_13:
# 108 "data/maps/Route136/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Let's do this!$"

Route136_Event_Script_SamHeart2_Text_14:
# 117 "data/maps/Route136/scripts.pory"
	.string "VINCENT: I'm ready!$"

Route136_Event_Script_SamHeart2_Text_15:
# 119 "data/maps/Route136/scripts.pory"
	.string "Man...$"

Route136_Event_Script_SamHeart2_Text_16:
# 119 "data/maps/Route136/scripts.pory"
	.string "That was fun!\n I wanna be as strong as you one day, Mister!$"

Route136_Event_Script_SamHeart2_Text_17:
# 123 "data/maps/Route136/scripts.pory"
	.string "SAM: You really won against the both of\n"
	.string "us, huh...$"

Route136_Event_Script_SamHeart2_Text_18:
# 125 "data/maps/Route136/scripts.pory"
	.string "VINCENT: That was so cool!$"

Route136_Event_Script_SamHeart2_Text_19:
# 132 "data/maps/Route136/scripts.pory"
	.string "SAM: Thanks for humoring me,\n"
	.string "{PLAYER}. That was cool of you.$"

Route136_Event_Script_SamHeart2_Text_20:
# 142 "data/maps/Route136/scripts.pory"
	.string "SAM: ...$"

Route136_Event_Script_SamHeart2_Text_21:
# 147 "data/maps/Route136/scripts.pory"
	.string "SAM: Our Dad used to take us to the\n"
	.string "beach on sunny days like this.$"

Route136_Event_Script_SamHeart2_Text_22:
# 154 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Sam...?$"

Route136_Event_Script_SamHeart2_Text_23:
# 156 "data/maps/Route136/scripts.pory"
	.string "VINCENT: Is Dad ever going to come\n"
	.string "home?$"

Route136_Event_Script_SamHeart2_Text_24:
# 172 "data/maps/Route136/scripts.pory"
	.string "SAM: Of course, Vince. Dad's going to\n"
	.string "come back as soon as he possibly can.$"

Route136_Event_Script_SamHeart2_Text_25:
# 174 "data/maps/Route136/scripts.pory"
	.string "VINCENT: But I heard some grown-ups\n"
	.string "saying that... that all of our troops are\l"
	.string "getting shot to pieces.$"

Route136_Event_Script_SamHeart2_Text_26:
# 181 "data/maps/Route136/scripts.pory"
	.string "SAM: Don't believe everything you hear!$"

Route136_Event_Script_SamHeart2_Text_27:
# 183 "data/maps/Route136/scripts.pory"
	.string "SAM: Don't you remember how strong Dad\n"
	.string "is? He'd never let a pathetic Gotoro\l"
	.string "grunt get him like that! Don't you\l"
	.string "worry!$"

Route136_Event_Script_SamHeart2_Text_28:
# 185 "data/maps/Route136/scripts.pory"
	.string "SAM: And always remember that Mom and I\n"
	.string "are here to play with you if you ever\l"
	.string "feel lonely.$"

Route136_Event_Script_SamHeart2_Text_29:
# 187 "data/maps/Route136/scripts.pory"
	.string "Okay!$"

Route136_Event_Script_SamHeart2_Text_30:
# 194 "data/maps/Route136/scripts.pory"
	.string "SAM: To be honest, I have no idea if my\n"
	.string "old man will come back... We've all read\l"
	.string "the reports. Our soldiers are falling by\l"
	.string "the thousands.\n"
	.string "But what am I going to say to Vincent?$"

Route136_Event_Script_SamHeart2_Text_31:
# 196 "data/maps/Route136/scripts.pory"
	.string "It's best to be honest with kids.$"

Route136_Event_Script_SamHeart2_Text_32:
# 196 "data/maps/Route136/scripts.pory"
	.string "You did the right thing. Kids should have hope.$"

Route136_Event_Script_SamHeart2_Text_33:
# 201 "data/maps/Route136/scripts.pory"
	.string "SAM: You think so?$"

Route136_Event_Script_SamHeart2_Text_34:
# 204 "data/maps/Route136/scripts.pory"
	.string "SAM: Maybe you're right... The world is a\n"
	.string "cruel place, but kids have to learn that\l"
	.string "one way or another.$"

Route136_Event_Script_SamHeart2_Text_35:
# 206 "data/maps/Route136/scripts.pory"
	.string "SAM: Yeah... kids should play and have\n"
	.string "fun while they still have the chance.$"

Route136_Event_Script_SamHeart2_Text_36:
# 216 "data/maps/Route136/scripts.pory"
	.string "SAM: Hey did I tell you the band's\n"
	.string "starting to come together?$"

Route136_Event_Script_SamHeart2_Text_37:
# 218 "data/maps/Route136/scripts.pory"
	.string "SAM: Yeah! It turns out Abigail's a\n"
	.string "pretty good drummer. And Sebastian\l"
	.string "seemed to really want her in the band...$"
