#pragma once

#pragma pack(push, 8)
namespace rage
{
    class scriptHandler;
    class scriptHandlerNetComponent
    {
    public:
        virtual ~scriptHandlerNetComponent() = default;

    public:
        scriptHandler *m_script_handler; // 0x08
    };
    static_assert(sizeof(scriptHandlerNetComponent) == 0x10);
}
#pragma pack(pop)