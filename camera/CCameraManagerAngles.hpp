#pragma once

#include "CCameraAngles.hpp"

class CCameraManagerAngles
{
public:
    CCameraAngles* m_angles; //0x0000
}; //Size: 0x0008
static_assert(sizeof(CCameraManagerAngles) == 0x8);
