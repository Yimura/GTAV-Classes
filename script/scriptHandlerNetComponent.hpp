#pragma once

#pragma pack(push, 1)
namespace rage
{
	class scriptHandlerNetComponent {
	public:
		virtual ~scriptHandlerNetComponent();
		virtual bool _0x08(void*) = 0;
		virtual void _0x10(CNetGamePlayer*) = 0; //creates a scriptId?
		virtual void* player_left(CNetGamePlayer* player) = 0;
		virtual void* send_host_migration_event(CNetGamePlayer* player) = 0;
		virtual void* player_joined(void**, void* msg_ctx) = 0;
		virtual void* player_joined_ack(void**, void* msg_ctx) = 0;
		virtual bool _0x38(void*, void*) = 0; //join_script?
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
		virtual void* _0x90(void*, void*) = 0; //HOST_MIGRATION_FAILED
		virtual bool _0x98(void*, void*) = 0;
		virtual void* _0xA0(void*, void*) = 0;
		virtual void* _0xA8(void*, void*) = 0;
		virtual short _0xB0(void*, void*) = 0;
		virtual bool register_host_broadcast_data(int* data, int size, char* debugString) = 0;
		virtual bool register_player_broadcast_data(int data, int size, bool sync) = 0;
		virtual bool _0xC8() = 0; // something to do to joining session
		virtual bool _0xD0() = 0;
		virtual bool add_player_to_script(CNetGamePlayer* player, short* outParticipantID, short* outSlot, int* outFailReason) = 0;
		virtual bool add_player_to_script_internal(CNetGamePlayer* player, short participantID, short slot) = 0; // player aka participant
		virtual bool remove_player_from_script(CNetGamePlayer* player) = 0;
		virtual void* player_left_impl(CNetGamePlayer*, bool) = 0;
		virtual bool do_host_migration(CNetGamePlayer* player, short host_token, bool unk) = 0; // aka _0xF8
		virtual void* leave_from_script() = 0; // calls above function with player = nullptr
		virtual bool _0x108() = 0;
		virtual void* _0x110() = 0;
		virtual bool _0x118() = 0; // related to above function
	public:
		scriptHandler* m_script_handler; //0x0008
	}; //Size: 0x0010
	static_assert(sizeof(scriptHandlerNetComponent) == 0x10);
}
#pragma pack(pop)