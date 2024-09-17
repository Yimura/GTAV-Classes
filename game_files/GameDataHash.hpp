#pragma once
#include "security/ObfVar.hpp"
#include <array>

#pragma pack(push, 8)
class GameDataHash
{
public:
	bool m_is_japanese_version;
	std::array<rage::Obf32, 16> m_data;
};
static_assert(sizeof(GameDataHash) == 0x104);
#pragma pack(pop)