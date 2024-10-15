LittlerootTown_SamsHouse_MapScripts::
# 11 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SamHeart1_Helper
# 7 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_SamsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_SamsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script_2 VAR_SAM_STATE, 2, LittlerootTown_Samshouse_Event_Script_SamHeart1
# 9 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script_2 VAR_SAM_STATE, 6, LittlerootTown_Samshouse_Event_Script_SamHeart2
	.2byte 0


SamHeart1_Helper::
# 15 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 16 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 1
	goto_if_eq SamHeart1_Helper_1
# 19 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 5
	goto_if_eq SamHeart1_Helper_2
	return

SamHeart1_Helper_1:
# 17 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 2
	return

SamHeart1_Helper_2:
# 20 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 6
	return


LittlerootTown_SamsHouse_Event_Script_MeetSam::
# 25 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 26 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 28 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	goto_if_unset FLAG_MEETSAM, LittlerootTown_SamsHouse_Event_Script_MeetSam_2
# 35 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 3
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_3
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 40 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 5
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_8
LittlerootTown_SamsHouse_Event_Script_MeetSam_6:
# 44 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 29 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0, MSGBOX_NPC
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_3:
# 36 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 37 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 1
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_7:
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2, MSGBOX_NPC
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6

LittlerootTown_SamsHouse_Event_Script_MeetSam_8:
# 40 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 2
	goto_if_gt LittlerootTown_SamsHouse_Event_Script_MeetSam_7
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 48 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
# 51 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 55 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 56 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 58 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 59 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_Samshouse_Event_Script_SamHeart1::
# 63 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 67 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 68 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	addobject 4
# 69 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 71 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart1_Movement_Player
# 72 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_PIN
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 77 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 79 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 81 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 82 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 83 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, SamHeart1_Movement_2
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 85 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 4
# 87 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2, MSGBOX_DEFAULT
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6
# 102 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8, MSGBOX_DEFAULT
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_ONEHEART, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11
# 116 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12, MSGBOX_DEFAULT
# 118 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13, MSGBOX_DEFAULT
# 122 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 124 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 125 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removeobject 4
# 127 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 128 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 129 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 3
# 130 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


# 133 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Player:
# 134 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 136 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 136 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 136 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 137 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_right
	step_end

# 140 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_2:
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_down
	step_end

LittlerootTown_Samshouse_Event_Script_SamHeart2::
# 146 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 148 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 149 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 1, 16, 7
# 150 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 151 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 2, 5, 2
# 152 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 153 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 158 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymoveplayer SamHeart3_Player
# 159 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceDown
# 161 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1, MSGBOX_DEFAULT
# 163 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 166 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceUp
# 167 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 168 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_USE_ITEM
# 169 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 170 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceLeft
# 172 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_FALL
# 173 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 174 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 175 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 176 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_TOO_BAD, FALSE
# 177 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 178 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadeoutbgm 0
# 179 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 181 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2, MSGBOX_DEFAULT
# 182 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 186 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi1
# 187 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3, MSGBOX_DEFAULT
# 188 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 190 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 191 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 194 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi2
# 195 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5, MSGBOX_DEFAULT
# 197 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6, MSGBOX_DEFAULT
# 199 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9
# 202 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt LittlerootTown_Samshouse_Event_Script_SamHeart2_2
# 215 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 9
# 216 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14, MSGBOX_DEFAULT
LittlerootTown_Samshouse_Event_Script_SamHeart2_1:
# 221 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 222 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 224 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15, MSGBOX_DEFAULT
# 225 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 228 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_HEART
# 230 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 233 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi3
# 235 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 237 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 238 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 239 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_Samshouse_Event_Script_SamHeart2_2:
# 203 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_6
# 207 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_7
LittlerootTown_Samshouse_Event_Script_SamHeart2_5:
# 211 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_1

LittlerootTown_Samshouse_Event_Script_SamHeart2_6:
# 204 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 7
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5

LittlerootTown_Samshouse_Event_Script_SamHeart2_7:
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 8
# 209 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5


# 242 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi1:
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 244 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 247 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi2:
# 248 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi3:
# 253 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 253 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 254 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 255 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 257 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_up
	step_end

# 260 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Player:
# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 36 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I'm glad I have the day off! Sebastian\n"
	.string "and I have been meaning to hang for a\l"
	.string "while. Why don't you drop by later.\l"
	.string "{PLAYER}?$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2:
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Thanks for your help, {PLAYER}!\n"
	.string "I really think we're onto something.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I imagined...\n"
	.string "but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 58 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0:
# 85 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}! Sebastian and I\n"
	.string "were just having a little 'jam session'.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1:
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: We're trying to start a band, but\n"
	.string "we still don't know what kind of music\l"
	.string "to make. There's too many possibilities.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2:
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Say, {PLAYER}... what kind of\n"
	.string "music do you like?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3:
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Cheerful pop music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4:
# 100 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Experimental noise rock.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5:
# 100 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hi-Energy dance music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6:
# 100 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Honky-tonky country music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7:
# 102 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Hey, you know what? If you win\n"
	.string "against me in a POKEMON battle, we'll\l"
	.string "play that kind of music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8:
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What do you say, Sebastian? Should\n"
	.string "we do this?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9:
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SEBASTIAN: ...Okay.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10:
# 110 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Just, psst, try\n"
	.string "not to make a mess in the house or my\l"
	.string "Mom will flip.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11:
# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Your buddy is pretty good!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12:
# 116 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Thanks for the help, {PLAYER}.\n"
	.string "With my guitar skills, and Sebastian's\l"
	.string "wizardry on the synthesizer, we're\l"
	.string "gonna be a screaming success. I'm\l"
	.string "convinced of it!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13:
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Now I just need to find someone to\n"
	.string "play drums...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0:
# 161 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}. I was just about\n"
	.string "to have a snack.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1:
# 162 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Here, let me get something for you.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2:
# 181 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh no... What a mess.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3:
# 187 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: What was that sound?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4:
# 191 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Oh, my!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5:
# 195 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: This is absolutely terrible! What\n"
	.string "happened?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6:
# 197 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Tell her, {PLAYER}...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7:
# 199 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8:
# 199 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9:
# 199 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped it as a joke.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10:
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: They're right... That's what\n"
	.string "happened.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11:
# 209 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Yeah... That's what happened!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12:
# 211 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks for telling me the truth,\n"
	.string "{PLAYER}. It's not such a big deal.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13:
# 216 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What!? They're lying!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14:
# 218 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: You did WHAT, Sam?! What's gotten\n"
	.string "into you?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15:
# 224 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: I'm sorry about this, mom. I'll clean\n"
	.string "it up.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16:
# 230 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks, honey.$"
