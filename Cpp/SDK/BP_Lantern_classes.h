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

// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// 0x0098 (FullSize[0x0998] - InheritedSize[0x0900])
class ABP_Lantern_C : public ALantern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LanternTriggerGlow;                                        // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        LanternGlow;                                               // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmbientLightSourceComponent*                AmbientLightSource;                                        // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UUsableWieldableComponent*                   UsableWieldable;                                           // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UMaterialInstanceDynamic*                    LanternGlowDynamicMaterial;                                // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EmissiveInt_threshold;                                     // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H3KF[0x4];                                     // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    LanternTriggerGlowDynamicMaterial;                         // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TriggerGlowDuration;                                       // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TriggerGlowRampInDuration;                                 // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TriggerGlowRampOutDuration;                                // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefaultSpotlightColour;                                    // 0x0954(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefaultAmbientLightColour;                                 // 0x0964(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefaultGlowColour;                                         // 0x0974(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3PG3[0x4];                                     // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern.BP_Lantern_C");
		return ptr;
	}



	void CreateLanternDynamicMaterial();
	void OnAttachThirdPerson();
	void OnAttachFirstPerson();
	void TurnOff();
	void TurnOn();
	void UserConstructionScript();
	void ReceiveWieldFirstPerson();
	void ReceiveWieldThirdPerson();
	void ReceiveBeginPlay();
	void ReceiveLightChange();
	void TriggerGlow();
	void PostMeshChangedBPEvent(bool SkipFlameColourTransition);
	void ReceiveFlameData(bool WantChangeAnimation);
	void ExecuteUbergraph_BP_Lantern(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
