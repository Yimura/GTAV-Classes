#pragma once

namespace rage
{
    class nonPhysicalPlayerDataBase
    {
    public:
        virtual ~nonPhysicalPlayerDataBase();
        virtual void _0x08();
        virtual void _0x10();
        virtual void _0x18();
        virtual void log();
    }; //Size: 0x0008
    static_assert(sizeof(nonPhysicalPlayerDataBase) == 0x8);
}

class CNonPhysicalPlayerData : public rage::nonPhysicalPlayerDataBase
{
public:
	int32_t m_bubble_id; //0x0008
	int32_t m_player_id; //0x000C
	rage::vector3 m_position; //0x0010
}; //Size: 0x001C
static_assert(sizeof(CNonPhysicalPlayerData) == 0x1C);
