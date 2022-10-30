#pragma once
#include "../entities/CPhysical.hpp"

#pragma pack(push, 2)
class CObject : public rage::CPhysical
{
    char gap30C[60];
    uint64_t qword348;
    char gap350[8];
    uint64_t qword358;
    uint16_t word360;
    uint32_t dword362;
    uint16_t word366;
    char gap368[120];
    uint64_t qword3E0;
    char gap3E8[8];
    uint64_t qword3F0;
    uint64_t qword3F8;
    uint64_t qword400;
    uint64_t qword408;
    uint64_t qword410;
};
static_assert(sizeof(CObject) == 0x3F8);
#pragma pack(pop)
