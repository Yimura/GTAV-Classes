#pragma once
#include <cstdint>

class CNetRemoteComplaint
{
public:
	uint64_t m_complainer_token; //0x0000
	uint64_t m_complainee_token; //0x0008
	uint32_t m_flags; //0x0010
	uint32_t m_time; //0x0014
}; //Size: 0x0018
static_assert(sizeof(CNetRemoteComplaint) == 0x18);

class CNetComplaintMgr
{
public:
	uint64_t m_host_token; //0x0000
	uint32_t m_host_peer_id; //0x0008
	char pad_000C[4]; //0x000C
	void* m_net_connection_mgr; //0x0010
	char pad_0018[64]; //0x0018
	class rage::rlGamerHandle m_handles_in_scope[64]; //0x0058
	uint32_t m_num_handles_in_scope; //0x0458
	char pad_045C[4]; //0x045C
	class CNetRemoteComplaint m_remote_complaints[64]; //0x0460
	uint32_t m_num_remote_complaints; //0x0A60
	char pad_0A64[4]; //0x0A64
	uint64_t m_host_tokens_complained[64]; //0x0A68
	uint32_t m_num_tokens_complained; //0x0C68
	char pad_0C6C[520]; //0x0C6C
	uint32_t m_connection_identifier; //0x0E74
	uint32_t m_last_resend_time; //0x0E78
	char pad_0E7C[4]; //0x0E7C
	uint32_t m_time_to_resend; //0x0E80
	uint32_t m_flags; //0x0E84
	char pad_0E88[16]; //0x0E88

	inline bool has_local_complaint(uint64_t host_token)
	{
		for (std::uint32_t i = 0; i < m_num_tokens_complained; i++)
			if (m_host_tokens_complained[i] == host_token)
				return true;

		return false;
	}

	inline void raise_complaint(uint64_t host_token)
	{
		if (has_local_complaint(host_token))
			return;

		m_host_tokens_complained[m_num_tokens_complained++] = host_token;

		// big::g_pointers->m_raise_network_complaint(this, host_token);
	}

	inline void remove_complaint(uint64_t host_token)
	{
		if (!has_local_complaint(host_token))
			return;

		for (std::uint32_t i = 0; i < m_num_tokens_complained; i++)
			if (m_host_tokens_complained[i] == host_token)
				m_host_tokens_complained[i] = m_host_tokens_complained[m_num_tokens_complained - 1];

		m_num_tokens_complained--;
	}

}; //Size: 0x0C98
static_assert(sizeof(CNetComplaintMgr) == 0xE98);