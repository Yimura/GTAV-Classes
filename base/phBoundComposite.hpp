#pragma once

#include <cstdint>
#include "phBound.hpp"
#include "../rage/vector.hpp"

namespace rage
{
#pragma pack(push,8)
    class phBoundComposite : public phBound
    {
    public:
        class phBound** m_bounds; //0x0070
        fmatrix34* m_current_matrices; //0x0078
        fmatrix34* m_last_matrices; //0x0080
        fvector3* unk_0088; //0x0088
        uint32_t* m_type_and_include_flags; //0x0090
        uint32_t* m_owned_type_and_include_flags; //0x0098
        uint16_t m_max_num_bounds; //0x00A0
        uint16_t m_num_bounds; //0x00A2
        char pad_00A4[4]; //0x00A4
        void* unk_00A8; //0x00A8
    }; //Size: 0x00B0
    static_assert(sizeof(phBoundComposite) == 0xB0);
#pragma pack(pop)
}