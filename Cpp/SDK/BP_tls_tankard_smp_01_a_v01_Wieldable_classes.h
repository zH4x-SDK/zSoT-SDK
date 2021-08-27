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

// BlueprintGeneratedClass BP_tls_tankard_smp_01_a_v01_Wieldable.BP_tls_tankard_smp_01_a_v01_Wieldable_C
// 0x0018 (FullSize[0x0838] - InheritedSize[0x0820])
class ABP_tls_tankard_smp_01_a_v01_Wieldable_C : public ABP_Tankard_C
{
public:
	class UStaticMeshComponent*                        shroudmask_tp;                                             // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shroud_tp;                                                 // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shroud_fp;                                                 // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_tankard_smp_01_a_v01_Wieldable.BP_tls_tankard_smp_01_a_v01_Wieldable_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
