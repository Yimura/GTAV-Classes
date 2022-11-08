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
        scrThreadContext m_context;                 // 0x08
        void* m_stack;                              // 0xB0
        char m_padding[0x4];                        // 0xB8
        uint32_t m_arg_size;                        // 0xBC
        uint32_t m_arg_loc;                         // 0xC0
        char m_padding2[0x4];                       // 0xC4
        const char* m_exit_message;                 // 0xC8
        char m_pad[0x4];
        char m_name[0x40];                          // 0xD4
        scriptHandler* m_handler;                   // 0x114
        scriptHandlerNetComponent* m_net_component; // 0x11C

    };
}