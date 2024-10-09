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
	goto_if_eq SamHeart1_Helper_1
	return

SamHeart1_Helper_1:
# 11 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 2
	return


LittlerootTown_SamsHouse_Event_Script_MeetSam::
# 16 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 17 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 19 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	goto_if_unset FLAG_MEETSAM, LittlerootTown_SamsHouse_Event_Script_MeetSam_2
# 26 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 3
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_3
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 5
	goto_if_lt LittlerootTown_SamsHouse_Event_Script_MeetSam_8
LittlerootTown_SamsHouse_Event_Script_MeetSam_6:
# 35 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 20 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0, MSGBOX_NPC
# 22 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
# 23 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_3:
# 27 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 28 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 1
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1

LittlerootTown_SamsHouse_Event_Script_MeetSam_7:
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2, MSGBOX_NPC
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6

LittlerootTown_SamsHouse_Event_Script_MeetSam_8:
# 31 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	compare VAR_SAM_STATE, 2
	goto_if_gt LittlerootTown_SamsHouse_Event_Script_MeetSam_7
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_6


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 46 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 47 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 48 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 50 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_Samshouse_Event_Script_SamHeart1::
# 54 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 57 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	hideobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 58 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 59 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	addobject 4
# 60 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 62 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamHeart1_Movement_Player
# 63 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playse SE_PIN
# 67 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 68 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 69 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 70 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 71 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 4
# 72 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 73 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 74 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 2, SamHeart1_Movement_2
# 75 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 2
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0
# 77 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 4
# 78 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 79 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 81 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 82 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1
# 86 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	dynmultichoice 8, 4, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 8
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_ONEHEART, LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11
# 107 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12
# 109 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	delay 16
# 111 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13, MSGBOX_DEFAULT
# 113 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 1, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 115 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	showobjectat 3, MAP_LITTLEROOT_TOWN_SAMS_HOUSE
# 116 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_SAMS_HOUSE_SEBASTIAN
# 117 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	removeobject 4
# 118 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 120 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setvar VAR_SAM_STATE, 3
# 121 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


# 124 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_Player:
# 125 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 126 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 127 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 128 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_right
	step_end

# 131 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
SamHeart1_Movement_2:
# 132 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 133 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	face_down
	step_end

LittlerootTown_SamsHouse_Event_Script_Testing::
# 137 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	applymovement 5, MovementTestingSamshouse
# 138 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	waitmovement 0
	return


# 141 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
MovementTestingSamshouse:
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 143 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	walk_left
	step_end

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 27 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I'm glad I have the day off! Sebastian\n"
	.string "and I have been meaning to hang for a\l"
	.string "while. Why don't you drop by later.\l"
	.string "{PLAYER}?$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_2:
# 32 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Thanks for your help, {PLAYER}!\n"
	.string "I really think we're onto something.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 41 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 48 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I imagined...\n"
	.string "but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 49 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_0:
# 76 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Oh, hi {PLAYER}! Sebastian and I\n"
	.string "were just having a little 'jam session'.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_1:
# 84 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: We're trying to start a band, but\n"
	.string "we still don't know what kind of music\l"
	.string "to make. There's too many possibilities.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_2:
# 88 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Say, {PLAYER}... what kind of\n"
	.string "music do you like?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_3:
# 90 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Cheerful pop music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_4:
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Experimental noise rock.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_5:
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hi-Energy dance music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_6:
# 91 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Honky-tonky country music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_7:
# 93 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Hey, you know what? If you win\n"
	.string "against me in a POKEMON battle, we'll\l"
	.string "play that kind of music.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_8:
# 95 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: What do you say, Sebastian? Should\n"
	.string "we do this?$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_9:
# 99 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SEBASTIAN: ...Okay.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_10:
# 101 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Alright, {PLAYER}. Just, psst, try\n"
	.string "not to make a mess in the house or my\l"
	.string "Mom will flip.$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_11:
# 105 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Your buddy is pretty good!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_12:
# 107 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Thanks for the help, {PLAYER}.\n"
	.string "With my guitar skills, and Sebastian's\l"
	.string "wizardry on the synthesizer, we're\l"
	.string "gonna be a screaming success. I'm\l"
	.string "convinced of it!$"

LittlerootTown_Samshouse_Event_Script_SamHeart1_Text_13:
# 111 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "SAM: Now I just need to find someone to\n"
	.string "play drums...$"
