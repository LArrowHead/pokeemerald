BattleFrontier_ScottsHouse_EventObjects: @ 853D2B0
	object_event 1, EVENT_OBJ_GFX_SCOTT, 0, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, BattleFrontier_ScottsHouse_EventScript_2636A8, 0

BattleFrontier_ScottsHouse_MapWarps: @ 853D2C8
	warp_def 2, 7, 3, 5, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 3, 7, 3, 5, MAP_BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_ScottsHouse_MapEvents:: @ 853D2D8
	map_events BattleFrontier_ScottsHouse_EventObjects, BattleFrontier_ScottsHouse_MapWarps, 0x0, 0x0

