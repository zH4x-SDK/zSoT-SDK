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

// BlueprintGeneratedClass BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C
// 0x000C (FullSize[0x067C] - InheritedSize[0x0670])
class ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C : public ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
{
public:
	class UExplosiveComponent*                         Explosive;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              ImpactMultiplier;                                          // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
