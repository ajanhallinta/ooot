#pragma once

enum PlayerState1
{
	PLAYER_STATE1_0 = 1 << 0,               // 0x00000001
	PLAYER_STATE1_1 = 1 << 1,               // 0x00000002
	PLAYER_STATE1_2 = 1 << 2,               // 0x00000004
	PLAYER_STATE1_3 = 1 << 3,               // 0x00000008
	PLAYER_STATE1_4 = 1 << 4,               // 0x00000010
	PLAYER_STATE1_5 = 1 << 5,               // 0x00000020
	PLAYER_STATE1_6 = 1 << 6,               // 0x00000040
	PLAYER_STATE1_7 = 1 << 7,               // 0x00000080
	PLAYER_STATE1_8 = 1 << 8,               // 0x00000100
	PLAYER_STATE1_9 = 1 << 9,               // 0x00000200
	PLAYER_STATE1_10 = 1 << 10,             // 0x00000400
	PLAYER_STATE1_11 = 1 << 11,             // 0x00000800
	PLAYER_STATE_SWORD_CHARGE = 1 << 12,	// 0x00001000
	PLAYER_STATE1_13 = 1 << 13,             // 0x00002000
	PLAYER_STATE1_14 = 1 << 14,             // 0x00004000
	PLAYER_STATE1_15 = 1 << 15,             // 0x00008000
	PLAYER_STATE1_16 = 1 << 16,             // 0x00010000
	PLAYER_STATE1_17 = 1 << 17,             // 0x00020000
	PLAYER_STATE1_18 = 1 << 18,             // 0x00040000
	PLAYER_STATE1_19 = 1 << 19,             // 0x00080000
	PLAYER_STATE1_20 = 1 << 20,             // 0x00100000
	PLAYER_STATE1_21 = 1 << 21,             // 0x00200000
	PLAYER_STATE1_22 = 1 << 22,             // 0x00400000
	PLAYER_STATE_HORSE_MOUNTED = 1 << 23,	// 0x00800000
	PLAYER_STATE1_24 = 1 << 24,             // 0x01000000
	PLAYER_STATE1_25 = 1 << 25,             // 0x02000000
	PLAYER_STATE1_26 = 1 << 26,             // 0x04000000
	PLAYER_STATE_SWIMMING = 1 << 27,		// 0x08000000
	PLAYER_STATE1_28 = 1 << 28,             // 0x10000000
	PLAYER_STATE1_29 = 1 << 29,             // 0x20000000
	PLAYER_STATE1_30 = 1 << 30,             // 0x40000000
	PLAYER_STATE1_31 = 1 << 31,             // 0x80000000
};

enum PlayerState2
{
	PLAYER_STATE2_0 = 1 << 0, // 0x00000001
	PLAYER_STATE2_1 = 1 << 1,				  // 0x00000002
	PLAYER_STATE2_2 = 1 << 2,				  // 0x00000004
	PLAYER_STATE2_3 = 1 << 3,				  // 0x00000008
	PLAYER_STATE2_4 = 1 << 4,				  // 0x00000010
	PLAYER_STATE2_5 = 1 << 5,				  // 0x00000020
	PLAYER_STATE2_6 = 1 << 6,				  // 0x00000040
	PLAYER_STATE2_7 = 1 << 7,				  // 0x00000080
	PLAYER_STATE2_8 = 1 << 8,				  // 0x00000100
	PLAYER_STATE2_9 = 1 << 9,				  // 0x00000200
	PLAYER_STATE2_10 = 1 << 10,				  // 0x00000400
	PLAYER_STATE2_11 = 1 << 11,				  // 0x00000800
	PLAYER_STATE2_12 = 1 << 12,				  // 0x00001000
	PLAYER_STATE2_ZTARGET_CHANGED = 1 << 13, // 0x00002000
	PLAYER_STATE2_14 = 1 << 14,				  // 0x00004000
	PLAYER_STATE2_15 = 1 << 15,				  // 0x00008000
	PLAYER_STATE2_16 = 1 << 16,				  // 0x00010000
	PLAYER_STATE2_17 = 1 << 17,				  // 0x00020000
	PLAYER_STATE2_18 = 1 << 18,				  // 0x00040000
	PLAYER_STATE2_19 = 1 << 19,				  // 0x00080000
	PLAYER_STATE2_20 = 1 << 20,				  // 0x00100000
	PLAYER_STATE2_21 = 1 << 21,				  // 0x00200000
	PLAYER_STATE2_22 = 1 << 22,				  // 0x00400000
	PLAYER_STATE2_23 = 1 << 23,				  // 0x00800000
	PLAYER_STATE2_24 = 1 << 24,				  // 0x01000000
	PLAYER_STATE2_25 = 1 << 25,				  // 0x02000000
	PLAYER_STATE2_26 = 1 << 26,				  // 0x04000000
	PLAYER_STATE2_27 = 1 << 27,				  // 0x08000000
	PLAYER_STATE2_28 = 1 << 28,				  // 0x10000000
	PLAYER_STATE2_29 = 1 << 29,				  // 0x20000000
	PLAYER_STATE2_30 = 1 << 30,				  // 0x40000000
	PLAYER_STATE2_31 = 1 << 31,				  // 0x80000000
};

static_assert((1 << 13) == 0x2000, "bah");