LittlerootTown_MaysHouse_2F_MapScripts:: @ 81F9296
	map_script 3, LittlerootTown_MaysHouse_2F_MapScript1_1F92A1
	map_script 4, LittlerootTown_MaysHouse_2F_MapScript2_1F931D
	.byte 0

LittlerootTown_MaysHouse_2F_MapScript1_1F92A1: @ 81F92A1
	compare VAR_0x408D, 2
	call_if 0, LittlerootTown_MaysHouse_2F_EventScript_1F930A
	compare VAR_0x408D, 3
	call_if 4, LittlerootTown_MaysHouse_2F_EventScript_1F92CD
	compare VAR_0x4092, 4
	call_if 1, LittlerootTown_MaysHouse_2F_EventScript_2926FE
	call LittlerootTown_MaysHouse_2F_EventScript_275CE1
	setvar VAR_0x4089, 0
	end

LittlerootTown_MaysHouse_2F_EventScript_1F92CD:: @ 81F92CD
	checkflag FLAG_0x124
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F92E6
	compare VAR_0x4084, 2
	goto_if 4, LittlerootTown_MaysHouse_2F_EventScript_1F9309
	goto LittlerootTown_MaysHouse_2F_EventScript_1F92E6

LittlerootTown_MaysHouse_2F_EventScript_1F92E6:: @ 81F92E6
	checkplayergender
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F9309
	compare VAR_0x40D3, 2
	goto_if 4, LittlerootTown_MaysHouse_2F_EventScript_1F9309
	setobjectxyperm 1, 8, 2
	setobjectmovementtype 1, 7
	return

LittlerootTown_BrendansHouse_2F_EventScript_1F9309:: @ 81F9309
LittlerootTown_MaysHouse_2F_EventScript_1F9309:: @ 81F9309
	return

LittlerootTown_MaysHouse_2F_EventScript_1F930A:: @ 81F930A
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F9317
	return

LittlerootTown_MaysHouse_2F_EventScript_1F9317:: @ 81F9317
	setvar VAR_0x408D, 2
	return

LittlerootTown_MaysHouse_2F_MapScript2_1F931D: @ 81F931D
	map_script_2 VAR_0x4089, 0, LittlerootTown_MaysHouse_2F_EventScript_1F9327
	.2byte 0

LittlerootTown_MaysHouse_2F_EventScript_1F9327:: @ 81F9327
	checkplayergender
	compare VAR_RESULT, 1
	goto_eq EventScript_275D0C
	end

LittlerootTown_MaysHouse_2F_EventScript_1F9334:: @ 81F9334
	lockall
	compare VAR_0x408D, 2
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F934A
	msgbox LittlerootTown_MaysHouse_2F_Text_1F9991, 4
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_1F934A:: @ 81F934A
	delay 10
	addobject 1
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F946F
	waitmovement 0
	playse SE_PIN
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_272598
	waitmovement 0
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_27259A
	waitmovement 0
	delay 10
	playbgm MUS_GIRL_SUP, 1
	compare VAR_FACING, 2
	call_if 1, LittlerootTown_MaysHouse_2F_EventScript_1F93BA
	compare VAR_FACING, 1
	call_if 1, LittlerootTown_MaysHouse_2F_EventScript_1F93E9
	compare VAR_FACING, 3
	call_if 1, LittlerootTown_MaysHouse_2F_EventScript_1F9418
	compare VAR_FACING, 4
	call_if 1, LittlerootTown_MaysHouse_2F_EventScript_1F9440
	setvar VAR_0x408D, 3
	setflag FLAG_0x332
	clearflag FLAG_0x2D2
	setvar VAR_0x4050, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_1F93BA:: @ 81F93BA
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F9473
	waitmovement 0
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_2725A4
	waitmovement 0
	msgbox LittlerootTown_MaysHouse_2F_Text_1F959C, 4
	closemessage
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_1F9483
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F9479
	waitmovement 0
	return

LittlerootTown_MaysHouse_2F_EventScript_1F93E9:: @ 81F93E9
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F948B
	waitmovement 0
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_2725A4
	waitmovement 0
	msgbox LittlerootTown_MaysHouse_2F_Text_1F959C, 4
	closemessage
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_1F9497
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F948F
	waitmovement 0
	return

LittlerootTown_MaysHouse_2F_EventScript_1F9418:: @ 81F9418
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F949D
	waitmovement 0
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_2725A6
	waitmovement 0
	msgbox LittlerootTown_MaysHouse_2F_Text_1F959C, 4
	closemessage
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F94A4
	waitmovement 0
	return

LittlerootTown_MaysHouse_2F_EventScript_1F9440:: @ 81F9440
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F94AD
	waitmovement 0
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_2725A4
	waitmovement 0
	msgbox LittlerootTown_MaysHouse_2F_Text_1F959C, 4
	closemessage
	applymovement 255, LittlerootTown_MaysHouse_2F_Movement_1F94BB
	applymovement 1, LittlerootTown_MaysHouse_2F_Movement_1F94B2
	waitmovement 0
	return

LittlerootTown_MaysHouse_2F_Movement_1F946F: @ 81F946F
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F9473: @ 81F9473
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F9479: @ 81F9479
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F9483: @ 81F9483
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F948B: @ 81F948B
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F948F: @ 81F948F
	walk_up
	walk_in_place_fastest_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F9497: @ 81F9497
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F949D: @ 81F949D
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F94A4: @ 81F94A4
	walk_up
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F94A9: @ 81F94A9
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F94AD: @ 81F94AD
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F94B2: @ 81F94B2
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_1F94BB: @ 81F94BB
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_1F94C1:: @ 81F94C1
LittlerootTown_MaysHouse_2F_EventScript_1F94C1:: @ 81F94C1
	lockall
	checkflag FLAG_0x124
	goto_eq LittlerootTown_BrendansHouse_2F_EventScript_1F94F7
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_BrendansHouse_2F_EventScript_1F94E3
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_BrendansHouse_2F_EventScript_1F94ED
	end

