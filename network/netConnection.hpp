#pragma once
#include <cstdint>
#include "rage/rlGamerInfoBase.hpp"
#include "netPeerAddress.hpp"

#pragma pack(push, 1)
namespace rage
{
	class netConnectionManager;
	class netConnectionPeer;

	class netQueuedMessage
	{
	public:
		void* m_data_buffer;
		void* qword8;
		void* qword10;
		void* qword18;
		rage::netQueuedMessage* m_next;
		void* qword28;
		char gap30[8];
		int m_creation_time;
		int m_last_send_time;
		int m_resend_count;
		char gap44[4];
		int dword48;
		uint16_t word4C;
		char byte4E;
	};
	static_assert(sizeof(netQueuedMessage) == 0x4F);

	class netMessageQueue
	{
	public:
		rage::netQueuedMessage* m_first;
		rage::netQueuedMessage* m_last;
		uint64_t m_count;
	};

	class netPackedMessage
	{
	public:
		void* m_data_buffer;
		void* m_allocator;
		void* qword10;
		void* qword18;
	};

	class netPackedMessageQueue
	{
	public:
		rage::netPackedMessage* m_first;
		rage::netPackedMessage* m_last;
		uint64_t m_count;
	};

#pragma pack(push, 8)
	class netEvent
	{
	public:
		enum class Type
		{
			ConnectionRequested = 0, // seems to be identical to rage::netConnection::InFrame
			ConnectionError = 2,
			ConnectionClosed = 3,
			FrameReceived = 4, // rage::netConnection::InFrame
			BandwidthExceeded = 6,
			OutOfMemory = 7
		};

		virtual ~netEvent() = default;

		virtual void destroy() = 0;
		virtual Type get_event_type() = 0;
		virtual uint32_t _0x18() = 0;

		std::uint32_t m_timestamp;             // 0x0008
		char pad_0008[52];                     // 0x000C
		std::uint32_t m_msg_id;                // 0x0040
		std::uint32_t m_connection_identifier; // 0x0044
		rage::netEvent* m_this;                // 0x0048
		uint32_t m_peer_id;                    // 0x0050
	};
	static_assert(sizeof(rage::netEvent) == 0x58);

	class netEventConnectionError : public rage::netEvent
	{
	public:
		std::uint64_t m_unk;  // 0x0058 (always 2)
		char m_data[0x80];    // 0x0060
		std::uint32_t m_size; // 0x00E0
	};
	static_assert(sizeof(rage::netEventConnectionError) == 0xE8);
#pragma pack(pop)

	class netConnection
	{
	public:
#pragma pack(push, 8)
		class InFrame : public rage::netEvent
		{
		public:
			alignas(8) int m_security_id;        // 0x0058
			rage::netPeerAddress m_peer_address; // 0x0060
			std::uint32_t m_length;              // 0x0080
			void* m_data;                        // 0x0088
		};
		static_assert(sizeof(rage::netConnection::InFrame) == 0x90);
#pragma pack(pop)

		char gap0[8];
		rage::netConnectionPeer* m_connection_peer;
		int m_msg_id;
		uint32_t m_connection_id;
		void* m_allocator;
		uint32_t m_connection_state;
		uint32_t m_last_send_time;
		uint32_t m_last_receive_time;
		uint32_t m_num_failed_messages;
		char gap30[8];
		uint32_t m_timeout_reason;
		uint32_t dword3C;
		uint32_t m_timeout;
		uint32_t dword44;
		uint32_t m_resend_threshold;
		char gap4C[4];
		rage::netMessageQueue m_reliables_resend_queue;
		rage::netMessageQueue m_normal_message_queue;
		rage::netQueuedMessage* m_unacked_reliable_message_list; //0x0080
		int m_unacked_reliable_message_count; //0x0088
		char gap8C[36]; //0x008C
		char new_00B0[24]; //0x00B0 added b3323
		netConnectionManager* m_net_connection_mgr; //0x00C8
		char gapD0[8]; //0x00D0
		uint32_t dwordD8; //0x00D8
		int16_t m_msg_counter; //0x00DC
		int16_t wordDE; //0x00DE
		char gapE0[2];
		int16_t m_last_reliable_msg_counter; //0x00E2
		char new_00E4[8]; //0x00E4 added b3323
		char m_flags; //0x00EC
		char gapED[3];
		int m_failed_allocation_size; //0x00F0
		int32_t m_failed_allocations; //0x00F4
		rage::netConnection* m_next; //0x00F8
		char gap100[208];
		int m_flags2; //0x01D0
		char gap1D4[69];
	};
	static_assert(sizeof(netConnection) == 0x219);

	class netConnectionQueue
	{
	public:
		rage::netConnection* m_first;
		rage::netConnection* m_last;
		uint64_t m_count;
	};

	class netConnectionPeer
	{
	public:
		rage::netConnection* m_connections_by_id[16];
		rage::netConnectionQueue m_net_connection_queue;
		rage::netPackedMessageQueue m_packed_message_queue;
		void* qwordB0;
		char byteB8;
		char gapB9[3];
		int intBC;
		uint32_t dwordC0;
		char gapC4[4];
		void* qwordC8;
		rage::netPeerAddress m_relay_address;
		rage::rlGamerInfoBase m_gamer_info;
		char gap1B0[24];
		uint32_t dword1C8;
		char gap1CC[28];
		uint32_t m_security_id;
		char gap1EC[28];
		void* qword208;
		char gap210[24];
		rage::netPeerAddress m_peer_address;
		rage::netConnectionPeer* m_next;
		char gap250[8];
		int m_time_until_next_batch;
		int m_empty_batch_interval;
		uint32_t m_time_until_timeout;
		int m_last_msg_process_time;
		int gap268;
		void* qword26C;
		char gap274[4];
		void* qword278;
		char gap280[24];
		void* qword298;
		char gap2A0[64];
		uint32_t m_peer_id;
		char byte2E4;
		char more[51];
		int gap318;
		char gap31C[24];
		int m_num_encryption_attempts;
		char gap338[60];
		int m_num_messages_batched;
		int m_num_reliable_messages_batched;
		int m_num_resent_reliable_messages_batched;
		char gap380[145];
	};
	static_assert(sizeof(netConnectionPeer) == 0x411);
}
#pragma pack(pop)