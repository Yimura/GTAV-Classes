#pragma once
#include "rlGamerHandle.hpp"
#include "rlSessionInfo.hpp"

namespace rage
{
    class rlSessionByGamerTaskResult
    {
    public:
        rlGamerHandle m_gamer_handle{ 0 };
        rlSessionInfo m_session_info;
    };
}
