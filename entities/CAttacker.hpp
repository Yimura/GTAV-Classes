#pragma once

#include "../ped/CPed.hpp"

#pragma pack(push, 1)
class CAttacker
{
public:
	CPed* m_ped0; //0x0000 
	char pad_0x0008[0x10]; //0x0008
	CPed* m_ped1; //0x0018 
	char pad_0x0020[0x10]; //0x0020
	CPed* m_ped2; //0x0030 
}; //Size=0x0038
#pragma pack(pop)