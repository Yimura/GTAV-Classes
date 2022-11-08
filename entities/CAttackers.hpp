#pragma once

class CPed; //fwdec

#pragma pack(push, 1)
class CAttackers
{
public:
    CPed* m_attacker0; //0x0000 
    char pad_0x0008[0x10]; //0x0008
    CPed* m_attacker1; //0x0018 
    char pad_0x0020[0x10]; //0x0020
    CPed* m_attacker2; //0x0030 
}; //Size=0x0038
#pragma pack(pop)