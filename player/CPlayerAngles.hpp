#pragma once

#include "../rage/vector.hpp"

class CPlayerCameraData;

class CPlayerAngles
{
public:
    char pad_0000[16]; //0x0000
    CPlayerCameraData* m_cam_data; //0x0010
    char pad_0018[24]; //0x0018
    rage::fvector3 m_right; //0x0030
    char pad_003C[4]; //0x003C
    rage::fvector3 m_forward; //0x0040
    char pad_004C[4]; //0x004C
    rage::fvector3 m_up; //0x0050
    char pad_005C[4]; //0x005C
    rage::fvector3 m_position; //0x0060
    char pad_006C[36]; //0x006C
}; //Size: 0x0090
static_assert(sizeof(CPlayerAngles) == 0x90);
