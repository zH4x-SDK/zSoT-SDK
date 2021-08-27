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

// BlueprintGeneratedClass BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
// 0x0028 (FullSize[0x0670] - InheritedSize[0x0648])
class ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:
	class UMeshRotatorComponent*                       MeshRotator;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               OverlapsWaterInteractionVolumes;                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWaterInteractionComponent*                  WaterInteraction;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipTrackerComponent*                       ShipTracker;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USimpleOverlapComponent*                     SimpleOverlap;                                             // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
