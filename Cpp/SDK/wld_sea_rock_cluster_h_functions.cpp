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

// Function wld_sea_rock_cluster_h.wld_sea_rock_cluster_h_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_sea_rock_cluster_h_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_sea_rock_cluster_h.wld_sea_rock_cluster_h_C.UserConstructionScript");

	Awld_sea_rock_cluster_h_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
