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

// BlueprintGeneratedClass GE_Commando_ShockwaveCooldown.GE_Commando_ShockwaveCooldown_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Commando_ShockwaveCooldown_C : public UGET_Cooldown_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Commando_ShockwaveCooldown.GE_Commando_ShockwaveCooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
