#pragma once
#include "../types.hpp"


enum class eDeliverableState
{
	INVALID = -1,
	INITIAL,
	DELIVERED
};

struct PLAYER_MISSION_INFO
{
	SCR_INT                            State;
	SCR_INT                            Index; // GSBD_MissionRequest index
};
static_assert(sizeof(PLAYER_MISSION_INFO) == 2 * 8);

struct CRATE_DROP
{
	SCR_INT                            PAD_0000; // unused
	SCR_BOOL                           EnableCrateDrops; // tries to trigger strange last gen stuff unsuccessfully
	uint64_t                           PAD_0003[2]; // unused
};
static_assert(sizeof(CRATE_DROP) == 4 * 8);

struct DELIVERABLE_ID
{
	PLAYER_INDEX                       Owner;
	SCR_INT                            Id; // "FMDeliverableID"
};
static_assert(sizeof(DELIVERABLE_ID) == 2 * 8);

struct DELIVERABLE_SCRIPT_INFO
{
	SCR_HASH                           Hash_;
	uint64_t                           PAD_0001[2]; // unused
};
static_assert(sizeof(DELIVERABLE_SCRIPT_INFO) == 3 * 8);

struct UNK_0962
{
	PLAYER_INDEX                       PAD_0000;
	SCR_ARRAY<uint64_t, 18>            PAD_0001;
	SCR_ARRAY<DELIVERABLE_SCRIPT_INFO, 18> PAD_0020;
};
static_assert(sizeof(UNK_0962) == 75 * 8);

struct DELIVERABLE
{
	alignas(8) eDeliverableState       State;
	DELIVERABLE_ID                     DeliverableId;
	SCR_INT                            Type;
	SCR_INT                            PAD_0004; // this is always set to zero
	SCR_ARRAY<uint64_t, 5>             DroppedOffLocations; // "activeDropOff is not the same as sctiptDropOff"
	DELIVERABLE_SCRIPT_INFO            ScriptInfo;
	SCR_INT                            NumDropOffs;
};
static_assert(sizeof(DELIVERABLE) == 15 * 8);

// "FREEMODE_DELIVERY_SERVER_ADD_DELIVERABLE_ID" "_FREEMODE_DELIVERY_MAINTAIN_SERVER"
struct FREEMODE_DELIVERY
{
	SCR_BOOL                           Initialized;
	SCR_ARRAY<DELIVERABLE, 64>         Deliverables;
	SCR_ARRAY<UNK_0962, 10>            PAD_0962; // TODO
};
static_assert(sizeof(FREEMODE_DELIVERY) == 1713 * 8);

struct GLOBAL_CLUB_INFO
{
	uint64_t                           PAD_0000[16];
};
static_assert(sizeof(GLOBAL_CLUB_INFO) == 16 * 8);

struct GSBD_BlockB
{
	SCR_INT                            MissionLauncherInitializedBitset;
	PLAYER_INDEX                       ScriptHost;
	SCR_INT                            PAD_0002;
	SCR_BOOL                           PAD_0003; // forces a team update thingy
	SCR_ARRAY<PLAYER_MISSION_INFO, 32> PlayerMissionInfos;
	SCR_INT                            HostMigrationCounter;
	uint64_t                           PAD_0080[14]; // unused
	CRATE_DROP                         CrateDrop;
	uint64_t                           PAD_0088[6]; // unused
	uint64_t                           PAD_0094[33]; // ???
	uint64_t                           PAD_0127[65]; // even more strange stuff (cut content?)
	SCR_ARRAY<uint64_t, 6>             TurretCooldownTimers;
	FREEMODE_DELIVERY                  FreemodeDelivery;
	SCR_ARRAY<GLOBAL_CLUB_INFO, 3>     GlobalClubInfos;
	SCR_ARRAY<uint64_t, 32>            CarMeetModShopSlotIndices;
	SCR_ARRAY<uint64_t, 32>            CarMeetModShopOccupiedGoons;
	SCR_ARRAY<SCR_ARRAY<uint64_t, 3>, 32>CarMeetModShopOccupiedVehicleSlots;
};
static_assert(sizeof(GSBD_BlockB) == 2156 * 8);