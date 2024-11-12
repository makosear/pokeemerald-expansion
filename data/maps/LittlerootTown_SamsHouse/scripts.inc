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
# 37 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 3
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_3
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 44 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 5
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_8
LittlerootTown_SamsHouse_Event_Script_MeetSam_6:
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 29 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_SMILE
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0, MSGBOX_NPC
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
# 33 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
# 34 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_3:
# 38 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_HAPPY
# 39 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 40 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 1
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_7:
# 45 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_SMILE
# 46 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2, MSGBOX_NPC
# 47 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6

LittlerootTown_SamsHouse_Event_Script_MeetSam_8:
# 44 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 2
	goto_if_gt LittlerootTown_SamsHouse_Event_Script_MeetSam_7
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 54 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 55 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 56 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 61 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 62 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 63 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 65 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_Samshouse_Event_Script_SamHeart1::
# 69 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 72 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 73 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	addobject 4
# 75 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 77 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart1_Movement_Player
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 79 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 81 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_PIN
# 82 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 83 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 85 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 87 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 89 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, SamHeart1_Movement_2
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 4
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 94 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 96 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 103 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2, MSGBOX_DEFAULT
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8, MSGBOX_DEFAULT
# 112 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9, MSGBOX_DEFAULT
# 116 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10, MSGBOX_DEFAULT
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_ONEHEART, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11
# 122 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12, MSGBOX_DEFAULT
# 124 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13, MSGBOX_DEFAULT
# 128 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 130 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 131 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 132 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removeobject 4
# 133 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 3
# 136 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


# 139 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Player:
# 140 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_right
	step_end

# 146 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_2:
# 147 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_down
	step_end

LittlerootTown_Samshouse_Event_Script_SamHeart2::
# 152 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 153 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 154 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 155 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 1, 16, 7
# 156 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 157 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 2, 5, 2
# 158 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 159 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 160 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 164 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymoveplayer SamHeart3_Player
# 165 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceDown
# 167 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0, MSGBOX_DEFAULT
# 168 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 172 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceUp
# 173 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 174 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_USE_ITEM
# 175 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 176 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceLeft
# 178 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_FALL
# 179 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 180 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 181 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 182 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_TOO_BAD, FALSE
# 183 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 184 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadeoutbgm 0
# 185 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 187 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2, MSGBOX_DEFAULT
# 188 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 192 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi1
# 193 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3, MSGBOX_DEFAULT
# 194 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 196 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 197 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4, MSGBOX_DEFAULT
# 198 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 200 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi2
# 201 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5, MSGBOX_DEFAULT
# 203 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6, MSGBOX_DEFAULT
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt LittlerootTown_Samshouse_Event_Script_SamHeart2_2
# 221 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 9
# 222 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13, MSGBOX_DEFAULT
# 224 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14, MSGBOX_DEFAULT
LittlerootTown_Samshouse_Event_Script_SamHeart2_1:
# 227 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 228 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 230 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 234 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_HEART
# 236 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16, MSGBOX_DEFAULT
# 237 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 239 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi3
# 241 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 243 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 244 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 245 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_Samshouse_Event_Script_SamHeart2_2:
# 209 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_6
# 213 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_7
LittlerootTown_Samshouse_Event_Script_SamHeart2_5:
# 217 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_1

LittlerootTown_Samshouse_Event_Script_SamHeart2_6:
# 210 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 7
# 211 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5

LittlerootTown_Samshouse_Event_Script_SamHeart2_7:
# 214 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 8
# 215 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5


# 248 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi1:
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 250 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi2:
# 254 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 255 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 255 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 258 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi3:
# 259 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 259 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 260 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 263 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_up
	step_end

# 266 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Player:
# 267 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 39 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I'm glad I have the day off! Sebastian\n"
	.string "and I have been meaning to hang for a\l"
	.string "while. Why don't you drop by later.\l"
	.string "{PLAYER}?$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2:
# 46 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Thanks for your help, {PLAYER}!\n"
	.string "I really think we're onto something.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 56 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 63 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I imagined...\n"
	.string "but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0:
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}! Sebastian and I\n"
	.string "were just having a little 'jam session'.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1:
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: We're trying to start a band, but\n"
	.string "we still don't know what kind of music\l"
	.string "to make. There's too many possibilities.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2:
# 103 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Say, {PLAYER}... what kind of\n"
	.string "music do you like?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3:
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Cheerful pop music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4:
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Experimental noise rock.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5:
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hi-Energy dance music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6:
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Honky-tonky country music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7:
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Hey, you know what? If you win\n"
	.string "against me in a POKEMON battle, we'll\l"
	.string "play that kind of music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8:
# 110 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What do you say, Sebastian? Should\n"
	.string "we do this?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9:
# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SEBASTIAN: ...Okay.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10:
# 116 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Just, psst, try\n"
	.string "not to make a mess in the house or my\l"
	.string "Mom will flip.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11:
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Your buddy is pretty good!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12:
# 122 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Thanks for the help, {PLAYER}.\n"
	.string "With my guitar skills, and Sebastian's\l"
	.string "wizardry on the synthesizer, we're\l"
	.string "gonna be a screaming success. I'm\l"
	.string "convinced of it!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13:
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Now I just need to find someone to\n"
	.string "play drums...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0:
# 167 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}. I was just about\n"
	.string "to have a snack.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1:
# 168 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Here, let me get something for you.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2:
# 187 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh no... What a mess.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3:
# 193 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: What was that sound?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4:
# 197 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Oh, my!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5:
# 201 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: This is absolutely terrible! What\n"
	.string "happened?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6:
# 203 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Tell her, {PLAYER}...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7:
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8:
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9:
# 205 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped it as a joke.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10:
# 211 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: They're right... That's what\n"
	.string "happened.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11:
# 215 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Yeah... That's what happened!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12:
# 217 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks for telling me the truth,\n"
	.string "{PLAYER}. It's not such a big deal.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13:
# 222 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What!? They're lying!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14:
# 224 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: You did WHAT, Sam?! What's gotten\n"
	.string "into you?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15:
# 230 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: I'm sorry about this, mom. I'll clean\n"
	.string "it up.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16:
# 236 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks, honey.$"
