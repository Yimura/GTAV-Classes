#pragma once

#include "../base/CBaseModelInfo.hpp"

#include <cstdint>

class CPedModelInfo : public CBaseModelInfo
{
public:
    char gapB0[48];
    uint64_t qwordE0;
    uint32_t dwordE8;
    char gapEC[4];
    uint32_t dwordF0;
    char gapF4[4];
    uint64_t qwordF8;
    uint32_t dword100;
    uint64_t qword108;
    uint64_t qword110;
    uint64_t qword118;
    uint64_t qword120;
    uint64_t qword128;
    uint32_t dword130;
    char gap134[148];
    uint64_t qword1C8;
    uint32_t dword1D0;
    uint64_t qword1D8;
    uint32_t dword1E0;
    char gap1E4[52];
    uint64_t qword218;
    char gap220[8];
    uint64_t qword228;
    uint32_t dword230;
    char gap234[4];
    uint32_t dword238;
    char gap23C[12];
    uint64_t qword248;
    uint64_t qword250;
    uint64_t qword258;
    uint64_t qword260;
    uint64_t qword268;
    uint64_t qword270;
    uint64_t qword278;
    char gap280[16];
};
static_assert(sizeof(CPedModelInfo) == 0x290);
