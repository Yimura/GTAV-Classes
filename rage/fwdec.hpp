#pragma once

namespace rage
{
    // base
    class datBase;
    class fwArchetype;
    class fwArchetypeDef;
    class fwExtensibleBase;
    class fwExtension;
    class fwExtensionContainer;
    class fwRefAwareBase;
    template <typename T>
    class fwRefAwareBaseImpl;
    class HashNode;
    class HashTable;
    class phBase;
    class pgArchtype;
    class phBound;
    class phBoundCapsule;
    class phBoundComposite;

    // draw handlers
    class fwDrawData;

    // entities
    class fwEntity;

    // network
    class netObject;
    class netPlayer;
    class netPlayerMgrBase;
    class netGamePlayerData;
    class playerDataMsg;
    class rlMatchmakingFindResult;
    class rlRemoteGamer;
    class rlSession;
    class rlSessionDetail;
    class snPeer;
    class snPlayer;
    class snSession;
    class snMsgRemoveGamersFromSessionCmd;

    // rage
    template <typename T>
    class atArray;
    template <typename T>
    class atSingleton;
    class netSyncDataNodeBase;
    class netSyncNodeBase;
    class netSyncTree;
    class rlGamerHandle;
    class rlGamerInfo;
    class rlGamerInfoBase;
    class rlMetric;
    class rlSessionByGamerTaskResult;
    class rlSessionInfo;
    class sysMemAllocator;
    class fvector2;
    class fvector3;
    class fvector4;
    class fmatrix34;
    class fmatrix44;

    // script
    template <typename T, typename Base = datBase>
    class atDNode;
    template <typename Node>
    class atDList;
    class scriptHandler;
    class scriptHandlerMgr;
    class scriptHandlerNetComponent;
    class scriptId;
    class scriptIdBase;
    class scriptResource;
    class scrNativeHandler;
    class scrNativeRegistration;
    class scrNativeRegistrationTable;
    class scrProgram;
    class scrProgramTable;
    class scrProgramTableEntry;
    class scrThread;
    class scrThreadContext;
    class tlsContext;

    // security
    template <typename T>
	class ObfVar;
    using Obf16 = ObfVar<unsigned short>;
	using Obf32 = ObfVar<unsigned int>;
    class RageSecurity;
}

// base
class CBaseModelInfo;
class CNavigation;
class CObject;

// camera
class CCameraAngles;
class CCameraManagerAngles;
class CGameCameraAngles;

// datanodes
class CAutomobileCreationDataNode;
class CDoorCreationDataNode;
class CDynamicEntityGameStateDataNode;
class CEntityOrientationDataNode;
class CEntityScriptGameStateDataNode;
class CObjectCreationDataNode;
class CPedAIDataNode;
class CPedAppearanceDataNode;
class CPedAttachDataNode;
class CPedCreationDataNode;
class CPedGameStateDataNode;
class CPedHealthDataNode;
class CPedInventoryDataNode;
class CPedScriptCreationDataNode;
class CPedTaskSpecificDataNode;
class CPhysicalAngVelocityDataNode;
class CPhysicalAttachDataNode;
class CPhysicalHealthDataNode;
class CPhysicalVelocityDataNode;
class CPickupCreationDataNode;
class CPickupPlacementCreationDataNode;
class CPlayerAppearanceDataNode;
class CPlayerCreationDataNode;
class CPlayerGamerDataNode;
class CPlayerSectorPosNode;
class CGlobalFlagsDataNode;
class CMigrationDataNode;
class CSectorDataNode;
class CSectorPositionDataNode;
class ClonedTakeOffPedVariationInfo;
class CTrainGameStateDataNode;
class CVehicleCreationDataNode;
class CVehicleGadgetDataNode;

// draw handlers
class CEntityDrawHandler;
class CObjectDrawHandler;
class CPedDrawHandler;
class CVehicleDrawHandler;

// entities
class CAttackers;
class CDynamicEntity;
class CEntity;
class CPhysical;

// misc
class CTunables;

// network
class CCommunications;
class ChatData;
class CJoinRequestContext;
class ClanData;
class CMsgJoinResponse;
class CMsgTextMessage;
class CNetComplaintMgr;
class CNetGamePlayer;
class CNetGamePlayerDataMsg;
class CNetworkPlayerMgr;
class CNetBlacklist;
class CNetBlacklistNode;
class InvitedGamer;
class InvitedGamers;
class JoiningPlayerNameMap;
class PlayerNameMapNode;
class MatchmakingAttributes;
class MatchmakingSessionResult;
class MetricSessionMigrated;
class Network;
class NetworkGameConfig;
class NetworkGameFilter;
class NetworkGameFilterMatchmakingComponent;
class RemoteGamerInfoMessage;
class RemotePlayerData;
class SessionInfoBackup;
class SessionSortEntry;

// ped
class CPed;
class CPedBoneInfo;
class CPedFactory;
class CPedInventory;
class CPedModelInfo;
class CPedOxygenInfo;
class CPedWeaponManager;

// player
class CNonPhysicalPlayerData;
class CPlayerAngles;
class CPlayerInfo;

// script
class GtaThread;

// socialclub
class FriendInfo;
class FriendRegistry;
class ScInfo;

// vehicle
class CAdvancedData;
class CBaseSubHandlingData;
class CCarHandlingData;
class CHandlingData;
class CHandlingObject;
class CVehicle;
class CVehicleModelInfo;

// weapon
class CAmmoInfo;
class CAmmoProjectileInfo;
class CAmmoRocketInfo;
class CAmmoThrownInfo;
class CHomingRocketParams;
class CItemInfo;
class CWeaponBoneId;
class CWeaponInfo;