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

// BlueprintGeneratedClass BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C
// 0x0018 (FullSize[0x0568] - InheritedSize[0x0550])
class ABP_MediumShip_ServingHatch_Left_C : public ASwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_mid_serving_hatch_L_01_a;                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C");
		return ptr;
	}



	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_MediumShip_ServingHatch_Left(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
