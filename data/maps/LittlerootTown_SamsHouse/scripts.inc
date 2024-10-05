LittlerootTown_SamsHouse_MapScripts::
	.byte 0


LittlerootTown_SamsHouse_Event_Script_MeetSam::
# 4 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 5 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 6 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 7 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	goto_if_set FLAG_MEETSAM, LittlerootTown_SamsHouse_Event_Script_MeetSam_2
# 11 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1, MSGBOX_NPC
# 12 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	setflag FLAG_MEETSAM
LittlerootTown_SamsHouse_Event_Script_MeetSam_1:
# 14 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	fadedefaultbgm
# 15 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return

LittlerootTown_SamsHouse_Event_Script_MeetSam_2:
# 8 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0, MSGBOX_NPC
	goto LittlerootTown_SamsHouse_Event_Script_MeetSam_1


LittlerootTown_SamsHouse_Event_Script_Vincent::
# 19 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 20 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0, MSGBOX_NPC
# 22 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_Jodi::
# 26 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	lock
# 27 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	faceplayer
# 28 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0, MSGBOX_NPC
# 29 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	msgbox LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1, MSGBOX_NPC
# 30 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_0:
# 8 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "I wish I could get the day off...$"

LittlerootTown_SamsHouse_Event_Script_MeetSam_Text_1:
# 11 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Hey, I'm Sam. Good to meet you.$"

LittlerootTown_SamsHouse_Event_Script_Vincent_Text_0:
# 21 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh, hi! Name's Vincent!$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_0:
# 28 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Oh! You aren't exactly how I imagined...\n"
	.string "but that's okay! I'm Jodi.$"

LittlerootTown_SamsHouse_Event_Script_Jodi_Text_1:
# 29 "data/maps/LittlerootTown_SamsHouse/scripts.pory"
	.string "Have you met my boys yet?$"
