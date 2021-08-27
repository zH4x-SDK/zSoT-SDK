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

// Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PiratePreview_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript");

	ABP_PiratePreview_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PiratePreview_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay");

	ABP_PiratePreview_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)
void ABP_PiratePreview_C::PreviewBusy_Event(const struct FPiratePreviewBusyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event");

	ABP_PiratePreview_C_PreviewBusy_Event_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)
void ABP_PiratePreview_C::PreviewReady_Event(const struct FPiratePreviewReadyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event");

	ABP_PiratePreview_C_PreviewReady_Event_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PiratePreview_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay");

	ABP_PiratePreview_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PiratePreview_C::ExecuteUbergraph_BP_PiratePreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview");

	ABP_PiratePreview_C_ExecuteUbergraph_BP_PiratePreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewShutdownEvent Data                           (Parm)
void ABP_PiratePreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature");

	ABP_PiratePreview_C_PreviewShutdown__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)
void ABP_PiratePreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature");

	ABP_PiratePreview_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)
void ABP_PiratePreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature");

	ABP_PiratePreview_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
