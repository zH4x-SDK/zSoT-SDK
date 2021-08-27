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

// Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript");

	ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
