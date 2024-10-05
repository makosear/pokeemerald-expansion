LittlerootTown_SamsHouse_MapScripts::
# 5 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SamHeart1_Helper
# 2 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_SamsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_SamsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	map_script_2 VAR_SAM_STATE, 2, LittlerootTown_Samshouse_Event_Script_SamHeart1
	.2byte 0


SamHeart1_Helper::
# 9 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 10 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 1
	goto_if_eq SamHeart1_Helper_2
SamHeart1_Helper_1:
# 13 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

SamHeart1_Helper_2:
# 11 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 2
	goto SamHeart1_Helper_1


LittlerootTown_SamsHouse_Event_Script_MeetSam::
# 17 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 18 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 20 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	goto_if_set FLAG_MEETSAM, LittlerootTown_SamsHouse_Event_Script_MeetSam_2
# 25 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 26 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 27 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
# 28 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0, MSGBOX_NPC
# 22 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 1
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 34 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 35 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 36 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
# 37 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 42 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 43 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 44 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 45 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_Samshouse_Event_Script_SamHeart1::
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 52 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 53 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 54 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	addobject 4
# 55 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart1_Movement_Player
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 58 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_PIN
# 59 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 60 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 61 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, SamHeart1_Movement_Sebastian
# 62 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 63 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, SamHeart1_Movement_2
# 65 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0, MSGBOX_NPC
# 67 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, SamHeart1_Movement_1
# 68 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 69 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1, MSGBOX_NPC
# 72 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2, MSGBOX_NPC
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3, MSGBOX_NPC
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4, MSGBOX_NPC
# 82 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5, MSGBOX_NPC
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6, MSGBOX_NPC
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7, MSGBOX_NPC
# 92 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 94 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 96 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removeobject 4
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 98 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 3
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


# 102 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Player:
# 103 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 106 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_left
	step_end

# 109 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_1:
# 110 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_up
# 111 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_left
	step_end

# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Sebastian:
# 115 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_left
	step_end

# 118 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_2:
# 119 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_down
	step_end

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I'm glad I have the day off! Sebastian\n"
	.string "and I have been meaning to hang for a\l"
	.string "while. Why don't you drop by later.\l"
	.string "{PLAYER}?$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 26 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 36 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 43 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I imagined...\n"
	.string "but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 44 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0:
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}! Sebastian and I\n"
	.string "were just having a little 'jam session'.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1:
# 70 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: We're trying to start a band, but\n"
	.string "we still don't know what kind of music\l"
	.string "to make. There's too many possibilities.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2:
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Say, {PLAYER}... what kind of\n"
	.string "music do you like?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3:
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: You like Brazillian funk?\n What the heck?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4:
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What do you say, Sebastian? Should\n"
	.string "we do this?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5:
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SEBASTIAN: ...Okay.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6:
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Thanks for the help, {PLAYER}.\n"
	.string "With my guitar skills, and Sebastian's\l"
	.string "wizardry on the synthesizer, we're\l"
	.string "gonna be a screaming success. I'm\l"
	.string "convinced of it!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7:
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Now I just need to find someone to\n"
	.string "play drums...$"
