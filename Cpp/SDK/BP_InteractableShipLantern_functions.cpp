﻿// Name: SoT, Version: 2.2.1.1

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

// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_InteractableShipLantern_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript");

	ABP_InteractableShipLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_InteractableShipLantern_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay");

	ABP_InteractableShipLantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged
// (Event, Public, BlueprintEvent)
void ABP_InteractableShipLantern_C::LightStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged");

	ABP_InteractableShipLantern_C_LightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_InteractableShipLantern_C::ExecuteUbergraph_BP_InteractableShipLantern(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern");

	ABP_InteractableShipLantern_C_ExecuteUbergraph_BP_InteractableShipLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
