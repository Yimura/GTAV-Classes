#pragma once
#include "../types.hpp"

// this is why your apartment generally takes years to load
struct GSBD_PropertyInstances
{
    SCR_ARRAY<GAMER_HANDLE, 32> PropertyOwners;
    uint64_t                    PAD_0417[14]; // unused
    SCR_ARRAY<uint64_t, 32>     PropertyOwnerInstances;
};
static_assert(sizeof(GSBD_PropertyInstances) == 464 * 8);