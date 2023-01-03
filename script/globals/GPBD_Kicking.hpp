#pragma once
#include "../types.hpp"

struct GPBD_KickingEntry
{
    SCR_ARRAY<uint64_t, 32> KickVotes; // players you are voting to kick (array of bool)
    SCR_ARRAY<uint64_t, 32> KickWarningsShown;
    SCR_BOOL                WillBeKickedSoon;
    SCR_ARRAY<uint64_t, 32> PlayersToBeKickedSoon;
};
static_assert(sizeof(GPBD_KickingEntry) == 100 * 8);

struct GPBD_Kicking
{
    SCR_ARRAY<GPBD_KickingEntry, 32> Entries;
};
static_assert(sizeof(GPBD_Kicking) == 3201 * 8);