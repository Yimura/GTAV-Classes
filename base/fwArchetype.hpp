#pragma once

#include <cstdint>
#include "../rage/vector.hpp"
#include "datBase.hpp"
#include "fwArchetypeDef.hpp"

namespace rage {
    #pragma pack(push,8)
    class fwArchetype : public datBase
    {
    public:
        virtual void Initialize() = 0;
        virtual void InitializeFromArchetypeDef(uint32_t mapTypeStoreIdx, fwArchetypeDef* archetypeDef, bool) = 0;
        virtual class fwEntity* CreateEntity() = 0;

        char pad_0008[16]; //0x0008
        int32_t m_hash; //0x0018
        char unk_001C[4]; //0x001C
        fvector3 m_bounding_sphere_center; //0x0020
        float m_bounding_sphere_radius; //0x002C
        fvector3 m_aabbMin; //0x0030
        float m_lod_dist; //0x003C
        fvector3 m_aabbMax; //0x0040
        float m_hd_texture_dist; //0x004C
        uint32_t m_flags; //0x0050
        char unk_0054[4]; //0x0054
        uint64_t unk_0058; //0x0058
        char unk_0060[4]; //0x0060
        uint32_t m_asset_index; //0x0064
        uint16_t unk_0068; //0x0068
        uint16_t unk_006A; //0x006A
    };
    static_assert(sizeof(fwArchetype) == 0x70);
    #pragma pack(pop)
}