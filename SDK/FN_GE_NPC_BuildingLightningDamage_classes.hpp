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

// BlueprintGeneratedClass GE_NPC_BuildingLightningDamage.GE_NPC_BuildingLightningDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGE_NPC_BuildingLightningDamage_C : public UGET_DirectLightningDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_NPC_BuildingLightningDamage.GE_NPC_BuildingLightningDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif