#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_SmasherRoar.GAB_SmasherRoar_C
// 0x0000 (0x0A48 - 0x0A48)
class UGAB_SmasherRoar_C : public UGAB_AIBaseSimpleMontage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherRoar.GAB_SmasherRoar_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif