#pragma once
#include "types.hpp"

// this is named stopwatch in the decompiler but "timer" is probably a better name for it
struct TIMER
{
    SCR_INT  Time;
    SCR_BOOL IsInitialized;
};
static_assert(sizeof(TIMER) == 2 * 8);