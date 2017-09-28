#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (CPF_IsPlainOldData)
	struct FString                                     ComponentName;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FrameRate;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0050
struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	float                                              MasterTime;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FText                                       CurrentShotName;                                          // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	float                                              CurrentShotLocalTime;                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLevelSequenceSnapshotSettings              Settings;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// 0x0020
struct FLevelSequenceObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
