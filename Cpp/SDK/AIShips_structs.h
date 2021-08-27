﻿#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AIShips.EAIShipEncounterType
enum class AIShips_EAIShipEncounterType : uint8_t
{
	EAIShipEncounterType__Battle   = 0,
	EAIShipEncounterType__Passive  = 1,
	EAIShipEncounterType__Aggressive = 2,
	EAIShipEncounterType__MAX      = 3,
	EAIShipEncounterType__EAIShipEncounterType_MAX = 4,

};

// Enum AIShips.ECannonballIconType
enum class AIShips_ECannonballIconType : uint8_t
{
	ECannonballIconType__Normal    = 0,
	ECannonballIconType__Anchor    = 1,
	ECannonballIconType__Ballast   = 2,
	ECannonballIconType__Barrel    = 3,
	ECannonballIconType__Boogie    = 4,
	ECannonballIconType__Grog      = 5,
	ECannonballIconType__Limp      = 6,
	ECannonballIconType__Passive   = 7,
	ECannonballIconType__Rigging   = 8,
	ECannonballIconType__Rudder    = 9,
	ECannonballIconType__Silence   = 10,
	ECannonballIconType__Snake     = 11,
	ECannonballIconType__Snooze    = 12,
	ECannonballIconType__None      = 13,
	ECannonballIconType__Max       = 14,
	ECannonballIconType__ECannonballIconType_MAX = 15,

};

// Enum AIShips.ESkellyFormIconType
enum class AIShips_ESkellyFormIconType : uint8_t
{
	ESkellyFormIconType__Normal    = 0,
	ESkellyFormIconType__Metal     = 1,
	ESkellyFormIconType__Plant     = 2,
	ESkellyFormIconType__Shadow    = 3,
	ESkellyFormIconType__None      = 4,
	ESkellyFormIconType__Max       = 5,
	ESkellyFormIconType__ESkellyFormIconType_MAX = 6,

};

// Enum AIShips.EAIShipType
enum class AIShips_EAIShipType : uint8_t
{
	EAIShipType__Normal            = 0,
	EAIShipType__Hard              = 1,
	EAIShipType__EAIShipType_MAX   = 2,

};

// Enum AIShips.EAIShipPlayerTrackerType
enum class AIShips_EAIShipPlayerTrackerType : uint8_t
{
	DefaultRadiusTracker           = 0,
	CannonRadiusTracker            = 1,
	OnShipTracker                  = 2,
	BelowDeckOfShipTracker         = 3,
	EAIShipPlayerTrackerType_MAX   = 4,

};

