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
# 38 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 3
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_3
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 46 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 5
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_8
LittlerootTown_SamsHouse_Event_Script_MeetSam_6:
# 53 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 29 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_SMILE
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	speakername LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 33 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
# 34 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
# 35 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_3:
# 39 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_HAPPY
# 40 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	speakername LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2, MSGBOX_NPC
# 42 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
# 43 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 1
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_7:
# 47 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	createfieldmugshot MUGSHOT_SAM, EMOTE_SMILE
# 48 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	speakername LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_3, MSGBOX_NPC
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removefieldmugshot
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6

LittlerootTown_SamsHouse_Event_Script_MeetSam_8:
# 46 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 2
	goto_if_gt LittlerootTown_SamsHouse_Event_Script_MeetSam_7
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 58 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 59 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
# 60 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 65 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 67 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 68 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_Samshouse_Event_Script_SamHeart1::
# 72 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 73 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 75 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 77 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	addobject 4
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart1_Movement_Player
# 81 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 82 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 83 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_PIN
# 85 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 87 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 89 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 92 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, SamHeart1_Movement_2
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 94 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 4
# 96 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 100 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 102 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2, MSGBOX_DEFAULT
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6
# 111 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7, MSGBOX_DEFAULT
# 113 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 117 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9, MSGBOX_DEFAULT
# 119 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10, MSGBOX_DEFAULT
# 123 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_ONEHEART, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11
# 125 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12, MSGBOX_DEFAULT
# 127 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 129 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13, MSGBOX_DEFAULT
# 131 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 133 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 134 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 135 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removeobject 4
# 136 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 137 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 138 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 3
# 139 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Player:
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 145 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 146 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_right
	step_end

# 149 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_2:
# 150 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_down
	step_end

LittlerootTown_Samshouse_Event_Script_SamHeart2::
# 155 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 156 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 158 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 1, 16, 7
# 159 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 160 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectxy 2, 5, 2
# 161 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 162 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 163 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 167 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymoveplayer SamHeart3_Player
# 168 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceDown
# 170 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1, MSGBOX_DEFAULT
# 172 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 175 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceUp
# 176 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 177 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_USE_ITEM
# 178 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 30
# 179 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 2, Common_Movement_FaceLeft
# 181 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_FALL
# 182 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 183 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 184 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitse
# 185 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_TOO_BAD, FALSE
# 186 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 187 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadeoutbgm 0
# 188 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 190 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2, MSGBOX_DEFAULT
# 191 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 195 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi1
# 196 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3, MSGBOX_DEFAULT
# 197 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 199 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_EXCLAM
# 200 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4, MSGBOX_DEFAULT
# 201 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 203 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi2
# 204 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5, MSGBOX_DEFAULT
# 206 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6, MSGBOX_DEFAULT
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8, LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9
# 211 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt LittlerootTown_Samshouse_Event_Script_SamHeart2_2
# 224 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 9
# 225 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13, MSGBOX_DEFAULT
# 227 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14, MSGBOX_DEFAULT
LittlerootTown_Samshouse_Event_Script_SamHeart2_1:
# 230 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 231 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 60
# 233 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15, MSGBOX_DEFAULT
# 234 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 237 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	emote 1, EMOTE_HEART
# 239 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16, MSGBOX_DEFAULT
# 240 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	closemessage
# 242 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymove 1, SamHeart3_Jodi3
# 244 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 245 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 246 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 247 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 248 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_Samshouse_Event_Script_SamHeart2_2:
# 212 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_6
# 216 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_Samshouse_Event_Script_SamHeart2_7
LittlerootTown_Samshouse_Event_Script_SamHeart2_5:
# 220 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_1

LittlerootTown_Samshouse_Event_Script_SamHeart2_6:
# 213 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 7
# 214 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5

LittlerootTown_Samshouse_Event_Script_SamHeart2_7:
# 217 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 8
# 218 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11, MSGBOX_DEFAULT
	goto LittlerootTown_Samshouse_Event_Script_SamHeart2_5


# 251 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi1:
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 253 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 256 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi2:
# 257 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 258 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 258 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

# 261 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Jodi3:
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 262 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 263 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 264 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_down
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 266 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_up
	step_end

# 269 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart3_Player:
# 270 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
	step_end

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2:
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I'm glad I have the day off! Sebastian\n"
	.string "and I have been meaning to hang for a\l"
	.string "while. Why don't you drop by later.\l"
	.string "{PLAYER}?$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_3:
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Thanks for your help, {PLAYER}!\n"
	.string "I really think we're onto something.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 59 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I\n"
	.string "imagined... but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 67 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0:
# 94 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}! Sebastian and\n"
	.string "I were just having a little 'jam\l"
	.string "session'.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1:
# 102 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: We're trying to start a band, but\n"
	.string "we still don't know what kind of music\l"
	.string "to make. There's too many\l"
	.string "possibilities.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2:
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Say, {PLAYER}... what kind of\n"
	.string "music do you like?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3:
# 108 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Cheerful pop music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4:
# 109 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Experimental noise rock.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5:
# 109 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hi-Energy dance music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6:
# 109 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Honky-tonky country music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7:
# 111 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Hey, you know what? If you win\n"
	.string "against me in a POKEMON battle, we'll\l"
	.string "play that kind of music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8:
# 113 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What do you say, Sebastian?\n"
	.string "Should we do this?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9:
# 117 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SEBASTIAN: ...Okay.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10:
# 119 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Just, psst,\n"
	.string "try not to make a mess in the house or\l"
	.string "my Mom will flip.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11:
# 123 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Your buddy is pretty good!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12:
# 125 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Thanks for the help, {PLAYER}.\n"
	.string "With my guitar skills, and Sebastian's\l"
	.string "wizardry on the synthesizer, we're\l"
	.string "gonna be a screaming success. I'm\l"
	.string "convinced of it!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13:
# 129 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Now I just need to find someone\n"
	.string "to play drums...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_0:
# 170 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}. I was just\n"
	.string "about to have a snack.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_1:
# 171 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Here, let me get something for\n"
	.string "you.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_2:
# 190 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh no... What a mess.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_3:
# 196 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: What was that sound?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_4:
# 200 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Oh, my!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_5:
# 204 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: This is absolutely terrible!\n"
	.string "What happened?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_6:
# 206 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Tell her, {PLAYER}...$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_7:
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_8:
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I dropped the snack accidentally.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_9:
# 208 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Sam dropped it as a joke.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_10:
# 214 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: They're right... That's what\n"
	.string "happened.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_11:
# 218 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Yeah... That's what happened!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_12:
# 220 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks for telling me the truth,\n"
	.string "{PLAYER}. It's not such a big deal.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_13:
# 225 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What!? They're lying!$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_14:
# 227 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: You did WHAT, Sam?! What's\n"
	.string "gotten into you?$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_15:
# 233 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: I'm sorry about this, mom. I'll\n"
	.string "clean it up.$"

LittlerootTown_Samshouse_Event_Script_SamHeart2_Text_16:
# 239 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "JODI: Thanks, honey.$"
