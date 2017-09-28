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

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
struct UJournalObjectiveEntry_C_Update_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
struct UJournalObjectiveEntry_C_UpdateProgress_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
struct UJournalObjectiveEntry_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Construct
struct UJournalObjectiveEntry_C_Construct_Params
{
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Handle Quests Updated
struct UJournalObjectiveEntry_C_Handle_Quests_Updated_Params
{
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
struct UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
