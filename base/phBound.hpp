#pragma once

#include <cstdint>
#include "pgBase.hpp"
#include "../rage/vector.hpp"

namespace rage {
    class phBoundBase : public pgBase
    {
    };

enum class eBoundType : uint8_t
{
    SPHERE,
    CAPSULE,
    BOX = 3,
    GEOMETRY,
    BVH = 8,
    COMPOSITE = 10,
    DISC = 12,
    CYLINDER,
    PLANE = 15
};

#pragma pack(push,4)
    class phBound : public phBoundBase {
    public:
        eBoundType m_type; //0x0010
        uint8_t m_flags; //0x0011
        uint16_t m_part_index; //0x0012
        float m_radius_around_centroid; //0x0014
        char pad_0018[8]; //0x0018
        fvector4 m_bounding_box_max_xyz_margin_w; //0x0020
        fvector4 m_bounding_box_min_xyz_ref_count_w; //0x0030
        fvector4 m_centroid_offset_xyz_material_id_0_w; //0x0040
        fvector4 m_cg_offset_xyz_material_id_1_w; //0x0050
        fvector4 m_volume_distribution; //0x0060
    }; //Size: 0x0070
    static_assert(sizeof(phBound) == 0x70);
#pragma pack(pop)
}