#ifndef UE4SS_SDK_SCCore_HPP
#define UE4SS_SDK_SCCore_HPP

#include "SCCore_enums.hpp"

class UAchievementUnlockCondition : public UObject
{
    FGameplayTag m_AchievementTag;
    bool m_bUseCustomAchievementTag;
    FAchievementUnlockCondition_OnAchievementUnlockedDyn m_OnAchievementUnlockedDyn;
    void OnAchievementUnlockedDyn(class UAchievementUnlockCondition* _condition, bool _AutoShutdownCondition);
    FAchievementUnlockCondition_OnAchievementConditionFailedDyn m_OnAchievementConditionFailedDyn;
    void OnAchievementConditionFailedDyn(class UAchievementUnlockCondition* _condition);
    FAchievementUnlockCondition_OnCounterChanged m_OnCounterChanged;
    void ObjectiveDynMulticastDelegate(class UAchievementUnlockCondition* Objective);
    TArray<FName> m_MapWhereUnlockAllowed;
    FGameplayTag m_ContentRestrictionTag;
    bool m_bUseTimer;
    float m_fTimerTime;
    bool m_bHasCounter;
    int32 m_iCountToReach;
    bool m_bFailOnCounterReached;
    bool m_bWantAddToRoot;

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
};

class UAsyncTaskTagChanged : public UBlueprintAsyncActionBase
{
    FAsyncTaskTagChangedOnTagBegin OnTagBegin;
    void OnTagChanged();
    FAsyncTaskTagChangedOnTagUpdate OnTagUpdate;
    void OnTagUpdate();
    FAsyncTaskTagChangedOnTagEnd OnTagEnd;
    void OnTagChanged();
    class UAbilitySystemComponent* m_ASC;

    class UAsyncTaskTagChanged* ListenForTagsChange(class UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    void EndTask();
};

class UCheatData : public UObject
{

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
};

class UGameFlowNextMap : public UObject
{
    FGameplayTagContainer m_ConditionGPTags;
    FGameplayTagContainer m_MapOptionsFromTransition;
    EGameFlowTravelType m_eTravelType;
    class UGameFlowNodeMap* m_NextMapNode;
    FGameplayTagContainer m_ReturnConditions;

};

class UGameFlowNodeMap : public UObject
{
    TArray<class UGameFlowNextMap*> m_potentialNextMaps;
    FSoftObjectPath m_Map;
    FName m_MapTag;
    FGameplayTagContainer m_MapOptions;
    bool m_bIsFirstPlayableMap;

};

class UGameFlowController : public UObject
{
};

class UGameFlow : public UObject
{
    class UGameFlowNodeMap* m_currentNode;
    class UGameFlowNodeMap* m_pendingNode;
    FName m_defaultMapTag;
    TMap<class FName, class UGameFlowNodeMap*> m_MapNodes;
    TSoftClassPtr<UGameFlowController> m_Controller;
    UClass* m_ControllerClass;

    void BPF_ResetMapOption();
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    FGameplayTagContainer BPF_GetMapOptions();
    void BPF_AddMapOption(FGameplayTag _optionToAdd);
};

class UGameplayEffectReferencer : public UDataAsset
{
    TArray<class USCGameplayEffect*> m_ListOfAllGameplayEffect;

    void RetrieveAllGameplayEffects();
};

struct FQuatNetSerializedCompressed : public FQuat
{
};

struct FCompressedPoseSnapshot
{
    TArray<uint8> m_BoneFlags;
    TArray<FVector_NetQuantize10> m_Translations;
    TArray<FQuatNetSerializedCompressed> m_Rotations;
    TArray<FVector_NetQuantize10> m_Scales;

};

struct FSCImpostorReplicationInfos
{
    bool m_bMirrorAnimation;
    TSubclassOf<class ASCCharacterImpostor> m_Class;
    TSoftObjectPtr<UAnimSequence> m_ImpostorAnimation;
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    FCompressedPoseSnapshot m_PoseToMimic;
    double m_CheckPointTimeMS;
    FVector m_vLocation;
    FQuat m_qRotation;

};

class UImpostorReplication : public UReplayReplicationComponentBase
{
    TArray<FSCImpostorReplicationInfos> m_Impostors;

    void OnRep_Impostors();
};

class UInheritedDataAsset : public UDataAsset
{
    class UInheritedDataAsset* m_Parent;

};

struct FMirrorAnimStruct
{
    FString m_Description;
    FName m_boneName;
    EMirrorAnimBehavior m_eMirrorBehavior;
    FName m_TwinBoneName;
    ESimpleAxis m_eMirrorRotationAxis;
    EPlaneAxis m_eMirrorTranslationPlaneAxis;
    bool m_bIsSocket;

};

class UMirrorAnimDB : public UDataAsset
{
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;
    TMap<class FName, class FMirrorAnimStruct> m_MirrorAnimStructMap;
    class USkeleton* m_UberSkeleton;

    FName BPF_GetTwinsBoneName(const FName& _boneName);
};

class UPhysicalActorDependencyComponent : public UActorComponent
{
    TArray<TSoftObjectPtr<UPhysicalActorDependencyComponent>> m_BakedListeners;

};

class USaveSettings : public UDeveloperSettings
{
    bool m_bEnabled;
    FString m_DefaultSaveName;
    FString m_DefaultProfileName;
    FString m_DefaultAudioCulture;
    FString m_DefaultTextCulture;
    TSubclassOf<class USCSaveObjectGameData> m_SaveGameObjectType;
    TSubclassOf<class USCSaveObjectPlayerProfile> m_SaveProfileObjectType;
    float m_fMaxBlockingSaveDuration;

};

class USaveUnlockCondition : public UAchievementUnlockCondition
{
    TWeakObjectPtr<class USCSaveObject> m_saveToCheck;
    bool m_bIsLastSaveCheck;

    void BPE_CheckingSave(const class USCSaveObject* _saveToCheck);
};

class ASCActor : public AActor
{
    bool m_bIsStreamable;
    bool m_bIsPooled;

};

class USCActorHelpers : public UBlueprintFunctionLibrary
{

    class AActor* BPF_GetClosestActor(class AActor* _target, TArray<class AActor*> _actors);
};

struct FSCTypedValue
{
};

class USCAiAction : public UObject
{
    class UBehaviorTree* m_BehaviorTreeAsset;
    EAIActionScheduleCondition m_eScheduleCondition;

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
    void BPF_CancelPendingActions(class USCAIComponent* _aiComponent);
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
};

class USCAiNullAction : public USCAiAction
{
};

class USCAIActionBTService : public UBTService
{
    FGameplayTag m_GameplayTag;

};

class USCBTTaskNode : public UBTTaskNode
{
};

class USCAIActionFinishBTTask : public USCBTTaskNode
{
    bool m_bSucceeded;
    FString m_Message;

};

class ISCAIActionMemoryEntryHandler : public IInterface
{
};

class USCAIActionRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
};

class USCAIComponent : public UActorComponent
{
};

class USCAIDataProvider_QueryActionParams : public UAIDataProvider_QueryParams
{
    bool m_bFetchOnce;
    FGameplayTag m_ActionInjectionTag;

};

class USCBTDecorator : public UBTDecorator
{
    bool m_bEvaluateConditionOnTick;

};

