#pragma once
#include "vector.hpp"

namespace rage
{
    struct grcViewport
    {
        fmatrix44 m_world;
        fmatrix44 m_worldView;
        fmatrix44 m_worldViewProj;
        fmatrix44 m_inverseView;
        fmatrix44 m_view;
        fmatrix44 m_projection;
    };
}