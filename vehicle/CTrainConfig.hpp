#pragma once
#include "rage/atArray.hpp"

#pragma pack(push, 4)
class CCarriageConfig
{
	uint32_t m_name_hash;                      // 0x00
	int m_max_peds_per_carriage;               // 0x04
	char m_pad[4];                             // 0x08
	bool m_flip_model_dir;                     // 0x0C
	bool m_do_interior_lights;                 // 0x0D
	float m_carriage_vert_offset;              // 0x10
};
static_assert(sizeof(CCarriageConfig) == 0x14);

class CTrainConfig
{
public:
	uint32_t m_name_hash;                              // 0x00
	float m_populate_train_dist;                       // 0x04
	int m_unk1;                                        // 0x08
	int m_unk2;                                        // 0x0C
	int m_unk3;                                        // 0x10
	bool m_announce_stations;                          // 0x14
	bool m_doors_beep;                                 // 0x15
	bool m_carriages_hang;                             // 0x16
	bool m_carriages_swing;                            // 0x17
	bool m_no_carriage_gap;                            // 0x18
	bool m_link_tracks_with_adjacent_stations;         // 0x19
	bool m_no_random_spawn;                            // 0x1A
	float m_carriage_gap;                              // 0x1C
	rage::atArray<CCarriageConfig> m_carraige_configs; // 0x20
};
static_assert(sizeof(CTrainConfig) == 0x30);
#pragma pack(pop)