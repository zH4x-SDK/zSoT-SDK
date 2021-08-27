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

// BlueprintGeneratedClass BP_MerchantCrate_BananaCrateProxy.BP_MerchantCrate_BananaCrateProxy_C
// 0x0018 (FullSize[0x07D0] - InheritedSize[0x07B8])
class ABP_MerchantCrate_BananaCrateProxy_C : public AStaticMerchantCrateItemProxy
{
public:
	class UBP_MerchantCrate_BananaCrate_StorageContainerComponent_C* BP_MerchantCrate_BananaCrate_StorageContainerComponent;    // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAddOpenContainerActionRuleComponent*        AddOpenContainerActionRule;                                // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_BananaCrateProxy.BP_MerchantCrate_BananaCrateProxy_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