class USCAIExecutePendingActionDecorator : public USCBTDecorator
{
    FGameplayTag m_GameplayTag;

};

class USCAINotifyActionBTTask : public USCBTTaskNode
{
    FName m_EventName;

};

class USCAIPerceptionSystem : public UAIPerceptionSystem
{
};

class USCAISystem : public UAISystem
{
};

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
};

class USCAnimInstanceBase : public UAnimInstance
{
    bool m_bIsReplayScrubSnapshotCompatible;
    bool m_bAnimInstanceUpdateEnabled;

    void OnRep_AnimInstanceUpdateEnable();
};

struct FDynamicBlendSettings
{
    EAlphaBlendOption m_eBlendOption;
    float m_fDuration;
    class UCurveFloat* m_customCurve;

};

class USCAnimInstance : public USCAnimInstanceBase
{
    float m_fCinematicOverallWeight;
    float m_fCinematicLayerTypesCursor;
    float m_fPreviewCinematicLayerTypesCursor;
    class UMirrorAnimDB* m_MirrorAnimDB;
    class UPoseAsset* m_CachedCurrentPoseAsset;
    bool m_bIsInCinematic;
    FDynamicBlendSettings m_LocoToActionBlendForRep;
    FDynamicBlendSettings m_ActionToActionBlendForRep;
    FDynamicBlendSettings m_ActionToLocoBlendForRep;

    void OnUpdateDelegate__DelegateSignature(float _fDt);
    FTransform GetSavedTransform(FName _savedBone);
    bool BPF_IsInPreview();
    class UPoseAsset* BPF_GetCurrentPoseAsset();
    void BPF_BlendCinematicLayer(ECinematicLayerTypes _eLayerToBlendOut, float _fTargettedValue, float _fDuration, ESCBlendType _eBlendType, class UCurveFloat* _blendCurve);
    void BPE_UpdateForVLog();
    void BPE_UpdateAnimationInPreview(float _fDt);
    void BPE_OnCinematicBlendOut();
    void BPE_OnCinematicBlendedOut();
};

class USCAttributeSet : public UAttributeSet
{
};

class USCBaseDemoNetDriver : public UDemoNetDriver
{
};

struct FSCGameFlowData
{
    ESCGameInstanceState m_eInitialState;
    FSoftObjectPath m_InitialMap;

};

class USCBaseGameSettings : public UDeveloperSettings
{
    bool m_bHasCheats;
    FGameplayTagContainer m_AllowedContent;
    FSCGameFlowData m_GameFlow;
    TSoftObjectPtr<UGameFlow> m_playingGameFlow;
    TMap<class FGameplayTag, class TSoftObjectPtr<UGameFlow>> m_ContenRestrictedGameFlows;

    FGameplayTagContainer BPF_GetAllowedContentGameplayTagContainer();
};

class ASCBasePlayerController : public APlayerController
{
};

class USCBaseUserWidget : public UUserWidget
{

    void BPE_OnSynchronizeProperties();
    void BPE_OnCinematicStarted(const class USCLevelSequence* _inSequence);
    void BPE_OnCinematicFinished(const class USCLevelSequence* _inSequence);
};

class USCBehaviorTreeComponent : public UBehaviorTreeComponent
{
    TMap<class FGameplayTag, class UBehaviorTree*> m_DynamicSubtrees;

};

class ASCBlenderManager : public AActor
{
};

class USCBlueprintLog : public UBlueprintFunctionLibrary
{

    void BPFLogCategory(FString _text, FName _categoryName, DisplayLevel _eDisplayLevel);
    void BPFLog(const class UObject* _targetSelf, FString _log, DisplayLevel _eDisplayLevel, bool _bViewportDisplay, FLinearColor _viewportColor);
    void BPF_VisualLogWithSpecificOwner(class UObject* _owner, FString _category, DisplayLevel _eVerbosity, FString _inString);
    void BPF_VisualLogBox(class UObject* _owner, FString _category, DisplayLevel _eVerbosity, const FVector& _position, float _size, const FColor& _color, FString _inString);
    void BPF_VisualLog(class UObject* _worldContextObject, FString _category, DisplayLevel _eVerbosity, FString _inString);
};

class USCBTTaskRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic
{
};

class USCCameraShake : public UMatineeCameraShake
{
};

class USCCaptureComponent2D : public USceneCaptureComponent2D
{

    bool BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation);
    bool BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas);
};

class UCardinalPointsHelper : public UBlueprintFunctionLibrary
{

    ESCCardinalPoints BPF_Mirror(ESCCardinalPoints _eCardinalPoint, bool _bMirror, bool _bIgnoreVertical);
    bool BPF_IsNone(ESCCardinalPoints _eCardinalPoint);
    ESCCardinalPoints BPF_GetCardinalPointFromAngle(float _fAngle, float _fEastWestTolerance);
};

class ASCCharacter : public ACharacter
{
    FSCCharacterOnSpawnedImpostorDynamic OnSpawnedImpostorDynamic;
    void ImpostorDelegate(class ASCCharacterImpostor* ImpostorActor);
    FName m_ImpostorName;
    bool m_bCanUnspawn;
    bool m_bCanSpawnImpostor;
    bool m_bIsPooled;
    bool m_bPooledActorActive;
    TSubclassOf<class USCCharacterPoseData> m_PoseDataClass;
    bool m_bDontCreateClotOnLowerEndPlatforms;
    ECharacterGender m_eGender;

    void ServerSetGender(ECharacterGender _eGender);
    void OnRep_SetGender();
    void OnRep_PooledActorActive();
    void ImpostorDelegate__DelegateSignature(class ASCCharacterImpostor* ImpostorActor);
    void BPF_Unspawn(class UAnimSequence* _animation, bool _bMirror, bool _bInstantUnspawn);
    void BPF_SetMesh(class USkeletalMesh* _newMesh, bool _bSwapOnlyRendering);
    void BPF_SetGender(ECharacterGender _eGender);
    void BPF_SetCollisionEnabled(bool _bEnabled, bool _bKeepStaticMeshCollisions);
    ETextGender BPF_GetTextGender();
    FName BPF_GetImpostorName();
    ECharacterGender BPF_GetGender();
    void BPF_AddObjectToKeepAttachedOnImpostor(class AActor* _actor, EAttachmentRule _eAttachmentRules, FName _boneName);
    void BPE_SetGender(ECharacterGender _eGender);
};

class USCCharacterHelpers : public UBlueprintFunctionLibrary
{

    bool BPF_TryGetRootBoneTransform(const class ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace);
    bool BPF_TryGetPelvisBoneTransform(const class ACharacter* _character, FTransform& _outPevlisTransform);
    FVector BPF_GetFloorNormal(const class ACharacter* _character);
};

class ASCCharacterImpostor : public ASCActor
{
    EImposterSpawnTransformType m_SpawnTransformType;
    class USCRagdollConfigDB* m_RagdollConfig;
    class USkeletalMeshComponentBudgeted* m_Mesh;
    class USCStreamingActorComponent* m_StreamingComponent;
    class UAnimInstance* m_AnimInstance;

    void BPE_MimicCharacter(class ASCCharacter* _characterToMimic);
};

