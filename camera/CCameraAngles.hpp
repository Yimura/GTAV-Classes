#pragma once

#include "../player/CPlayerAngles.hpp"

class CCameraAngles
{
public:
    char pad_0000[960]; //0x0000
    CPlayerAngles* angles; //0x03C0
    char pad_03C8[60]; //0x03C8
}; //Size: 0x0408
static_assert(sizeof(CCameraAngles) == 0x408);
