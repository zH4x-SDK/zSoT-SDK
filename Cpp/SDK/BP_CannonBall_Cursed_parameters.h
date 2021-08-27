#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.SetLightVisibility
struct ABP_CannonBall_Cursed_C_SetLightVisibility_Params
{
	bool                                               Visibility;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnRep_IsWielded
struct ABP_CannonBall_Cursed_C_OnRep_IsWielded_Params
{
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.UserConstructionScript
struct ABP_CannonBall_Cursed_C_UserConstructionScript_Params
{
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveBeginPlay
struct ABP_CannonBall_Cursed_C_ReceiveBeginPlay_Params
{
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.OnIsWielded
struct ABP_CannonBall_Cursed_C_OnIsWielded_Params
{
	struct FEventWieldableItemSetIsWielded             NewParam;                                                  // (Parm)
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ReceiveEndPlay
struct ABP_CannonBall_Cursed_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CannonBall_Cursed.BP_CannonBall_Cursed_C.ExecuteUbergraph_BP_CannonBall_Cursed
struct ABP_CannonBall_Cursed_C_ExecuteUbergraph_BP_CannonBall_Cursed_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