class USCCharacterImpostorAnimInstance : public USCAnimInstance
{
    bool m_bHasAnimation;
    class UAnimSequence* m_animation;
    bool m_bMirrorAnimation;
    FPoseSnapshot m_PoseSnapshotToMimic;
    FCompressedPoseSnapshot m_CompressedPoseSnapshotToMimic;

    void OnRep_CompressedPoseSnapshotToMimic();
};

struct FSCPoseAssetSelection
{
    FSmartName m_PoseName;
    float m_fWeight;

};

struct FSCAnimPoseArray
{
    TArray<FSCPoseAssetSelection> m_Poses;

};

struct FSCAnimPoseLooped
{
    FSCPoseAssetSelection m_Pose;
    class UCurveFloat* m_WeightCurve;
    FFloatRange m_RandomDelay;

};

class USCCharacterPoseData : public UObject
{
    TMap<class FName, class FSCAnimPoseArray> m_PosesPerState;
    TArray<FSCAnimPoseLooped> m_LoopedPoses;
    float m_fBlendBetweenStatesDuration;
    class UPoseAsset* m_PoseAsset;

};

class USCCheatManagerSettings : public UObject
{
    TMap<class FGameplayTag, class TSubclassOf<UCheatData>> m_CheatData;

    class UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag);
    bool BPE_IsCheatLegit(const FGameplayTag& _cheatTag);
};

class UCheatManagerBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_UnapplyCheats();
    void BPF_UnapplyCheat(FGameplayTag _cheatTag);
    bool BPF_IsCheatApplied(FGameplayTag _cheatToFind);
    bool BPF_IsCheatActivated(FGameplayTag _cheatToFind);
    bool BPF_HasAppliedCheats();
    class USCCheatManagerSettings* BPF_GetCheatDefaultSettings();
    FString BPF_GetCheatArgument(FGameplayTag _cheatWanted);
    FGameplayTagContainer BPF_GetAppliedCheats();
    FGameplayTagContainer BPF_GetActivatedCheats();
    void BPF_DeactivateCheats(FGameplayTagContainer _cheatsToDeactivate);
    void BPF_DeactivateCheat(FGameplayTag _cheatToDeactivate);
    void BPF_DeactivateAllCheats();
    bool BPF_AreCheatsAllowed();
    void BPF_ApplyCheats(bool _bForceApply);
    void BPF_ApplyCheat(FGameplayTag _cheatTag);
    void BPF_ActivateCheats(FGameplayTagContainer _cheatsToActivate, FString _argument);
    void BPF_ActivateCheat(FGameplayTag _cheatToActivate, FString _argument);
};

struct FSCCollisionResponseTemplate
{
    TEnumAsByte<ECollisionEnabled::Type> m_eCollisionEnabled;
    TEnumAsByte<EObjectTypeQuery> m_eObjectType;
    TEnumAsByte<ECollisionChannel> m_eCollisionType;
    FCollisionResponseContainer m_ResponseToChannels;

};

struct FSCCollisionResponsePreset
{
    bool m_bUseProfile;
    bool m_bUseDefaultProfile;
    FCollisionProfileName m_Profile;
    FSCCollisionResponseTemplate m_Template;

};

struct FSCCollisionProfileDescription
{
    FName m_Name;
    FSCCollisionResponseTemplate m_Template;

};

struct FSCChannelCollisionResponse
{
    TEnumAsByte<ECollisionChannel> m_eChannel;
    TEnumAsByte<ECollisionResponse> m_eCollisionResponse;

};

struct FSCCollisionResponseBuilder
{
    TEnumAsByte<ECollisionResponse> m_eDefaultCollisionResponse;
    TArray<FSCChannelCollisionResponse> m_eChannelResponses;

};

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
};

class USCCollisionSettings : public UDeveloperSettings
{
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    FCollisionProfileName m_CharacterNoCollisionProfile;
    FCollisionProfileName m_CharacterPhysicsProfile;
    FCollisionProfileName m_CharacterRagdollProfile;
    FCollisionProfileName m_CharacterHitCapsuleProfile;
    FCollisionProfileName m_TriggerDefaultProfile;
    FCollisionProfileName m_TriggerPawnProfile;
    FCollisionProfileName m_TriggerLocalPawnProfile;
    FCollisionProfileName m_LDOnlyPawnProfile;
    FCollisionProfileName m_LDOnlyModelProfile;
    FCollisionProfileName m_ReplayPawnCapsuleProfile;
    FCollisionProfileName m_ReplayPawnMeshProfile;
    FCollisionProfileName m_ReplayPropsDestroyed;
    FCollisionProfileName m_ReplayPropsProfile;
    FCollisionProfileName m_NoCollisionTraceMeshProfile;
    float m_EnvCollisionRetrieveSphereRadius;
    float m_EnvCollisionRetrieveSweepDist;
    TEnumAsByte<ECollisionChannel> m_eAIColChannel;
    TEnumAsByte<ECollisionChannel> m_eCapsuleLocalPawnChannel;
    TEnumAsByte<ECollisionChannel> m_eHitTraceChannel;
    TEnumAsByte<ECollisionChannel> m_eLDCollChannel;

};

class USCComponentHelpers : public UBlueprintFunctionLibrary
{
};

class USCContentRestrictionBlueprintHelper : public UBlueprintFunctionLibrary
{

    bool BPF_IsContentAvailable(FGameplayTag _wantedContentType);
};

struct FSCVolumeClusterMaterialsPath
{
    FSoftObjectPath m_RootMaterial;
    FSoftObjectPath m_ChildrenMaterial;

};

struct FActorsPoolConfig
{
    FName m_Name;
    TSoftClassPtr<AActor> m_Class;
    int32 m_iSize;

};

struct FSCErrorPopup
{
    FText m_TextMessage;
    FText m_TextConfirm;
    FText m_TextCancel;

};

class USCCoreSettings : public UDeveloperSettings
{
    TSoftClassPtr<USCBaseGameSettings> m_GameSettingsClass;
    TSoftClassPtr<USCInGameAchievementsManagerSettings> m_achievementsSettings;
    TSoftClassPtr<USCCheatManagerSettings> m_cheatSettings;
    FSCVolumeClusterMaterialsPath m_DefaultVolumeVisualizerMaterial;
    TMap<class FName, class FSCVolumeClusterMaterialsPath> m_VolumeVisualizerMaterialsMap;
    TSubclassOf<class ASCSequenceAnchor> m_LevelSequenceAnchorClass;
    TSoftObjectPtr<USCLevelSequenceDirectorData> m_LevelSequenceDefaultDirectorData;
    float m_fLevelSequenceForcedClothSimulationDuration;
    TArray<FActorsPoolConfig> m_DefaultActorPools;
    FGameplayTag m_AiActionBehaviorTag;
    FGameplayTag m_AiAttackActionBehaviorTag;
    TArray<FGameplayTag> m_AiAttackSubActionBehaviorTags;
    TMap<class FName, class TSubclassOf<USCAiAction>> m_DevDefinedAiActionsMap;
    TArray<TSoftClassPtr<AActor>> m_StreamingDebugTrackedActors;
    bool m_bSaveStreamingActors;
    int32 m_iMaxActorsAllowedPerLevelWithTransform;
    bool m_bPlatformForceClassicTravel;
    TSoftClassPtr<ASCCharacterImpostor> m_DefaultCharacterImpostorClass;
    float m_fDelayBeforeImpostorCopyPose;
    float m_fDelayBeforeShowImpostor;
    bool m_bIsLowEndPlatform;
    TMap<class FString, class FText> m_IsoCultureToDisplayName;
    float m_fDefaultScreenRatio;
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenAboveDefaultRatio;
    TSoftObjectPtr<UCurveFloat> m_HudOffsetFromBlackBarWhenBelowDefaultRatio;
    FSCErrorPopup m_GenericErrorPopupTexts;
    FSCErrorPopup m_GenericErrorTexts;
    bool m_bPlatformRequireAccountPickup;
    float m_fMaxAICharacterCorpseTimeout;
    int32 m_iMaxAICharacterCorpse;
    int32 m_iMaxAIImpostors;
    bool m_bActorPoolsEnabled;

