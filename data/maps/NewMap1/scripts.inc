NewMap1_MapScripts::
# 7 "data/maps/NewMap1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PelipperTown_Music
	.byte 0


PelipperTown_Music::
# 11 "data/maps/NewMap1/scripts.pory"
	fadeoutbgm 0
# 12 "data/maps/NewMap1/scripts.pory"
	getseason
# 0 "data/maps/NewMap1/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/NewMap1/scripts.pory"
	case 1, PelipperTown_Music_2
# 16 "data/maps/NewMap1/scripts.pory"
	case 2, PelipperTown_Music_3
# 18 "data/maps/NewMap1/scripts.pory"
	case 3, PelipperTown_Music_4
# 20 "data/maps/NewMap1/scripts.pory"
	case 4, PelipperTown_Music_5
	return

PelipperTown_Music_2:
# 15 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_PELIPPERTOWN_SPRING, TRUE
	return

PelipperTown_Music_3:
# 17 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_PELIPPERTOWN_SUMMER, TRUE
	return

PelipperTown_Music_4:
# 19 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_PELIPPERTOWN_FALL, TRUE
	return

PelipperTown_Music_5:
# 21 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_PELIPPERTOWN_WINTER, TRUE
	return

