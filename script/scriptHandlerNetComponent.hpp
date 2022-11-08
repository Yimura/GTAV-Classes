#pragma once

#pragma pack(push, 1)
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
}
#pragma pack(pop)