    class UCurveFloat* BPF_GetHUDOffsetFromBlackBarRatioCurve();
};

class USCCoreTools : public UBlueprintFunctionLibrary
{
};

class USCCoreUserSettings : public UDeveloperSettings
{
    bool m_bEnableGameFlowInPIE;
    bool m_bEnableSaveLevelInPIE;
    bool m_bAutoSkipCutscenes;
    bool m_bEnableVolumeSolidDraw;
    bool m_bPauseOnAiNextAction;
    bool m_bListPoolableActorsInOutliner;
    bool m_bAutoGenerateActorPools;
    bool m_bDebugDisplayAllPools;
    ESCDebugActorBoxType m_eDebugActorSelectionBoxType;
    FDirectoryPath m_PhonemeDictionaryPath;

};

class ISCDebugNamedOject : public IInterface
{

    void SetDebugName(FName _name);
    void SetDebugColor(const FColor& _color);
    FName GetDebugName();
    FColor GetDebugColor();
};

class ASCDecalActor : public ADecalActor
{
    bool m_bIsPooled;

};

class USCDelegate : public UObject
{
};

class USCDynamicTextureMask : public UActorComponent
{
    bool m_bEnablePositionBaking;
    EDynamicTextureMask_PositionBakingType m_ePositionBakingTypeEnum;
    EDynamicTextureMask_DrawType m_eDrawType;
    EDynamicTextureMask_DrawShape m_eDrawShape;
    class ASCPositionBakeSceneCapture* m_PositionBakerActor;
    class UDynamicTextureMaskDB* m_DynamicTextureMaskDB;
    TEnumAsByte<ETextureRenderTargetFormat> m_eTextureType;
    int32 m_iBakedTextureResolution;
    int32 m_iMaskTextureResolution;
    class UTextureRenderTarget2D* m_BakedPositionTextureTarget;
    class UTexture* m_StaticBakedPositionTexture;
    class UTextureRenderTarget2D* m_MaskRenderTarget;
    bool m_bIsBaked;
    bool m_bIsPlane;
    TArray<int32> m_MaterialIDsToBake;
    class UMeshComponent* m_MeshToBake;
    int32 m_iUVChannel;
    int32 m_iDilationSteps;
    FVector m_vBoundsMin;
    FVector m_vBoundsMax;
    FName m_BakedPositionTextureParameterName;
    FName m_HitPositionParameterName;
    FName m_HitSizeParameterName;
    FName m_HitFadeParameterName;
    FName m_AxisVParameterName;
    FName m_AxisUParameterName;
    FName m_HitMeshBoundsMinParameterName;
    FName m_HitMeshBoundsMaxParameterName;
    FName m_ChannelUVParameterName;
    FName m_MaskParameterName;
    FName m_MarkColorParameterName;
    FName m_TextureToProjectParameterName;
    FName m_TextureToCopyParameterName;
    FName m_TextureToDilateParameterName;
    FName m_DilationStepsParameterName;
    FName m_DilationTextureSizeParameterName;
    FName m_IsPlaneParameterName;
    class UMaterialInstanceDynamic* m_DilateMID;
    class UMaterialInstanceDynamic* m_CopyMID;
    class UMaterialInstanceDynamic* m_BakedPositionHitDrawerInstanceDynamic;

    void SetupLocalBoundsOffline();
    void CreatePositionBakingTextureTarget();
    void CreateMaskTextureTarget();
    void CreateBothTexturesTarget();
    bool BPF_DrawOnMaskOverride(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, class UTexture* _TextureToProject, FLinearColor _color, EDynamicTextureMask_DrawShape _eDrawShape);
    bool BPF_DrawOnMask(FVector _vWorldPos, float _fHitSize, float _fHitFade, FVector _vAxisV, FVector _vAxisU, class UTexture* _TextureToProject, FLinearColor _color);
    bool BPF_BakeSelfPositionRuntime();
};

class UDynamicTextureMaskDB : public UDataAsset
{
    class ASCPositionBakeSceneCapture* m_PositionBakingActor;
    class UMaterialInterface* m_BakedPositionHitDrawer_SimpleStaticMesh;
    class UMaterialInterface* m_BakedPositionHitDrawer_ComplexSkeletalMesh;
    class UMaterialInterface* m_BakedPositionHitDrawer_SimpleSkeletalMesh;
    class UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Standard;
    class UMaterialInterface* m_Drawer_TexProj_OpaqueAlpha_Atlas;
    class UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Standard;
    class UMaterialInterface* m_Drawer_TexProj_OpaqueColor_Atlas;
    class UMaterialInterface* m_Drawer_TexProj_Additive_Standard;
    class UMaterialInterface* m_Drawer_TexProj_Additive_Atlas;
    class UMaterialInterface* m_Drawer_SphereMask_Additive;
    class UMaterialInterface* m_Drawer_SphereMask_OpaqueAlpha;
    class UMaterialInterface* m_Drawer_SphereMask_OpaqueColor;
    class UMaterialInterface* m_Drawer_CapsuleMask_Additive;
    class UMaterialInterface* m_Drawer_CapsuleMask_OpaqueAlpha;
    class UMaterialInterface* m_Drawer_CapsuleMask_OpaqueColor;
    class UMaterialInterface* m_TextureDilation;
    class UMaterialInterface* M_TextureCopy;
    class UTextureRenderTarget2D* m_ProxyDilationTexture;

};

struct FSCUserDefinedEnumHandler
{
    class UEnum* m_Enum;
    int32 m_iDefaultEnumValue;
    FName m_Value;

};

struct FSCTechAdviserEnumHandler : public FSCUserDefinedEnumHandler
{
};

struct FSCDataAdviserEnumHandler : public FSCUserDefinedEnumHandler
{
};

struct FAdvisersStruct
{
    FSCTechAdviserEnumHandler m_techAdviser;
    FSCDataAdviserEnumHandler m_dataAdviser;

};

class USCEnsureDataSettings : public UDeveloperSettings
{
    FSoftObjectPath m_Enums;
    FText m_adviserTooltipText;
    FText m_buildLog;
    TMap<class FName, class FAdvisersStruct> m_ensureCategoryAdvisers;
    bool m_bUseNameInsteadOfPath;
    bool m_bRegroupUnderOneCategory;
    FName m_mainCategoryName;

};

