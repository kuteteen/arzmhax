// rpc

extern int RPC_ServerJoin;
extern int RPC_ServerQuit;
extern int RPC_InitGame;
extern int RPC_ClientJoin;
extern int RPC_NPCJoin;
extern int RPC_Death;
extern int RPC_RequestClass;
extern int RPC_RequestSpawn;
extern int RPC_SetInteriorId;
extern int RPC_Spawn;
extern int RPC_Chat;
extern int RPC_EnterVehicle;
extern int RPC_ExitVehicle;
extern int RPC_DamageVehicle;
extern int RPC_MenuSelect;
extern int RPC_MenuQuit;
extern int RPC_ScmEvent;
extern int RPC_AdminMapTeleport;
extern int RPC_WorldPlayerAdd;
extern int RPC_WorldPlayerDeath;
extern int RPC_WorldPlayerRemove;
extern int RPC_WorldVehicleAdd;
extern int RPC_WorldVehicleRemove;
extern int RPC_SetCheckpoint;
extern int RPC_DisableCheckpoint;
extern int RPC_SetRaceCheckpoint;
extern int RPC_DisableRaceCheckpoint;
extern int RPC_UpdateScoresPingsIPs;
extern int RPC_SvrStats;
extern int RPC_GameModeRestart;
extern int RPC_ConnectionRejected;
extern int RPC_ClientMessage;
extern int RPC_WorldTime;
extern int RPC_Pickup;
extern int RPC_DestroyPickup;
extern int RPC_DestroyWeaponPickup;
extern int RPC_Weather;
extern int RPC_SetTimeEx;
extern int RPC_ToggleClock;
extern int RPC_ServerCommand;
extern int RPC_PickedUpPickup;
extern int RPC_PickedUpWeapon;
extern int RPC_VehicleDestroyed;
extern int RPC_DialogResponse;
extern int RPC_PlayAudioStreamForPlayer;
extern int RPC_StopAudioStreamForPlayer;
extern int RPC_ClickPlayer;
extern int RPC_ClickTextDraw;
extern int RPC_MapMarker;
extern int RPC_ScrTextDrawSetString;
extern int RPC_ScrRemoveBuildingForPlayer;
extern int RPC_ScrCreateActor;
extern int RPC_ScrDestroyActor;
extern int RPC_ScrSetActorFacingAngle;
extern int RPC_ScrSetActorPos;
extern int RPC_ScrSetActorHealth;
extern int RPC_ScrSetSpawnInfo;
extern int RPC_ScrSetPlayerTeam;
extern int RPC_ScrSetPlayerSkin;
extern int RPC_ScrSetPlayerName;
extern int RPC_ScrSetPlayerPos;
extern int RPC_ScrSetPlayerPosFindZ;
extern int RPC_ScrSetPlayerHealth;
extern int RPC_ScrPutPlayerInVehicle;
extern int RPC_ScrRemovePlayerFromVehicle;
extern int RPC_ScrSetPlayerColor;
extern int RPC_ScrDisplayGameText;
extern int RPC_ScrSetInterior;
extern int RPC_ScrSetCameraPos;
extern int RPC_ScrSetCameraLookAt;
extern int RPC_ScrSetVehiclePos;
extern int RPC_ScrSetVehicleZAngle;
extern int RPC_ScrVehicleParams;
extern int RPC_ScrSetCameraBehindPlayer;
extern int RPC_ScrTogglePlayerControllable;
extern int RPC_ScrPlaySound;
extern int RPC_ScrSetWorldBounds;
extern int RPC_ScrHaveSomeMoney;
extern int RPC_ScrSetPlayerFacingAngle;
extern int RPC_ScrResetMoney;
extern int RPC_ScrResetPlayerWeapons;
extern int RPC_ScrGivePlayerWeapon;
extern int RPC_PlayerGiveTakeDamage;
extern int RPC_ScrRespawnVehicle;
extern int RPC_ScrLinkVehicle;
extern int RPC_ScrSetPlayerArmour;
extern int RPC_ScrDeathMessage;
extern int RPC_ScrSetMapIcon;
extern int RPC_ScrDisableMapIcon;
extern int RPC_ScrSetPlayerAmmo;
extern int RPC_ScrSetGravity;
extern int RPC_ScrSetVehicleHealth;
extern int RPC_ScrAttachTrailerToVehicle;
extern int RPC_ScrDetachTrailerFromVehicle;
extern int RPC_ScrCreateObject;
extern int RPC_ScrSetObjectPos;
extern int RPC_ScrSetObjectRotation;
extern int RPC_ScrDestroyObject;
extern int RPC_ScrCreateExplosion;
extern int RPC_ScrShowNameTag;
extern int RPC_ScrMoveObject;
extern int RPC_ScrStopObject;
extern int RPC_ScrNumberPlate;
extern int RPC_ScrTogglePlayerSpectating;
extern int RPC_ScrSetPlayerSpectating;
extern int RPC_ScrSetPlayerSpectating;
extern int RPC_ScrPlayerSpectatePlayer;
extern int RPC_ScrPlayerSpectateVehicle;
extern int RPC_ScrRemoveComponent;
extern int RPC_ScrForceSpawnSelection;
extern int RPC_ScrAttachObjectToPlayer;
extern int RPC_ScrInitMenu;
extern int RPC_ScrShowMenu;
extern int RPC_ScrHideMenu;
extern int RPC_ScrSetPlayerWantedLevel;
extern int RPC_ScrShowTextDraw;
extern int RPC_ScrTextDrawHideForPlayer;
extern int RPC_ScrAddGangZone;
extern int RPC_ScrRemoveGangZone;
extern int RPC_ScrFlashGangZone;
extern int RPC_ScrStopFlashGangZone;
extern int RPC_ScrApplyPlayerAnimation;
extern int RPC_ScrClearPlayerAnimations;
extern int RPC_ScrApplyActorAnimation;
extern int RPC_ScrClearActorAnimations;
extern int RPC_ScrSetSpecialAction;
extern int RPC_ScrEnableStuntBonusForPlayer;
extern int RPC_ScrSetFightingStyle;
extern int RPC_ScrSetPlayerVelocity;
extern int RPC_ScrSetVehicleVelocity;
extern int RPC_ScrToggleWidescreen;
extern int RPC_ScrSetVehicleTireStatus;
extern int RPC_ScrSetPlayerDrunkLevel;
extern int RPC_ScrDialogBox;
extern int RPC_PlayerUpdate;
extern int RPC_ScrCreate3DTextLabel;
extern int RPC_ScrUpdate3DTextLabel;
extern int RPC_ScrVehicleParamsEx;
extern int RPC_ScrInterpolateCamera;
extern int RPC_ScrSetObjectMaterial;
extern int RPC_ScrSetPlayerObjectMaterial;
extern int RPC_ScrSetPlayerAttachedObject;
extern int RPC_ScrPlayCrimeReportForPlayer;
extern int RPC_ScrAttachCameraToObject;
extern int RPC_ScrSetPlayerDrunkHandling;
extern int RPC_ScrSetPlayerShopName;
extern int RPC_ScrSetPlayerSkillLevel;
extern int RPC_ScrShowPlayerNameTagForPlayer;
extern int RPC_ScrChatBubble;
extern int RPC_ScrToggleClock;
extern int RPC_ScrSetPlayerWorldBounds;
extern int RPC_ClientCheck;
extern int RPC_ScrSetAdminLevel;
extern int RPC_SetArmedWeapon;
extern int RPC_CameraTarget;
extern int RPC_SetTargeting;

