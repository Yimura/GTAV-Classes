#pragma once
#include "../types.hpp"
#include "../Timer.hpp"

struct g_AMC_playerBD_Entry
{
    SCR_ARRAY<TIMER, 79>    UsedContactServicesTimer; // only index 2 (mugger) is actually used by the scripts. the rest is just a waste of bandwidth
    SCR_ARRAY<uint64_t, 79> ContactServiceCooldowns; // same as above
};
static_assert(sizeof(g_AMC_playerBD_Entry) == 239 * 8);

struct g_AMC_playerBD
{
    SCR_ARRAY<g_AMC_playerBD_Entry, 32> Entries;
};
static_assert(sizeof(g_AMC_playerBD) == 7649 * 8);