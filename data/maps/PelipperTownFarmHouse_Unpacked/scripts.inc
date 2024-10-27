PelipperTownFarmHouse_Unpacked_MapScripts::
# 32 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PelipperTownFarmHouse_Unpacked_Helper
# 16 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 25 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	map_script_2 VAR_TEMP_E, 10, PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 30 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, PelipperTownFarmHouse_Unpacked_EventScript_Warp
	.2byte 0

PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 19 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymoveplayer Common_Movement_ExclamationMark
# 20 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	msgbox PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	msgbox PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	closemessage
# 23 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_D, 1
	return

PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 27 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setvar VAR_TEMP_F, 1
# 28 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
	return


PelipperTownFarmHouse_Unpacked_Helper::
# 36 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setvar VAR_TEMP_F, 0
# 37 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setvar VAR_TEMP_E, 0
# 38 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setvar VAR_TEMP_D, 1
	return


PelipperTownFarmHouse_Unpacked_EventScript_Warp::
# 45 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 46 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	msgbox PelipperTownFarmHouse_Unpacked_EventScript_Warp_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	closemessage
# 48 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	warp MAP_PELIPPER_TOWN_FARMERS_HOUSE, 4, 5
# 49 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitstate
	return


PelipperTownFarmHouse_Unpacked_EventScript_Box1::
# 53 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 54 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_1, PelipperTownFarmHouse_Unpacked_EventScript_Box1_2
# 62 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 63 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 64 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_1
# 65 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box1_1:
# 68 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box1_2:
# 55 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 56 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 57 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 58 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_1
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box1_1


PelipperTownFarmHouse_Unpacked_EventScript_Box2::
# 72 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 73 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_2, PelipperTownFarmHouse_Unpacked_EventScript_Box2_2
# 80 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 81 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 82 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_2
# 83 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box2_1:
# 85 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box2_2:
# 74 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 75 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 76 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 77 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_2
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box2_1


PelipperTownFarmHouse_Unpacked_EventScript_Box3::
# 91 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 92 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_3, PelipperTownFarmHouse_Unpacked_EventScript_Box3_2
# 99 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 100 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 101 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_3
# 102 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box3_1:
# 104 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box3_2:
# 93 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 94 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 95 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 96 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_3
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box3_1


PelipperTownFarmHouse_Unpacked_EventScript_Box4::
# 108 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 109 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_4, PelipperTownFarmHouse_Unpacked_EventScript_Box4_2
# 116 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 117 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 118 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_4
# 119 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box4_1:
# 121 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box4_2:
# 110 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 111 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 112 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 113 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_4
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box4_1


PelipperTownFarmHouse_Unpacked_EventScript_Box5::
# 125 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 126 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_5, PelipperTownFarmHouse_Unpacked_EventScript_Box5_2
# 133 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 134 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 135 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_5
# 136 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box5_1:
# 138 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box5_2:
# 127 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 128 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 129 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 130 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_5
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box5_1


PelipperTownFarmHouse_Unpacked_EventScript_Box6::
# 142 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 143 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_6, PelipperTownFarmHouse_Unpacked_EventScript_Box6_2
# 150 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 151 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 152 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_6
# 153 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box6_1:
# 155 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box6_2:
# 144 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 145 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 146 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 147 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_6
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box6_1


PelipperTownFarmHouse_Unpacked_EventScript_Box7::
# 159 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 160 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_7, PelipperTownFarmHouse_Unpacked_EventScript_Box7_2
# 167 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 168 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 169 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_7
# 170 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box7_1:
# 172 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box7_2:
# 161 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 162 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 163 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 164 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_7
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box7_1


PelipperTownFarmHouse_Unpacked_EventScript_Box8::
# 176 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 177 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_8, PelipperTownFarmHouse_Unpacked_EventScript_Box8_2
# 184 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 185 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 186 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_8
# 187 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box8_1:
# 189 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box8_2:
# 178 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 179 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 180 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 181 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_8
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box8_1


PelipperTownFarmHouse_Unpacked_EventScript_Box9::
# 193 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 194 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_9, PelipperTownFarmHouse_Unpacked_EventScript_Box9_2
# 201 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 202 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 203 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_9
# 204 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box9_1:
# 206 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box9_2:
# 195 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 196 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 197 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 198 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_9
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box9_1


PelipperTownFarmHouse_Unpacked_EventScript_Box10::
# 210 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	lock
# 211 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	goto_if_set FLAG_TEMP_A, PelipperTownFarmHouse_Unpacked_EventScript_Box10_2
# 218 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_OpenBox
# 219 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 220 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	setflag FLAG_TEMP_A
# 221 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	addvar VAR_TEMP_E, 1
PelipperTownFarmHouse_Unpacked_EventScript_Box10_1:
# 223 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	release
	return

PelipperTownFarmHouse_Unpacked_EventScript_Box10_2:
# 212 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	subvar VAR_TEMP_E, 1
# 213 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CloseBox
# 214 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	waitmovement 0
# 215 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	clearflag FLAG_TEMP_A
	goto PelipperTownFarmHouse_Unpacked_EventScript_Box10_1


# 226 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
Movement_OpenBox:
# 227 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	open_box
	step_end

# 230 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
Movement_CloseBox:
# 231 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	close_box
	step_end

PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 20 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	.string "{PLAYER}: Jeez, this is a mess.$"

PelipperTownFarmHouse_Unpacked_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 21 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	.string "{PLAYER}: Well, my things are not\n"
	.string "gonna unpack themselves!$"

PelipperTownFarmHouse_Unpacked_EventScript_Warp_Text_0:
# 46 "data/maps/PelipperTownFarmHouse_Unpacked/scripts.pory"
	.string "{PLAYER}: Alright, that should be\n"
	.string "all...$"
