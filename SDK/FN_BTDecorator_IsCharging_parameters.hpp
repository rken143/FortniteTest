#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTDecorator_IsCharging.BTDecorator_IsCharging_C.PerformConditionCheckAI
struct UBTDecorator_IsCharging_C_PerformConditionCheckAI_Params
{
	class AAIController**                              OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
