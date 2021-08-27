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

// BlueprintGeneratedClass BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo.BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C
// 0x0018 (FullSize[0x0730] - InheritedSize[0x0718])
class ABP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C : public ABootyItemInfo
{
public:
	class UCommoditySourceComponent*                   CommoditySource;                                           // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCrateFillerComponent*                       CrateFiller;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo.BP_MerchantCrate_CannonballCrate_FullyStocked_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
