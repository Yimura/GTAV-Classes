#pragma once

#include "../network/netPlayer.hpp"
#include "scriptHandler.hpp"
#include "scrThread.hpp"

#pragma pack(push, 1)
namespace rage
{
    class netLoggingInterface;

    class scriptHandlerMgr
    {
    public:
        virtual ~scriptHandlerMgr() = default;

        // Initializes some scripting-related pools.
        virtual bool initialize() = 0;                                                          // 1 (0x08)

        // Called every tick.
        virtual void _0x10() = 0;                                                               // 2 (0x10)

        // Frees some scripting-related pools.
        virtual void shutdown() = 0;                                                            // 3 (0x18)

        virtual void _0x20() = 0;                                                               // 4 (0x20)
        virtual void _0x28() = 0;                                                               // 5 (0x28)
        virtual void _0x30() = 0;                                                               // 6 (0x30)

        // Generates a rage::scriptId from the thread and copies it over to a global structure.
        virtual void _0x38(scrThread*) = 0;                                                     // 7 (0x38)

        // Allocates and constructs a script handler.
        virtual scriptHandler *create_script_handler() = 0;                                     // 8 (0x40)

        // Finds the script handler for a given script id.
        virtual scriptHandler *get_script_handler(scriptId*) = 0;                               // 9 (0x48)

        // Attaches a script thread.
        virtual void attach_thread(scrThread*) = 0;                                             // 10 (0x50)

        // Detaches a script thread.
        virtual void detach_thread(scrThread*) = 0;                                             // 11 (0x58)

        // Called when a player joins.
        virtual void on_player_join(netPlayer*) = 0;                                            // 12 (0x60)

        // Called when a player leaves.
        virtual void on_player_left(netPlayer*) = 0;                                            // 13 (0x68)

        virtual std::int32_t _0x70() = 0;                                                       // 14 (0x70)
        virtual void *_0x78() = 0;                                                              // 15 (0x78)
    public:
        char m_padding1[0x28];                         // 0x08
        bool m_initialized;                            // 0x30
        bool m_initialized2;                           // 0x31
        char m_padding2[0x0E];                         // 0x32
        netLoggingInterface *m_logger;           // 0x40
    };
}
#pragma pack(pop)