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

// Function BP_medium_mast_main.BP_medium_mast_main_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_medium_mast_main_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_medium_mast_main.BP_medium_mast_main_C.UserConstructionScript");

	ABP_medium_mast_main_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_medium_mast_main.BP_medium_mast_main_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_medium_mast_main_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_medium_mast_main.BP_medium_mast_main_C.OnMastDescLoaded");

	ABP_medium_mast_main_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_medium_mast_main.BP_medium_mast_main_C.ExecuteUbergraph_BP_medium_mast_main
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_medium_mast_main_C::ExecuteUbergraph_BP_medium_mast_main(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_medium_mast_main.BP_medium_mast_main_C.ExecuteUbergraph_BP_medium_mast_main");

	ABP_medium_mast_main_C_ExecuteUbergraph_BP_medium_mast_main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
