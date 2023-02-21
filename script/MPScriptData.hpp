#pragma once
#include "types.hpp"

struct MP_SCRIPT_DATA
{
    SCR_INT  Index; // this is an enum
    uint64_t Args[15];
    SCR_INT  InstanceId;
    uint64_t MoreArgs[4];
};
static_assert(sizeof(MP_SCRIPT_DATA) == 21 * 8);