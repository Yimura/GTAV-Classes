#pragma once

#include "../base/CBaseModelInfo.hpp"
#include "../base/CNavigation.hpp"
#include "../base/fwExtensibleBase.hpp"

#include "../draw_handlers/fwDrawData.hpp"

#include <cstdint>

namespace rage
{
#pragma pack(push, 1)
    class fwEntity : public fwExtensibleBase
    {
    public:
        class CBaseModelInfo *m_model_info;
        char gap28;
        uint8_t m_entity_type;
        char gap2A[2];
        uint8_t m_invisible; //0x002C
        char gap2D[3]; //0x002D
        class CNavigation *m_navigation; //0x0030
        char gap38[16]; //0x0038
        class rage::fwDrawData *m_draw_data; //0x0048
        char gap50[16]; //0x0050
        rage::fvector3 m_right; //0x0060
        char gap6C[4]; //0x006C
        rage::fvector3 m_forward; //0x0070
        char gap7C[4]; //0x007C
        rage::fvector3 m_up; //0x0080
        char gap8C[4]; //0x008C
        rage::fvector3 m_position; //0x0090
        char gap9C[4]; // 0x009C
        uint64_t qwordA0;
        uint32_t dwordA8;
        uint32_t dwordAC;
        uint32_t dwordB0;
        char gapB4[4];
        std::uint8_t byteB8;
    };
    static_assert(sizeof(fwEntity) == 0xB9);
#pragma pack(pop)
}
