#pragma once
#include <cstdint>

#include "../rage/joaat.hpp"

namespace rage
{
    enum class eThreadState : std::uint32_t
    {
        idle,
        running,
        killed,
        paused,
        breakpoint
    };

    class scrThreadContext
    {
    public:
		uint32_t m_thread_id; //0x0000
		joaat_t m_script_hash; //0x0004
		eThreadState m_state; //0x0008
		uint32_t m_instruction_pointer; //0x000C
		uint32_t m_frame_pointer; //0x0010
		uint32_t m_stack_pointer; //0x0014
		float m_timer_a; //0x0018
		float m_timer_b; //0x001C
		float m_timer_c; //0x0020
		char pad_0024[40]; //0x0024
		uint32_t m_stack_size; //0x004C
		uint32_t m_catch_instruction_pointer; //0x0050
		char pad_0054[84]; //0x0054
    };
    static_assert(sizeof(scrThreadContext) == 0xA8);
}