class USCEnvQueryManager : public UEnvQueryManager
{
};

class USCEnvQueryTest : public UEnvQueryTest
{
};

class USCEnvQueryTest_Distance : public USCEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    TSubclassOf<class UEnvQueryContext> m_FromContext;
    TSubclassOf<class UEnvQueryContext> m_ToContext;

};

class USCEnvQueryTest_Trace : public USCEnvQueryTest
{
    FEnvTraceData m_TraceData;
    bool m_bCustomCollisionResponse;
    FCollisionProfileName m_CollisionProfile;
    FCollisionResponseContainer m_CollisionSettings;
    TSubclassOf<class UEnvQueryContext> m_FromContext;
    TSubclassOf<class UEnvQueryContext> m_ToContext;
    FAIDataProviderFloatValue m_FromZOffset;
    FAIDataProviderFloatValue m_ToZOffset;
    bool m_bIgnoreQuerier;

};

class USCErrorHelpers : public UBlueprintFunctionLibrary
{

    void BPF_ShowMessageLog(ESCMessageLogSeverity _eSeverity, FString _textContent, FName _categoryName, bool _bNotify);
    void BPF_Ensure(bool _bValue, FString _message);
};

struct FSCFootIkData
{
    FName m_footIkBoneName;
    FName m_thighBoneName;
    FString m_suffix;
    FName m_markerName;
    FVector m_vDampedWorldLocationOffset;
    bool m_bApplyIkToFoot;
    FRotator m_dampedWorldRotationOffset;
    float m_fRotationAlpha;

};

struct FFootIkDamping
{
    bool m_bUseLerp;
    float m_fDefaultValue;
    float m_fPlantedFootValue;
    FRuntimeFloatCurve m_curveByRelFootPos;

};

class USCFootIkAnimInstance : public USCAnimInstance
{
    FSCFootIkData m_leftFootStructure;
    FSCFootIkData m_rightFootStructure;
    float m_fMaxSlopeAngle;
    float m_fThighToFootDistDiff;
    FName m_syncGroup;
    FString m_footName;
    FString m_thighName;
    FString m_ikSuffix;
    bool m_bInvalidateLastGroundOnMarkerHit;
    float m_fLerpToSpringMultiplier;
    FRuntimeFloatCurve m_alphaCurveByRelFootPos;
    TArray<TEnumAsByte<EMovementMode>> m_eHandledMovementModes;
    bool m_bIgnoreLevelDesignCollisions;
    FFootIkDamping m_locationDamping;
    FFootIkDamping m_rotationDamping;
    float m_fRawToMarkerAlphaDuration;
    float m_fHipsAttenuation;
    bool m_bHipsUseLerp;
    float m_fHipsDampingSpeed;
    TArray<class TSubclassOf<USCFootIkService>> m_Services;
    float m_fMaxHipsHeightDisplacement;
    FVector m_vHipsDisplacment;
    bool m_bIsHipsDisplacementValid;
    bool m_bIsFootIkEnabled;
    FVector m_vLastComponentVelocity;

};

class USCFootIkService : public UObject
{
};

class USCFootIkRaycast : public USCFootIkService
{
    float m_fTraceUpLength;
    float m_fTraceDownLength;
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;

    bool DoRaycast(FHitResult& _outHitResult, class USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd);
};

class USCFootIkCliffRaycast : public USCFootIkRaycast
{
    float m_fCliffTraceOffset;
    float m_fCliffOffset;

};

class UFootIkDataStatics : public UBlueprintFunctionLibrary
{

    bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
};

class USCFootIkPlanting : public USCFootIkService
{
    bool m_bIgnore2DPlane;

};

class USCFootIkPredictionByVelocity : public USCFootIkService
{
    FFloatRange m_activationRange;
    float m_fMinRequiredVelocity;
    bool m_bUseLastGroundNormal;

};

class UDelegateHolder : public UObject
{

    void SytemCompleted(class UParticleSystemComponent* Component);
};

class USCGameInstance : public UGameInstance
{
    bool m_bEnableDevMode;
    TArray<class UObject*> m_ObjectToLoadAtBegining;
    class UCurveFloat* m_HudOffsetFromBlackBarWhenAboveDefaultRatioRuntime;
    class UCurveFloat* m_HudOffsetFromBlackBarWhenBelowDefaultRatioRuntime;

    void UnlockInGameAchievement(const FGameplayTag& _achievementToUnlock);
    void UnlockAllInGameAchievements();
    void TriggerPGOWriteFile();
    void ResetAllInGameAchievements();
    void LowPerformanceModeChangedDelegate__DelegateSignature(bool bLowPerformanceMode);
    void LowPerformanceModeChanged__DelegateSignature(bool bLowPerformanceMode);
    void LockInGameAchievement(const FGameplayTag& _achievementToLock);
    void BPF_BindToLowPerformanceChanged(FBPF_BindToLowPerformanceChangedDelegate Delegate);
};

class ASCGameMode : public AGameMode
{
    TArray<class UGameplayEffect*> m_PlayerGameModeGameplayEffects;
    bool m_bIsUsingPools;

};

class USCGameplayEffect : public UGameplayEffect
{
};

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
};

class ASCGameState : public AGameState
{
};

class UBlendProfilePayload : public UObject
{
};

struct FSCMathCondition
{
    ESCMathConditionValueType m_eValueType;
    int32 m_iComparedValue;
    float m_fComparedValue;
    ESCMathCondition m_eCondition;

};

struct FSCMathConditionGroup
{
    ESCMathConditionValueType m_eValueType;
    int32 m_iDepth;
    ESCMathConditionExpression m_eType;
    TArray<int32> m_SubGroupIndexes;
    TArray<FSCMathCondition> m_Conditions;

};

struct FSCMathExpression
{
    ESCMathConditionValueType m_eValueType;
    TArray<FSCMathConditionGroup> m_ConditionGroups;
    int32 m_iMaxDepth;

};

struct FSCMathExpressionInteger : public FSCMathExpression
{
};

struct FSCMathExpressionFloat : public FSCMathExpression
{
};

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
};

class ASCHUD : public AHUD
{
};

struct FAchievementUnlockConditionStruct
{
    FText m_NotificationTitle;
    FText m_ObjectDescription;
    FText m_UnlockDescription;
    FGameplayTagQuery m_ConditionQuery;
    FGameplayTag m_UnlockObjectType;
    bool m_bShowNotificationOnUnlocking;

};

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
};

struct FAchievementUnlockConditionClassInstance
{
    TSubclassOf<class UAchievementUnlockCondition> m_DefaultClassObject;
    class UAchievementUnlockCondition* m_Instance;

};

struct FAchievementUnlockConditionSet
{
    FString m_EditorTitle;
    TArray<FAchievementUnlockConditionClassInstance> m_AchievementSet;

};

struct FAchievementUnlockObjectSet
{
    FString m_EditorTitle;
    TMap<class FGameplayTag, class FAchievementUnlockConditionStruct> m_Unlocks;

};

