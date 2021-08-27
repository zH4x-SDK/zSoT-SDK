// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CannonBall_Cursed_C::SetLightVisibility(bool Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.SetLightVisibility");

	ABP_CannonBall_Cursed_C_SetLightVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnRep_IsWielded
// (BlueprintCallable, BlueprintEvent)
void ABP_CannonBall_Cursed_C::OnRep_IsWielded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnRep_IsWielded");

	ABP_CannonBall_Cursed_C_OnRep_IsWielded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CannonBall_Cursed_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.UserConstructionScript");

	ABP_CannonBall_Cursed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CannonBall_Cursed_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveBeginPlay");

	ABP_CannonBall_Cursed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnIsWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWieldableItemSetIsWielded NewParam                       (Parm)
void ABP_CannonBall_Cursed_C::OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnIsWielded");

	ABP_CannonBall_Cursed_C_OnIsWielded_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CannonBall_Cursed_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveEndPlay");

	ABP_CannonBall_Cursed_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ExecuteUbergraph_BP_CannonBall_Cursed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CannonBall_Cursed_C::ExecuteUbergraph_BP_CannonBall_Cursed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ExecuteUbergraph_BP_CannonBall_Cursed");

	ABP_CannonBall_Cursed_C_ExecuteUbergraph_BP_CannonBall_Cursed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
