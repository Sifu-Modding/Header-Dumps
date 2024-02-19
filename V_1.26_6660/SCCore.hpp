#ifndef UE4SS_SDK_SCCore_HPP
#define UE4SS_SDK_SCCore_HPP

#include "SCCore_enums.hpp"

struct FAchievementUnlockConditionClassInstance
{
    TSubclassOf<class UAchievementUnlockCondition> m_DefaultClassObject;              // 0x0000 (size: 0x8)
    class UAchievementUnlockCondition* m_Instance;                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAchievementUnlockConditionSet
{
    FString m_EditorTitle;                                                            // 0x0000 (size: 0x10)
    TArray<FAchievementUnlockConditionClassInstance> m_AchievementSet;                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAchievementUnlockConditionStruct
{
    FText m_NotificationTitle;                                                        // 0x0000 (size: 0x18)
    FText m_ObjectDescription;                                                        // 0x0018 (size: 0x18)
    FText m_UnlockDescription;                                                        // 0x0030 (size: 0x18)
    FGameplayTagQuery m_ConditionQuery;                                               // 0x0048 (size: 0x48)
    FGameplayTag m_UnlockObjectType;                                                  // 0x0090 (size: 0x8)
    bool m_bShowNotificationOnUnlocking;                                              // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FAchievementUnlockObjectSet
{
    FString m_EditorTitle;                                                            // 0x0000 (size: 0x10)
    TMap<class FGameplayTag, class FAchievementUnlockConditionStruct> m_Unlocks;      // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FActivityInfo
{
}; // Size: 0x20

struct FActorsPoolConfig
{
    FName m_Name;                                                                     // 0x0000 (size: 0x8)
    TSoftClassPtr<AActor> m_Class;                                                    // 0x0008 (size: 0x28)
    int32 m_iSize;                                                                    // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FAdvisersStruct
{
    FSCTechAdviserEnumHandler m_techAdviser;                                          // 0x0000 (size: 0x50)
    FSCDataAdviserEnumHandler m_dataAdviser;                                          // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FAnimContainer
{
    class UAnimSequence* m_animation;                                                 // 0x0000 (size: 0x8)
    bool m_bMirror;                                                                   // 0x0008 (size: 0x1)
    bool m_bLoopable;                                                                 // 0x0009 (size: 0x1)
    float m_fStartRatio;                                                              // 0x000C (size: 0x4)
    uint8 m_uiOrderID;                                                                // 0x0010 (size: 0x1)
    float m_fPlayRate;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FAssociatedPropsAnimInfo
{
}; // Size: 0x8

struct FBool
{
    bool m_bBool;                                                                     // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FCharacterSaveDescription
{
    FString m_SaveName;                                                               // 0x0000 (size: 0x10)
    FTimespan m_TimePlayed;                                                           // 0x0010 (size: 0x8)
    FDateTime m_SaveTimeStamp;                                                        // 0x0018 (size: 0x8)
    bool m_bIsABackupSnapshot;                                                        // 0x0020 (size: 0x1)
    bool m_bIsValid;                                                                  // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FCompressedPoseSnapshot
{
    TArray<uint8> m_BoneFlags;                                                        // 0x0000 (size: 0x10)
    TArray<FVector_NetQuantize10> m_Translations;                                     // 0x0010 (size: 0x10)
    TArray<FQuatNetSerializedCompressed> m_Rotations;                                 // 0x0020 (size: 0x10)
    TArray<FVector_NetQuantize10> m_Scales;                                           // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FDynamicBlendSettings
{
    EAlphaBlendOption m_eBlendOption;                                                 // 0x0000 (size: 0x1)
    float m_fDuration;                                                                // 0x0004 (size: 0x4)
    class UCurveFloat* m_customCurve;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFootIkDamping
{
    bool m_bUseLerp;                                                                  // 0x0000 (size: 0x1)
    float m_fDefaultValue;                                                            // 0x0004 (size: 0x4)
    float m_fPlantedFootValue;                                                        // 0x0008 (size: 0x4)
    FRuntimeFloatCurve m_curveByRelFootPos;                                           // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FLanguageSeparator
{
    TArray<FString> m_Separators;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLipSyncEmotionData
{
}; // Size: 0x20

struct FLipSyncPhonemeInPhrase
{
    EPhoneme Value;                                                                   // 0x0000 (size: 0x1)
    uint8 Flag;                                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMappingSave
{
    FName m_KeyName;                                                                  // 0x0000 (size: 0x8)
    FName m_ActionName;                                                               // 0x0008 (size: 0x8)
    bool m_bIsAxis;                                                                   // 0x0010 (size: 0x1)
    float m_fScale;                                                                   // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMaterialParameterBlendSettings
{
    class UMaterialParameterCollection* m_MPC;                                        // 0x0000 (size: 0x8)
    FName m_ParameterName;                                                            // 0x0008 (size: 0x8)
    bool m_bInversed;                                                                 // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FMirrorAnimStruct
{
    FString m_Description;                                                            // 0x0000 (size: 0x10)
    FName m_boneName;                                                                 // 0x0010 (size: 0x8)
    EMirrorAnimBehavior m_eMirrorBehavior;                                            // 0x0018 (size: 0x1)
    FName m_TwinBoneName;                                                             // 0x001C (size: 0x8)
    ESimpleAxis m_eMirrorRotationAxis;                                                // 0x0024 (size: 0x1)
    EPlaneAxis m_eMirrorTranslationPlaneAxis;                                         // 0x0025 (size: 0x1)
    bool m_bIsSocket;                                                                 // 0x0026 (size: 0x1)

}; // Size: 0x28

struct FOnlineActivitiesTableRow : public FTableRowBase
{
    FName m_activityID;                                                               // 0x0008 (size: 0x8)
    EActivityType m_eActivityType;                                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FQuatNetSerializedCompressed : public FQuat
{
}; // Size: 0x10

struct FRagdollBone
{
    FName m_Name;                                                                     // 0x0000 (size: 0x8)
    float m_fForceFactor;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRagdollMoveableBone
{
    FRagdollBone m_Bone;                                                              // 0x0000 (size: 0xC)
    TArray<FRagdollBone> m_CascadedBones;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSCAIActionMemoryEntry
{
}; // Size: 0x18

struct FSCActorInfoGameArchive
{
    class UObject* m_Actor;                                                           // 0x0000 (size: 0x8)
    UClass* m_ActorClass;                                                             // 0x0008 (size: 0x8)
    TArray<uint8> m_Data;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSCAiActionClassInstance
{
    TSubclassOf<class USCAiAction> m_DefaultClassObject;                              // 0x0000 (size: 0x8)
    class USCAiAction* m_Instance;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSCAnimInstanceRef
{
    class USCAnimInstanceBase* m_AnimInstance;                                        // 0x0000 (size: 0x8)
    FName m_Name;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSCAnimPoseArray
{
    TArray<FSCPoseAssetSelection> m_Poses;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSCAnimPoseLooped
{
    FSCPoseAssetSelection m_Pose;                                                     // 0x0000 (size: 0x10)
    class UCurveFloat* m_WeightCurve;                                                 // 0x0010 (size: 0x8)
    FFloatRange m_RandomDelay;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x38

struct FSCBPComponentsMap
{
    TArray<class UEnum*> m_ComponentsEnums;                                           // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FSCChannelCollisionResponse
{
    TEnumAsByte<ECollisionChannel> m_eChannel;                                        // 0x0000 (size: 0x1)
    TEnumAsByte<ECollisionResponse> m_eCollisionResponse;                             // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSCCollisionProfileDescription
{
    FName m_Name;                                                                     // 0x0000 (size: 0x8)
    FSCCollisionResponseTemplate m_Template;                                          // 0x0008 (size: 0x23)

}; // Size: 0x2C

struct FSCCollisionResponseBuilder
{
    TEnumAsByte<ECollisionResponse> m_eDefaultCollisionResponse;                      // 0x0000 (size: 0x1)
    TArray<FSCChannelCollisionResponse> m_eChannelResponses;                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSCCollisionResponsePreset
{
    bool m_bUseProfile;                                                               // 0x0000 (size: 0x1)
    bool m_bUseDefaultProfile;                                                        // 0x0001 (size: 0x1)
    FCollisionProfileName m_Profile;                                                  // 0x0004 (size: 0x8)
    FSCCollisionResponseTemplate m_Template;                                          // 0x000C (size: 0x23)

}; // Size: 0x30

struct FSCCollisionResponseTemplate
{
    TEnumAsByte<ECollisionEnabled::Type> m_eCollisionEnabled;                         // 0x0000 (size: 0x1)
    TEnumAsByte<EObjectTypeQuery> m_eObjectType;                                      // 0x0001 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_eCollisionType;                                  // 0x0002 (size: 0x1)
    FCollisionResponseContainer m_ResponseToChannels;                                 // 0x0003 (size: 0x20)

}; // Size: 0x23

struct FSCDataAdviserEnumHandler : public FSCUserDefinedEnumHandler
{
}; // Size: 0x50

struct FSCError
{
    ESCErrorType m_Type;                                                              // 0x0000 (size: 0x1)
    FText m_Message;                                                                  // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FSCErrorPopup
{
    FText m_TextMessage;                                                              // 0x0000 (size: 0x18)
    FText m_TextConfirm;                                                              // 0x0018 (size: 0x18)
    FText m_TextCancel;                                                               // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FSCFootIkData
{
    FName m_footIkBoneName;                                                           // 0x0000 (size: 0x8)
    FName m_thighBoneName;                                                            // 0x0008 (size: 0x8)
    FString m_suffix;                                                                 // 0x0010 (size: 0x10)
    FName m_markerName;                                                               // 0x0020 (size: 0x8)
    FVector m_vDampedWorldLocationOffset;                                             // 0x0050 (size: 0xC)
    bool m_bApplyIkToFoot;                                                            // 0x005C (size: 0x1)
    FRotator m_dampedWorldRotationOffset;                                             // 0x006C (size: 0xC)
    float m_fRotationAlpha;                                                           // 0x0078 (size: 0x4)

}; // Size: 0xD0

struct FSCGameData
{
    TMap<class FName, class FWorldSave> m_WorldStatesSaved;                           // 0x0000 (size: 0x50)
    TMap<class FName, class FSCStreamingLevelStateSavable> m_StreamingLevelsState;    // 0x0050 (size: 0x50)
    FGameplayTagContainer m_ActivatedCheats;                                          // 0x00A0 (size: 0x20)
    TMap<class FGameplayTag, class FString> m_ActivatedCheatsArguments;               // 0x00C0 (size: 0x50)
    FGameplayTagContainer m_UnlockedAchievements;                                     // 0x0110 (size: 0x20)
    TMap<class FGameplayTag, class FGameplayTagContainer> m_NewlyUnlockedAchievements; // 0x0130 (size: 0x50)

}; // Size: 0x180

struct FSCGameFlowData
{
    ESCGameInstanceState m_eInitialState;                                             // 0x0000 (size: 0x1)
    FSoftObjectPath m_InitialMap;                                                     // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FSCGameFlowMap
{
    ESCGameInstanceState m_State;                                                     // 0x0000 (size: 0x1)
    FName m_StateName;                                                                // 0x0004 (size: 0x8)
    FSoftObjectPath m_Map;                                                            // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FSCGestureAndBlendProfile
{
    FAnimContainer m_GesturesAnimContainer;                                           // 0x0000 (size: 0x18)
    bool m_bUseBlendProfilePayload;                                                   // 0x0018 (size: 0x1)
    FName m_GestureBlendProfile;                                                      // 0x001C (size: 0x8)
    TSubclassOf<class UBlendProfilePayload> m_BlendProfilePayload;                    // 0x0028 (size: 0x8)
    bool m_bAllowSyncFidgetMirrorWithQuadrant;                                        // 0x0030 (size: 0x1)
    ELookAtApplyMode m_eLookAtApplyMode;                                              // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FSCGestureContainer
{
    TArray<FSCGestureAndBlendProfile> m_aGesturesAnimContainer;                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSCImpostorReplicationInfos
{
    bool m_bMirrorAnimation;                                                          // 0x0000 (size: 0x1)
    TSubclassOf<class ASCCharacterImpostor> m_Class;                                  // 0x0008 (size: 0x8)
    TSoftObjectPtr<UAnimSequence> m_ImpostorAnimation;                                // 0x0010 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;                                     // 0x0038 (size: 0x28)
    FCompressedPoseSnapshot m_PoseToMimic;                                            // 0x0060 (size: 0x40)
    double m_CheckPointTimeMS;                                                        // 0x00A0 (size: 0x8)
    FVector m_vLocation;                                                              // 0x00A8 (size: 0xC)
    FQuat m_qRotation;                                                                // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FSCLevelSequenceRole
{
    FName m_Name;                                                                     // 0x0000 (size: 0x8)
    FName m_AnchorJoint;                                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSCLocation48
{
}; // Size: 0x6

struct FSCMathCondition
{
    ESCMathConditionValueType m_eValueType;                                           // 0x0000 (size: 0x1)
    int32 m_iComparedValue;                                                           // 0x0004 (size: 0x4)
    float m_fComparedValue;                                                           // 0x0008 (size: 0x4)
    ESCMathCondition m_eCondition;                                                    // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSCMathConditionGroup
{
    ESCMathConditionValueType m_eValueType;                                           // 0x0000 (size: 0x1)
    int32 m_iDepth;                                                                   // 0x0004 (size: 0x4)
    ESCMathConditionExpression m_eType;                                               // 0x0008 (size: 0x1)
    TArray<int32> m_SubGroupIndexes;                                                  // 0x0010 (size: 0x10)
    TArray<FSCMathCondition> m_Conditions;                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FSCMathExpression
{
    ESCMathConditionValueType m_eValueType;                                           // 0x0000 (size: 0x1)
    TArray<FSCMathConditionGroup> m_ConditionGroups;                                  // 0x0008 (size: 0x10)
    int32 m_iMaxDepth;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSCMathExpressionFloat : public FSCMathExpression
{
}; // Size: 0x20

struct FSCMathExpressionInteger : public FSCMathExpression
{
}; // Size: 0x20

struct FSCPhonemeDictionaryRow : public FTableRowBase
{
    TArray<EPhonemeDictionary> m_Phonemes;                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSCPhonemeFromCantoneseDictionaryRow : public FSCPhonemeDictionaryRow
{
    TArray<FString> m_Pinyin;                                                         // 0x0018 (size: 0x10)

}; // Size: 0xC8

struct FSCPhonemeFromChineseDictionaryRow : public FSCPhonemeDictionaryRow
{
    TArray<FString> m_Pinyin;                                                         // 0x0018 (size: 0x10)

}; // Size: 0xC8

struct FSCPoolableActorsContainerPoolEntry
{
    FName m_Name;                                                                     // 0x0000 (size: 0x8)
    TSubclassOf<class AActor> m_Class;                                                // 0x0008 (size: 0x8)
    TArray<class AActor*> m_Actors;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSCPoseAssetSelection
{
    FSmartName m_PoseName;                                                            // 0x0000 (size: 0xC)
    float m_fWeight;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSCProfileData
{
    FDateTime m_SaveTimeStamp;                                                        // 0x0000 (size: 0x8)
    TArray<FCharacterSaveDescription> m_SaveListNames;                                // 0x0008 (size: 0x10)
    FString m_FirstSave;                                                              // 0x0018 (size: 0x10)
    TArray<FMappingSave> m_Mapping;                                                   // 0x0028 (size: 0x10)
    FString m_AudioCulture;                                                           // 0x0038 (size: 0x10)
    FString m_TextCulture;                                                            // 0x0048 (size: 0x10)
    FGameplayTagContainer m_UnlockedAchievements;                                     // 0x0058 (size: 0x20)
    TMap<class FGameplayTag, class FGameplayTagContainer> m_NewlyUnlockedAchievements; // 0x0078 (size: 0x50)

}; // Size: 0xC8

struct FSCReplayLevelStreaming
{
    ESCLevelStreamingState m_eDesiredState;                                           // 0x0000 (size: 0x1)
    FName m_LevelName;                                                                // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FSCReplayLevelStreamingData
{
    FSCReplayLevelStreamingState m_InitialState;                                      // 0x0000 (size: 0x58)
    TMap<uint32, FSCReplayLevelStreamingState> m_LevelStreamingEvents;                // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FSCReplayLevelStreamingState
{
    TMap<class FName, class FSCReplayLevelStreaming> m_Levels;                        // 0x0000 (size: 0x50)

}; // Size: 0x58

struct FSCRotation4
{
}; // Size: 0x4

struct FSCScale48
{
}; // Size: 0x6

struct FSCSequenceParameters
{
    class ULevelSequence* m_Sequence;                                                 // 0x0000 (size: 0x8)
    FTransform m_Transform;                                                           // 0x0010 (size: 0x30)
    bool m_bAutoPlay;                                                                 // 0x0040 (size: 0x1)
    bool m_bDestroyAtEnd;                                                             // 0x0041 (size: 0x1)
    bool m_bWantPushInputContext;                                                     // 0x0042 (size: 0x1)

}; // Size: 0x50

struct FSCSoundSwitchValue
{
    FName m_Group;                                                                    // 0x0000 (size: 0x8)
    FName m_State;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSCSpawnImpostorInfos
{
}; // Size: 0x80

struct FSCStreamingActorState
{
    TArray<uint8> m_Data;                                                             // 0x0000 (size: 0x10)
    FSCTransform52 m_Transform;                                                       // 0x0010 (size: 0xC)
    uint64 m_uiTimestamp;                                                             // 0x0020 (size: 0x8)

}; // Size: 0x58

struct FSCStreamingActorStateId
{
    FName m_ID;                                                                       // 0x0000 (size: 0x8)
    FSCStreamingLevelId m_LevelId;                                                    // 0x0008 (size: 0x20)

}; // Size: 0x30

struct FSCStreamingLevelId
{
    FName m_ID;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FSCStreamingLevelState : public FStreamingLevelStateBase
{
}; // Size: 0x70

struct FSCStreamingLevelStateSavable : public FStreamingLevelStateBase
{
    TMap<class FSCStreamingActorStateId, class FSCStreamingActorState> m_ActorsState; // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FSCStreamingVolumeDependencies
{
    TArray<class ASCLevelStreamingVolume*> m_Volumes;                                 // 0x0000 (size: 0x10)
    TArray<FSCStreamingVolumeDependency> m_VolumeDependencies;                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSCStreamingVolumeDependency
{
    class ASCLevelStreamingVolume* m_Volume;                                          // 0x0000 (size: 0x8)
    bool m_bRecursive;                                                                // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FSCTechAdviserEnumHandler : public FSCUserDefinedEnumHandler
{
}; // Size: 0x50

struct FSCTransform100 : public FSCTransform52
{
    FSCScale48 m_Scale3D;                                                             // 0x000C (size: 0x6)

}; // Size: 0x14

struct FSCTransform52
{
    FSCLocation48 m_Location;                                                         // 0x0000 (size: 0x6)
    FSCRotation4 m_Rotation;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSCTypedValue
{
}; // Size: 0x14

struct FSCUserDefinedEnumHandler
{
    class UEnum* m_Enum;                                                              // 0x0008 (size: 0x8)
    int32 m_iDefaultEnumValue;                                                        // 0x0010 (size: 0x4)
    FName m_Value;                                                                    // 0x0014 (size: 0x8)

}; // Size: 0x50

struct FSCUserEnumSetting
{
    FSoftObjectPath m_Enum;                                                           // 0x0000 (size: 0x18)
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;                              // 0x0018 (size: 0x28)

}; // Size: 0x40

struct FSCVolumeClusterMaterialsPath
{
    FSoftObjectPath m_RootMaterial;                                                   // 0x0000 (size: 0x18)
    FSoftObjectPath m_ChildrenMaterial;                                               // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FSequenceRoleTypeDescription
{
    TSubclassOf<class UNameHandler> m_NameHandler;                                    // 0x0000 (size: 0x8)
    TMap<class FGameplayTag, class TSubclassOf<UAssociatedActorGetter>> m_RoleGettersMap; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FStreamingLevelStateBase
{
}; // Size: 0x20

struct FVolumeInfo
{
    ESCVolumeShape m_eShape;                                                          // 0x0000 (size: 0x1)
    FVector m_vShapeParameters;                                                       // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FWorldSave
{
    TArray<uint8> m_WorldStateSaved;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

class ASCActor : public AActor
{
    bool m_bIsStreamable;                                                             // 0x02D0 (size: 0x1)
    bool m_bIsPooled;                                                                 // 0x02D1 (size: 0x1)

}; // Size: 0x2E0

class ASCBasePlayerController : public APlayerController
{
}; // Size: 0x680

class ASCBlenderManager : public AActor
{
}; // Size: 0x2C0

class ASCCharacter : public ACharacter
{
    FSCCharacterOnSpawnedImpostorDynamic OnSpawnedImpostorDynamic;                    // 0x0570 (size: 0x10)
    void ImpostorDelegate(class ASCCharacterImpostor* ImpostorActor);
    FSCCharacterOnImpostorActivated OnImpostorActivated;                              // 0x0580 (size: 0x10)
    void ImpostorDelegate(class ASCCharacterImpostor* ImpostorActor);
    FName m_ImpostorName;                                                             // 0x05B4 (size: 0x8)
    bool m_bCanUnspawn;                                                               // 0x05BC (size: 0x1)
    bool m_bCanSpawnImpostor;                                                         // 0x05BD (size: 0x1)
    bool m_bIsPooled;                                                                 // 0x05BE (size: 0x1)
    bool m_bPooledActorActive;                                                        // 0x05BF (size: 0x1)
    bool m_bPooledActorActiveForReplay;                                               // 0x05C0 (size: 0x1)
    TSubclassOf<class USCCharacterPoseData> m_PoseDataClass;                          // 0x0650 (size: 0x8)
    bool m_bDontCreateClotOnLowerEndPlatforms;                                        // 0x0658 (size: 0x1)
    ECharacterGender m_eGender;                                                       // 0x0659 (size: 0x1)

    void ServerSetGender(ECharacterGender _eGender);
    void OnRep_SetGender();
    void OnRep_PooledActorActive();
    void ImpostorDelegate__DelegateSignature(class ASCCharacterImpostor* ImpostorActor);
    void BPF_Unspawn(class UAnimSequence* _animation, bool _bMirror, bool _bInstantUnspawn);
    void BPF_SetMesh(class USkeletalMesh* _newMesh, bool _bSwapOnlyRendering);
    void BPF_SetGender(ECharacterGender _eGender);
    void BPF_SetCollisionEnabled(bool _bEnabled, bool _bKeepStaticMeshCollisions);
    bool BPF_IsInCinematic();
    bool BPF_InputEnabled();
    ETextGender BPF_GetTextGender();
    FName BPF_GetImpostorName();
    ECharacterGender BPF_GetGender();
    void BPF_ForceCanSpawnImpostor(bool _bCanSpawnImpostor);
    void BPF_AddObjectToKeepAttachedOnImpostor(class AActor* _actor, EAttachmentRule _eAttachmentRules, FName _boneName);
    void BPE_SetGender(ECharacterGender _eGender);
}; // Size: 0x660

class ASCCharacterImpostor : public ASCActor
{
    EImposterSpawnTransformType m_SpawnTransformType;                                 // 0x02D8 (size: 0x1)
    class USCRagdollConfigDB* m_RagdollConfig;                                        // 0x02F8 (size: 0x8)
    class USkeletalMeshComponentBudgeted* m_Mesh;                                     // 0x0300 (size: 0x8)
    class USCStreamingActorComponent* m_StreamingComponent;                           // 0x0308 (size: 0x8)
    class UAnimInstance* m_AnimInstance;                                              // 0x0310 (size: 0x8)

    class ASCCharacter* GetCharacterToMimic();
    void BPF_Show();
    void BPF_Hide();
    void BPE_OnHideDueToDisplayLimit();
    void BPE_MimicCharacter(class ASCCharacter* _characterToMimic);
}; // Size: 0x380

class ASCDecalActor : public ADecalActor
{
    bool m_bIsPooled;                                                                 // 0x02C0 (size: 0x1)

}; // Size: 0x2D0

class ASCGameMode : public AGameMode
{
    TArray<class UGameplayEffect*> m_PlayerGameModeGameplayEffects;                   // 0x03A0 (size: 0x10)
    bool m_bIsUsingPools;                                                             // 0x03B0 (size: 0x1)

}; // Size: 0x3C0

class ASCGameState : public AGameState
{
}; // Size: 0x320

class ASCHUD : public AHUD
{
}; // Size: 0x3B0

class ASCLevelScriptActor : public ALevelScriptActor
{
    bool m_bContainsSaveData;                                                         // 0x02B8 (size: 0x1)
    class UDataTable* m_ContextualDialogLines;                                        // 0x02C0 (size: 0x8)
    class UDataTable* m_WorldConversationSegments;                                    // 0x02C8 (size: 0x8)

    void BPE_OnUpdatedFromSave();
    void BPE_OnLevelSequenceSkipped(class ALevelSequenceActor* _levelSequenceActor);
}; // Size: 0x2E0

class ASCLevelStreamingVolume : public ASCPlayerVolumeNoPhysics
{
    bool m_bEnabled;                                                                  // 0x03B0 (size: 0x1)
    FName m_LevelName;                                                                // 0x03B4 (size: 0x8)
    TArray<FName> m_LevelNames;                                                       // 0x03C0 (size: 0x10)
    FSCStreamingVolumeDependencies m_VolumeDependencies;                              // 0x03D0 (size: 0x60)

}; // Size: 0x440

class ASCPlayerVolume : public ASCVolume
{
    FSCPlayerVolumeOnPlayerBeginOverlap OnPlayerBeginOverlap;                         // 0x0368 (size: 0x1)
    void VolumeBeginOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    FSCPlayerVolumeOnPlayerEndOverlap OnPlayerEndOverlap;                             // 0x0369 (size: 0x1)
    void VolumeEndOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

}; // Size: 0x370

class ASCPlayerVolumeNoPhysics : public ASCVolume
{
    bool m_bTestOverlap;                                                              // 0x0368 (size: 0x1)
    float m_fFullyInsideTolerances;                                                   // 0x036C (size: 0x4)

}; // Size: 0x380

class ASCPoolLevelScriptActor : public ASCLevelScriptActor
{
}; // Size: 0x2E0

class ASCPoolableActorsContainer : public AActor
{
    TArray<FSCPoolableActorsContainerPoolEntry> m_Pools;                              // 0x02B0 (size: 0x10)
    int32 m_iGenerationVersion;                                                       // 0x02C0 (size: 0x4)

    int32 BPF_GetActorsCount(TSubclassOf<class AActor> _class);
    class ASCCharacterImpostor* BPF_AddCharacterImpostor(FName _poolName, bool _bRenameWithPoolName);
    void BPF_AddActors(TSubclassOf<class AActor> _class, int32 _iCount, TArray<class AActor*>& _outCreatedActors, FName _poolName);
    class AActor* BPF_AddActor(TSubclassOf<class AActor> _class, FName _poolName, bool _bRenameWithPoolName);
}; // Size: 0x2E0

class ASCPositionBakeSceneCapture : public AActor
{
    class USCCaptureComponent2D* m_SceneCaptureComponent;                             // 0x02B0 (size: 0x8)
    int32 m_iDebugSwitch;                                                             // 0x02B8 (size: 0x4)
    int32 m_iBakedPositionTextureSize;                                                // 0x02BC (size: 0x4)
    class UMaterialInterface* m_BakedLocalPositionDrawer;                             // 0x02C0 (size: 0x8)
    class UMaterialInterface* m_BakedPreSkinnedPositionDrawer;                        // 0x02C8 (size: 0x8)
    float m_fMinusZDistance;                                                          // 0x02D0 (size: 0x4)
    FName m_MinusZDistanceParameterName;                                              // 0x02D4 (size: 0x8)
    FName m_TextureSizeParameterName;                                                 // 0x02DC (size: 0x8)
    FName m_BoundsMinParameterName;                                                   // 0x02E4 (size: 0x8)
    FName m_BoundsMaxParameterName;                                                   // 0x02EC (size: 0x8)
    FName m_ChannelUVParameterName;                                                   // 0x02F4 (size: 0x8)
    class UTextureRenderTarget2D* m_BakedPositionTextureTarget;                       // 0x0300 (size: 0x8)
    class UMaterialInstanceDynamic* m_BakedLocalPositionDrawerInstanceDynamic;        // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* m_BakedPreSkinnedPositionDrawerInstanceDynamic;   // 0x0310 (size: 0x8)

}; // Size: 0x320

class ASCSequenceAnchor : public ASCActor
{
    class USkeletalMeshComponent* m_ComponentSkeletalMesh;                            // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class ASCSkeletalMeshPrimInstActor : public ASkeletalMeshActor
{
}; // Size: 0x340

class ASCStaticMeshPrimInstActor : public AStaticMeshActor
{
}; // Size: 0x2C0

class ASCVideoPointLight : public APointLight
{
}; // Size: 0x2D0

class ASCVideoRectLight : public ARectLight
{
}; // Size: 0x2D0

class ASCVideoSpotLight : public ASpotLight
{
}; // Size: 0x2D0

class ASCVolume : public AVolume
{
    TArray<class ASCVolume*> m_ChildrenVolumes;                                       // 0x02E8 (size: 0x10)
    FVolumeInfo m_VolumeInfo;                                                         // 0x02F8 (size: 0x10)
    class ASCVolume* m_ParentVolume;                                                  // 0x0308 (size: 0x8)

    void InternalOnComponentStartOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void InternalOnComponentEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    FVolumeInfo GetVolumeInfo();
}; // Size: 0x370

class ASCWindDirectionalSource : public AWindDirectionalSource
{
    class UMaterialParameterCollection* m_MPC;                                        // 0x02B8 (size: 0x8)
    FName m_windDirectionName;                                                        // 0x02C0 (size: 0x8)
    FName m_windSpeedName;                                                            // 0x02C8 (size: 0x8)
    FName m_windMinGustName;                                                          // 0x02D0 (size: 0x8)
    FName m_windMaxGustName;                                                          // 0x02D8 (size: 0x8)

}; // Size: 0x2F0

class ASCWorldSettings : public AWorldSettings
{
    bool m_bUseLegacyCollisionSystem;                                                 // 0x0430 (size: 0x1)

}; // Size: 0x460

class ISCAIActionMemoryEntryHandler : public IInterface
{
}; // Size: 0x28

class ISCDebugNamedOject : public IInterface
{

    void SetDebugName(FName _name);
    void SetDebugColor(const FColor& _color);
    FName GetDebugName();
    FColor GetDebugColor();
}; // Size: 0x28

class ISCPoolableActor : public IInterface
{

    void OnPoolablePreUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePostInitializeComponents();
}; // Size: 0x28

class ISCPoolableActorComponent : public IInterface
{

    void OnPoolableOwnerUninitializeComponents();
    void OnPoolableOwnerInitializeComponents();
}; // Size: 0x28

class ISCPoolableActorSpawner : public IInterface
{

    void BPE_OnGeneratePoolActors(class ASCPoolableActorsContainer* _container);
}; // Size: 0x28

class UAchievementUnlockCondition : public UObject
{
    FGameplayTag m_AchievementTag;                                                    // 0x0028 (size: 0x8)
    bool m_bUseCustomAchievementTag;                                                  // 0x0030 (size: 0x1)
    FAchievementUnlockCondition_OnAchievementUnlockedDyn m_OnAchievementUnlockedDyn;  // 0x0050 (size: 0x10)
    void OnAchievementUnlockedDyn(class UAchievementUnlockCondition* _condition, bool _AutoShutdownCondition);
    FAchievementUnlockCondition_OnAchievementConditionFailedDyn m_OnAchievementConditionFailedDyn; // 0x0078 (size: 0x10)
    void OnAchievementConditionFailedDyn(class UAchievementUnlockCondition* _condition);
    FAchievementUnlockCondition_OnCounterChanged m_OnCounterChanged;                  // 0x0088 (size: 0x10)
    void ObjectiveDynMulticastDelegate(class UAchievementUnlockCondition* Objective);
    TArray<FName> m_MapWhereUnlockAllowed;                                            // 0x0098 (size: 0x10)
    FGameplayTag m_ContentRestrictionTag;                                             // 0x00A8 (size: 0x8)
    bool m_bUseTimer;                                                                 // 0x00B0 (size: 0x1)
    float m_fTimerTime;                                                               // 0x00B4 (size: 0x4)
    bool m_bHasCounter;                                                               // 0x00B8 (size: 0x1)
    int32 m_iCountToReach;                                                            // 0x00BC (size: 0x4)
    bool m_bFailOnCounterReached;                                                     // 0x00C0 (size: 0x1)
    bool m_bWantAddToRoot;                                                            // 0x00C1 (size: 0x1)

    void OnAchievementUnlockedDyn__DelegateSignature(class UAchievementUnlockCondition* _condition, bool _AutoShutdownCondition);
    void OnAchievementConditionFailedDyn__DelegateSignature(class UAchievementUnlockCondition* _condition);
    void ObjectiveDynMulticastDelegate__DelegateSignature(class UAchievementUnlockCondition* Objective);
    void BPF_UnlockAchievement(bool _bShutdownCondition);
    void BPF_StopTimer();
    void BPF_StartTimer();
    void BPF_Shutdown();
    void BPF_SetAchievementTag(FGameplayTag _newAchievementTag);
    void BPF_ResetCounter();
    void BPF_PauseOrResumeTimer(bool _bPause);
    bool BPF_IsTimerActive();
    void BPF_Init(class UObject* _worldContext);
    void BPF_IncrementCounter(int32 _iIncr);
    bool BPF_HasCounter();
    float BPF_GetTimerRemaining();
    int32 BPF_GetCurrentCounter();
    int32 BPF_GetCounterMax();
    void BPF_ConditionFailed();
    void BPE_UnlockAchievement_Debug();
    void BPE_Shutdown();
    void BPE_OnTimerEnded();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_Init();
    TArray<FString> BPE_GetDebugInfo();
    bool BPE_CanBeUnlocked(const class UWorld* _world);
}; // Size: 0xD0

class UAssociatedActorGetter : public UObject
{

    class AActor* BPE_GetAssociatedActor(class AActor* _inActor);
}; // Size: 0x28

class UAsyncTaskTagChanged : public UBlueprintAsyncActionBase
{
    FAsyncTaskTagChangedOnTagBegin OnTagBegin;                                        // 0x0030 (size: 0x10)
    void OnTagChanged();
    FAsyncTaskTagChangedOnTagUpdate OnTagUpdate;                                      // 0x0040 (size: 0x10)
    void OnTagUpdate();
    FAsyncTaskTagChangedOnTagEnd OnTagEnd;                                            // 0x0050 (size: 0x10)
    void OnTagChanged();
    class UAbilitySystemComponent* m_ASC;                                             // 0x0060 (size: 0x8)

    class UAsyncTaskTagChanged* ListenForTagsChange(class UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    void EndTask();
}; // Size: 0x90

class UBlendProfilePayload : public UObject
{
}; // Size: 0x28

class UCardinalPointsHelper : public UBlueprintFunctionLibrary
{

    ESCCardinalPoints BPF_Mirror(ESCCardinalPoints _eCardinalPoint, bool _bMirror, bool _bIgnoreVertical);
    bool BPF_IsNone(ESCCardinalPoints _eCardinalPoint);
    ESCCardinalPoints BPF_GetCardinalPointFromAngle(float _fAngle, float _fEastWestTolerance);
}; // Size: 0x28

class UCheatData : public UObject
{
    FString m_sUsedArgument;                                                          // 0x0028 (size: 0x10)

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    FString BPE_GetArgument(const FGameplayTag& _tag);
    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
}; // Size: 0x38

class UCheatManagerBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_UnapplyCheats();
    void BPF_UnapplyCheat(FGameplayTag _cheatTag);
    bool BPF_IsCheatApplied(FGameplayTag _cheatToFind);
    bool BPF_IsCheatActivated(FGameplayTag _cheatToFind);
    bool BPF_HasAppliedCheats();
    TMap<class FGameplayTag, class FString> BPF_GetRandomCheats(int32 _iNumMin, int32 _iNumMax, FGameplayTagContainer _BannedCheats);
    class USCCheatManagerSettings* BPF_GetCheatDefaultSettings();
    FString BPF_GetCheatArgument(FGameplayTag _cheatWanted);
    FGameplayTagContainer BPF_GetAppliedCheats();
    FGameplayTagContainer BPF_GetActivatedCheats();
    void BPF_DeactivateCheats(FGameplayTagContainer _cheatsToDeactivate);
    void BPF_DeactivateCheat(FGameplayTag _cheatToDeactivate);
    void BPF_DeactivateAllCheats();
    bool BPF_AreCheatsAllowed();
    void BPF_ApplyCheats(bool _bForceApply);
    void BPF_ApplyCheat(FGameplayTag _cheatTag, bool _bForceApply);
    void BPF_ActivateCheats(FGameplayTagContainer _cheatsToActivate, FString _argument);
    void BPF_ActivateCheat(FGameplayTag _cheatToActivate, FString _argument);
}; // Size: 0x28

class UDelegateHolder : public UObject
{

    void SytemCompleted(class UParticleSystemComponent* Component);
}; // Size: 0x48

class UDynamicTextureMaskDB : public UDataAsset
{
    class ASCPositionBakeSceneCapture* m_PositionBakingActor;                         // 0x0030 (size: 0x8)
    class UMaterialInterface* m_BakedPositionHitDrawer_SimpleStaticMesh;              // 0x0038 (size: 0x8)
    class UMaterialInterface* m_BakedPositionHitDrawer_ComplexSkeletalMesh;           // 0x0040 (size: 0x8)
    class UMaterialInterface* m_BakedPositionHitDrawer_SimpleSkeletalMesh;            // 0x0048 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Standard;                  // 0x0050 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Atlas;                     // 0x0058 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Standard;                  // 0x0060 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Atlas;                     // 0x0068 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_Additive_Standard;                     // 0x0070 (size: 0x8)
    class UMaterialInterface* m_Drawer_TexProj_Additive_Atlas;                        // 0x0078 (size: 0x8)
    class UMaterialInterface* m_Drawer_SphereMask_Additive;                           // 0x0080 (size: 0x8)
    class UMaterialInterface* m_Drawer_SphereMask_OpaqueAlpha;                        // 0x0088 (size: 0x8)
    class UMaterialInterface* m_Drawer_SphereMask_OpaqueColor;                        // 0x0090 (size: 0x8)
    class UMaterialInterface* m_Drawer_CapsuleMask_Additive;                          // 0x0098 (size: 0x8)
    class UMaterialInterface* m_Drawer_CapsuleMask_OpaqueAlpha;                       // 0x00A0 (size: 0x8)
    class UMaterialInterface* m_Drawer_CapsuleMask_OpaqueColor;                       // 0x00A8 (size: 0x8)
    class UMaterialInterface* m_TextureDilation;                                      // 0x00B0 (size: 0x8)
    class UMaterialInterface* M_TextureCopy;                                          // 0x00B8 (size: 0x8)
    class UTextureRenderTarget2D* m_ProxyDilationTexture;                             // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UFootIkDataStatics : public UBlueprintFunctionLibrary
{

    bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
}; // Size: 0x28

class UGameFlow : public UObject
{
    class UGameFlowNodeMap* m_currentNode;                                            // 0x0030 (size: 0x8)
    class UGameFlowNodeMap* m_pendingNode;                                            // 0x0038 (size: 0x8)
    FName m_defaultMapTag;                                                            // 0x00E8 (size: 0x8)
    TMap<class FName, class UGameFlowNodeMap*> m_MapNodes;                            // 0x00F0 (size: 0x50)
    TSoftClassPtr<UGameFlowController> m_Controller;                                  // 0x0150 (size: 0x28)
    UClass* m_ControllerClass;                                                        // 0x0178 (size: 0x8)

    void BPF_ResetMapOption();
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    FGameplayTagContainer BPF_GetMapOptions();
    void BPF_AddMapOption(FGameplayTag _optionToAdd);
}; // Size: 0x180

class UGameFlowController : public UObject
{
}; // Size: 0x28

class UGameFlowNextMap : public UObject
{
    FGameplayTagContainer m_ConditionGPTags;                                          // 0x0028 (size: 0x20)
    FGameplayTagContainer m_MapOptionsFromTransition;                                 // 0x0048 (size: 0x20)
    EGameFlowTravelType m_eTravelType;                                                // 0x0068 (size: 0x1)
    class UGameFlowNodeMap* m_NextMapNode;                                            // 0x0070 (size: 0x8)
    FGameplayTagContainer m_ReturnConditions;                                         // 0x0078 (size: 0x20)

}; // Size: 0x98

class UGameFlowNodeMap : public UObject
{
    TArray<class UGameFlowNextMap*> m_potentialNextMaps;                              // 0x0028 (size: 0x10)
    FSoftObjectPath m_Map;                                                            // 0x0038 (size: 0x18)
    FName m_MapTag;                                                                   // 0x0050 (size: 0x8)
    FGameplayTagContainer m_MapOptions;                                               // 0x0058 (size: 0x20)
    bool m_bIsFirstPlayableMap;                                                       // 0x0078 (size: 0x1)

}; // Size: 0x80

class UGameplayEffectReferencer : public UDataAsset
{
    TArray<class USCGameplayEffect*> m_ListOfAllGameplayEffect;                       // 0x0030 (size: 0x10)

    void RetrieveAllGameplayEffects();
}; // Size: 0x40

class UImpostorReplication : public UReplayReplicationComponentBase
{
    TArray<FSCImpostorReplicationInfos> m_Impostors;                                  // 0x0128 (size: 0x10)

    void OnRep_Impostors();
}; // Size: 0x140

class UInheritedDataAsset : public UDataAsset
{
    class UInheritedDataAsset* m_Parent;                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMirrorAnimDB : public UDataAsset
{
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;                                     // 0x0030 (size: 0x10)
    TMap<class FName, class FMirrorAnimStruct> m_MirrorAnimStructMap;                 // 0x0040 (size: 0x50)
    class USkeleton* m_UberSkeleton;                                                  // 0x0090 (size: 0x8)

    FName BPF_GetTwinsBoneName(const FName& _boneName);
}; // Size: 0x98

class UNameHandler : public UObject
{

    FString BPE_GetNameFromIndex(int32 _iIndex);
    int32 BPE_GetIndexFromName(const FString& _inName);
}; // Size: 0x28

class UPhysicalActorDependencyComponent : public UActorComponent
{
    TArray<TSoftObjectPtr<UPhysicalActorDependencyComponent>> m_BakedListeners;       // 0x00F8 (size: 0x10)

}; // Size: 0x108

class URotationWayHelper : public UBlueprintFunctionLibrary
{

    ESCRotationWay BPF_Mirror(ESCRotationWay _eRotation, bool _bMirror);
}; // Size: 0x28

class USCAIActionBTService : public UBTService
{
    FGameplayTag m_GameplayTag;                                                       // 0x0074 (size: 0x8)

}; // Size: 0x80

class USCAIActionFinishBTTask : public USCBTTaskNode
{
    bool m_bSucceeded;                                                                // 0x0070 (size: 0x1)
    FString m_Message;                                                                // 0x0078 (size: 0x10)

}; // Size: 0x88

class USCAIActionRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
}; // Size: 0x88

class USCAIComponent : public UActorComponent
{
}; // Size: 0xE8

class USCAIDataProvider_QueryActionParams : public UAIDataProvider_QueryParams
{
    bool m_bFetchOnce;                                                                // 0x0040 (size: 0x1)
    FGameplayTag m_ActionInjectionTag;                                                // 0x0044 (size: 0x8)

}; // Size: 0x50

class USCAIExecutePendingActionDecorator : public USCBTDecorator
{
    FGameplayTag m_GameplayTag;                                                       // 0x0070 (size: 0x8)

}; // Size: 0x78

class USCAINotifyActionBTTask : public USCBTTaskNode
{
    FName m_EventName;                                                                // 0x0070 (size: 0x8)

}; // Size: 0x78

class USCAIPerceptionSystem : public UAIPerceptionSystem
{
}; // Size: 0x138

class USCAISystem : public UAISystem
{
}; // Size: 0x130

class USCActorHelpers : public UBlueprintFunctionLibrary
{

    class AActor* BPF_GetClosestActor(class AActor* _target, TArray<class AActor*> _actors);
}; // Size: 0x28

class USCAiAction : public UObject
{
    class UBehaviorTree* m_BehaviorTreeAsset;                                         // 0x0050 (size: 0x8)
    EAIActionScheduleCondition m_eScheduleCondition;                                  // 0x0058 (size: 0x1)
    bool m_bCanForceCancel;                                                           // 0x0059 (size: 0x1)

    void BPF_SetBlackBoardValueAsVector(FName _key, const FVector& _vValue);
    void BPF_SetBlackBoardValueAsObject(FName _key, class UObject* _value);
    void BPF_SetBlackBoardValueAsInt(FName _key, int32 _iValue);
    void BPF_SetBlackBoardValueAsFloat(FName _key, float _fValue);
    void BPF_SetBlackBoardValueAsBool(FName _key, bool _bValue);
    class USCAIComponent* BPF_GetOwnerAiComponent();
    class ASCCharacter* BPF_GetOwner();
    void BPF_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
    FVector BPF_GetBlackBoardValueAsVector(FName _key);
    class UObject* BPF_GetBlackBoardValueAsObject(FName _key);
    int32 BPF_GetBlackBoardValueAsInt(FName _key);
    float BPF_GetBlackBoardValueAsFloat(FName _key);
    bool BPF_GetBlackBoardValueAsBool(FName _key);
    class UBlackboardComponent* BPF_GetBlackBoardComponent();
    void BPF_Finish(bool _bSucceeded, FString _message);
    void BPF_CancelPendingActions(class USCAIComponent* _aiComponent, FString _reasonForDebug);
    void BPF_Cancel(FString _message);
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    void BPE_OnOrderFinished(FName _orderParamsName, uint8 _uiOrderId);
    void BPE_OnNamedEvent(FName _eventName);
    void BPE_OnFinished(bool _bSucceeded);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    FString BPE_GetName();
    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
    void BPE_Execute(class UBlackboardComponent* _blackBoardComponent);
    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
}; // Size: 0x88

class USCAiNullAction : public USCAiAction
{
}; // Size: 0x88

class USCAnimInstance : public USCAnimInstanceBase
{
    float m_fCinematicOverallWeight;                                                  // 0x0378 (size: 0x4)
    float m_fCinematicLayerTypesCursor;                                               // 0x037C (size: 0x4)
    float m_fPreviewCinematicLayerTypesCursor;                                        // 0x0380 (size: 0x4)
    class UMirrorAnimDB* m_MirrorAnimDB;                                              // 0x0388 (size: 0x8)
    class UPoseAsset* m_CachedCurrentPoseAsset;                                       // 0x0390 (size: 0x8)
    bool m_bIsInCinematic;                                                            // 0x0398 (size: 0x1)
    FDynamicBlendSettings m_LocoToActionBlendForRep;                                  // 0x03A0 (size: 0x10)
    FDynamicBlendSettings m_ActionToActionBlendForRep;                                // 0x03B0 (size: 0x10)
    FDynamicBlendSettings m_ActionToLocoBlendForRep;                                  // 0x03C0 (size: 0x10)

    void OnUpdateDelegate__DelegateSignature(float _fDt);
    FTransform GetSavedTransform(FName _savedBone);
    bool BPF_IsInPreview();
    class UPoseAsset* BPF_GetCurrentPoseAsset();
    void BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, class UCurveFloat* _blendCurve);
    void BPE_UpdateForVLog();
    void BPE_UpdateAnimationInPreview(float _fDt);
    void BPE_OnCinematicBlendOut();
    void BPE_OnCinematicBlendedOut();
}; // Size: 0x630

class USCAnimInstanceBase : public UAnimInstance
{
    bool m_bIsReplayScrubSnapshotCompatible;                                          // 0x0364 (size: 0x1)
    bool m_bAnimInstanceUpdateEnabled;                                                // 0x0365 (size: 0x1)

    void OnRep_AnimInstanceUpdateEnable();
}; // Size: 0x380

class USCAnimationHelper : public UBlueprintFunctionLibrary
{

    bool HasInvalidNotifies(class UAnimSequenceBase* _sequence, FString _inNotifyName);
    void GetValidUniqueMarkerNames(class UAnimationAsset* _animationAsset, bool& _bOutHasValidMarkers, TArray<FName>& _outMarkerNames);
    float GetNotifyTriggerTime(const FAnimNotifyEvent& _notify);
    float GetNotifyEndTriggerTime(const FAnimNotifyEvent& _notify);
    float GetNotifyDuration(const FAnimNotifyEvent& _notify);
    void FindNotifyStateByClass(class UAnimSequenceBase* _sequence, TSubclassOf<class UAnimNotifyState> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    void FindNotifyByClass(class UAnimSequenceBase* _sequence, TSubclassOf<class UAnimNotify> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    void FindNotifiesStateByClass(class UAnimSequenceBase* _sequence, TSubclassOf<class UAnimNotifyState> _class, bool _bIncludeChildren, TArray<FAnimNotifyEvent>& _outFoundNotifies);
    FTransform BPF_ExtractRootTrackTransform(class UAnimSequence* _sequence, float _fAnimRatio);
}; // Size: 0x28

class USCAttributeSet : public UAttributeSet
{
}; // Size: 0x48

class USCBTDecorator : public UBTDecorator
{
    bool m_bEvaluateConditionOnTick;                                                  // 0x0068 (size: 0x1)

}; // Size: 0x70

class USCBTTaskNode : public UBTTaskNode
{
}; // Size: 0x70

class USCBTTaskRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
}; // Size: 0x88

class USCBaseDemoNetDriver : public UDemoNetDriver
{
}; // Size: 0x12C0

class USCBaseGameSettings : public UDeveloperSettings
{
    bool m_bHasCheats;                                                                // 0x0038 (size: 0x1)
    FGameplayTagContainer m_AllowedContent;                                           // 0x0040 (size: 0x20)
    FSCGameFlowData m_GameFlow;                                                       // 0x0060 (size: 0x20)
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;                                      // 0x0080 (size: 0x28)
    TMap<class FGameplayTag, class TSoftObjectPtr<UGameFlow>> m_ContenRestrictedGameFlows; // 0x00A8 (size: 0x50)
    TArray<FString> m_AchievementsToIgnoreWhenCheckingPlatinum;                       // 0x00F8 (size: 0x10)

    FGameplayTagContainer BPF_GetAllowedContentGameplayTagContainer();
    TArray<FString> BPF_GetAchievementsToIgnoreWhenCheckingPlatinum();
}; // Size: 0x108

class USCBaseUserWidget : public UUserWidget
{

    void BPE_OnSynchronizeProperties();
    void BPE_OnCinematicStarted(const class USCLevelSequence* _inSequence);
    void BPE_OnCinematicFinished(const class USCLevelSequence* _inSequence);
}; // Size: 0x278

class USCBehaviorTreeComponent : public UBehaviorTreeComponent
{
    TMap<class FGameplayTag, class UBehaviorTree*> m_DynamicSubtrees;                 // 0x02A8 (size: 0x50)

}; // Size: 0x318

class USCBlueprintLog : public UBlueprintFunctionLibrary
{

    void BPFLogCategory(FString _text, FName _categoryName, DisplayLevel _eDisplayLevel);
    void BPFLog(const class UObject* _targetSelf, FString _log, DisplayLevel _eDisplayLevel, bool _bViewportDisplay, FLinearColor _viewportColor);
    void BPF_VisualLogWithSpecificOwner(class UObject* _owner, FString _category, DisplayLevel _eVerbosity, FString _inString);
    void BPF_VisualLogBox(class UObject* _owner, FString _category, DisplayLevel _eVerbosity, const FVector& _position, float _size, const FColor& _color, FString _inString);
    void BPF_VisualLog(class UObject* _worldContextObject, FString _category, DisplayLevel _eVerbosity, FString _inString);
}; // Size: 0x28

class USCCameraShake : public UMatineeCameraShake
{
}; // Size: 0x180

class USCCaptureComponent2D : public USceneCaptureComponent2D
{

    bool BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation);
    bool BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas);
}; // Size: 0x950

class USCCharacterHelpers : public UBlueprintFunctionLibrary
{

    bool BPF_TryGetRootBoneTransform(const class ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace);
    bool BPF_TryGetPelvisBoneTransform(const class ACharacter* _character, FTransform& _outPevlisTransform);
    FVector BPF_GetFloorNormal(const class ACharacter* _character);
}; // Size: 0x28

class USCCharacterImpostorAnimInstance : public USCAnimInstance
{
    bool m_bHasAnimation;                                                             // 0x0628 (size: 0x1)
    class UAnimSequence* m_animation;                                                 // 0x0630 (size: 0x8)
    bool m_bMirrorAnimation;                                                          // 0x0638 (size: 0x1)
    FPoseSnapshot m_PoseSnapshotToMimic;                                              // 0x0640 (size: 0x38)
    FCompressedPoseSnapshot m_CompressedPoseSnapshotToMimic;                          // 0x0678 (size: 0x40)

    void OnRep_CompressedPoseSnapshotToMimic();
}; // Size: 0x6C0

class USCCharacterPoseData : public UObject
{
    TMap<class FName, class FSCAnimPoseArray> m_PosesPerState;                        // 0x0028 (size: 0x50)
    TArray<FSCAnimPoseLooped> m_LoopedPoses;                                          // 0x0078 (size: 0x10)
    float m_fBlendBetweenStatesDuration;                                              // 0x0088 (size: 0x4)
    class UPoseAsset* m_PoseAsset;                                                    // 0x0090 (size: 0x8)

}; // Size: 0x98

class USCCheatManagerSettings : public UObject
{
    TMap<class FGameplayTag, class TSubclassOf<UCheatData>> m_CheatData;              // 0x0028 (size: 0x50)
    TMap<class FGameplayTag, class FGameplayTagContainer> m_CheatToBanWhenPickedByRandomizer; // 0x0078 (size: 0x50)
    TMap<class FGameplayTag, class UCheatData*> m_CheatDataInstances;                 // 0x00C8 (size: 0x50)

    class UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag);
    bool BPE_IsCheatLegit(const FGameplayTag& _cheatTag);
}; // Size: 0x118

class USCCollisionLibrary : public UBlueprintFunctionLibrary
{

    void BPF_VisualLogCollision(class UPrimitiveComponent* _primitiveComponent, const FName& _categoryName);
    TEnumAsByte<ECollisionChannel> BPF_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> _eTraceType);
    FCollisionResponseContainer BPF_ToContainerForTraceMulti(const FCollisionResponseContainer& _responses);
    void BPF_SetCollisionResponseToChannels(class UPrimitiveComponent* _primitiveComponent, const FCollisionResponseContainer& _newReponses);
    void BPF_SetCollisionResponseFromTemplate(class UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponseTemplate& _template);
    void BPF_SetCollisionResponseFromPreset(class UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponsePreset& _preset);
    void BPF_PrepareContainerForTraceMulti(FCollisionResponseContainer& _responses);
    TEnumAsByte<ECollisionChannel> BPF_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> _eObjectType);
    TEnumAsByte<ECollisionResponse> BPF_GetCollisionResponse(const FCollisionResponseContainer& _responseContainer, TEnumAsByte<ECollisionChannel> _eCollisionChannel);
    bool BPF_GetCollisionProfile(FName _collisionProfileName, FSCCollisionResponseTemplate& _outTemplatee);
    TArray<FSCCollisionProfileDescription> BPF_GetAllCollisionProfileDescriptions();
    FCollisionResponseContainer BPF_GenerateCollisionResponseContainer(const FSCCollisionResponseBuilder& _builder);
    FCollisionResponseContainer BPF_DefaultResponseContainer_OneException(TEnumAsByte<ECollisionResponse> _eDefaultResponse, TEnumAsByte<ECollisionChannel> _eExceptionChannel, TEnumAsByte<ECollisionResponse> _eExceptionResponse);
    FCollisionResponseContainer BPF_DefaultResponseContainer(TEnumAsByte<ECollisionResponse> _eDefaultResponse);
    float BPF_CalculateStaticMeshMass(class UStaticMesh* _staticMesh);
}; // Size: 0x28

class USCCollisionSettings : public UDeveloperSettings
{
    FCollisionResponseContainer m_CharacterNoCollisionContainer;                      // 0x0038 (size: 0x20)
    FCollisionProfileName m_CharacterNoCollisionProfile;                              // 0x0058 (size: 0x8)
    FCollisionProfileName m_CharacterPhysicsProfile;                                  // 0x0060 (size: 0x8)
    FCollisionProfileName m_CharacterRagdollProfile;                                  // 0x0068 (size: 0x8)
    FCollisionProfileName m_CharacterHitCapsuleProfile;                               // 0x0070 (size: 0x8)
    FCollisionProfileName m_TriggerDefaultProfile;                                    // 0x0078 (size: 0x8)
    FCollisionProfileName m_TriggerPawnProfile;                                       // 0x0080 (size: 0x8)
    FCollisionProfileName m_TriggerLocalPawnProfile;                                  // 0x0088 (size: 0x8)
    FCollisionProfileName m_LDOnlyPawnProfile;                                        // 0x0090 (size: 0x8)
    FCollisionProfileName m_LDOnlyModelProfile;                                       // 0x0098 (size: 0x8)
    FCollisionProfileName m_ReplayPawnCapsuleProfile;                                 // 0x00A0 (size: 0x8)
    FCollisionProfileName m_ReplayPawnMeshProfile;                                    // 0x00A8 (size: 0x8)
    FCollisionProfileName m_ReplayPropsDestroyed;                                     // 0x00B0 (size: 0x8)
    FCollisionProfileName m_ReplayPropsProfile;                                       // 0x00B8 (size: 0x8)
    FCollisionProfileName m_NoCollisionTraceMeshProfile;                              // 0x00C0 (size: 0x8)
    float m_EnvCollisionRetrieveSphereRadius;                                         // 0x00C8 (size: 0x4)
    float m_EnvCollisionRetrieveSweepDist;                                            // 0x00CC (size: 0x4)
    TEnumAsByte<ECollisionChannel> m_eAIColChannel;                                   // 0x00D0 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_eCapsuleLocalPawnChannel;                        // 0x00D1 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_eHitTraceChannel;                                // 0x00D2 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_eLDCollChannel;                                  // 0x00D3 (size: 0x1)

}; // Size: 0xD8

class USCComponentHelpers : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class USCContentRestrictionBlueprintHelper : public UBlueprintFunctionLibrary
{

    bool BPF_IsContentAvailable(FGameplayTag _wantedContentType);
}; // Size: 0x28

class USCCoreSettings : public UDeveloperSettings
{
    TSoftClassPtr<USCBaseGameSettings> m_GameSettingsClass;                           // 0x0038 (size: 0x28)
    TSoftClassPtr<USCInGameAchievementsManagerSettings> m_achievementsSettings;       // 0x0060 (size: 0x28)
    TSoftClassPtr<USCCheatManagerSettings> m_cheatSettings;                           // 0x0088 (size: 0x28)
    FSCVolumeClusterMaterialsPath m_DefaultVolumeVisualizerMaterial;                  // 0x00B0 (size: 0x30)
    TMap<class FName, class FSCVolumeClusterMaterialsPath> m_VolumeVisualizerMaterialsMap; // 0x00E0 (size: 0x50)
    TSubclassOf<class ASCSequenceAnchor> m_LevelSequenceAnchorClass;                  // 0x0130 (size: 0x8)
    TSoftObjectPtr<USCLevelSequenceDirectorData> m_LevelSequenceDefaultDirectorData;  // 0x0138 (size: 0x28)
    float m_fLevelSequenceForcedClothSimulationDuration;                              // 0x0160 (size: 0x4)
    TArray<FActorsPoolConfig> m_DefaultActorPools;                                    // 0x0168 (size: 0x10)
    FGameplayTag m_AiActionBehaviorTag;                                               // 0x0178 (size: 0x8)
    FGameplayTag m_AiAttackActionBehaviorTag;                                         // 0x0180 (size: 0x8)
    TArray<FGameplayTag> m_AiAttackSubActionBehaviorTags;                             // 0x0188 (size: 0x10)
    TMap<class FName, class TSubclassOf<USCAiAction>> m_DevDefinedAiActionsMap;       // 0x0198 (size: 0x50)
    TArray<TSoftClassPtr<AActor>> m_StreamingDebugTrackedActors;                      // 0x01E8 (size: 0x10)
    bool m_bSaveStreamingActors;                                                      // 0x01F8 (size: 0x1)
    int32 m_iMaxActorsAllowedPerLevelWithTransform;                                   // 0x01FC (size: 0x4)
    bool m_bPlatformForceClassicTravel;                                               // 0x0200 (size: 0x1)
    TSoftClassPtr<ASCCharacterImpostor> m_DefaultCharacterImpostorClass;              // 0x0208 (size: 0x28)
    float m_fDelayBeforeImpostorCopyPose;                                             // 0x0230 (size: 0x4)
    float m_fDelayBeforeShowImpostor;                                                 // 0x0234 (size: 0x4)
    bool m_bIsLowEndPlatform;                                                         // 0x0238 (size: 0x1)
    TMap<class FString, class FText> m_IsoCultureToDisplayName;                       // 0x0240 (size: 0x50)
    float m_fDefaultScreenRatio;                                                      // 0x0290 (size: 0x4)
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenAboveDefaultRatio;         // 0x0298 (size: 0x28)
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenBelowDefaultRatio;         // 0x02C0 (size: 0x28)
    FSCErrorPopup m_GenericErrorPopupTexts;                                           // 0x02E8 (size: 0x2D0)
    FSCErrorPopup m_GenericErrorTexts;                                                // 0x05B8 (size: 0x1B0)
    bool m_bPlatformRequireAccountPickup;                                             // 0x0768 (size: 0x1)
    TMap<class ELipSyncLanguage, class FLanguageSeparator> m_LanguageSeparators;      // 0x0770 (size: 0x50)
    TArray<FString> m_TagsToIgnoreWhenGeneratingLipSync;                              // 0x07C0 (size: 0x10)
    float m_fMaxAICharacterCorpseTimeout;                                             // 0x07D0 (size: 0x4)
    int32 m_iMaxAICharacterCorpse;                                                    // 0x07D4 (size: 0x4)
    int32 m_iMaxAIImpostors;                                                          // 0x07D8 (size: 0x4)
    bool m_bActorPoolsEnabled;                                                        // 0x07DC (size: 0x1)

    class UCurveFloat* BPF_GetHUDOffsetFromBlackBarRatioCurve();
}; // Size: 0x7E0

class USCCoreTools : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class USCCoreUserSettings : public UDeveloperSettings
{
    bool m_bEnableGameFlowInPIE;                                                      // 0x0038 (size: 0x1)
    bool m_bEnableSaveLevelInPIE;                                                     // 0x0039 (size: 0x1)
    bool m_bAutoSkipCutscenes;                                                        // 0x003A (size: 0x1)
    bool m_bEnableVolumeSolidDraw;                                                    // 0x003B (size: 0x1)
    bool m_bPauseOnAiNextAction;                                                      // 0x003C (size: 0x1)
    bool m_bListPoolableActorsInOutliner;                                             // 0x003D (size: 0x1)
    bool m_bAutoGenerateActorPools;                                                   // 0x003E (size: 0x1)
    bool m_bDebugDisplayAllPools;                                                     // 0x003F (size: 0x1)
    ESCDebugActorBoxType m_eDebugActorSelectionBoxType;                               // 0x0040 (size: 0x1)
    FDirectoryPath m_PhonemeDictionaryPath;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

class USCDelegate : public UObject
{
}; // Size: 0x28

class USCDlcConfig : public UObject
{
    TArray<FString> Tags;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

class USCDynamicTextureMask : public UActorComponent
{
    bool m_bEnablePositionBaking;                                                     // 0x00C0 (size: 0x1)
    EDynamicTextureMask_PositionBakingType m_ePositionBakingTypeEnum;                 // 0x00C1 (size: 0x1)
    EDynamicTextureMask_DrawType m_eDrawType;                                         // 0x00C2 (size: 0x1)
    EDynamicTextureMask_DrawShape m_eDrawShape;                                       // 0x00C3 (size: 0x1)
    class ASCPositionBakeSceneCapture* m_PositionBakerActor;                          // 0x00C8 (size: 0x8)
    class UDynamicTextureMaskDB* m_DynamicTextureMaskDB;                              // 0x00D0 (size: 0x8)
    TEnumAsByte<ETextureRenderTargetFormat> m_eTextureType;                           // 0x00D8 (size: 0x1)
    int32 m_iBakedTextureResolution;                                                  // 0x00DC (size: 0x4)
    int32 m_iMaskTextureResolution;                                                   // 0x00E0 (size: 0x4)
    class UTextureRenderTarget2D* m_BakedPositionTextureTarget;                       // 0x00E8 (size: 0x8)
    class UTexture* m_StaticBakedPositionTexture;                                     // 0x00F0 (size: 0x8)
    class UTextureRenderTarget2D* m_MaskRenderTarget;                                 // 0x00F8 (size: 0x8)
    bool m_bIsBaked;                                                                  // 0x0100 (size: 0x1)
    bool m_bIsPlane;                                                                  // 0x0101 (size: 0x1)
    TArray<int32> m_MaterialIDsToBake;                                                // 0x0108 (size: 0x10)
    class UMeshComponent* m_MeshToBake;                                               // 0x0118 (size: 0x8)
    int32 m_iUVChannel;                                                               // 0x0120 (size: 0x4)
    int32 m_iDilationSteps;                                                           // 0x0124 (size: 0x4)
    FVector m_vBoundsMin;                                                             // 0x0128 (size: 0xC)
    FVector m_vBoundsMax;                                                             // 0x0134 (size: 0xC)
    FName m_BakedPositionTextureParameterName;                                        // 0x0140 (size: 0x8)
    FName m_HitPositionParameterName;                                                 // 0x0148 (size: 0x8)
    FName m_HitSizeParameterName;                                                     // 0x0150 (size: 0x8)
    FName m_HitFadeParameterName;                                                     // 0x0158 (size: 0x8)
    FName m_AxisVParameterName;                                                       // 0x0160 (size: 0x8)
    FName m_AxisUParameterName;                                                       // 0x0168 (size: 0x8)
    FName m_HitMeshBoundsMinParameterName;                                            // 0x0170 (size: 0x8)
    FName m_HitMeshBoundsMaxParameterName;                                            // 0x0178 (size: 0x8)
    FName m_ChannelUVParameterName;                                                   // 0x0180 (size: 0x8)
    FName m_MaskParameterName;                                                        // 0x0188 (size: 0x8)
    FName m_MarkColorParameterName;                                                   // 0x0190 (size: 0x8)
    FName m_TextureToProjectParameterName;                                            // 0x0198 (size: 0x8)
    FName m_TextureToCopyParameterName;                                               // 0x01A0 (size: 0x8)
    FName m_TextureToDilateParameterName;                                             // 0x01A8 (size: 0x8)
    FName m_DilationStepsParameterName;                                               // 0x01B0 (size: 0x8)
    FName m_DilationTextureSizeParameterName;                                         // 0x01B8 (size: 0x8)
    FName m_IsPlaneParameterName;                                                     // 0x01C0 (size: 0x8)
    class UMaterialInstanceDynamic* m_DilateMID;                                      // 0x01C8 (size: 0x8)
    class UMaterialInstanceDynamic* m_CopyMID;                                        // 0x01D0 (size: 0x8)
    class UMaterialInstanceDynamic* m_BakedPositionHitDrawerInstanceDynamic;          // 0x01D8 (size: 0x8)

    void SetupLocalBoundsOffline();
    void CreatePositionBakingTextureTarget();
    void CreateMaskTextureTarget();
    void CreateBothTexturesTarget();
    bool BPF_DrawOnMaskOverride(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, class UTexture* _TextureToProject, FLinearColor _color, EDynamicTextureMask_DrawShape _eDrawShape);
    bool BPF_DrawOnMask(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, class UTexture* _TextureToProject, FLinearColor _color);
    bool BPF_BakeSelfPositionRuntime();
}; // Size: 0x1E8

class USCEnsureDataSettings : public UDeveloperSettings
{
    FSoftObjectPath m_Enums;                                                          // 0x0038 (size: 0x30)
    FText m_adviserTooltipText;                                                       // 0x0068 (size: 0x18)
    FText m_buildLog;                                                                 // 0x0080 (size: 0x18)
    TMap<class FName, class FAdvisersStruct> m_ensureCategoryAdvisers;                // 0x0098 (size: 0x50)
    bool m_bUseNameInsteadOfPath;                                                     // 0x00E8 (size: 0x1)
    bool m_bRegroupUnderOneCategory;                                                  // 0x00E9 (size: 0x1)
    FName m_mainCategoryName;                                                         // 0x00EC (size: 0x8)

}; // Size: 0x108

class USCEnvQueryManager : public UEnvQueryManager
{
}; // Size: 0x148

class USCEnvQueryTest : public UEnvQueryTest
{
}; // Size: 0x1F8

class USCEnvQueryTest_Distance : public USCEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;                                     // 0x01F8 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> m_FromContext;                                // 0x0200 (size: 0x8)
    TSubclassOf<class UEnvQueryContext> m_ToContext;                                  // 0x0208 (size: 0x8)

}; // Size: 0x210

class USCEnvQueryTest_Trace : public USCEnvQueryTest
{
    FEnvTraceData m_TraceData;                                                        // 0x01F8 (size: 0x30)
    bool m_bCustomCollisionResponse;                                                  // 0x0228 (size: 0x1)
    FCollisionProfileName m_CollisionProfile;                                         // 0x022C (size: 0x8)
    FCollisionResponseContainer m_CollisionSettings;                                  // 0x0234 (size: 0x20)
    TSubclassOf<class UEnvQueryContext> m_FromContext;                                // 0x0258 (size: 0x8)
    TSubclassOf<class UEnvQueryContext> m_ToContext;                                  // 0x0260 (size: 0x8)
    FAIDataProviderFloatValue m_FromZOffset;                                          // 0x0268 (size: 0x38)
    FAIDataProviderFloatValue m_ToZOffset;                                            // 0x02A0 (size: 0x38)
    bool m_bIgnoreQuerier;                                                            // 0x02D8 (size: 0x1)

}; // Size: 0x300

class USCErrorHelpers : public UBlueprintFunctionLibrary
{

    void BPF_ShowMessageLog(ESCMessageLogSeverity _eSeverity, FString _textContent, FName _categoryName, bool _bNotify);
    void BPF_Ensure(bool _bValue, FString _message);
}; // Size: 0x28

class USCFootIkAnimInstance : public USCAnimInstance
{
    FSCFootIkData m_leftFootStructure;                                                // 0x0628 (size: 0xD0)
    FSCFootIkData m_rightFootStructure;                                               // 0x06F8 (size: 0xD0)
    float m_fMaxSlopeAngle;                                                           // 0x07C8 (size: 0x4)
    float m_fThighToFootDistDiff;                                                     // 0x07CC (size: 0x4)
    FName m_syncGroup;                                                                // 0x07D0 (size: 0x8)
    FString m_footName;                                                               // 0x07D8 (size: 0x10)
    FString m_thighName;                                                              // 0x07E8 (size: 0x10)
    FString m_ikSuffix;                                                               // 0x07F8 (size: 0x10)
    bool m_bInvalidateLastGroundOnMarkerHit;                                          // 0x0808 (size: 0x1)
    float m_fLerpToSpringMultiplier;                                                  // 0x080C (size: 0x4)
    FRuntimeFloatCurve m_alphaCurveByRelFootPos;                                      // 0x0810 (size: 0x88)
    TArray<TEnumAsByte<EMovementMode>> m_eHandledMovementModes;                       // 0x0898 (size: 0x10)
    bool m_bIgnoreLevelDesignCollisions;                                              // 0x08A8 (size: 0x1)
    FFootIkDamping m_locationDamping;                                                 // 0x08B0 (size: 0x98)
    FFootIkDamping m_rotationDamping;                                                 // 0x0948 (size: 0x98)
    float m_fRawToMarkerAlphaDuration;                                                // 0x09E0 (size: 0x4)
    float m_fHipsAttenuation;                                                         // 0x09E4 (size: 0x4)
    bool m_bHipsUseLerp;                                                              // 0x09E8 (size: 0x1)
    float m_fHipsDampingSpeed;                                                        // 0x09EC (size: 0x4)
    TArray<class TSubclassOf<USCFootIkService>> m_Services;                           // 0x09F0 (size: 0x10)
    float m_fMaxHipsHeightDisplacement;                                               // 0x0A00 (size: 0x4)
    FVector m_vHipsDisplacment;                                                       // 0x0A04 (size: 0xC)
    bool m_bIsHipsDisplacementValid;                                                  // 0x0A10 (size: 0x1)
    bool m_bIsFootIkEnabled;                                                          // 0x0A11 (size: 0x1)
    FVector m_vLastComponentVelocity;                                                 // 0x0A14 (size: 0xC)

}; // Size: 0xAD0

class USCFootIkCliffRaycast : public USCFootIkRaycast
{
    float m_fCliffTraceOffset;                                                        // 0x0038 (size: 0x4)
    float m_fCliffOffset;                                                             // 0x003C (size: 0x4)

}; // Size: 0x40

class USCFootIkPlanting : public USCFootIkService
{
    bool m_bIgnore2DPlane;                                                            // 0x0028 (size: 0x1)

}; // Size: 0x30

class USCFootIkPredictionByVelocity : public USCFootIkService
{
    FFloatRange m_activationRange;                                                    // 0x0028 (size: 0x10)
    float m_fMinRequiredVelocity;                                                     // 0x0038 (size: 0x4)
    bool m_bUseLastGroundNormal;                                                      // 0x003C (size: 0x1)

}; // Size: 0x40

class USCFootIkRaycast : public USCFootIkService
{
    float m_fTraceUpLength;                                                           // 0x0028 (size: 0x4)
    float m_fTraceDownLength;                                                         // 0x002C (size: 0x4)
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;                               // 0x0030 (size: 0x1)

    bool DoRaycast(FHitResult& _outHitResult, class USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd);
}; // Size: 0x38

class USCFootIkService : public UObject
{
}; // Size: 0x28

class USCGameInstance : public UGameInstance
{
    FSCGameInstance_OnCheatsUpdated m_OnCheatsUpdated;                                // 0x01C0 (size: 0x10)
    void OnCheatsUpdated(bool _bApplied);
    bool m_bEnableDevMode;                                                            // 0x0220 (size: 0x1)
    TArray<class UObject*> m_ObjectToLoadAtBegining;                                  // 0x0298 (size: 0x10)
    class UCurveFloat* m_HudOffsetFromBlackBarWhenAboveDefaultRatioRuntime;           // 0x02A8 (size: 0x8)
    class UCurveFloat* m_HudOffsetFromBlackBarWhenBelowDefaultRatioRuntime;           // 0x02B0 (size: 0x8)

    void UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock);
    void UnlockAllInGameAchievements();
    void TriggerPGOWriteFile();
    void ResetAllInGameAchievements();
    void OnCheatsUpdated__DelegateSignature(bool _bApplied);
    void LowPerformanceModeChangedDelegate__DelegateSignature(bool bLowPerformanceMode);
    void LowPerformanceModeChanged__DelegateSignature(bool bLowPerformanceMode);
    void LockInGameAchievement(const FGameplayTag& _achievementToLock);
    void BPF_BindToLowPerformanceChanged(FBPF_BindToLowPerformanceChangedDelegate Delegate);
}; // Size: 0x2B8

class USCGameplayEffect : public UGameplayEffect
{
}; // Size: 0x7F8

class USCGameplayStatics : public UBlueprintFunctionLibrary
{

    void BPF_UnloadLevels(const class UObject* _context, const TArray<FName>& _levels, bool _bSynchronous);
    class UParticleSystemComponent* BPF_SpawnEmitterAttachedFromPool(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, FName PoolType, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bReplicates);
    class UParticleSystemComponent* BPF_SpawnEmitterAtLocationFromPool(const class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, FName PoolType, FVector Location, FRotator Rotation, FVector Scale, bool bReplicates);
    void BPF_SetLevelsForcedDesiredState(const class UObject* _context, const TArray<FName>& _levels, ESCLevelStreamingState _eDesiredState);
    void BPF_SetGamePaused(const class UObject* _worldContextObject, bool _bPaused);
    void BPF_SetCurrentPrimitiveDataAsDefault(class UPrimitiveComponent* _primitiveComponent);
    bool BPF_ProjectWorldToScreenWithTransform(class APlayerController* _player, const FVector& _vWorldPosition, FVector2D& _vOutScreenPosition, FTransform _cameraTransform, bool _bPlayerViewportRelative, EProjectionComputeBehavior _eComputeBehavior);
    bool BPF_ProjectScreenToWorldWithTransform(class APlayerController* _player, const FVector2D& _vInScreenPosition, FVector& _vOutWorldPosition, FVector& _vOutWorldDir, FTransform _cameraTransform);
    void BPF_LoadLevels(const class UObject* _context, const TArray<FName>& _levels, bool _bSynchronous, bool _bMakeVisibleAfterLoad);
    bool BPF_IsPlaySessionPaused();
    bool BPF_IsGamePaused(const class UObject* _worldContextObject);
    bool BPF_IsBuildTest();
    bool BPF_IsBuildShipping();
    class AActor* BPF_GetViewTarget(class APlayerCameraManager* _cameraManager);
    class APawn* BPF_GetFirstLocalPlayerPawn(const class UObject* _worldContextObject);
    float BPF_GetBlendTimeToGo(class APlayerCameraManager* _cameraManager);
    void BPF_ForceRefresh(class AActor* _actor);
    void BPF_DisplayErrorMessage(FName _title, FString _message);
}; // Size: 0x28

class USCHelpers : public UBlueprintFunctionLibrary
{

    bool BPF_TestExpressionInt(const FSCMathExpressionInteger& _expression, int32 _iInputValue);
    bool BPF_TestExpressionFloat(const FSCMathExpressionFloat& _expression, float _fInputValue);
    int32 BPF_SlowMotionFinisher(class UObject* _context, class UCurveFloat* _curve, FBPF_SlowMotionFinisherOnFinished _onFinished, float _fScale, bool _bIsRelevantForGameplay, bool _bStopOnOtherSlomo);
    int32 BPF_SlowMotion(class UObject* _context, class UCurveFloat* _curve, float _fScale, bool _bIsRelevantForGameplay);
    void BPF_SetLocalizationPreviewLanguage(FString _inCulture);
    bool BPF_RandomBoolFromProbability(const float _fProba);
    int32 BPF_PushBlockSlowmotion(bool _bFreezeAnySlowmotion);
    void BPF_PopBlockSlowmotion(int32 _iHandle, bool _bUnFreezeAnySlowmotion);
    bool BPF_IsSlowMotionEnabled();
    FSCTypedValue BPF_IntToTypedValue(int32 _iValue);
    bool BPF_Int32RangeContains(const FInt32Range& _range, int32 _iValue);
    int32 BPF_InstantSlowMotion(class UObject* _context, float _fScale, bool _bIsRelevantForGameplay);
    float BPF_GetSlowMotionDebugUserValue();
    float BPF_GetSlowMotionDebugCoef();
    TMap<class FString, class FText> BPF_GetIsoCultureToDisplayName();
    class UWorld* BPF_GetEditorWorld();
    class AActor* BPF_GetActorOfClassInWorld(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
    FSCTypedValue BPF_FloatToTypedValue(float _fValue);
    void BPF_EndTasks(const TArray<class UAbilityTask*>& _tasks);
    bool BPF_Contains(const FFloatRange& _FloatRange, float _fValue);
    FSCTypedValue BPF_BoolToTypedValue(bool _bValue);
    void BPF_AbortSlowMotion(class UObject* _context, int32 _iSlowMoID, bool _bIsRelevantForGameplay);
    void BPF_AbortCurrentSlowMotion(class UObject* _context, bool _bIsRelevantForGameplay);
}; // Size: 0x28

class USCInGameAchievementsManagerBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_TriggerSaveAchievements();
    void BPF_RemoveObjectFromNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _objectToRemove);
    void BPF_OnMatchEnded(bool _bHasWon);
    bool BPF_IsUnlockConditionCurrentlyActive(class UAchievementUnlockCondition* _unlockCondition);
    bool BPF_IsObjectUnlocked(FGameplayTag _ObjectTag);
    bool BPF_IsObjectNewlyUnlocked(FGameplayTag _newlyUnlockedCategory, FGameplayTag _ObjectTag);
    bool BPF_IsAchievementUnlocked(FGameplayTag _achievementTag);
    bool BPF_GetObjectUnlockInfo(FGameplayTag _ObjectTag, FAchievementUnlockConditionStruct& _outObjectUnlockCondition);
    FGameplayTagContainer BPF_GetObjectsNewlyUnlocked(FGameplayTag _newlyUnlockCategory);
    TArray<class UAchievementUnlockCondition*> BPF_GetCurrentAchievementsToUnlock();
    TArray<class UAchievementUnlockCondition*> BPF_GetAllAchievementsToUnlock();
    class USCInGameAchievementsManagerSettings* BPF_GetAchievementManagerSettings();
    class UAchievementUnlockCondition* BPF_GetAchievementConditionFromTag(FGameplayTag _achievementTag);
    void BPF_AllowOnObjectUnlockedBroadcast(bool _bAllowBroadcast);
}; // Size: 0x28

class USCInGameAchievementsManagerSettings : public UObject
{
    TArray<FAchievementUnlockConditionSet> m_InGameAchievements;                      // 0x0028 (size: 0x10)
    TArray<FAchievementUnlockConditionSet> m_OnInitAchievements;                      // 0x0038 (size: 0x10)
    TArray<FAchievementUnlockConditionSet> m_OnEntitlementQueryCompletedAchievements; // 0x0048 (size: 0x10)
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedAchievements;                // 0x0058 (size: 0x10)
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedRetroCompatibility;          // 0x0068 (size: 0x10)
    FGameplayTagContainer m_NewlyUnlockedCategories;                                  // 0x0078 (size: 0x20)
    TArray<FAchievementUnlockObjectSet> m_ObjectUnlocks;                              // 0x0098 (size: 0x10)
    FSCInGameAchievementsManagerSettings_OnObjectUnlocked m_OnObjectUnlocked;         // 0x00A8 (size: 0x10)
    void OnObjectUnlockedDynamic(FGameplayTag _objectUnlockedTag);
    FSCInGameAchievementsManagerSettings_OnObjectsUnlockedFinished m_OnObjectsUnlockedFinished; // 0x00B8 (size: 0x10)
    void DynamicMulticast();
    FSCInGameAchievementsManagerSettings_OnSaveCheckFinished m_OnSaveCheckFinished;   // 0x00C8 (size: 0x10)
    void OnSaveCheckFinished();
    FSCInGameAchievementsManagerSettings_OnAchievementsInit m_OnAchievementsInit;     // 0x00D8 (size: 0x10)
    void OnAchievementsInit();

    void OnSaveCheckFinished__DelegateSignature();
    void OnObjectUnlockedDynamic__DelegateSignature(FGameplayTag _objectUnlockedTag);
    void OnAchievementsInit__DelegateSignature();
    FAchievementUnlockConditionStruct BPF_GetUnlockConditionStructFromTag(const FGameplayTag& _ObjectTag);
    class UAchievementUnlockCondition* BPF_GetUnlockConditionInstanceFromTag(FGameplayTag _wantedUnlockCondition);
    TArray<class UAchievementUnlockCondition*> BPF_GetAllUnlockConditionInstances();
    TArray<FAchievementUnlockConditionStruct> BPF_GetAllObjectUnlock();
}; // Size: 0xE8

class USCLevelSequence : public ULevelSequenceDirector
{
    class USCLevelSequenceDirectorData* m_DataAsset;                                  // 0x0040 (size: 0x8)
    class ACameraActor* m_ActorCamera;                                                // 0x0058 (size: 0x8)
    class ASCSequenceAnchor* m_ActorAnchor;                                           // 0x0060 (size: 0x8)

    void OnPreStop();
    void OnPlay();
    void OnPause();
    void OnFinished();
    void OnAnyCharacterPlayMontage(class UAnimMontage* _playedMontageToPlay);
    void BPF_UnregisterCharacter(FName _roleName);
    void BPF_TeleportToActor(const class AActor* _actor);
    void BPF_TeleportTo(const FVector& _location, const FRotator& _rotation, bool _bAddLocation);
    void BPF_RemoveMaterialParameterBinding(int32 _iHandle);
    class APlayerController* BPF_PlayerController();
    ESCSequenceBlendViewState BPF_GetViewBlendState();
    FName BPF_GetRoleFromActor(class AActor* _actor);
    class USCLevelSequenceDirectorData* BPF_GetData();
    class ACharacter* BPF_GetCharacterOwner();
    class ACameraActor* BPF_GetCamera();
    class UAnimSequence* BPF_GetAnimSequenceFromLevelSequence(const class ULevelSequence* _levelSequence, FName _roleName);
    class ASCSequenceAnchor* BPF_GetAnchor();
    class AActor* BPF_GetActorFromRole(FName _roleName);
    void BPF_BlendToSequenceView(float _fTime);
    void BPF_BlendToPlayerView(float _fTime);
    int32 BPF_AddMaterialParameterBinding(class UMaterialParameterCollection* _collection, FName _parameterName, ESequenceBindingType _eBinding);
    bool BPE_OnRegisterActor(class AActor* _actor, FName _role, class ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    void BPE_OnCreated(class ALevelSequenceActor* _sequenceActor, class ACharacter* _playerCharacter, class ACameraActor* _camera);
}; // Size: 0xF8

class USCLevelSequenceDirectorData : public UInheritedDataAsset
{
    TArray<class USCLevelSequenceRoleData*> m_Roles;                                  // 0x0038 (size: 0x10)
    TMap<class FGameplayTag, class FSequenceRoleTypeDescription> m_RoleTypesMap;      // 0x0048 (size: 0x50)
    float m_fBlendCharacterPositionTime;                                              // 0x0098 (size: 0x4)
    float m_fEaseInAnimationTime;                                                     // 0x009C (size: 0x4)
    float m_fEaseOutAnimationTime;                                                    // 0x00A0 (size: 0x4)
    float m_fEaseInCamera;                                                            // 0x00A4 (size: 0x4)
    float m_fEaseOutCamera;                                                           // 0x00A8 (size: 0x4)
    bool m_bCanSkip;                                                                  // 0x00AC (size: 0x1)
    bool m_bAnimateCameraSensor;                                                      // 0x00AD (size: 0x1)
    bool m_bConstrainAspectRatio;                                                     // 0x00AE (size: 0x1)
    bool m_bCutReplayDuringSequence;                                                  // 0x00AF (size: 0x1)
    bool m_bIsCameraEditableInReplay;                                                 // 0x00B0 (size: 0x1)
    ECinematicLayerTypes m_eCinematicLayerType;                                       // 0x00B1 (size: 0x1)
    TArray<FMaterialParameterBlendSettings> m_MaterialParameterBlendSettingsList;     // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class USCLevelSequenceHelpers : public UBlueprintFunctionLibrary
{

    void BPF_UnbindOnSequenceViewBlendStateChanged(const FBPF_UnbindOnSequenceViewBlendStateChangedDelegate& _delegate);
    void BPF_StopSequence(const class ALevelSequenceActor* _sequenceActor);
    void BPF_SetSequenceCharacter(const class ALevelSequenceActor* _sequenceActor, class ACharacter* _character);
    void BPF_RegisterSequenceActor(const class ALevelSequenceActor* _sequenceActor, class AActor* _actor, FName _roleName);
    void BPF_PlaySequence(const class ALevelSequenceActor* _sequenceActor, class ACharacter* _characterOwner, bool _bLoop);
    void BPF_PauseSequence(const class ALevelSequenceActor* _sequenceActor);
    FName BPF_GetTeleportRoleName();
    class ALevelSequenceActor* BPF_GetSequenceActorFromId(int32 _sequenceID);
    int32 BPF_CreateSequence(class ACharacter* _characterOwner, class APlayerController* _controller, const FSCSequenceParameters& _parameters);
    void BPF_BindOnSequenceViewBlendStateChanged(const FBPF_BindOnSequenceViewBlendStateChangedDelegate& _delegate);
}; // Size: 0x28

class USCLevelSequenceRoleData : public UInheritedDataAsset
{
    FName m_Name;                                                                     // 0x0038 (size: 0x8)
    FName m_AnchorBoneName;                                                           // 0x0040 (size: 0x8)

}; // Size: 0x48

class USCLevelStreamingManagerHelpers : public UBlueprintFunctionLibrary
{

    void BPF_SetStreamingVolumesEnabled(bool _bEnabled);
    void BPF_BlockLoadingsOnNextUpdate();
}; // Size: 0x28

class USCLipSyncTools : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class USCMaterialHelpers : public UBlueprintFunctionLibrary
{

    void BPF_SetMPCVectorParameterValue(const class UObject* _worldContext, class UMaterialParameterCollection* _collection, FName _parameter, FVector _vValue);
    void BPF_SetMPCScalarParameterValue(const class UObject* _worldContext, class UMaterialParameterCollection* _collection, FName _parameter, float _fValue);
    void BPF_DeleteParameterBinding(int32 _iHandle);
    void BPF_BlendMaterialParameterLinearVectorFinishable(class UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FBPF_BlendMaterialParameterLinearVectorFinishableOnFinished _onFinished, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterLinearVector(class UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterLinearFloatFinishable(class UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, FBPF_BlendMaterialParameterLinearFloatFinishableOnFinished _onFinished, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterLinearFloat(class UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterLinearColorFinishable(class UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FBPF_BlendMaterialParameterLinearColorFinishableOnFinished _onFinished, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterLinearColor(class UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterCurveFinishable(class UMeshComponent* _owner, FName _name, const class UCurveBase* _curve, FBPF_BlendMaterialParameterCurveFinishableOnFinished _onFinished, int32 _iMaterialIndex);
    void BPF_BlendMaterialParameterCurve(class UMeshComponent* _owner, FName _name, const class UCurveBase* _curve, int32 _iMaterialIndex);
    void BPF_Blend_MPC_ParameterLinearVectorFinishable(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FBPF_Blend_MPC_ParameterLinearVectorFinishableOnFinished _onFinished);
    void BPF_Blend_MPC_ParameterLinearVector(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration);
    void BPF_Blend_MPC_ParameterLinearFloatFinishable(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration, FBPF_Blend_MPC_ParameterLinearFloatFinishableOnFinished _onFinished);
    void BPF_Blend_MPC_ParameterLinearFloat(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration);
    void BPF_Blend_MPC_ParameterLinearColorFinishable(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FBPF_Blend_MPC_ParameterLinearColorFinishableOnFinished _onFinished);
    void BPF_Blend_MPC_ParameterLinearColor(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration);
    void BPF_Blend_MPC_ParameterCurveFinishable(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const class UCurveBase* _curve, FBPF_Blend_MPC_ParameterCurveFinishableOnFinished _onFinished);
    void BPF_Blend_MPC_ParameterCurve(class UObject* _owner, class UMaterialParameterCollection* _collection, FName _name, const class UCurveBase* _curve);
    int32 BPF_BindMPCParamToCharacterSocketLocation(class ACharacter* _character, FName _socketName, class UMaterialParameterCollection* _collection, FName _parameterName);
}; // Size: 0x28

class USCMathTools : public UBlueprintFunctionLibrary
{

    FVector VectorCriticalSpringInterp(FVector _vCurrent, const FVector& _vTarget, FVector& _vInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    float SearchReciprocalValueInCurve(const class UCurveFloat* _curve, const float _fY);
    FQuat Rotator_Quat(const FRotator& _rot);
    ESCCardinalPoints RotateCardinalPoint(const ESCCardinalPoints _eCardinalPoint, const int32 _iClockwiseSteps);
    FVector ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest);
    FVector ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest);
    bool IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    bool IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    bool IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    bool IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    bool IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius);
    bool IntersectionLineSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vLineDeltaPosition, const FVector& _vLineDirNormalized, const FVector& _vSphereOrigin, const float _fSphereRadius);
    bool IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2);
    FTransform GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform);
    FTransform GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform);
    FQuat GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal);
    FQuat GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal);
    FQuat GetQuat(const FTransform& _transform);
    FVector GetPositionLocalToGlobal(const FTransform& _transformBase, const FVector& _localLocation);
    FVector GetPositionGlobalToLocal(const FTransform& _transformBase, const FVector& _globalLocation);
    FPlane GetPlaneFromDir(const FVector& _vLocation, const FVector& _vDir, float _fMaxSlopeAngleInRad);
    FVector GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal);
    FVector GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal);
    void GetLocalLookAtYaw(const FVector& _fLookAtDirection, const float& _fRefBoneYawInDegrees, float _fMaxAngleInDegrees, bool _bAlwaysLookAt, float& _fOutLocalYaw, bool& _bOutIsLookAtValid);
    FVector GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal);
    FVector GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal);
    float GetDiffAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay);
    float GetDestinationAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    float GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    float GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef);
    float GetAngleNegPiToPi(float _fAngle);
    ESCRotationWay GetAngleBlendWay(float _fSource, float _fDest);
    float GetAngle2Pi(float _fAngle);
    float FloatCriticalSpringInterp(float _fCurrent, const float& _fTarget, float& _fInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    float Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp);
    ESCCardinalPoints ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg);
    ESCCardinalPoints ComputeCardinalPointEastWest(const FVector& _vRefDir, const FVector& _vOtherVector);
    ESCCardinalPoints ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector);
    float ComputeBlendRatio(float _fRatio, ESCBlendType _eBlendType, class UCurveFloat* _blendCurve);
    int32 BPF_SetBitMaskFromIndex(int32 _iBitMask, int32 _iBitIndex);
    bool BPF_HasBit(int32 _iBitMask, int32 _iBitIndex);
    float BPF_GetSplineRatioFromLocation(const FVector& _vLocation, const class USplineComponent* _spline, float _fRangeMin, float _fRangeMax);
    void BPF_GetBoundFromFloatRange(const FFloatRange& _FloatRange, float& _fOutLowerBoundValue, float& _fOutUpperBoundValue);
    int32 BPF_CreateBitMaskFromIndex(int32 _iBitIndex);
    int32 BPF_ClearBitMaskFromIndex(int32 _iBitMask, int32 _iBitIndex);
    float AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized);
    float AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized);
    void AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized);
}; // Size: 0x28

class USCNotifyStateDisableLoopedPoses : public UAnimNotifyState
{
}; // Size: 0x30

class USCPoolHelpers : public UBlueprintFunctionLibrary
{

    class AActor* BPF_SpawnPoolableActor(class AActor* _worldCtxt, UClass* _class, const FTransform& _transform, FName _poolName, bool _bGrow, bool _bFailIfNoPoolFound);
    bool BPF_IsActorValid(const class AActor* _actor);
    bool BPF_IsActorPooled(const class AActor* _actor, bool& _bOutIsActive);
    void BPF_GetPoolContextInfos(UClass* _class, int32& _iActiveCount, int32& _iInativeActiveCount);
    void BPF_DestroyPoolableActor(class AActor* _actor, bool& _bOutWasPooled);
}; // Size: 0x28

class USCRagdollConfigDB : public UDataAsset
{
    float m_fDetectionRadius;                                                         // 0x0030 (size: 0x4)
    float m_fBoneDetectionRadius;                                                     // 0x0034 (size: 0x4)
    TArray<FRagdollMoveableBone> m_MoveableBones;                                     // 0x0038 (size: 0x10)
    float m_fForceFactor;                                                             // 0x0048 (size: 0x4)
    float m_fDelayBetweenImpulses;                                                    // 0x004C (size: 0x4)
    float m_fMinimumPlayerVelocity;                                                   // 0x0050 (size: 0x4)
    class UCurveFloat* m_PlayerVelocityCurve;                                         // 0x0058 (size: 0x8)
    float m_fDetectionFrequency;                                                      // 0x0060 (size: 0x4)
    float m_fDelayBeforeSleep;                                                        // 0x0064 (size: 0x4)

}; // Size: 0x68

class USCReplayHelper : public UBlueprintFunctionLibrary
{

    bool BPF_IsReplayRecording(const class UObject* _worldContextObject);
    bool BPF_IsReplayPlaying(const class UObject* _worldContextObject);
}; // Size: 0x28

class USCSaveGameComponent : public UActorComponent
{
    FSCSaveGameComponentOnUpdatedFromSave OnUpdatedFromSave;                          // 0x00C0 (size: 0x10)
    void OnUpdatedFromSave();
    FSCSaveGameComponentOnPreSaveLevel OnPreSaveLevel;                                // 0x00D0 (size: 0x10)
    void DynamicMulticast();

}; // Size: 0xE8

class USCSaveObject : public UObject
{
    FString m_SaveFilename;                                                           // 0x0028 (size: 0x10)
    uint32 m_uiVersion;                                                               // 0x0038 (size: 0x4)

    FString BPE_GetSubtitlesInfoForSaveFile();
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile();
    void BPE_FillSaveWithDefaultValues();
}; // Size: 0x40

class USCSaveObjectGameData : public USCSaveObject
{
    FSCGameData m_SCSavedData;                                                        // 0x0040 (size: 0x180)

}; // Size: 0x1C0

class USCSaveObjectPlayerProfile : public USCSaveObject
{
    FSCProfileData m_BaseProfileData;                                                 // 0x0040 (size: 0xC8)

    void BPF_RemoveSave(FString _saveName);
    bool BPF_IsSaveValid(FString _saveName, bool _bTreatBackup);
    FCharacterSaveDescription BPF_FindSaveByFileName(FString _fileName, bool& _bFound);
}; // Size: 0x108

class USCSkeletalMeshVLogDebugDrawComponent : public UActorComponent
{
    TSet<FName> m_SetAllowDebugBones;                                                 // 0x00C0 (size: 0x50)
    bool m_bRecordVLog;                                                               // 0x0110 (size: 0x1)

}; // Size: 0x118

class USCStreamingActorComponent : public UActorComponent
{
    bool m_bRecreatePhysicsForComponents;                                             // 0x0178 (size: 0x1)
    bool m_bRecreatePhysicsOnVolumeEvents;                                            // 0x0179 (size: 0x1)
    bool m_bRecreatePhysicsForComponentsRecursive;                                    // 0x017A (size: 0x1)
    bool m_bRecreatePhysicsOnPooling;                                                 // 0x017B (size: 0x1)
    bool m_bUpdateLevelFromOverlapOnBeginPlay;                                        // 0x017C (size: 0x1)
    FName m_OverlapShapeComponentName;                                                // 0x0180 (size: 0x8)

}; // Size: 0x1C8

class USCStreamingVolumeVisualizerComponent : public USCVolumeVisualizerComponent
{
}; // Size: 0xC0

class USCTraceLibrary : public UBlueprintFunctionLibrary
{

    bool SphereTraceSingle(class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMulti(class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingle(class UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMulti(class UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingle(class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMulti(class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingle(class UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMulti(class UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
}; // Size: 0x28

class USCUserDefinedEnumBinding : public UObject
{
    class UEnum* m_CppEnum;                                                           // 0x0028 (size: 0x8)
    class UEnum* m_BPEnum;                                                            // 0x0030 (size: 0x8)
    TMap<class FName, class FName> m_CppToBPBinding;                                  // 0x0038 (size: 0x50)

}; // Size: 0xD8

class USCUserDefinedEnumHandlerHelper : public UBlueprintFunctionLibrary
{

    void BPF_SetEnumValue(FSCUserDefinedEnumHandler& _enum, uint8 _uiEnumValue);
    uint8 BPF_GetEnumValue(const FSCUserDefinedEnumHandler& _enum, const class UEnum* _enumObject);
    FName BPF_GetEnumNameValue(const FSCUserDefinedEnumHandler& _enum);
    FText BPF_GetEnumDisplayName(const FSCUserDefinedEnumHandler& _enum);
    bool BPF_Equal(const FSCUserDefinedEnumHandler& _enum1, const FSCUserDefinedEnumHandler& _enum2);
    FSCUserDefinedEnumHandler BPF_ConvertEnumToSCUserEnum(class UEnum* _enum, uint8 _value);
}; // Size: 0x28

class USCVideoLightManager : public UObject
{
    TArray<class UTextureRenderTarget2D*> m_RTChain;                                  // 0x0048 (size: 0x10)
    class UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;                 // 0x0060 (size: 0x8)
    class UMaterialInterface* m_SamplerMaterialBase;                                  // 0x0068 (size: 0x8)
    class UCanvas* m_CanvasTarget;                                                    // 0x0070 (size: 0x8)

    void PreCache(class UMediaTexture* MediaTex, class UMediaSource* MediaSource, class UMaterialInterface* SamplerMaterialBase);
    void BPF_ExportCurveFromLight(class ULocalLightComponent* LightComponentToFind, class UCurveLinearColor* curveToFill);
}; // Size: 0xD0

class USCVideoLightManagerDebugger : public UActorComponent
{
    class UTextureRenderTarget2D* m_currentRT;                                        // 0x00C0 (size: 0x8)
    class UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;                 // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class USCVideoPointLightComponent : public UPointLightComponent
{
    FLinearColor m_FilterAdjustment;                                                  // 0x0398 (size: 0x10)
    class UMediaTexture* m_MediaTex;                                                  // 0x03A8 (size: 0x8)
    float m_fLengthInSecond;                                                          // 0x03B0 (size: 0x4)
    class UCurveLinearColor* m_ColourCurve;                                           // 0x03B8 (size: 0x8)

    void OnMediaOpen(FString _openedUrl);
}; // Size: 0x3C0

class USCVideoRectLightComponent : public URectLightComponent
{
    FLinearColor m_FilterAdjustment;                                                  // 0x03A0 (size: 0x10)
    class UMediaTexture* m_MediaTex;                                                  // 0x03B0 (size: 0x8)
    float m_fLengthInSecond;                                                          // 0x03B8 (size: 0x4)
    class UCurveLinearColor* m_ColourCurve;                                           // 0x03C0 (size: 0x8)

    void OnMediaOpen(FString _openedUrl);
}; // Size: 0x3D0

class USCVideoSpotLightComponent : public USpotLightComponent
{
    FLinearColor m_FilterAdjustment;                                                  // 0x03A0 (size: 0x10)
    class UMediaTexture* m_MediaTex;                                                  // 0x03B0 (size: 0x8)
    float m_fLengthInSecond;                                                          // 0x03B8 (size: 0x4)
    class UCurveLinearColor* m_ColourCurve;                                           // 0x03C0 (size: 0x8)

    void OnMediaOpen(FString _openedUrl);
}; // Size: 0x3D0

class USCVisualLoggerHelper : public UBlueprintFunctionLibrary
{

    bool BPF_TakeVisualLoggerSnapshot(FString _fileName, FText& _outError);
    void BPF_SetVisualLoggerPaused(bool _bPaused);
}; // Size: 0x28

class USCVisualLoggerSettings : public UDeveloperSettings
{
    TSet<FName> m_SetAllowDebugBones;                                                 // 0x0038 (size: 0x50)
    TSet<FName> m_SetAllowDebugBonesDrawTransform;                                    // 0x0088 (size: 0x50)
    FKey m_SnapshotKey;                                                               // 0x00D8 (size: 0x18)
    float m_fAIMaxDistance;                                                           // 0x00F0 (size: 0x4)

}; // Size: 0x100

class USCVolumeVisualizerComponent : public UActorComponent
{
}; // Size: 0xC0

class USaveManagerBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_WriteSaveGameToDisk();
    FString BPF_SwapSaveNameToAndFromBackup(FString _currentSaveName);
    void BPF_SetSaveSystemEnabled(bool _bEnabled);
    void BPF_SetNeedLoadFirstSave();
    void BPF_SetNeedLoad(FString _saveName);
    void BPF_SetNeedCreateSaveGame(int32 _iSaveIndex, bool _bWriteToDisk);
    bool BPF_IsUsingDebugSaveLevelInPIE();
    bool BPF_IsUsingDebugGameFlowInPie();
    bool BPF_IsSaveSystemEnabled();
    FTimespan BPF_GetTimePlayedInCurrentSave();
    class USaveManagerDelegateHandler* BPF_GetSaveManagerDelegateHandler();
    FString BPF_GetSaveBackupSuffix();
    int32 BPF_GetPlayerSavesCount(bool _bValidOnly);
    class USCSaveObjectPlayerProfile* BPF_GetCurrentSaveProfile();
    class USCSaveObjectGameData* BPF_GetCurrentSaveGame();
    FString BPF_GenerateSaveNameFromIndex(int32 _iIndex);
    int32 BPF_GenerateIndexFromSaveName(FString _saveName);
}; // Size: 0x28

class USaveManagerDelegateHandler : public UObject
{
    FSaveManagerDelegateHandler_OnSaveStatusChanged m_OnSaveStatusChanged;            // 0x0028 (size: 0x10)
    void SaveChangeStatus(bool _bSaveInProgress, ESaveResult _eSaveResult);
    FSaveManagerDelegateHandler_OnSaveLoaded m_OnSaveLoaded;                          // 0x0038 (size: 0x10)
    void FileLoaded(ELoadResult _eLoadResult);
    FSaveManagerDelegateHandler_OnSaveCreated m_OnSaveCreated;                        // 0x0048 (size: 0x10)
    void FileLoaded(ELoadResult _eLoadResult);
    FSaveManagerDelegateHandler_OnProfileLoaded m_OnProfileLoaded;                    // 0x0058 (size: 0x10)
    void FileLoaded(ELoadResult _eLoadResult);

}; // Size: 0x68

class USaveSettings : public UDeveloperSettings
{
    bool m_bEnabled;                                                                  // 0x0038 (size: 0x1)
    FString m_DefaultSaveName;                                                        // 0x0040 (size: 0x10)
    FString m_DefaultProfileName;                                                     // 0x0050 (size: 0x10)
    FString m_DefaultAudioCulture;                                                    // 0x0060 (size: 0x10)
    FString m_DefaultTextCulture;                                                     // 0x0070 (size: 0x10)
    TSubclassOf<class USCSaveObjectGameData> m_SaveGameObjectType;                    // 0x0080 (size: 0x8)
    TSubclassOf<class USCSaveObjectPlayerProfile> m_SaveProfileObjectType;            // 0x0088 (size: 0x8)
    float m_fMaxBlockingSaveDuration;                                                 // 0x0090 (size: 0x4)

}; // Size: 0x98

class USaveUnlockCondition : public UAchievementUnlockCondition
{
    TWeakObjectPtr<class USCSaveObject> m_saveToCheck;                                // 0x00D0 (size: 0x8)
    bool m_bIsLastSaveCheck;                                                          // 0x00D8 (size: 0x1)

    void BPE_CheckingSave(const class USCSaveObject* _saveToCheck);
}; // Size: 0xE0

#endif
