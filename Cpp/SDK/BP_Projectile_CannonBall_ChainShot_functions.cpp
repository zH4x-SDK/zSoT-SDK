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

// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_CannonBall_ChainShot_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.UserConstructionScript");

	ABP_Projectile_CannonBall_ChainShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Projectile_CannonBall_ChainShot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ReceiveBeginPlay");

	ABP_Projectile_CannonBall_ChainShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Projectile_CannonBall_ChainShot_C::ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C.ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot");

	ABP_Projectile_CannonBall_ChainShot_C_ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
