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

// BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C
// 0x0020 (FullSize[0x08A8] - InheritedSize[0x0888])
class ABP_cmn_cannonball_Grenade_Scatter_Wieldable_C : public ABP_Grenade_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              JiggleVelocityThreshold;                                   // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              JiggleVelocityScale;                                       // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              JiggleAmount;                                              // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1X0Z[0x4];                                     // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
