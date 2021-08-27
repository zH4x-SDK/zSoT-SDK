#pragma once

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
// Classes
//---------------------------------------------------------------------------

// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UEmissaryActionRewardBoostComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_L1MY[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActionRewardBoostComponent");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UEmissaryActiveTableVisualiserComponent : public UActorComponent
{
public:
	class UClass*                                      TargetCompany;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FMaterialVisualisation>              MaterialChanges;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_M0DV[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLightVisualisation>                 LightChanges;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_H75Q[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FParticleVisualisation>              ParticleChanges;                                           // 0x0110(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_D6VW[0x38];                                    // 0x0120(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActiveTableVisualiserComponent");
		return ptr;
	}



	void OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
};

// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UEmissaryEntitlementCategory : public UItemCategory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementCategory");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementDesc");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryFlotsamItemInfo
// 0x0018 (FullSize[0x0730] - InheritedSize[0x0718])
class AEmissaryFlotsamItemInfo : public ABootyItemInfo
{
public:
	struct FCompanySpecificBootyReward                 HandInOwnFlotsamReward;                                    // 0x0718(0x0018) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemInfo");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0088 (FullSize[0x04F0] - InheritedSize[0x0468])
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData_LUTH[0x8];                                     // 0x0468(0x0008) Fix Super Size
	unsigned char                                      UnknownData_H72L[0x80];                                    // 0x0470(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UEmissaryFlotsamTooltipCustomizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_7MTQ[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               CheckForDelivery;                                          // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheckForPickup;                                            // 0x00D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TSOA[0x16];                                    // 0x00DA(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryPointBoostMultipliers              BoostMultiplers;                                           // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FEmissaryFlagMeshReferences                 DefaultEmissaryFlagAssetReferences;                        // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	uint32_t                                           NumberOfCustomisedShipPartsToGainBoost;                    // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EZAR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelSettingsAsset");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryLevelService
// 0x02E8 (FullSize[0x06B8] - InheritedSize[0x03D0])
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData_MPSQ[0xA0];                                    // 0x03D0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmissaryLevelSettingsAsset*                 Settings;                                                  // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                            // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PF2L[0x238];                                   // 0x0480(0x0238) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelService");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UEmissaryMaxRankQuestProvider : public UActorComponent
{
public:
	class UClass*                                      MaxRankQuestNotificationID;                                // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EActionDisplayPriority>         MaxRankQuestToolTipPriority;                               // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FHUA[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StartMaxRankQuestToolTipText;                              // 0x00D8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_631E[0x20];                                    // 0x00D1(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CannotStartMaxRankQuestToolTipText;                        // 0x0110(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_2A46[0x20];                                    // 0x0110(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       QuestDesc;                                                 // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Company;                                                   // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryMaxRankQuestProvider");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JKOD[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EmissaryLevel;                                             // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              EmissaryLevelProgress;                                     // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       AffiliatedCompany;                                         // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               IsAtMaxRank;                                               // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession;            // 0x00E1(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_2UOR[0x6];                                     // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMysteriousNotesCompletionEventsModelEntry> NoteCompletionIdents;                                      // 0x00E8(0x0010) (Edit, ZeroConstructor, Protected)
	unsigned char                                      UnknownData_UDLX[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       VotedCompany;                                              // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryParticipantComponent");
		return ptr;
	}



	void OnRep_EmissaryLevel();
	void OnRep_AffiliatedCompany(const struct FName& PreviousId);
};

// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRepresentationMeshComponent");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEmissaryRewardCampaignSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryCompanyCampaignSettings>    Companies;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerKilledExpiryTime;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RRLZ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmissaryRewardCampaignSettingsAsset*        CampaignSettings;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardSettingsAsset");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
{
public:
	int                                                EmissaryCount;                                             // 0x02B0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QRMR[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TrackedCompany;                                            // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            EmissaryRepresentationMesh;                                // 0x02C0(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ML44[0x4];                                     // 0x02C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FTransform>                          EmissaryRepresentationTransforms;                          // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                EmissaryRepresentationMeshes;                              // 0x02F0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference)
	class UClass*                                      LoadedEmissaryRepresentationMesh;                          // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_991C[0x18];                                    // 0x0308(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent");
		return ptr;
	}



	void OnRep_EmissaryCount();
};

// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UEmissaryVoyageVoteValidatorBase*            Validator;                                                 // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N9E5[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       VoyageCinematicHeader;                                     // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_VST5[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       VoyageCinematicTag;                                        // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MS1U[0x20];                                    // 0x00C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCrewMemberVotes>                    Votes;                                                     // 0x00E0(0x0010) (Net, ZeroConstructor, RepNotify)
	class UBoxedRpcDispatcherComponent*                RpcDispatcher;                                             // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WZPC[0x20];                                    // 0x00F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OwningActor;                                               // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7W9F[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase");
		return ptr;
	}



	void OnRep_Votes();
};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x01A0 (FullSize[0x02C8] - InheritedSize[0x0128])
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                    // 0x0128(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_718Q[0x20];                                    // 0x0128(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVote;                                    // 0x0160(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_37UI[0x20];                                    // 0x0160(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;          // 0x0198(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_5GIE[0x20];                                    // 0x0198(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement;         // 0x01D0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_1NWR[0x20];                                    // 0x01D0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x0208(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_SARG[0x20];                                    // 0x0208(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingRemoveVote;                                  // 0x0240(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_TKCT[0x20];                                    // 0x0240(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantRemoveVote;                              // 0x0278(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_BN3J[0x20];                                    // 0x0278(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_1WTU[0x18];                                    // 0x02B0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}



};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0168 (FullSize[0x0290] - InheritedSize[0x0128])
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                    // 0x0128(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_WMVW[0x20];                                    // 0x0128(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVote;                                    // 0x0160(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_AXCY[0x20];                                    // 0x0160(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;          // 0x0198(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_7LAG[0x20];                                    // 0x0198(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany;     // 0x01D0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_JX2J[0x20];                                    // 0x01D0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingRemoveVote;                                  // 0x0208(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_D7T6[0x20];                                    // 0x0208(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantRemoveVote;                              // 0x0240(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_E2VX[0x20];                                    // 0x0240(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_ZOOP[0x18];                                    // 0x0278(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}



};

// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	class UClass*                                      TargetCompany;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      RequiredEntitlement;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DKQI[0x60];                                    // 0x0040(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmissaryVoyageInlineVoteConsumerBase*       Consumer;                                                  // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase");
		return ptr;
	}



};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator");
		return ptr;
	}



};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator");
		return ptr;
	}



};

// Class EmissaryLevel.IsEmissaryStatCondition
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UIsEmissaryStatCondition : public UStatCondition
{
public:
	class UClass*                                      RequiredEmissaryCompany;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               RequiresMaxEmissaryLevel;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WXSP[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryLevel.IsEmissaryStatCondition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
