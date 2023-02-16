#pragma once
#include <cstdint>
#include "scrNativeHandler.hpp"

namespace rage
{
    class scrNativeRegistration
    {
    public:
        uint64_t m_next_registration; //0x0000
        uint64_t m_previous_registration; //0x0008
        rage::scrNativeHandler m_handlers[7]; //0x0010
        uint32_t m_num_entries1; //0x0048
        uint32_t m_num_entries2; //0x004C
        uint64_t m_hashes; //0x0050

        scrNativeRegistration* get_next_registration() {
            std::uint64_t result{};
            std::uintptr_t nextRegistration{ (std::uintptr_t)&m_next_registration };
            std::uintptr_t previousRegistration{ nextRegistration ^ m_previous_registration };
            std::int8_t* registrations{ (int8_t*)&result - nextRegistration };
            for (std::uint8_t i{}; i != 3; ++i) {
                *reinterpret_cast<std::uint32_t*>(&charTableOfRegs[previousRegistration]) = static_cast<std::uint32_t>(nextRegistration) ^ *(std::uint32_t*)nextRegistration;
                nextRegistration += 4;
            }
            return reinterpret_cast<scrNativeRegistration*>(result);
        }

        std::uint32_t get_num_entries() {
            return static_cast<std::uint32_t>(((std::uintptr_t)&m_num_entries1) ^ m_num_entries1 ^ m_num_entries2);
        }

        std::uint64_t get_hash(std::uint32_t index) {
            std::uint64_t result{};
            auto nativeAddress{ 16 * index + std::uintptr_t(&m_next_registration) + 0x54 };
            char* registrations{ (char*)&result - nativeAddress };
            uint32_t addressIndex{ nativeAddress ^ *(std::uint32_t*)(nativeAddress + 0x8) };
            for (std::uint8_t i{}; i != 3; ++i) {
                *(std::uint32_t*)&registrations[nativeAddress] = static_cast<std::uint32_t>(addressIndex ^ *(std::uint32_t*)(nativeAddress));
                nativeAddress += 4;
            }
            return result;
        }
    }; //Size: 0x0058
    static_assert(sizeof(scrNativeRegistration) == 0x58);
}