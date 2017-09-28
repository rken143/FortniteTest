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

// WidgetBlueprintGeneratedClass BP_AvailableExpeditionsSummaryWidget.BP_AvailableExpeditionsSummaryWidget_C
// 0x0008 (0x0240 - 0x0238)
class UBP_AvailableExpeditionsSummaryWidget_C : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*                     AvailableExpeditionsCount;                                // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AvailableExpeditionsSummaryWidget.BP_AvailableExpeditionsSummaryWidget_C");
		return ptr;
	}


	void UpdateAvailableCoiunt(int InAvailableCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
