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

// Function BP_WoodPlank.BP_WoodPlank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WoodPlank_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.UserConstructionScript");

	ABP_WoodPlank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WoodPlank.BP_WoodPlank_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_WoodPlank_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.ReceiveBeginPlay");

	ABP_WoodPlank_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WoodPlank.BP_WoodPlank_C.ExecuteUbergraph_BP_WoodPlank
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WoodPlank_C::ExecuteUbergraph_BP_WoodPlank(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.ExecuteUbergraph_BP_WoodPlank");

	ABP_WoodPlank_C_ExecuteUbergraph_BP_WoodPlank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
