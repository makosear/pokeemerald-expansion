NewMap1_MapScripts::
# 7 "data/maps/NewMap1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PelipperTown_InitSeason
	.byte 0


PelipperTown_InitSeason::
# 11 "data/maps/NewMap1/scripts.pory"
	fadeoutbgm 0
# 12 "data/maps/NewMap1/scripts.pory"
	getseason
# 0 "data/maps/NewMap1/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/NewMap1/scripts.pory"
	case 1, PelipperTown_InitSeason_3
# 16 "data/maps/NewMap1/scripts.pory"
	case 2, PelipperTown_InitSeason_4
# 18 "data/maps/NewMap1/scripts.pory"
	case 3, PelipperTown_InitSeason_5
# 20 "data/maps/NewMap1/scripts.pory"
	case 4, PelipperTown_InitSeason_6
PelipperTown_InitSeason_1:
	getseason
# 0 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ne PelipperTown_InitSeason_7
	return

PelipperTown_InitSeason_3:
# 15 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_HG_NEW_BARK, TRUE
	goto PelipperTown_InitSeason_1

PelipperTown_InitSeason_4:
# 17 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_DP_SUNYSHORE_DAY, TRUE
	goto PelipperTown_InitSeason_1

PelipperTown_InitSeason_5:
# 19 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_DP_CANALAVE_DAY, TRUE
	goto PelipperTown_InitSeason_1

PelipperTown_InitSeason_6:
# 21 "data/maps/NewMap1/scripts.pory"
	playbgm MUS_DP_ROUTE216_DAY, TRUE
	goto PelipperTown_InitSeason_1

PelipperTown_InitSeason_7:
	random 3
# 0 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PelipperTown_InitSeason_9
	return

PelipperTown_InitSeason_9:
# 27 "data/maps/NewMap1/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return

