#pragma once
#include "rage/grcViewport.hpp"

struct CViewportGame
{
public:
    virtual ~CViewportGame() = 0;

private:
    char m_pad[8];

public:
    rage::grcViewport viewport;
};