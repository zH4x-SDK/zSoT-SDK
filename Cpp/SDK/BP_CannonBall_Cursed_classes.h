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

// BlueprintGeneratedClass BP_CannonBall_Cursed.BP_CannonBall_Cursed_C
// 0x0059 (FullSize[0x07F1] - InheritedSize[0x0798])
class ABP_CannonBall_Cursed_C : public ABP_CannonBall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                           // 0x07A8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWielded;                                                 // 0x07F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CannonBall_Cursed.BP_CannonBall_Cursed_C");
		return ptr;
	}



	void SetLightVisibility(bool Visibility);
	void OnRep_IsWielded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_CannonBall_Cursed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
