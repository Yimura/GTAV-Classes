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
        class CBaseModelInfo *m_model_info; //0x0020
        char gap28; //0x0028
        uint8_t m_entity_type; //0x0029
        char gap2A[2]; //0x002A
        uint8_t m_invisible; //0x002C
        char gap2D[3]; //0x002D
        class CNavigation *m_navigation; //0x0030
        char gap38[16]; //0x0038
        class rage::fwDrawData *m_draw_data; //0x0048
        char gap50[16]; //0x0050
        fmatrix44 m_transformation_matrix; //0x0060
        uint64_t qwordA0; //0x00A0
        uint32_t dwordA8; //0x00A8
        uint32_t dwordAC; //0x00AC
        uint32_t dwordB0; //0x00B0
        char gapB4[4]; //0x00B4
        std::uint8_t byteB8; //0x00B8
    };
    static_assert(sizeof(fwEntity) == 0xB9);
#pragma pack(pop)
}
