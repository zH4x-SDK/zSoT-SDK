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

// Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.UserConstructionScript");

	ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ReceiveBeginPlay");

	ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ReceiveTick");

	ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_chain_shot_01_a_Wieldable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_chain_shot_01_a_Wieldable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_chain_shot_01_a_Wieldable.BP_cmn_cannonball_chain_shot_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_chain_shot_01_a_Wieldable");

	ABP_cmn_cannonball_chain_shot_01_a_Wieldable_C_ExecuteUbergraph_BP_cmn_cannonball_chain_shot_01_a_Wieldable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
