#pragma once
#include "../types.hpp"

struct GSBD_Kicking
{
    SCR_ARRAY<uint64_t, 32> KickedPlayers;
};
static_assert(sizeof(GSBD_Kicking) == 33 * 8);