#pragma once
#include <cstdint>

#include "dataList.hpp"
#include "scriptHandlerNetComponent.hpp"
#include "scriptId.hpp"
#include "scriptResource.hpp"
#include "scrThread.hpp"

#pragma pack(push, 1)
namespace rage
{
    class scriptHandlerObject;
    class scriptHandler
    {
    public:
        class atDScriptObjectNode : public atDNode<scriptHandlerObject*>
        {
        };
    public:
        virtual ~scriptHandler() = default;                                                                   //  0 (0x00)

        virtual bool _0x08() = 0;                                                                             //  1 (0x08)

        virtual void _0x10() = 0;                                                                             //  2 (0x10)

        virtual void cleanup_objects() = 0;                                                                   //  3 (0x18)

        virtual scriptId *_0x20() = 0;                                                                        //  4 (0x20)

        virtual scriptId *get_id() = 0;                                                                       //  5 (0x28)

        // Returns whether the script handler belongs to a networked script.
        virtual bool is_networked() = 0;                                                                      //  6 (0x30)

        // Initializes the network component for the script handler.
        virtual void init_net_component() = 0;                                                                //  7 (0x38)

        // Deletes the script handler's network component, if it exists.
        virtual void reset_net_component() = 0;                                                               //  8 (0x40)

        // Destroys the script handler.
        virtual bool destroy() = 0;                                                                           //  9 (0x48)

        // Adds the object to the script handler's list of objects.
        virtual void add_object(scriptHandlerObject*, bool is_network, bool is_network_and_scriptcheck) = 0; // 10 (0x50)

        // Something related to reservations.
        virtual void _0x58(void*) = 0;                                                                        // 11 (0x58)

        virtual void register_resource(scriptResource*, void*) = 0;                                           // 12 (0x60)

        virtual void _0x68() = 0;                                                                             // 13 (0x68)

        virtual void _0x70() = 0;                                                                             // 14 (0x70)

        virtual void _0x78() = 0;                                                                             // 15 (0x78)

        virtual void _0x80() = 0;                                                                             // 16 (0x80)

        virtual void _0x88() = 0;                                                                             // 17 (0x88)

        virtual void _0x90() = 0;                                                                             // 18 (0x90)

        virtual void _0x98() = 0;                                                                             // 19 (0x98)
    public:
        void *m_0x08;                                // 0x08
        void *m_0x10;                                // 0x10
        scrThread *m_script_thread;                  // 0x18
        atDList<atDScriptObjectNode> m_objects;      // 0x20
        scriptResource *m_resource_list_head;        // 0x30
        scriptResource *m_resource_list_tail;        // 0x38
        void *m_0x40;                                // 0x40
        scriptHandlerNetComponent *m_net_component;  // 0x48
        std::uint32_t m_0x50;                        // 0x50
        std::uint32_t m_0x54;                        // 0x54
        std::uint32_t m_0x58;                        // 0x58
        std::uint32_t m_0x60;                        // 0x5C
    };
}
#pragma pack(pop)