// Enum AIShips.EAIShipDestructionReason
enum class AIShips_EAIShipDestructionReason : uint8_t
{
	EAIShipDestructionReason__Defeated = 0,
	EAIShipDestructionReason__Despawn = 1,
	EAIShipDestructionReason__EAIShipDestructionReason_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIShips.AIShipBattleParams
// 0x0048
struct FAIShipBattleParams
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_DM77[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector2D                                   Location;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ODPC[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.TrackingNoiseGenerator
// 0x0018
struct FTrackingNoiseGenerator
{
	class UCurveFloat*                                 ParallelOffsetCurve;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OscillationTime;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SOG6[0xC];                                     // 0x000C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.ShipMovementParams
// 0x0034
struct FShipMovementParams
{
	float                                              MinTargetDistanceForMovement;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTurnAngle;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTurnAngleForObstacleAvoidance;                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTurnAngleForPlayerShipObstacleAvoidance;                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinTurnSpeedScaler;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpeed;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinSpeed;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToAccelerateFromZeroToMaxSpeed;                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToAccelerateFromZeroToMaxTurnSpeed;                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveBackwardsAngleThreshold;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveBackwardsDistanceThreshold;                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveBackwardsShipSpeedThreshold;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxObstacleAvoidanceOverrideDistance;                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipEncounterParamsSpawnerData
// 0x0020
struct FAIShipEncounterParamsSpawnerData
{
	class UAISpawner*                                  Spawner;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SpawnLocationType;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipPlayerTrackerType>      ShipPlayerTrackerType;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9ST7[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CaptainName;                                               // 0x0014(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanRepairDamage;                                           // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanUseCannons;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCaptain;                                                 // 0x001E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BelowDeck;                                                 // 0x001F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct AIShips.AIShipContextDescDamageParams
// 0x0014
struct FAIShipContextDescDamageParams
{
	float                                              OverrideRainFillRate;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideRepairTime;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QJ96[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepairTimeMultiplier;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideLeakAmounts;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8GKG[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeakAmountMultiplier;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipCrewAmmoType
// 0x0018
struct FAIShipCrewAmmoType
{
	TEnumAsByte<AIShips_ECannonballIconType>           IconType;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int8_t                                             IconIndex;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IUWP[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       AmmoType;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipCrewFormType
// 0x0020
struct FAIShipCrewFormType
{
	TEnumAsByte<AIShips_ESkellyFormIconType>           IconType;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B3G6[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      IconColour;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int8_t                                             IconIndex;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int8_t                                             CaptainIconIndex;                                          // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1RP[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       Form;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipSailData
// 0x0010
struct FAIShipSailData
{
	struct FColor                                      SailRGB;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FColor                                      IconRGB;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                CrewIndex;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CursedCannonballIndex;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.WeightedSpawnOffset
// 0x0040
struct FWeightedSpawnOffset
{
	float                                              MinSpawnDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpawnDistance;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GZCC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           SpawnRotations;                                            // 0x0010(0x0030) (Edit, DisableEditOnInstance)

};

// ScriptStruct AIShips.WeightedSpawnDirection
// 0x00B0
struct FWeightedSpawnDirection
{
	float                                              DirectionAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DirectionWidth;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PRV8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWeightedSpawnOffset>                SpawnOffsets;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_2H8V[0x90];                                    // 0x0020(0x0090) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.RelativeSpawnLocationGeneratorParams
// 0x00A0
struct FRelativeSpawnLocationGeneratorParams
{
	TArray<struct FWeightedSpawnDirection>             SpawnDirections;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_PMWB[0x90];                                    // 0x0010(0x0090) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.ShipTypeAIShipEncounterParams
// 0x0010
struct FShipTypeAIShipEncounterParams
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIShipEncounterParamsDataAsset*             Params;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipCaptainParams
// 0x0010
struct FAIShipCaptainParams
{
	class UClass*                                      AIClassId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipSizeLimit
// 0x0010
struct FAIShipSizeLimit
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                MaxInstances;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKNX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipEncounterWaveDesc
// 0x0010
struct FAIShipEncounterWaveDesc
{
	TArray<class UClass*>                              ShipSizes;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

};

// ScriptStruct AIShips.AIShipWeightedSize
// 0x0018
struct FAIShipWeightedSize
{
	struct FName                                       Feature;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GRAO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ShipSize;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipEncounterParams
// 0x0018
struct FAIShipEncounterParams
{
	float                                              MinEngagedDistanceFromPlayers;                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NOMT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FShipTypeAIShipEncounterParams>      ShipTypeParams;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.WeightedAIShipCrewFormType
// 0x0028
struct FWeightedAIShipCrewFormType
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7CV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIShipCrewFormType                         Params;                                                    // 0x0008(0x0020) (Edit, DisableEditOnInstance)

};

// ScriptStruct AIShips.WeightedAIShipCrewAmmoType
// 0x0020
struct FWeightedAIShipCrewAmmoType
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YX4L[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIShipCrewAmmoType                         Params;                                                    // 0x0008(0x0018) (Edit, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipContextDescGenerationSharedParams
// 0x0060
struct FAIShipContextDescGenerationSharedParams
{
	TArray<TEnumAsByte<AIShips_EAIShipEncounterType>>  EncounterTypes;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeightedAIShipCrewFormType>         SkeletonForms;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeightedAIShipCrewAmmoType>         SkeletonAmmoTypes;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FColor>                              SailColours;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipCaptainParams>                Captains;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CaptainGenders;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

};

// ScriptStruct AIShips.AIShipSkeletonSkillsetOverride
// 0x0018
struct FAIShipSkeletonSkillsetOverride
{
	struct FName                                       SpawnLocationType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       Skillset;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipGenerationParams
// 0x0048
struct FAIShipGenerationParams
{
	TEnumAsByte<AIShips_EAIShipEncounterType>          EncounterType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipType>                   ShipType;                                                  // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3Z7W[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAIShipControllerParamsDataAsset*      ShipControllerParams;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIShipSkeletonSkillsetOverride>     SkillsetOverrides;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeightedAIShipCrewAmmoType>         SkeletonAmmoTypeOverrides;                                 // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIShipContextDescDamageParams              DamageParams;                                              // 0x0030(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_RKGP[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipContextDescGenerationShipSpecificParams
// 0x0030
struct FAIShipContextDescGenerationShipSpecificParams
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UShipDescAsset*                              ShipDesc;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIShipGenerationParams>             ShipGenerationParams;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterParamsSpawnerData>   SpawnerTemplates;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipContextDescGenerationParams
// 0x0080
struct FAIShipContextDescGenerationParams
{
	struct FAIShipContextDescGenerationSharedParams    SharedParams;                                              // 0x0000(0x0060) (Edit, DisableEditOnInstance)
	TArray<struct FAIShipContextDescGenerationSharedParams> EncounterSpecificParams;                                   // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipContextDescGenerationShipSpecificParams> ShipSpecificParams;                                        // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipEncounterBattleGenerationParams
// 0x0060
struct FAIShipEncounterBattleGenerationParams
{
	class UClass*                                      HardShipType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   NumberOfWaves;                                             // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FInt32Range                                 MinMaxNumberOfShips;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                MinNumberOfShipsInFinalWave;                               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SGMB[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIShipSizeLimit>                    ShipSizeLimits;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterWaveDesc>            WaveConfigurations;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.FeatureLockedAIShipEncounterBattleGenerationParams
// 0x0078
struct FFeatureLockedAIShipEncounterBattleGenerationParams
{
	struct FName                                       Feature;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIShipEncounterBattleGenerationParams      Params;                                                    // 0x0008(0x0060) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_V3K3[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipEncounterBattleDesc
// 0x0010
struct FAIShipEncounterBattleDesc
{
	TArray<struct FAIShipEncounterWaveDesc>            WaveDescs;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipBattleEncounterDescGenerationParams
// 0x0028
struct FAIShipBattleEncounterDescGenerationParams
{
	bool                                               EnableHardShip;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XS1J[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterBattleDesc>          BattleDescs;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipClassWeightedSizes
// 0x0018
struct FAIShipClassWeightedSizes
{
	class UClass*                                      TargetShipSize;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FAIShipWeightedSize>                 ShipSizes;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipSingleWaveEncounterDescGenerationParams
// 0x0010
struct FAIShipSingleWaveEncounterDescGenerationParams
{
	TArray<struct FAIShipClassWeightedSizes>           ShipClassWeightedSizes;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.AIShipEncounterWave
// 0x0010
struct FAIShipEncounterWave
{
	TArray<class UAIShipContextDescDataAsset*>         AIShipsInWave;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct AIShips.CursedSailsBattleParams
// 0x0080
struct FCursedSailsBattleParams
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_BL5D[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       SkellyCrewName;                                            // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_HP1R[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<AIShips_ECannonballIconType>           CannonballType;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ESkellyFormIconType>           SkellyType;                                                // 0x0071(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AO2M[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIShipEncounterDesc*                        EncounterDescription;                                      // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipDespawnedEvent
// 0x0010
struct FAIShipDespawnedEvent
{
	class AActor*                                      Ship;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipDestructionReason>      ShipDestructionReason;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18VT[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipSpawnedEvent
// 0x0040
struct FAIShipSpawnedEvent
{
	class AShip*                                       Ship;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       SpawningCrew;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       SpawningEventId;                                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       SpawnConfigId;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Wave;                                                      // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NP4U[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipSinkNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipSinkNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipSpawnedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipSpawnedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipEncounterCompleteNetEvent
// 0x0008 (0x0018 - 0x0010)
struct FAIShipEncounterCompleteNetEvent : public FBoxedRpc
{
	int                                                BattleIdx;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ECannonballIconType>           CannonballIconType;                                        // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ESkellyFormIconType>           SkellyFormIconType;                                        // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T9XX[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipEncounterRevealNetEvent
// 0x0010 (0x0020 - 0x0010)
struct FAIShipEncounterRevealNetEvent : public FBoxedRpc
{
	int                                                BattleIdx;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SkellyCrewIdx;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ECannonballIconType>           CannonballIconType;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ESkellyFormIconType>           SkellyFormIconType;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JV18[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipEncounterNotification
// 0x0080
struct FAIShipEncounterNotification
{
	struct FText                                       BattleName;                                                // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_5NNW[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SeaName;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SkellyCrewName;                                            // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_EUTH[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<AIShips_ECannonballIconType>           CannonballType;                                            // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_ESkellyFormIconType>           SkellyType;                                                // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0U3J[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipEncounterZoneExitedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipEncounterZoneExitedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipEncounterZoneEnteredNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FAIShipEncounterZoneEnteredNetworkEvent : public FNetworkEventStruct
{
	int                                                RemainingAIShips;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalAIShips;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalAIShipsInFinalWave;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L987[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.FeatureLockedCampaignParams
// 0x0010
struct FFeatureLockedCampaignParams
{
	struct FName                                       Feature;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCursedSailsCampaignDataAsset*               CampaignDataAsset;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipWorldSettings
// 0x0018
struct FAIShipWorldSettings
{
	TArray<struct FFeatureLockedCampaignParams>        CampaignParams;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAIShipBattlesDataAsset*                     BattlesData;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AIShips.AIShipDamagedTelemetryEvent
// 0x0048
struct FAIShipDamagedTelemetryEvent
{
	struct FString                                     DamageType;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     DamageLocation;                                            // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MK4D[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DamagedShipPart;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	int                                                DamageLevel;                                               // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       AttackId;                                                  // 0x0034(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XQ9Q[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipDespawnTelemetryEvent
// 0x0018
struct FAIShipDespawnTelemetryEvent
{
	struct FString                                     AIShipId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<AIShips_EAIShipDestructionReason>      AIShipDestructionReason;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1F6G[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIShips.AIShipSpawnTelemetryEvent
// 0x0068
struct FAIShipSpawnTelemetryEvent
{
	struct FString                                     AIShipId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SpawningCrewId;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIShipBattleId;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIShipType;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       SpawnConfigId;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     AIShipSize;                                                // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	int                                                AIShipWaveIndex;                                           // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WI42[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
