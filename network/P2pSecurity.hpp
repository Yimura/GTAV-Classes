#pragma once
#include "rage/rlGamerInfo.hpp"

#pragma pack(push, 2)
namespace rage
{
	class SecurityPeer
	{
	public:
#pragma pack(push, 8)
		struct Info
		{
			uint8_t platform;
			rage::rlGamerHandle handle;
			char name[16];
		};
#pragma pack(pop)

		std::uint8_t gap0[80];
		int m_security_id_2;
		std::uint8_t gap54[52];
		int m_time_initialized;
		std::uint8_t gap8C[4];
		int dword90;
		int m_security_id;
		int gap98;
		std::uint8_t gap9C[4];
		rage::netPeerAddress m_address;
		rage::netPeerAddress m_real_address;
		std::uint64_t qwordE0; // unk data from the bitbuffer
		std::uint64_t qwordE8;
		std::uint64_t qwordF0;
		std::uint64_t m_peer_id;
		rage::rlGamerHandle m_unverified_handle;
		char m_dtls_cxn_type;
		std::uint8_t gap111[3];
		char m_timeouts[0x40];
		std::uint8_t gap154[4];
		char m_decryption_lock[0x28];
		void* m_WolfSSL;
		rage::SecurityPeer::Info m_info;
		std::uint8_t gap1B0[48];
		rage::netPeerAddress m_last_provided_address;
		int m_last_provided_security_id;
		std::uint8_t gap204[44];
		char m_peer_query_stage;
		std::uint8_t gap231[3];
		int m_get_peer_address_status;
		std::uint8_t gap238[8];
		rage::netPeerAddress m_peer_query_result;
		bool m_errored;
		std::uint8_t m_dtls_cxn_establish_state;
		char aaaa[2];
		int m_error_code;
		std::uint8_t gap268[96]; // error queue
		std::uint8_t m_info_requests;
		std::uint8_t m_failed_decryption_attempts;
		std::uint8_t gap2CA[6];
		int m_certificate_verify_error_code;
		int m_certificate_verify_status;
		std::uint8_t gap2D8[8];
		char m_flags;
		std::uint8_t gap2E1[761];
	};
	static_assert(sizeof(rage::SecurityPeer) == 0x5DA);
}
#pragma pack(pop)