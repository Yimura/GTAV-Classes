#pragma once

#include <cstdint>
#include "rlWorker.hpp"

namespace rage
{
    class rlAchievement : public rlWorker
    {
    public:
        bool m_is_achievement_delete; // 0x0001
        bool m_is_achievement_read; // 0x0002
        bool m_is_achievement_write; // 0x0003
        bool m_is_achievement_pending; // 0x0004
        char pad_0005{92}; // 0x0005
    };
    static_assert(sizeof(rlAchievement) == 0x10);

    class rlAchievementInfo
    {
    public:
        void* m_vmt; // 0x0000
        uint32_t m_achievement_id; // 0x0008
        uint32_t m_achievement_credibility; // 0x000C
        char m_achievement_badge[65]; // 0x0010
        char m_achievement_detaliling[200]; // 0x0054
        char pad_011C[31]; // 0x011C
    };
    static_assert(sizeof(rlAchievementInfo) == 0x138);
}