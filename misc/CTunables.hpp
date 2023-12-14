#pragma once

#include "../base/datBase.hpp"
#include "CTunableValue.hpp"

enum eTunableType
{
    TUNABLE_TYPE_INT,
    TUNABLE_TYPE_FLOAT,
    TUNABLE_TYPE_STRING,
    TUNABLE_TYPE_BOOL
};

enum eTunableTypeValue
{
    TUNABLE_TYPE_VALUE_8  = (1 << 0), // 0001
    TUNABLE_TYPE_VALUE_16 = (1 << 1), // 0010
    TUNABLE_TYPE_VALUE_32 = (1 << 2), // 0100
    TUNABLE_TYPE_VALUE_64 = (1 << 3), // 1000
    TUNABLE_TYPE_VALUE_MAX = (TUNABLE_TYPE_VALUE_8 | TUNABLE_TYPE_VALUE_16 | TUNABLE_TYPE_VALUE_32 | TUNABLE_TYPE_VALUE_64)
};

class CTunableHash
{
public:
    uint32_t TunableHash(uint32_t value)
    {
        const uint32_t hashValue = 0xE3AFC5BD;
        return value + hashValue;
    }
};

class TunablesListener
{
public:
    virtual ~TunablesListener() = default;
};
static_assert(sizeof(TunablesListener) == 0x8);

class CTunables : public rage::datBase
{
public:
    char pad_0000[104]; //0x0008
    uint64_t m_bPtr; //0x0070
    uint16_t m_bCount; //0x0078
    char pad_007A[0x4E]; //0x007A
}; //Size: 0x00C8
static_assert(sizeof(CTunables) == 0xC8);