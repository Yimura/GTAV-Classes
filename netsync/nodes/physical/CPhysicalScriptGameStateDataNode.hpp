#pragma once
#include <cstdint>
#include "netsync/CProjectBaseSyncDataNode.hpp"

#pragma pack(push, 4)
class CPhysicalScriptGameStateDataNode : CSyncDataNodeInfrequent
{
public:
	bool m_godmode;
	bool m_dont_load_collision;
	bool m_freeze_on_collision_load;
	bool m_only_damaged_by_player;
	bool m_bullet_proof;
	bool m_fire_proof;
	bool m_explosion_proof;
	bool m_collision_proof;
	bool m_melee_proof;
	bool m_cannot_be_damaged_by_relationship_group;
	bool m_can_only_be_damaged_by_relationship_group;
	bool m_smoke_proof;
	bool m_steam_proof;
	bool m_can_only_be_damaged_by_participants;
	bool m_dont_reset_proofs_on_cleanup_mission;
	bool m_no_reassign;
	bool m_pass_control_in_tutorial;
	bool m_visible_in_cutscene;
	bool m_visible_in_cutscene_remain_hack;
	bool m_pickup_by_cargobob_disabled;
	uint32_t m_relationship_group;
	uint32_t m_always_cloned_for_players;
	bool m_modified_max_speed;
	bool m_trigger_damage_event_for_zero_damage;
	float m_max_speed;
};
static_assert(sizeof(CPhysicalScriptGameStateDataNode) == 0xE4); // don't know the actual size of this one
#pragma pack(pop)