LittlerootTown_BrendansHouse_2F_EventScript_1F94E3:: @ 81F94E3
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F978A, 4
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_1F94ED:: @ 81F94ED
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F9962, 4
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_1F94F7:: @ 81F94F7
	applymovement VAR_LAST_TALKED, LittlerootTown_BrendansHouse_2F_Movement_27259E
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, 0
	call_if 1, LittlerootTown_BrendansHouse_2F_EventScript_1F951D
	compare VAR_RESULT, 1
	call_if 1, LittlerootTown_BrendansHouse_2F_EventScript_1F952F
	setflag FLAG_0x125
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_1F951D:: @ 81F951D
	checkflag FLAG_0x125
	goto_eq LittlerootTown_BrendansHouse_2F_EventScript_1F9541
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F99C9, 4
	return

LittlerootTown_BrendansHouse_2F_EventScript_1F952F:: @ 81F952F
	checkflag FLAG_0x125
	goto_eq LittlerootTown_BrendansHouse_2F_EventScript_1F954A
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F9B0D, 4
	return

LittlerootTown_BrendansHouse_2F_EventScript_1F9541:: @ 81F9541
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F9A9E, 4
	return

LittlerootTown_BrendansHouse_2F_EventScript_1F954A:: @ 81F954A
	msgbox LittlerootTown_BrendansHouse_2F_Text_1F9BE7, 4
	return

gUnknown_081F9553:: @ 81F9553
	lockall
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F956C
	compare VAR_RESULT, 1
	goto_eq LittlerootTown_MaysHouse_2F_EventScript_1F9576
	end

LittlerootTown_MaysHouse_2F_EventScript_1F956C:: @ 81F956C
	msgbox gUnknown_08272CD5, 4
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_1F9576:: @ 81F9576
	setvar VAR_0x8004, 2
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gUnknown_08272D87, 4
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_1F958F:: @ 81F958F
	setvar VAR_0x8004, 2
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

LittlerootTown_MaysHouse_2F_Text_1F959C: @ 81F959C
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you’re {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I’m MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with POKéMON all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, PROF. BIRCH.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn’t it?\n"
	.string "I… I’ve just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild POKéMON!\p"
	.string "{PLAYER}{KUN}, I’ll catch you later!$"

LittlerootTown_BrendansHouse_2F_Text_1F978A: @ 81F978A
	.string "POKéMON fully restored!\n"
	.string "Items ready, and…$"

LittlerootTown_BrendansHouse_2F_Text_1F97B4: @ 81F97B4
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you’re {PLAYER}, aren’t you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn’t know that you’re a girl.\p"
	.string "Dad, PROF. BIRCH, said that our new\n"
	.string "next-door neighbor is a GYM LEADER’s\l"
	.string "kid, so I assumed you’d be a guy.\p"
	.string "My name’s BRENDAN.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don’t you have\n"
	.string "a POKéMON?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I’m supposed to go help my dad catch\n"
	.string "some wild POKéMON.\p"
	.string "Some other time, okay?$"

LittlerootTown_BrendansHouse_2F_Text_1F9962: @ 81F9962
	.string "POKéMON fully restored…\n"
	.string "Items all packed, and…$"

LittlerootTown_BrendansHouse_2F_Text_1F9991: @ 81F9991
LittlerootTown_MaysHouse_2F_Text_1F9991: @ 81F9991
	.string "It’s {RIVAL}’s POKé BALL!\p"
	.string "Better leave it right where it is.$"

LittlerootTown_BrendansHouse_2F_Text_1F99C9: @ 81F99C9
	.string "MAY: {PLAYER}{KUN}!\p"
	.string "I was just checking my POKéDEX.\p"
	.string "There’s still a lot of POKéMON that\n"
	.string "I’ve seen but haven’t caught.\p"
	.string "And there are many others that\n"
	.string "I think will evolve.\p"
	.string "I wonder where I should go catch\n"
	.string "some POKéMON next?$"

LittlerootTown_BrendansHouse_2F_Text_1F9A9E: @ 81F9A9E
	.string "MAY: I wonder where I should go catch\n"
	.string "some POKéMON next?\p"
	.string "Wouldn’t it be funny if we ran into each\n"
	.string "other, {PLAYER}{KUN}?$"

LittlerootTown_BrendansHouse_2F_Text_1F9B0D: @ 81F9B0D
	.string "BRENDAN: Hey, it’s {PLAYER}.\p"
	.string "I was just checking out my POKéDEX.\p"
	.string "There are still many POKéMON that\n"
	.string "I need to catch, I know, but this\l"
	.string "is looking pretty good.\p"
	.string "Checking this POKéDEX out gives me\n"
	.string "the urge to hit the road again.$"

LittlerootTown_BrendansHouse_2F_Text_1F9BE7: @ 81F9BE7
	.string "BRENDAN: I’m having a hard time deciding\n"
	.string "where I should catch POKéMON next.\p"
	.string "Hey, {PLAYER}, if I see you while I’m out\n"
	.string "catching POKéMON, I can pitch you a\l"
	.string "battle if you’d like.$"
