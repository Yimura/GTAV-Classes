#pragma once
#include "../rage/sysMemAllocator.hpp"
#include "scrThread.hpp"

#if _WIN32
#include <intrin.h>
#endif

namespace rage
{
#pragma pack(push, 1)
    class tlsContext
    {
    public:
        char gap0[180];
        std::uint8_t m_unk_byte; // 0xB4
        char gapB5[3];
        sysMemAllocator *m_allocator; // 0xB8
        sysMemAllocator *m_allocator2; // 0xC0 - Same as 0xB8
        sysMemAllocator *m_allocator3; // 0xC8 - Same as 0xB8
        uint32_t m_console_smth; // 0xD0
        char gapD4[188];
        uint64_t m_unk; // 0x190
        char gap198[1712];
        rage::scrThread *m_script_thread; // 0x848
        bool m_is_script_thread_active; // 0x850

#if _WIN32
        static tlsContext* get()
        {
            constexpr std::uint32_t TlsIndex = 0x0;
            return *reinterpret_cast<tlsContext**>(__readgsqword(0x58) + TlsIndex);
        }
#endif
    };
    static_assert(sizeof(tlsContext) == 0x851);
#pragma pack(pop)
}