class USCInGameAchievementsManagerSettings : public UObject
{
    TArray<FAchievementUnlockConditionSet> m_InGameAchievements;
    TArray<FAchievementUnlockConditionSet> m_OnInitAchievements;
    TArray<FAchievementUnlockConditionSet> m_OnEntitlementQueryCompletedAchievements;
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedAchievements;
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedRetroCompatibility;
    FGameplayTagContainer m_NewlyUnlockedCategories;
    TArray<FAchievementUnlockObjectSet> m_ObjectUnlocks;
    FSCInGameAchievementsManagerSettings_OnObjectUnlocked m_OnObjectUnlocked;
    void OnObjectUnlockedDynamic(FGameplayTag _objectUnlockedTag);
    FSCInGameAchievementsManagerSettings_OnSaveCheckFinished m_OnSaveCheckFinished;
    void OnSaveCheckFinished();

    void OnSaveCheckFinished__DelegateSignature();
    void OnObjectUnlockedDynamic__DelegateSignature(FGameplayTag _objectUnlockedTag);
    FAchievementUnlockConditionStruct BPF_GetUnlockConditionStructFromTag(const FGameplayTag& _ObjectTag);
    class UAchievementUnlockCondition* BPF_GetUnlockConditionInstanceFromTag(FGameplayTag _wantedUnlockCondition);
    TArray<class UAchievementUnlockCondition*> BPF_GetAllUnlockConditionInstances();
    TArray<FAchievementUnlockConditionStruct> BPF_GetAllObjectUnlock();
};

class ASCLevelScriptActor : public ALevelScriptActor
{
    bool m_bContainsSaveData;
    class UDataTable* m_ContextualDialogLines;
    class UDataTable* m_WorldConversationSegments;

    void BPE_OnUpdatedFromSave();
    void BPE_OnLevelSequenceSkipped(class ALevelSequenceActor* _levelSequenceActor);
};

class USCLevelSequence : public ULevelSequenceDirector
{
    class USCLevelSequenceDirectorData* m_DataAsset;
    class ACameraActor* m_ActorCamera;
    class ASCSequenceAnchor* m_ActorAnchor;

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
};

class UAssociatedActorGetter : public UObject
{

    class AActor* BPE_GetAssociatedActor(class AActor* _inActor);
};

class UNameHandler : public UObject
{

    FString BPE_GetNameFromIndex(int32 _iIndex);
    int32 BPE_GetIndexFromName(const FString& _inName);
};

struct FSequenceRoleTypeDescription
{
    TSubclassOf<class UNameHandler> m_NameHandler;
    TMap<class FGameplayTag, class TSubclassOf<UAssociatedActorGetter>> m_RoleGettersMap;

};

struct FMaterialParameterBlendSettings
{
    class UMaterialParameterCollection* m_MPC;
    FName m_ParameterName;
    bool m_bInversed;

};

class USCLevelSequenceDirectorData : public UInheritedDataAsset
{
    TArray<class USCLevelSequenceRoleData*> m_Roles;
    TMap<class FGameplayTag, class FSequenceRoleTypeDescription> m_RoleTypesMap;
    float m_fBlendCharacterPositionTime;
    float m_fEaseInAnimationTime;
    float m_fEaseOutAnimationTime;
    float m_fEaseInCamera;
    float m_fEaseOutCamera;
    bool m_bCanSkip;
    bool m_bAnimateCameraSensor;
    bool m_bConstrainAspectRatio;
    bool m_bCutReplayDuringSequence;
    bool m_bIsCameraEditableInReplay;
    ECinematicLayerTypes m_eCinematicLayerType;
    TArray<FMaterialParameterBlendSettings> m_MaterialParameterBlendSettingsList;

};

struct FSCSequenceParameters
{
    class ULevelSequence* m_Sequence;
    FTransform m_Transform;
    bool m_bAutoPlay;
    bool m_bDestroyAtEnd;
    bool m_bWantPushInputContext;

};

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
};

class USCLevelSequenceRoleData : public UInheritedDataAsset
{
    FName m_Name;
    FName m_AnchorBoneName;

};

class USCLevelStreamingManagerHelpers : public UBlueprintFunctionLibrary
{

    void BPF_SetStreamingVolumesEnabled(bool _bEnabled);
    void BPF_BlockLoadingsOnNextUpdate();
};

struct FVolumeBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;

};

class ASCVolume : public AVolume
{
    TArray<class ASCVolume*> m_ChildrenVolumes;
    FVolumeBounds m_CachedVolumeBounds;
    class ASCVolume* m_ParentVolume;

    void InternalOnComponentStartOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void InternalOnComponentEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    FVolumeBounds GetVolumeBounds();
    void CacheBounds();
};

class ASCPlayerVolumeNoPhysics : public ASCVolume
{
    bool m_bTestOverlap;
    float m_fFullyInsideTolerances;

};

struct FSCStreamingVolumeDependency
{
    class ASCLevelStreamingVolume* m_Volume;
    bool m_bRecursive;

};

struct FSCStreamingVolumeDependencies
{
    TArray<class ASCLevelStreamingVolume*> m_Volumes;
    TArray<FSCStreamingVolumeDependency> m_VolumeDependencies;

};

class ASCLevelStreamingVolume : public ASCPlayerVolumeNoPhysics
{
    bool m_bEnabled;
    FName m_LevelName;
    TArray<FName> m_LevelNames;
    FSCStreamingVolumeDependencies m_VolumeDependencies;

};

class USCLipSyncTools : public UBlueprintFunctionLibrary
{
};

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
};

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
};

class USCNotifyStateDisableLoopedPoses : public UAnimNotifyState
{
};

class ASCPlayerVolume : public ASCVolume
{
    FSCPlayerVolumeOnPlayerBeginOverlap OnPlayerBeginOverlap;
    void VolumeBeginOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    FSCPlayerVolumeOnPlayerEndOverlap OnPlayerEndOverlap;
    void VolumeEndOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};

class ISCPoolableActor : public IInterface
{

    void OnPoolablePreUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePostInitializeComponents();
};

class ISCPoolableActorComponent : public IInterface
{

    void OnPoolableOwnerUninitializeComponents();
    void OnPoolableOwnerInitializeComponents();
};

struct FSCPoolableActorsContainerPoolEntry
{
    FName m_Name;
    TSubclassOf<class AActor> m_Class;
    TArray<class AActor*> m_Actors;

};

class ASCPoolableActorsContainer : public AActor
{
    TArray<FSCPoolableActorsContainerPoolEntry> m_Pools;

    int32 BPF_GetActorsCount(TSubclassOf<class AActor> _class);
    class ASCCharacterImpostor* BPF_AddCharacterImpostor(FName _poolName, bool _bRenameWithPoolName);
    void BPF_AddActors(TSubclassOf<class AActor> _class, int32 _iCount, TArray<class AActor*>& _outCreatedActors, FName _poolName);
    class AActor* BPF_AddActor(TSubclassOf<class AActor> _class, FName _poolName, bool _bRenameWithPoolName);
};

class ISCPoolableActorSpawner : public IInterface
{

    void BPE_OnGeneratePoolActors(class ASCPoolableActorsContainer* _container);
};

class USCPoolHelpers : public UBlueprintFunctionLibrary
{

