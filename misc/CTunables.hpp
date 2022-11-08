#pragma once

#include <cstdint>
#include "../base/datBase.hpp"

enum eTunableType
{
    TunableType_DONTCARE = -1,
    TunableType_UNK0,
    TunableType_4BYTE,
    TunableType_1BYTE,
};

class CTunables : public rage::datBase
{
public:
    char pad_0000[104]; //0x0008
    uint64_t m_bPtr; //0x0070
    uint16_t m_bCount; //0x0078
    char pad_007A[0x4E]; //0x007A
}; //Size: 0x00C8
static_assert(sizeof(CTunables) == 0xC8);
