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
// Classes
//---------------------------------------------------------------------------

// Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UCommodityDemandFrameworkEditorSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       CommodityDataFileLocation;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityDemandFrameworkSettings
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UCommodityDemandFrameworkSettings : public UDeveloperSettings
{
public:
	float                                              DemandRefreshFrequencyInSeconds;                           // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DemandCollectionId;                                        // 0x003C(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MRKZ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EmissaryLockedCommodityOfferDescription;                   // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Config)
	unsigned char                                      UnknownData_YDEK[0x20];                                    // 0x0044(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       OutOfStockLockedCommodityOfferDescription;                 // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Config)
	unsigned char                                      UnknownData_C2QJ[0x20];                                    // 0x0080(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CommodityPurchaseLockoutInGameDays;                        // 0x00B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InGameHourWhenCommoditiesRestock;                          // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameTime                                   CommodityRedemptionTimeOutPeriodInDays;                    // 0x00C0(0x0008) (Edit, Config)
	struct FStringAssetReference                       NPCListAsset;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandFrameworkSettings");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityDemandServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityDemandServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandServiceInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityDemandService
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class ACommodityDemandService : public AActor
{
public:
	unsigned char                                      UnknownData_ZDZH[0x20];                                    // 0x03D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveNPCDemands                           ActiveCommodityDemands;                                    // 0x03F0(0x0020) (Net, RepNotify)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandService");
		return ptr;
	}



	void OnRep_ActiveCommodityDemands();
};

// Class CommodityDemandFramework.CommodityDemandStorageInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityDemandStorageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandStorageInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityDemandStorageProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityDemandStorageProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandStorageProviderInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCommodityEntitlementRedemptionAsset : public UDataAsset
{
public:
	TArray<struct FEntitlementToRedeemItems>           CommoditiesForRedemption;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityItemDesc
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class UCommodityItemDesc : public UBootyItemDesc
{
public:
	struct FCommoditySelectionType                     CommodityType;                                             // 0x0130(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<CommodityDemandFramework_ECommodityDemand> CommodityDemand;                                           // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MLSV[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityItemDesc");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityPurchaseTrackingComponent
// 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
class UCommodityPurchaseTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_J86G[0x80];                                    // 0x00C8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityPurchaseTrackingComponent");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityRedemptionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityRedemptionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityRedemptionComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UCommodityRedemptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MLFQ[0x80];                                    // 0x00C8(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PendingRedemptions;                                        // 0x0148(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionComponent");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommoditySourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommoditySourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommoditySourceInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommoditySourceComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UCommoditySourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_OL3W[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NPCIdentifier;                                             // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommoditySourceComponent");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityTokenEntitlementDesc
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UCommodityTokenEntitlementDesc : public UEntitlementDesc
{
public:
	struct FName                                       NPCToRedeemAt;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UClass*                                      ItemToRedeemFor;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityTokenEntitlementDesc");
		return ptr;
	}



};

// Class CommodityDemandFramework.CommodityTypeDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCommodityTypeDataAsset : public UDataAsset
{
public:
	TArray<struct FCommodityTypeDataEntry>             CommodityEntries;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityTypeDataAsset");
		return ptr;
	}



};

// Class CommodityDemandFramework.CrateFillerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrateFillerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CrateFillerInterface");
		return ptr;
	}



};

// Class CommodityDemandFramework.CrateFillerComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UCrateFillerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_78V6[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.CrateFillerComponent");
		return ptr;
	}



};

// Class CommodityDemandFramework.DeliverableCommodityRequirement
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableCommodityRequirement : public UDeliverableRequirementBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.DeliverableCommodityRequirement");
		return ptr;
	}



};

// Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UIsWieldedCommodityItemInDemandStatCondition : public UTargetedStatCondition
{
public:
	TEnumAsByte<CommodityDemandFramework_ECommodityDemand> CommodityDemand;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0QCR[0x1F];                                    // 0x0031(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition");
		return ptr;
	}



};

// Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UWasWieldedCommodityItemBoughtAtDemandStatCondition : public UTargetedStatCondition
{
public:
	TEnumAsByte<CommodityDemandFramework_ECommodityDemand> CommodityDemand;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T10O[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
