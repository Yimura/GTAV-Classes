#pragma once

#include <cstdint>
#include "../rage/vector.hpp"

namespace rage {
#pragma pack(push,8)
    class fwArchetypeDef
    {
    public:
        virtual ~fwArchetypeDef() = 0;
        virtual int GetTypeIdentifier() = 0;

        float m_lod_dist; //0x0008
        uint32_t m_flags; //0x000C
        uint32_t m_special_attribute; //0x0010
        char pad_0014[12]; //0x0014
        fvector4 m_bounding_box_min; //0x0020
        fvector4 m_bounding_box_max; //0x0030
        fvector4 m_bounding_sphere_center; //0x0040
        float m_bounding_sphere_radius; //0x0050
        float m_hd_texture_dist; //0x0054
        uint32_t m_name_hash; //0x0058
        uint32_t m_texture_dictionary; //0x005C
        uint32_t m_clip_dictionary_hash; //0x0060
        uint32_t m_drawable_dictionary_hash; //0x0064
        uint32_t m_physics_dictionary_hash; //0x0068
        enum eAssetType : uint32_t
        {
            ASSET_TYPE_UNINITIALIZED = 0,
            ASSET_TYPE_FRAGMENT = 1,
            ASSET_TYPE_DRAWABLE = 2,
            ASSET_TYPE_DRAWABLEDICTIONARY = 3,
            ASSET_TYPE_ASSETLESS = 4,
        } m_asset_type; //0x006C
        uint32_t m_asset_name_hash; //0x0070
        uint64_t *m_extensions; //0x0078
        uint16_t unk_0080; //0x0080
        char pad_0082[12]; //0x0082
    }; //Size: 0x0090
    static_assert(sizeof(fwArchetypeDef) == 0x90);
#pragma pack(pop)
}
