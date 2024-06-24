#include <cstdint>
#include "scriptHandlerNetComponent.hpp"

#pragma pack(push, 8)
struct CScriptParticipant
{
	CScriptParticipant* m_next;
	CScriptParticipant* m_prev;
	CNetGamePlayer* m_net_game_player;
	std::uint16_t m_participant_id;
	std::uint16_t m_participant_index; // or "slot number"
	int m_join_time;
	char gap20[8];
};

class CGameScriptHandlerNetComponent : public rage::scriptHandlerNetComponent
{
public:
	virtual ~CGameScriptHandlerNetComponent() override = default;

	virtual bool _0x08(void*) = 0;

	virtual void _0x10(CNetGamePlayer*) = 0;// creates a scriptId?

	virtual void* player_left(CNetGamePlayer* player) = 0;

	virtual void* send_host_migration_event(CNetGamePlayer* player) = 0;

	virtual void player_joined(void**, void* msg_ctx) = 0;

	virtual void player_joined_ack(void**, void* msg_ctx) = 0;

	virtual void player_joined_host_ack(void*, void*) = 0;

	virtual void* _0x40(void*, void*) = 0;

	virtual void* _0x48(void*, void*, void*) = 0;

	virtual void* _0x50(void*, void*) = 0;

	virtual void* _0x58(void*, void*) = 0;

	virtual void* _0x60(void*, void*) = 0;

	virtual void* _0x68(void*, void*) = 0;

	virtual void _0x70(void*, void*) = 0;

	virtual void _0x78(void*, void*) = 0;

	virtual short _0x80(void*, void*) = 0;

	virtual void* _0x88(void*, void*) = 0;

	virtual void* _0x90(void*, void*) = 0;

	virtual bool _0x98(void*, void*) = 0;

	virtual void* _0xA0(void*, void*) = 0;

	virtual void* _0xA8(void*, void*) = 0;

	virtual short _0xB0(void*, void*) = 0;

	virtual bool register_host_broadcast_data(void* data, int size, char* a3) = 0;

	virtual bool register_player_broadcast_data(int a1, int size, bool a3) = 0;

	virtual bool _0xC8() = 0;

	virtual bool _0xD0() = 0;

	virtual bool add_player_to_script(CNetGamePlayer* player, short* out_participant_id, short* out_slot_number, int* out_fail_reason) = 0;

	virtual bool add_player_to_script_internal(CNetGamePlayer* player, short participant_id, short slot_number) = 0;

	virtual bool remove_player_from_script(CNetGamePlayer* player) = 0;

	virtual void* player_left_impl(CNetGamePlayer*, bool) = 0;

	virtual bool do_host_migration(CNetGamePlayer* player, short host_token, bool unk) = 0;

	virtual void* leave_from_script() = 0;

	virtual bool _0x108() = 0;

	virtual void* _0x110() = 0;

	virtual bool _0x118() = 0;// related to above function

	int m_state;
	int m_join_msg_ack_pending_players;
	CScriptParticipant* m_first_participant;
	char gap20[16];
	CScriptParticipant* m_host;
	std::int16_t m_local_participant_index;
	char pad_003A[6];
	unsigned int m_participant_bitset;
	uint16_t m_host_token;
	CNetGamePlayer* m_last_host;
	CNetGamePlayer* m_host_migration_target;
	CNetGamePlayer* m_apparent_host_player;
	char gap60[8];
	CScriptParticipant* m_participants[32];
	char pad_0168[8];
	int m_next_host_verify_time;
	char m_max_participants;
	char pad_0175[23];
	uint8_t m_num_participants;
	uint8_t m_num_candidates;
	uint8_t m_host_ack_error;
	uint8_t m_host_array_count;
	uint8_t m_player_array_count;
	uint8_t m_host_migration_state;
	std::uint8_t m_flags;
	char pad_0193[13];
	char m_script_status_queried;

#ifdef YimMenu
	int get_participant_index(CNetGamePlayer* player);
	bool is_player_a_participant(CNetGamePlayer* player);
#endif

	inline bool is_local_player_host()
	{
		if (!m_host)
			return true;// or return false?

		return m_host->m_participant_index == m_local_participant_index;
	}

	inline CNetGamePlayer* get_host()
	{
		if (!m_host)
			return nullptr;

		return m_host->m_net_game_player;
	}
};
static_assert(sizeof(CGameScriptHandlerNetComponent) == 0x1A8);
#pragma pack(pop)