#pragma once

class CPedOxygenInfo
{
public:
    char pad_0000[632]; //0x0000
    float m_oxygen_time; //0x0278
}; //Size: 0x027C
static_assert(sizeof(CPedOxygenInfo) == 0x27C);