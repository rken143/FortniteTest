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

// BlueprintGeneratedClass PBWA_BG_RoofWall.PBWA_BG_RoofWall_C
// 0x0000 (0x10A0 - 0x10A0)
class APBWA_BG_RoofWall_C : public ABuildingWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_BG_RoofWall.PBWA_BG_RoofWall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
