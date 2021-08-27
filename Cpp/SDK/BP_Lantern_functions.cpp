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

// Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::CreateLanternDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial");

	ABP_Lantern_C_CreateLanternDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::OnAttachThirdPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson");

	ABP_Lantern_C_OnAttachThirdPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::OnAttachFirstPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson");

	ABP_Lantern_C_OnAttachFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::TurnOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.TurnOff");

	ABP_Lantern_C_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.TurnOn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::TurnOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.TurnOn");

	ABP_Lantern_C_TurnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.UserConstructionScript");

	ABP_Lantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson
// (Event, Protected, BlueprintEvent)
void ABP_Lantern_C::ReceiveWieldFirstPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson");

	ABP_Lantern_C_ReceiveWieldFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson
// (Event, Protected, BlueprintEvent)
void ABP_Lantern_C::ReceiveWieldThirdPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson");

	ABP_Lantern_C_ReceiveWieldThirdPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Lantern_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay");

	ABP_Lantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ReceiveLightChange
// (Event, Protected, BlueprintEvent)
void ABP_Lantern_C::ReceiveLightChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ReceiveLightChange");

	ABP_Lantern_C_ReceiveLightChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.TriggerGlow
// (Event, Protected, BlueprintEvent)
void ABP_Lantern_C::TriggerGlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.TriggerGlow");

	ABP_Lantern_C_TriggerGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           SkipFlameColourTransition      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Lantern_C::PostMeshChangedBPEvent(bool SkipFlameColourTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent");

	ABP_Lantern_C_PostMeshChangedBPEvent_Params params;
	params.SkipFlameColourTransition = SkipFlameColourTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ReceiveFlameData
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           WantChangeAnimation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Lantern_C::ReceiveFlameData(bool WantChangeAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ReceiveFlameData");

	ABP_Lantern_C_ReceiveFlameData_Params params;
	params.WantChangeAnimation = WantChangeAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Lantern_C::ExecuteUbergraph_BP_Lantern(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern");

	ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
