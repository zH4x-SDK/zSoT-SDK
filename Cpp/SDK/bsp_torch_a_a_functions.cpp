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

// Function bsp_torch_a_a.bsp_torch_a_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_torch_a_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_torch_a_a.bsp_torch_a_a_C.UserConstructionScript");

	Absp_torch_a_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_torch_a_a.bsp_torch_a_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Absp_torch_a_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_torch_a_a.bsp_torch_a_a_C.ReceiveBeginPlay");

	Absp_torch_a_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_torch_a_a.bsp_torch_a_a_C.ExecuteUbergraph_bsp_torch_a_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Absp_torch_a_a_C::ExecuteUbergraph_bsp_torch_a_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_torch_a_a.bsp_torch_a_a_C.ExecuteUbergraph_bsp_torch_a_a");

	Absp_torch_a_a_C_ExecuteUbergraph_bsp_torch_a_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
