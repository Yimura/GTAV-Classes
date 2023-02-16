#pragma once
#include "scriptHandler.hpp"
#include "scriptHandlerNetComponent.hpp"
#include "scrThreadContext.hpp"

namespace rage
{
    class scrThread
    {
    public:
        virtual ~scrThread() = default;                                                                 // 0 (0x00)
        virtual void reset(std::uint32_t script_hash, void* args, std::uint32_t arg_count) = 0;         // 1 (0x08)
        virtual eThreadState run() = 0;                                                                 // 2 (0x10)
        virtual eThreadState tick(std::uint32_t ops_to_execute) = 0;                                    // 3 (0x18)
        virtual void kill() = 0;

    public:
		class scrThreadContext m_context; //0x0000
		void* m_stack; //0x00A8
		uint32_t unk_00B0; //0x00B0
		uint32_t m_arg_size; //0x00B4
		uint32_t m_arg_loc; //0x00B8
		uint32_t unk_00BC; //0x00BC - Some sort of arg
		const char* m_exit_message; //0x00C0
		uint32_t unk_00C8; //0x00C8
		char m_name[64]; //0x00D0
		class scriptHandler* m_handler; //0x0110
		class CGameScriptHandlerNetComponent* m_net_component; //0x0118
    }; //Size: 0x0128
	static_assert(sizeof(scrThread) == 0x128);
}