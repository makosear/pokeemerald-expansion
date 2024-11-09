LittlerootTown_Mart_MapScripts::
	.byte 0


PelipperTownMart_MartGruntTest::
# 4 "data/maps/LittlerootTown_Mart/scripts.pory"
	lock
# 5 "data/maps/LittlerootTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/LittlerootTown_Mart/scripts.pory"
	msgbox PelipperTownMart_MartGruntTest_Text_0, MSGBOX_NPC
# 7 "data/maps/LittlerootTown_Mart/scripts.pory"
	trainerbattle_no_intro TRAINER_PELIPPERTOWNMART_GRUNT1, PelipperTownMart_MartGruntTest_Text_1
# 8 "data/maps/LittlerootTown_Mart/scripts.pory"
	releaseall
	return


PelipperTownMart_MartGruntTest_Text_0:
# 6 "data/maps/LittlerootTown_Mart/scripts.pory"
	.string "hi im testing the trainer sprites for this guy$"

PelipperTownMart_MartGruntTest_Text_1:
# 7 "data/maps/LittlerootTown_Mart/scripts.pory"
	.string "slay$"
