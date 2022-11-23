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
    rage::fvector3 model_coords;
    float pad;
};
static_assert(sizeof(CPedBoneInfo) == 0x10);