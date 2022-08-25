#pragma once

#include <cstdint>

class CPed;

#pragma pack(push, 8)
class CPedInventory
{
public:
    virtual ~CPedInventory();
    virtual void _0x0008();
    virtual void _0x0010();
    virtual void _0x0018();

    uint64_t unk_0008;
    CPed* m_ped;
    uint64_t unk_0018;
    uint32_t unk_0020;
    uint64_t unk_0028;
    uint64_t unk_0030;
    uint32_t unk_0038;
    char pad_003C[4];
    char unk_0040;
    char pad_0041[7];
    uint64_t unk_0048;
    uint32_t unk_0050;
    uint64_t unk_0058;
    uint64_t unk_0060;
    uint32_t unk_0068;
    char pad_006C[4];
    char unk_0070;
    char pad_0071[7];
    char unk_0078;
    char pad_0079[7];
    uint64_t unk_0080;
};
static_assert(sizeof(CPedInventory) == 0x88);
#pragma pack(pop)