    class AActor* BPF_SpawnPoolableActor(class AActor* _worldCtxt, UClass* _class, const FTransform& _transform, FName _poolName, bool _bGrow, bool _bFailIfNoPoolFound);
    bool BPF_IsActorValid(const class AActor* _actor);
    bool BPF_IsActorPooled(const class AActor* _actor, bool& _bOutIsActive);
    void BPF_GetPoolContextInfos(UClass* _class, int32& _iActiveCount, int32& _iInativeActiveCount);
    void BPF_DestroyPoolableActor(class AActor* _actor, bool& _bOutWasPooled);
};

class ASCPoolLevelScriptActor : public ASCLevelScriptActor
{
};

class ASCPositionBakeSceneCapture : public AActor
{
    class USCCaptureComponent2D* m_SceneCaptureComponent;
    int32 m_iDebugSwitch;
    int32 m_iBakedPositionTextureSize;
    class UMaterialInterface* m_BakedLocalPositionDrawer;
    class UMaterialInterface* m_BakedPreSkinnedPositionDrawer;
    float m_fMinusZDistance;
    FName m_MinusZDistanceParameterName;
    FName m_TextureSizeParameterName;
    FName m_BoundsMinParameterName;
    FName m_BoundsMaxParameterName;
    FName m_ChannelUVParameterName;
    class UTextureRenderTarget2D* m_BakedPositionTextureTarget;
    class UMaterialInstanceDynamic* m_BakedLocalPositionDrawerInstanceDynamic;
    class UMaterialInstanceDynamic* m_BakedPreSkinnedPositionDrawerInstanceDynamic;

};

struct FRagdollBone
{
    FName m_Name;
    float m_fForceFactor;

};

struct FRagdollMoveableBone
{
    FRagdollBone m_Bone;
    TArray<FRagdollBone> m_CascadedBones;

};

class USCRagdollConfigDB : public UDataAsset
{
    float m_fDetectionRadius;
    float m_fBoneDetectionRadius;
    TArray<FRagdollMoveableBone> m_MoveableBones;
    float m_fForceFactor;
    float m_fDelayBetweenImpulses;
    float m_fMinimumPlayerVelocity;
    class UCurveFloat* m_PlayerVelocityCurve;
    float m_fDetectionFrequency;
    float m_fDelayBeforeSleep;

};

class USCReplayHelper : public UBlueprintFunctionLibrary
{

    bool BPF_IsReplayRecording(const class UObject* _worldContextObject);
    bool BPF_IsReplayPlaying(const class UObject* _worldContextObject);
};

class URotationWayHelper : public UBlueprintFunctionLibrary
{

    ESCRotationWay BPF_Mirror(ESCRotationWay _eRotation, bool _bMirror);
};

class USCSaveGameComponent : public UActorComponent
{
    FSCSaveGameComponentOnUpdatedFromSave OnUpdatedFromSave;
    void OnUpdatedFromSave();
    FSCSaveGameComponentOnPreSaveLevel OnPreSaveLevel;
    void DynamicMulticast();

};

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
};

class USaveManagerDelegateHandler : public UObject
{
    FSaveManagerDelegateHandler_OnSaveStatusChanged m_OnSaveStatusChanged;
    void SaveChangeStatus(bool _bSaveInProgress, ESaveResult _eSaveResult);
    FSaveManagerDelegateHandler_OnSaveLoaded m_OnSaveLoaded;
    void FileLoaded(ELoadResult _eLoadResult);
    FSaveManagerDelegateHandler_OnSaveCreated m_OnSaveCreated;
    void FileLoaded(ELoadResult _eLoadResult);
    FSaveManagerDelegateHandler_OnProfileLoaded m_OnProfileLoaded;
    void FileLoaded(ELoadResult _eLoadResult);

};

class USCSaveObject : public UObject
{
    FString m_SaveFilename;
    uint32 m_uiVersion;

    FString BPE_GetSubtitlesInfoForSaveFile();
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile();
    void BPE_FillSaveWithDefaultValues();
};

struct FWorldSave
{
    TArray<uint8> m_WorldStateSaved;

};

struct FStreamingLevelStateBase
{
};

struct FSCStreamingLevelId
{
    FName m_ID;

};

struct FSCStreamingActorStateId
{
    FName m_ID;
    FSCStreamingLevelId m_LevelId;

};

struct FSCLocation48
{
};

struct FSCRotation4
{
};

struct FSCTransform52
{
    FSCLocation48 m_Location;
    FSCRotation4 m_Rotation;

};

struct FSCStreamingActorState
{
    TArray<uint8> m_Data;
    FSCTransform52 m_Transform;
    uint64 m_uiTimestamp;

};

struct FSCStreamingLevelStateSavable : public FStreamingLevelStateBase
{
    TMap<class FSCStreamingActorStateId, class FSCStreamingActorState> m_ActorsState;

};

struct FSCGameData
{
    TMap<class FName, class FWorldSave> m_WorldStatesSaved;
    TMap<class FName, class FSCStreamingLevelStateSavable> m_StreamingLevelsState;
    FGameplayTagContainer m_ActivatedCheats;
    TMap<class FGameplayTag, class FString> m_ActivatedCheatsArguments;
    FGameplayTagContainer m_UnlockedAchievements;
    TMap<class FGameplayTag, class FGameplayTagContainer> m_NewlyUnlockedAchievements;

};

class USCSaveObjectGameData : public USCSaveObject
{
    FSCGameData m_SCSavedData;

};

struct FCharacterSaveDescription
{
    FString m_SaveName;
    FTimespan m_TimePlayed;
    FDateTime m_SaveTimeStamp;
    bool m_bIsABackupSnapshot;
    bool m_bIsValid;

};

struct FMappingSave
{
    FName m_KeyName;
    FName m_ActionName;
    bool m_bIsAxis;
    float m_fScale;

};

struct FSCProfileData
{
    FDateTime m_SaveTimeStamp;
    TArray<FCharacterSaveDescription> m_SaveListNames;
    FString m_FirstSave;
    TArray<FMappingSave> m_Mapping;
    FString m_AudioCulture;
    FString m_TextCulture;
    FGameplayTagContainer m_UnlockedAchievements;
    TMap<class FGameplayTag, class FGameplayTagContainer> m_NewlyUnlockedAchievements;

};

class USCSaveObjectPlayerProfile : public USCSaveObject
{
    FSCProfileData m_BaseProfileData;

    void BPF_RemoveSave(FString _saveName);
    bool BPF_IsSaveValid(FString _saveName, bool _bTreatBackup);
    FCharacterSaveDescription BPF_FindSaveByFileName(FString _fileName, bool& _bFound);
};

class ASCSequenceAnchor : public ASCActor
{
    class USkeletalMeshComponent* m_ComponentSkeletalMesh;

};

class ASCSkeletalMeshPrimInstActor : public ASkeletalMeshActor
{
};

class USCSkeletalMeshVLogDebugDrawComponent : public UActorComponent
{
    TSet<FName> m_SetAllowDebugBones;
    bool m_bRecordVLog;

};

class ASCStaticMeshPrimInstActor : public AStaticMeshActor
{
};

class USCStreamingActorComponent : public UActorComponent
{
    bool m_bRecreatePhysicsForComponents;
    bool m_bRecreatePhysicsOnVolumeEvents;
    bool m_bRecreatePhysicsForComponentsRecursive;
    bool m_bRecreatePhysicsOnPooling;
    bool m_bUpdateLevelFromOverlapOnBeginPlay;
    FName m_OverlapShapeComponentName;

};

