﻿#pragma once

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
// Enums
//---------------------------------------------------------------------------

// Enum KnockbackFramework.ESolidState
enum class KnockbackFramework_ESolidState : uint8_t
{
	ESolidState__Disabled          = 0,
	ESolidState__Knockback         = 1,
	ESolidState__Solid             = 2,
	ESolidState__ESolidState_MAX   = 3,

};

// Enum KnockbackFramework.EKnockbackType
enum class KnockbackFramework_EKnockbackType : uint8_t
{
	EKnockbackType__AwayFromCentre = 0,
	EKnockbackType__TowardsActor   = 1,
	EKnockbackType__EKnockbackType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KnockbackFramework.KnockbackableInfo
// 0x0020
struct FKnockbackableInfo
{
	unsigned char                                      UnknownData_E9GJ[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
