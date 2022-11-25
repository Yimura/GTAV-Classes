#pragma once

#include "../rage/vector.hpp"

enum class ePedBoneType
{
    HEAD,
    L_FOOT,
    R_FOOT,
    L_ANKLE,
    R_ANKLE,
    L_HAND,
    R_HAND,
    NECK,
    ABDOMEN
};

class CPedBoneInfo
{
public:
    rage::fvector3 model_coords;
    char pad_000C[4];
};
static_assert(sizeof(CPedBoneInfo) == 0x10);