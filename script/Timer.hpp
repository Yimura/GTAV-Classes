#pragma once
#include "types.hpp"

// this is named stopwatch in the decompiler but "timer" is probably a better name for it
struct Timer
{
    SCR_INT  Time;
    SCR_BOOL IsInitialized;
};
static_assert(sizeof(Timer) == 2 * 8);