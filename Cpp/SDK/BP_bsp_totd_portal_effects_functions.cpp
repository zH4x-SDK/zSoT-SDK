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

// Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_bsp_totd_portal_effects_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.UserConstructionScript");

	ABP_bsp_totd_portal_effects_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_bsp_totd_portal_effects_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ReceiveBeginPlay");

	ABP_bsp_totd_portal_effects_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ExecuteUbergraph_BP_bsp_totd_portal_effects
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_bsp_totd_portal_effects_C::ExecuteUbergraph_BP_bsp_totd_portal_effects(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ExecuteUbergraph_BP_bsp_totd_portal_effects");

	ABP_bsp_totd_portal_effects_C_ExecuteUbergraph_BP_bsp_totd_portal_effects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
