#pragma once

#include <cstdint>

namespace rage
{
#pragma pack(push, 4)
    class fwDrawData
    {
    public:
        std::uint64_t qword0;
        std::uint64_t qword8;
        char gap10[8];
        std::uint32_t dword18;
        std::uint32_t dword1C;
        std::uint64_t qword20;
        std::uint32_t dword28;
    };
    static_assert(sizeof(fwDrawData) == 0x2C);
#pragma pack(pop)
}
