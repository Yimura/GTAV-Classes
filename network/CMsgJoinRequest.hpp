#pragma once
#include <cstdint>

#include "game_files/GameDataHash.hpp"
#include "CNetGamePlayerDataMsg.hpp"
#include "rage/rlGamerHandle.hpp"

#pragma pack(push, 8)
class CMsgJoinRequest
{
public:
	std::uint32_t m_version_number;
	std::uint32_t m_flags;
	std::uint32_t m_unk_zero;
	std::uint32_t m_magic;
	GameDataHash m_game_data_hash;
	std::uint32_t m_dlc_hash;
	std::uint32_t m_timeout_time;
	std::uint32_t dword10C;
	bool m_no_handle;
	rage::rlGamerHandle m_gamer_handle;
	CNetGamePlayerDataMsg m_player_data_msg;
};
static_assert(sizeof(CMsgJoinRequest) == 0x178);
#pragma pack(pop)