class USCVolumeVisualizerComponent : public UActorComponent
{
};

class USCStreamingVolumeVisualizerComponent : public USCVolumeVisualizerComponent
{
};

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
};

class USCUserDefinedEnumBinding : public UObject
{
    class UEnum* m_CppEnum;
    class UEnum* m_BPEnum;
    TMap<class FName, class FName> m_CppToBPBinding;

};

class USCUserDefinedEnumHandlerHelper : public UBlueprintFunctionLibrary
{

    void BPF_SetEnumValue(FSCUserDefinedEnumHandler& _enum, uint8 _uiEnumValue);
    uint8 BPF_GetEnumValue(const FSCUserDefinedEnumHandler& _enum, const class UEnum* _enumObject);
    FName BPF_GetEnumNameValue(const FSCUserDefinedEnumHandler& _enum);
    FText BPF_GetEnumDisplayName(const FSCUserDefinedEnumHandler& _enum);
    bool BPF_Equal(const FSCUserDefinedEnumHandler& _enum1, const FSCUserDefinedEnumHandler& _enum2);
    FSCUserDefinedEnumHandler BPF_ConvertEnumToSCUserEnum(class UEnum* _enum, uint8 _value);
};

class USCVideoLightManager : public UObject
{
    TArray<class UTextureRenderTarget2D*> m_RTChain;
    class UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    class UMaterialInterface* m_SamplerMaterialBase;
    class UCanvas* m_CanvasTarget;

    void PreCache(class UMediaTexture* MediaTex, class UMediaSource* MediaSource, class UMaterialInterface* SamplerMaterialBase);
    void BPF_ExportCurveFromLight(class ULocalLightComponent* LightComponentToFind, class UCurveLinearColor* curveToFill);
};

class USCVideoLightManagerDebugger : public UActorComponent
{
    class UTextureRenderTarget2D* m_currentRT;
    class UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;

};

class USCVideoSpotLightComponent : public USpotLightComponent
{
    FLinearColor m_FilterAdjustment;
    class UMediaTexture* m_MediaTex;
    float m_fLengthInSecond;
    class UCurveLinearColor* m_ColourCurve;

    void OnMediaOpen(FString _openedUrl);
};

class USCVideoPointLightComponent : public UPointLightComponent
{
    FLinearColor m_FilterAdjustment;
    class UMediaTexture* m_MediaTex;
    float m_fLengthInSecond;
    class UCurveLinearColor* m_ColourCurve;

    void OnMediaOpen(FString _openedUrl);
};

class USCVideoRectLightComponent : public URectLightComponent
{
    FLinearColor m_FilterAdjustment;
    class UMediaTexture* m_MediaTex;
    float m_fLengthInSecond;
    class UCurveLinearColor* m_ColourCurve;

    void OnMediaOpen(FString _openedUrl);
};

class ASCVideoSpotLight : public ASpotLight
{
};

class ASCVideoPointLight : public APointLight
{
};

class ASCVideoRectLight : public ARectLight
{
};

class USCVisualLoggerHelper : public UBlueprintFunctionLibrary
{

    bool BPF_TakeVisualLoggerSnapshot(FString _fileName, FText& _outError);
    void BPF_SetVisualLoggerPaused(bool _bPaused);
};

class USCVisualLoggerSettings : public UDeveloperSettings
{
    TSet<FName> m_SetAllowDebugBones;
    TSet<FName> m_SetAllowDebugBonesDrawTransform;
    FKey m_SnapshotKey;
    float m_fAIMaxDistance;

};

class ASCWindDirectionalSource : public AWindDirectionalSource
{
    class UMaterialParameterCollection* m_MPC;
    FName m_windDirectionName;
    FName m_windSpeedName;
    FName m_windMinGustName;
    FName m_windMaxGustName;

};

class ASCWorldSettings : public AWorldSettings
{
    bool m_bUseLegacyCollisionSystem;

};

struct FAnimContainer
{
    class UAnimSequence* m_animation;
    bool m_bMirror;
    bool m_bLoopable;
    float m_fStartRatio;
    uint8 m_uiOrderID;
    float m_fPlayRate;

};

struct FAssociatedPropsAnimInfo
{
};

struct FSCAiActionClassInstance
{
    TSubclassOf<class USCAiAction> m_DefaultClassObject;
    class USCAiAction* m_Instance;

};

struct FSCSoundSwitchValue
{
    FName m_Group;
    FName m_State;

};

struct FSCGestureAndBlendProfile
{
    FAnimContainer m_GesturesAnimContainer;
    bool m_bUseBlendProfilePayload;
    FName m_GestureBlendProfile;
    TSubclassOf<class UBlendProfilePayload> m_BlendProfilePayload;
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    ELookAtApplyMode m_eLookAtApplyMode;

};

struct FSCGestureContainer
{
    TArray<FSCGestureAndBlendProfile> m_aGesturesAnimContainer;

};

struct FSCAnimInstanceRef
{
    class USCAnimInstanceBase* m_AnimInstance;
    FName m_Name;

};

struct FBool
{
    bool m_bBool;

};

struct FLipSyncPhonemeInPhrase
{
    EPhoneme Value;
    uint8 Flag;

};

struct FLipSyncEmotionData
{
};

struct FSCReplayLevelStreaming
{
    ESCLevelStreamingState m_eDesiredState;
    FName m_LevelName;

};

struct FSCReplayLevelStreamingState
{
    TMap<class FName, class FSCReplayLevelStreaming> m_Levels;

};

struct FSCReplayLevelStreamingData
{
    FSCReplayLevelStreamingState m_InitialState;
    TMap<uint32, FSCReplayLevelStreamingState> m_LevelStreamingEvents;

};

struct FSCError
{
    ESCErrorType m_Type;
    FText m_Message;

};

struct FSCUserEnumSetting
{
    FSoftObjectPath m_Enum;
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;

};

struct FOnlineActivitiesTableRow : public FTableRowBase
{
    FName m_activityID;
    EActivityType m_eActivityType;

};

struct FActivityInfo
{
};

struct FSCActorInfoGameArchive
{
    class UObject* m_Actor;
    UClass* m_ActorClass;
    TArray<uint8> m_Data;

};

struct FSCAIActionMemoryEntry
{
};

struct FSCBPComponentsMap
{
    TArray<class UEnum*> m_ComponentsEnums;

};

struct FSCGameFlowMap
{
    ESCGameInstanceState m_State;
    FName m_StateName;
    FSoftObjectPath m_Map;

};

struct FSCLevelSequenceRole
{
    FName m_Name;
    FName m_AnchorJoint;

};

struct FSCStreamingLevelState : public FStreamingLevelStateBase
{
};

struct FSCScale48
{
};

struct FSCTransform100 : public FSCTransform52
{
    FSCScale48 m_Scale3D;

};

struct FSCPhonemeDictionaryRow : public FTableRowBase
{
    TArray<EPhonemeDictionary> m_Phonemes;

};

struct FSCPhonemeFromChineseDictionaryRow : public FSCPhonemeDictionaryRow
{
    TArray<FString> m_Pinyin;

};

struct FSCSpawnImpostorInfos
{
};

#endif
