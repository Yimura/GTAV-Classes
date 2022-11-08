#pragma once

#include "CCameraManagerAngles.hpp"

class CGameCameraAngles
{
public:
    CCameraManagerAngles* m_angles; //0x0000
    char pad_0008[56]; //0x0008
}; //Size: 0x0040
static_assert(sizeof(CGameCameraAngles) == 0x40);
