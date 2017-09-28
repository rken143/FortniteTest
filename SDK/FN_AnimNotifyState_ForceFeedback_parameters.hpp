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

// Function AnimNotifyState_ForceFeedback.AnimNotifyState_ForceFeedback_C.Received_NotifyEnd
struct UAnimNotifyState_ForceFeedback_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AnimNotifyState_ForceFeedback.AnimNotifyState_ForceFeedback_C.Received_NotifyBegin
struct UAnimNotifyState_ForceFeedback_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             TotalDuration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
