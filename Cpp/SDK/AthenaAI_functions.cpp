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

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
// (Final, Native, Private)
void UAthenaAIFormComponent::OnRep_FormData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData");

	UAthenaAIFormComponent_OnRep_FormData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAISpawner::GetNumOfSpawnRequests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AISpawner.GetNumOfSpawnRequests");

	UAISpawner_GetNumOfSpawnRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression");

	UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset");

	UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout");

	UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm");

	UAIEncounterServiceInterface_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter");

	UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
// (Native, Event, Public, BlueprintEvent)
void UAICombatEncounterInterface::OnVulnerabilityStateEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered");

	UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAISkillsetRankProgression> Progression                    (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression");

	AAIEncounterService_RegisterLoadedSkillsetProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset");

	AAIEncounterService_RegisterLoadedSkillset_Params params;
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class ULoadoutAsset> Loadout                        (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout");

	AAIEncounterService_RegisterLoadedLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterService.RegisterLoadedForm
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedForm");

	AAIEncounterService_RegisterLoadedForm_Params params;
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
// (Native, Public, BlueprintCallable)
// Parameters:
// TAssetPtr<class UAIEncounterSettings> Encounter                      (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter");

	AAIEncounterService_RegisterLoadedEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemDesc                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AItemInfo*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AItemInfo* UAIManagerBlueprintFunctionLibrary::STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI");

	UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params params;
	params.Pawn = Pawn;
	params.ItemDesc = ItemDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAIManagerBlueprintFunctionLibrary::STATIC_GetFrameCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter");

	UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   DisplayName                    (ConstParm, Parm, OutParm, ReferenceParm)
void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const struct FText& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName");

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params params;
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAI(class AActor* Actor, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI");

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params params;
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI");

	UAIManagerServiceInterface_StartDespawnAI_Params params;
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAIManagerServiceInterface::GetNumOfSpawnedPawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns");

	UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
// (Final, Native, Public, BlueprintCallable)
void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup");

	UAIFaunaSpawner_SpawnFaunaGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIControllerBase::SetNamedControllerParam(const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam");

	AAthenaAIControllerBase_SetNamedControllerParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedProbabilityRangeOfRanges ReturnValue                    (Parm, OutParm, ReturnParm)
struct FWeightedProbabilityRangeOfRanges AAthenaAIControllerBase::FindNamedWeightedRangesControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam");

	AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AAthenaAIControllerBase::FindNamedControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam");

	AAthenaAIControllerBase_FindNamedControllerParam_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIControllerBase::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams");

	AAthenaAIControllerBase_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.StopBehaviourLogic
// (Native, Public, BlueprintCallable)
void AAthenaAIController::StopBehaviourLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.StopBehaviourLogic");

	AAthenaAIController_StopBehaviourLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ExpirationAge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor");

	AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params;
	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus");

	AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params;
	params.TriggerActor = TriggerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (Parm, ZeroConstructor)
void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnPerceptionUpdated");

	AAthenaAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.OnNewlySpawned
// (Event, Public, BlueprintEvent)
void AAthenaAIController::OnNewlySpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnNewlySpawned");

	AAthenaAIController_OnNewlySpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.OnFinishDespawn
// (Event, Public, BlueprintEvent)
void AAthenaAIController::OnFinishDespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnFinishDespawn");

	AAthenaAIController_OnFinishDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIController.IsActorPerceived
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.IsActorPerceived");

	AAthenaAIController_IsActorPerceived_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetTargetActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AAthenaAIController::GetTargetActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetTargetActor");

	AAthenaAIController_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAthenaAIPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent");

	AAthenaAIController_GetAthenaAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIController.GetAllSeenActors
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          SeenActors                     (Parm, OutParm, ZeroConstructor)
void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAllSeenActors");

	AAthenaAIController_GetAllSeenActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;

}


// Function AthenaAI.AthenaAIController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.ApplyControllerParams");

	AAthenaAIController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDormancyCheckingEnabledInAutomation (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaFaunaAIController::SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled");

	AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params params;
	params.InDormancyCheckingEnabledInAutomation = InDormancyCheckingEnabledInAutomation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed");

	AAthenaFaunaAIController_LeaderDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaFaunaAIController.GetLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AAthenaFaunaAIController::GetLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetLeader");

	AAthenaFaunaAIController_GetLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetCourage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AAthenaFaunaAIController::GetCourage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetCourage");

	AAthenaFaunaAIController_GetCourage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp");

	AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AICreatureCharacter.SetAIStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStrategy                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAICreatureCharacter::SetAIStrategy(class UClass* InStrategy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.SetAIStrategy");

	AAICreatureCharacter_SetAIStrategy_Params params;
	params.InStrategy = InStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
// (Final, Native, Protected)
// Parameters:
// class UClass*                  OldAIStrategy                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAICreatureCharacter::OnRep_CurrentAIStrategy(class UClass* OldAIStrategy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy");

	AAICreatureCharacter_OnRep_CurrentAIStrategy_Params params;
	params.OldAIStrategy = OldAIStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void AAICreatureCharacter::Multicast_DespawnRPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC");

	AAICreatureCharacter_Multicast_DespawnRPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AICreatureCharacter.GetAIStrategy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* AAICreatureCharacter::GetAIStrategy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.GetAIStrategy");

	AAICreatureCharacter_GetAIStrategy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.Fauna.TestingSetWaterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<AthenaAI_EFaunaInWaterState> NewInState                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::TestingSetWaterState(TEnumAsByte<AthenaAI_EFaunaInWaterState> NewInState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.TestingSetWaterState");

	AFauna_TestingSetWaterState_Params params;
	params.NewInState = NewInState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_TargetTurnAngle
// (Final, Native, Private)
void AFauna::OnRep_TargetTurnAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_TargetTurnAngle");

	AFauna_OnRep_TargetTurnAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
// (Final, Native, Private)
void AFauna::OnRep_IsPlayingStarvingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim");

	AFauna_OnRep_IsPlayingStarvingAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_IsCalm
// (Final, Native, Private)
void AFauna::OnRep_IsCalm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsCalm");

	AFauna_OnRep_IsCalm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_IsAgitated
// (Final, Native, Private)
void AFauna::OnRep_IsAgitated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsAgitated");

	AFauna_OnRep_IsAgitated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_InWaterState
// (Final, Native, Private)
void AFauna::OnRep_InWaterState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_InWaterState");

	AFauna_OnRep_InWaterState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.OnRep_CratedState
// (Final, Native, Private, HasOutParms)
// Parameters:
// TEnumAsByte<AthenaAI_EFaunaCratedState> PreviousCratedState            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::OnRep_CratedState(TEnumAsByte<AthenaAI_EFaunaCratedState> PreviousCratedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_CratedState");

	AFauna_OnRep_CratedState_Params params;
	params.PreviousCratedState = PreviousCratedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  Crate                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC");

	AFauna_Multicast_PlayPutInCrateEffectsRPC_Params params;
	params.Crate = Crate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  FedBy                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::Multicast_JustBeenFedRPC(class AActor* FedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_JustBeenFedRPC");

	AFauna_Multicast_JustBeenFedRPC_Params params;
	params.FedBy = FedBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.Multicast_HightlightLeader
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bIsLeader                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFauna::Multicast_HightlightLeader(bool bIsLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_HightlightLeader");

	AFauna_Multicast_HightlightLeader_Params params;
	params.bIsLeader = bIsLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
// (Final, Native, Public, BlueprintCallable)
void AFauna::GenerateNewRandomAnimationSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed");

	AFauna_GenerateNewRandomAnimationSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Fauna.ActivateResponseRPC
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// float                          InTargetTurnAngle              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::ActivateResponseRPC(float InTargetTurnAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.ActivateResponseRPC");

	AFauna_ActivateResponseRPC_Params params;
	params.InTargetTurnAngle = InTargetTurnAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaSwimmingAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams");

	AAthenaSwimmingAIController_ApplyControllerParams_Params params;
	params.InControllerParametersAsset = InControllerParametersAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  InDestroyedActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATinySharkExperience::TinySharkPawnDestroyed(class AActor* InDestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed");

	ATinySharkExperience_TinySharkPawnDestroyed_Params params;
	params.InDestroyedActor = InDestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
// (Native, Protected)
// Parameters:
// class ASharkPawn*              LastTinySharkPawn              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATinySharkExperience::OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn");

	ATinySharkExperience_OnRep_TinySharkPawn_Params params;
	params.LastTinySharkPawn = LastTinySharkPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.TinySharkExperience.GetTrackedShip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShip*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AShip* ATinySharkExperience::GetTrackedShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetTrackedShip");

	ATinySharkExperience_GetTrackedShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AthenaAI_ETinySharkState> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaAI_ETinySharkState> ATinySharkExperience::GetCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetCurrentState");

	ATinySharkExperience_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.TinySharkExperience.GetActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AthenaAI_ETinySharkActiveState> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaAI_ETinySharkActiveState> ATinySharkExperience::GetActiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetActiveState");

	ATinySharkExperience_GetActiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShip*                   InTrackedShip                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OverrideControllerParamIndex   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithShip");

	ATinySharkService_RequestTinySharkWithShip_Params params;
	params.InTrackedShip = InTrackedShip;
	params.OverrideControllerParamIndex = OverrideControllerParamIndex;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation");

	ATinySharkService_RequestTinySharkWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.TinySharkService.DismissAllTinySharks
// (Native, Public, BlueprintCallable)
void ATinySharkService::DismissAllTinySharks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.DismissAllTinySharks");

	ATinySharkService_DismissAllTinySharks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::CanSpawnTinySharkExperience()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience");

	ATinySharkService_CanSpawnTinySharkExperience_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AIManagerService.TickService
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIManagerService::TickService(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.TickService");

	AAIManagerService_TickService_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIManagerService.StartDespawnAI
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AIActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_ECharacterDeathType> DeathType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIManagerService::StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.StartDespawnAI");

	AAIManagerService_StartDespawnAI_Params params;
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors");

	UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits");

	UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority");

	UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy");

	UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InExclusive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           InBlockState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugAIManagerServiceInterface::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility");

	UDebugAIManagerServiceInterface_BlockAIAbility_Params params;
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxNumOfSpawnedActors        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors");

	ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params;
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsPerRegion      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion");

	ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params;
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InMaxAICostUnitsForWorld       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld");

	ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params;
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits");

	ADebugAIManagerService_SetIgnoreCharacterLimits_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDistanceToPlayerToRaiseSpawnPriority (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority");

	ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params params;
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterWorldDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer");

	ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params;
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCharacterRegionDensityCheckTimer (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer");

	ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params;
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InCloseByCharactersRadius      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy");

	ADebugAIManagerService_SetCharacterNetRelevancy_Params params;
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.DebugAIManagerService.BlockAIAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InExclusive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           InBlockState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ADebugAIManagerService::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.BlockAIAbility");

	ADebugAIManagerService_BlockAIAbility_Params params;
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AINameplateComponent.OnRep_Title
// (Final, Native, Private)
void UAINameplateComponent::OnRep_Title()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_Title");

	UAINameplateComponent_OnRep_Title_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
// (Final, Native, Private)
void UAINameplateComponent::OnRep_DisplayNameAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString");

	UAINameplateComponent_OnRep_DisplayNameAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AINameplateComponent.OnRep_DisplayName
// (Final, Native, Private)
void UAINameplateComponent::OnRep_DisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayName");

	UAINameplateComponent_OnRep_DisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
// (Final, Native, Private)
void UAINameplateComponent::OnRep_DebugDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText");

	UAINameplateComponent_OnRep_DebugDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIPartsCategory*        AssignedPartsCategory          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PartsIndexToUse                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TeamColorIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIPartsRetrievalComponent::RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts");

	UAIPartsRetrievalComponent_RequestNewAIParts_Params params;
	params.AssignedPartsCategory = AssignedPartsCategory;
	params.PartsIndexToUse = PartsIndexToUse;
	params.TeamColorIndex = TeamColorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
// (Final, Native, Private)
void UAIPartsRetrievalComponent::OnRep_ReplicatedAIPartsData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData");

	UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
// (Final, Native, Public)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath");

	UAIPerPlayerSpawner_PlayerDeath_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           CheckYaw                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                OutAimConfig                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget");

	UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params;
	params.Target = Target;
	params.CheckYaw = CheckYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;


	return params.ReturnValue;
}


// Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActorDying                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmbientWaterSpawnerManager::OnPlayerDeath(class AActor* InActorDying)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath");

	AAmbientWaterSpawnerManager_OnPlayerDeath_Params params;
	params.InActorDying = InActorDying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
// (Final, Native, Public)
void ABurrowCrack::OnRep_StartFadeAndLifeSpan()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan");

	ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          PercentLeft                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurrowCrack::OnLifeSpanPercentLeft(float PercentLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft");

	ABurrowCrack_OnLifeSpanPercentLeft_Params params;
	params.PercentLeft = PercentLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InPrioritiseInteractablesBeforeEnemies (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params params;
	params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  InItemCategory                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam");

	AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params;
	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDisableTurningForTest        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaAICharacterController::SetDisableTurningForTest(bool InDisableTurningForTest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest");

	AAthenaAICharacterController_SetDisableTurningForTest_Params params;
	params.InDisableTurningForTest = InDisableTurningForTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
// (Final, Native, Public, BlueprintCallable)
void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(class UClass* Sense)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled");

	UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params params;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled");

	UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Sense                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense");

	UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params;
	params.Sense = Sense;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception");

	UAthenaAIPerceptionComponent_EnableAllPerception_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnContextProviderZone::RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget");

	ASpawnContextProviderZone_RemoveContextsFromTarget_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ASpawnContextProviderZone::AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget");

	ASpawnContextProviderZone_AddContextsToTarget_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
// (Final, Native, Private)
void UCoralShieldVFXComponent::OnRep_CurrentCoralShieldRole()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole");

	UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TAssetPtr<class UClass>        AIType                         (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// TAssetPtr<class ULoadoutAsset> Loadout                        (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// TAssetPtr<class UAthenaAIFormDataAsset> Form                           (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// TAssetPtr<class UClass>        AIItemSpawnComponent           (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  ClassId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo                           (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FName                   Region                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  TriggerActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NavMeshOverride                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings");

	UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params;
	params.AIType = AIType;
	params.Skillset = Skillset;
	params.Loadout = Loadout;
	params.Form = Form;
	params.AIItemSpawnComponent = AIItemSpawnComponent;
	params.ClassId = ClassId;
	params.Ammo = Ammo;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Region = Region;
	params.TriggerActor = TriggerActor;
	params.NavMeshOverride = NavMeshOverride;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAIEncounterSettings*    EncounterSettings              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           MakeAIPermanentlyNetRelevant   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  InstancedNavMesh               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIEncounterSpecification ReturnValue                    (Parm, OutParm, ReturnParm)
struct FAIEncounterSpecification UAthenaAIDebugFunctionLibrary::STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI");

	UAthenaAIDebugFunctionLibrary_SpawnAI_Params params;
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
	params.InstancedNavMesh = InstancedNavMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAllowedSeconds            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds");

	UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params;
	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
// (Final, Native, Static, Public, BlueprintCallable)
void UAthenaAIDebugFunctionLibrary::STATIC_KillAllDebugAISpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners");

	UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAthenaAIDebugFunctionLibrary::STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries");

	UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAthenaAIController*     AIController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings");

	UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging");

	UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_DespawnAIPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn");

	UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAISpawner*              SpawnerAsset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition");

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params params;
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAISpawner*              SpawnerAsset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SpawnLocationActor             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor");

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params params;
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.SpawnLocationActor = SpawnLocationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UAthenaAIDebugFunctionLibrary::STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation");

	UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params;
	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaAI.Pet.SetExitTakeOffFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InExitTakeOffFlag              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APet::SetExitTakeOffFlag(bool InExitTakeOffFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.SetExitTakeOffFlag");

	APet_SetExitTakeOffFlag_Params params;
	params.InExitTakeOffFlag = InExitTakeOffFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnShipDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  InShip                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APet::OnShipDestroyed(class AActor* InShip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnShipDestroyed");

	APet_OnShipDestroyed_Params params;
	params.InShip = InShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_RollRequest
// (Final, Native, Private)
void APet::OnRep_RollRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_RollRequest");

	APet_OnRep_RollRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
// (Final, Native, Private)
void APet::OnRep_ResetRollAndZOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_ResetRollAndZOffset");

	APet_OnRep_ResetRollAndZOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_PetTurnToFaceData
// (Final, Native, Public)
void APet::OnRep_PetTurnToFaceData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetTurnToFaceData");

	APet_OnRep_PetTurnToFaceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_PetOwner
// (Final, Native, Private)
void APet::OnRep_PetOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetOwner");

	APet_OnRep_PetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_PetIsSad
// (Final, Native, Private)
void APet::OnRep_PetIsSad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetIsSad");

	APet_OnRep_PetIsSad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_PerchedInHangout
// (Final, Native, Private)
void APet::OnRep_PerchedInHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PerchedInHangout");

	APet_OnRep_PerchedInHangout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_MovementRequest
// (Final, Native, Private)
void APet::OnRep_MovementRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_MovementRequest");

	APet_OnRep_MovementRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnRep_InHangout
// (Final, Native, Private)
void APet::OnRep_InHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_InHangout");

	APet_OnRep_InHangout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.OnOwnerDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APet::OnOwnerDestroyed(class AActor* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnOwnerDestroyed");

	APet_OnOwnerDestroyed_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.Multicast_DitherOut
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void APet::Multicast_DitherOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherOut");

	APet_Multicast_DitherOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.Multicast_DitherIn
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void APet::Multicast_DitherIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherIn");

	APet_Multicast_DitherIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAI.Pet.GetFloorMeshOffsetZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APet::GetFloorMeshOffsetZ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.GetFloorMeshOffsetZ");

	APet_GetFloorMeshOffsetZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
