#pragma once
#define Z_EN_BLKOBJ_H

#include "ultra64.h"
#include "global.h"

struct EnBlkobj;

typedef void (*EnBlkobjActionFunc)(struct EnBlkobj*, GlobalContext*);


struct EnBlkobj {

    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ s16 alpha;
    /* 0x0166 */ s16 timer;
    /* 0x0168 */ EnBlkobjActionFunc actionFunc;
}; 


