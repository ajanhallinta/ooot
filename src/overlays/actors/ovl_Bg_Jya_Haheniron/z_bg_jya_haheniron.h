#pragma once
#define Z_BG_JYA_HAHENIRON_H

#include "ultra64.h"
#include "global.h"

struct BgJyaHaheniron;

typedef void (*BgJyaHahenironActionFunc)(struct BgJyaHaheniron*, GlobalContext*);


struct BgJyaHaheniron {

    /* 0x0000 */ Actor actor;
    /* 0x014C */ BgJyaHahenironActionFunc actionFunc;
    /* 0x0150 */ ColliderJntSph collider;
    /* 0x0170 */ ColliderJntSphElement colliderItems[1];
    /* 0x01B0 */ s16 timer;
}; 


