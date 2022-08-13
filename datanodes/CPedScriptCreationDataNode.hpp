#pragma once

class CPedScriptCreationDataNode
{
public:
    char pad_0x0[192]; //0x0000
    bool m_stay_in_car_when_jacked; //0x00C0
}; //Size: 0x00C1
static_assert(sizeof(CPedScriptCreationDataNode) == 0xC1);