// unknown rpc
extern int RPC_Unknown1;
extern int RPC_Unknown2;
extern int RPC_Unknown3;
extern int RPC_Unknown4;
extern int RPC_Unknown5;
extern int RPC_Unknown6;
extern int RPC_Unknown7;
extern int RPC_Unknown8;
extern int RPC_Unknown9;
extern int RPC_Unknown10;
extern int RPC_Unknown11;
extern int RPC_Unknown12;
extern int RPC_Unknown13;
extern int RPC_Unknown14;
extern int RPC_Unknown15;
extern int RPC_Unknown16;
extern int RPC_Unknown18;
extern int RPC_Unknown19;
extern int RPC_Unknown20;
extern int RPC_Unknown21;
extern int RPC_Unknown22;
extern int RPC_Unknown23;
extern int RPC_Unknown24;
extern int RPC_Unknown25;
extern int RPC_Unknown26;
extern int RPC_Unknown27;
extern int RPC_Unknown28;
extern int RPC_Unknown29;
extern int RPC_Unknown30;
extern int RPC_Unknown31;
extern int RPC_Unknown32;
extern int RPC_Unknown32;
extern int RPC_Unknown33;
extern int RPC_Unknown35;
extern int RPC_Unknown36;
extern int RPC_Unknown37;
extern int RPC_Unknown38;
extern int RPC_Unknown39;
extern int RPC_Unknown40;
extern int RPC_Unknown41;
extern int RPC_Unknown42;
extern int RPC_Unknown43;
extern int RPC_Unknown44;
extern int RPC_Unknown45;
extern int RPC_Unknown46;
extern int RPC_Unknown47;
extern int RPC_Unknown48;
extern int RPC_Unknown49;
extern int RPC_Unknown50;
extern int RPC_Unknown51;
extern int RPC_Unknown52;
extern int RPC_Unknown53;
extern int RPC_Unknown54;
extern int RPC_Unknown55;
extern int RPC_Unknown56;
extern int RPC_Unknown57;
extern int RPC_Unknown58;
extern int RPC_Unknown59;
extern int RPC_Unknown60;
extern int RPC_Unknown61;
extern int RPC_Unknown62;
extern int RPC_Unknown63;
extern int RPC_Unknown64;
extern int RPC_Unknown65;
extern int RPC_Unknown66;
extern int RPC_Unknown67;
extern int RPC_Unknown68;
extern int RPC_Unknown69;
extern int RPC_Unknown70;
extern int RPC_Unknown71;
extern int RPC_Unknown72;
extern int RPC_Unknown73;
extern int RPC_Unknown74;
extern int RPC_Unknown75;
extern int RPC_Unknown76;
extern int RPC_Unknown77;
extern int RPC_Unknown78;
extern int RPC_Unknown79;
extern int RPC_Unknown80;
extern int RPC_Unknown81;
extern int RPC_Unknown82;
extern int RPC_Unknown83;
extern int RPC_Unknown84;
extern int RPC_Unknown85;
extern int RPC_Unknown86;
extern int RPC_Unknown87;
extern int RPC_Unknown88;
extern int RPC_Unknown89;
extern int RPC_Unknown90;
extern int RPC_Unknown91;
extern int RPC_Unknown92;
extern int RPC_Unknown93;
extern int RPC_Unknown94;
extern int RPC_Unknown95;
extern int RPC_Unknown97;
extern int RPC_Unknown98;
extern int RPC_Unknown99;
extern int RPC_Unknown100;
extern int RPC_Unknown101;
extern int RPC_Unknown102;
extern int RPC_Unknown103;
extern int RPC_Unknown104;
extern int RPC_Unknown105;
extern int RPC_Unknown106;
extern int RPC_Unknown107;
extern int RPC_Unknown108;
extern int RPC_Unknown109;
extern int RPC_Unknown110;
extern int RPC_Unknown111;
extern int RPC_Unknown112;