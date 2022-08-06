#pragma once

#include <cstdint>

#pragma pack(push, 4)
class CPedComponents
{
public:
    uint32_t m_component_bitset; //0x0
    char pad_0x4[4]; //0x4
    uint32_t unk_0x8[12]; //0x8
    uint32_t m_drawables[12]; //0x38
    uint32_t m_textures[12]; //0x68
    uint32_t m_palettes[12]; //0x98

    inline uint32_t get_drawable(int index)
    {
        if (m_component_bitset & (1 << index))
        {
            return m_drawables[index];
        }

        return 0;
    }

    inline uint32_t get_texture(int index)
    {
        if (m_component_bitset & (1 << index))
        {
            return m_textures[index];
        }

        return 0;
    }

    inline uint32_t get_palette(int index)
    {
        if (m_component_bitset & (1 << index))
        {
            return m_palettes[index];
        }

        return 0;
    }
};
static_assert(sizeof(CPedComponents) == 0xC8);
#pragma pack(pop)