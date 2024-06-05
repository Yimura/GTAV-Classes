#pragma once
#include <cstdint>

#pragma pack(push, 4)
namespace rage
{
	class netObjectIds
	{
	public:
		char gap0[41];
		char byte29;
		int m_local_player_id;
		int m_object_id_response_pending_players;
		int m_last_object_id_response_time;
		char gap38[4];
		uint16_t m_usable_object_ids[8000];
		int m_next_usable_object_id_write_slot;
		int m_next_usable_object_id_read_slot;
		int m_usable_object_id_count;

		inline bool is_object_id_usable(std::uint16_t id)
		{
			if (m_usable_object_id_count <= 0)
				return false;

			int count = 0;
			for (int i = m_next_usable_object_id_read_slot + 1; m_usable_object_ids[i % 8000] != id; i++)
				if (++count > m_usable_object_id_count)
					return false;

			return true;
		}

		std::uint16_t get_usable_object_id()
		{
			int slot = ++m_next_usable_object_id_read_slot;
			m_usable_object_id_count--;
			if (slot == 8000)
				slot = 0;
			m_next_usable_object_id_read_slot = slot;
			return m_usable_object_ids[slot];
		}

		// this operation is fundamentally unsupported by the data structure the IDs are stored in, unforeseen problems may occur
		void remove_object_id(std::uint16_t id)
		{
			if (m_usable_object_id_count < 2)
				return; // we need at least 2 items

			int count = 0;
			int i;
			for (i = m_next_usable_object_id_read_slot + 1; m_usable_object_ids[i % 8000] != id; i++)
				if (++count > m_usable_object_id_count)
					return;

			auto new_id = get_usable_object_id();
			if (new_id != id)
				m_usable_object_ids[i % 8000] = new_id;
		}
	};
}
#pragma pack(pop)