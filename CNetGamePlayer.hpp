#include "CPlayerInfo.hpp"

class CNetGamePlayer
{
public:
	char pad_0000[24]; //0x0000
	uint32_t m_msg_id; //0x0018
	char pad_001C[4]; //0x001C
	uint8_t m_active_id; //0x0020
	uint8_t m_player_id; //0x0021
	char pad_0022[110]; //0x0022
	uint8_t m_player_flag; //0x0090
	char pad_0091[15]; //0x0091
	class CPlayerInfo* m_player_info; //0x00A0
	char pad_00A8[40]; //0x00A8
	uint32_t m_bubble_id; //0x00D0
}; //Size: 0x00D4
static_assert(sizeof(CNetGamePlayer) == 0xD4);
