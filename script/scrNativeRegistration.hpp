#pragma once
#include <cstdint>

namespace rage
{
    class scrNativeRegistration
    {
    public:
        uint64_t m_next_registration1;
        uint64_t m_next_registration2;
        void* m_handlers[7];
        uint32_t m_num_entries1;
        uint32_t m_num_entries2;
        uint64_t m_hashes;
        scrNativeRegistration* get_next_registration() {
            std::uintptr_t result;
            auto nextReg = uintptr_t(&m_next_registration1);
            auto newReg = nextReg ^ m_next_registration2;
            auto charTableOfRegs = (char*)&result - nextReg;
            for (auto i = 0; i < 3; i++) {
                *(std::uint32_t*)&charTableOfRegs[nextReg] = static_cast<std::uint32_t>(newReg) ^ *(std::uint32_t*)nextReg;
                nextReg += 4;
            }
            return reinterpret_cast<scrNativeRegistration*>(result);
        }

        std::uint32_t get_num_entries() {
            return static_cast<std::uint32_t>(((std::uintptr_t)&m_num_entries1) ^ m_num_entries1 ^ m_num_entries2);
        }

        std::uint64_t get_hash(std::uint32_t index) {
            auto nativeAddress = 16 * index + std::uintptr_t(&m_next_registration1) + 0x54;
            std::uint64_t result;
            auto charTableOfRegs = (char*)&result - nativeAddress;
            auto addressIndex = nativeAddress ^ *(std::uint32_t*)(nativeAddress + 8);
            for (auto i = 0; i < 3; i++) {
                *(std::uint32_t*)&charTableOfRegs[nativeAddress] = static_cast<std::uint32_t>(addressIndex ^ *(std::uint32_t*)(nativeAddress));
                nativeAddress += 4;
            }
            return result;
        }
    };
}