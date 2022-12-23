#ifndef UE4SS_SDK_Sifu_HPP
#define UE4SS_SDK_Sifu_HPP

#include "Sifu_enums.hpp"

struct FBaseActorTargetConditionInstance
{
    TSubclassOf<class UBaseActorTargetCondition> m_DefaultClassObject;
    class UBaseActorTargetCondition* m_Instance;

};

class UHitActionLauncher : public UObject
{
    FBaseActorTargetConditionInstance m_hitActionCondition;

};

class UAbilityHitActionLauncher : public UHitActionLauncher
{
    FGameplayTag m_InstigatorEventTag;
    FGameplayTag m_VictimEventTag;
    bool m_bApplyDamage;
    bool m_bNotifyHitted;
    bool m_bApplyFreezeFrame;

};

class UAbilityTask_DetectInputAction : public UAbilityTask
{
    FAbilityTask_DetectInputAction_OnInputActionDetected m_OnInputActionDetected;
    void DetectInputActionDelegate();

    class UAbilityTask_DetectInputAction* BPF_DetectInputAction(class UGameplayAbility* _owningAbility, InputAction _eAction, bool _bDetectDeactivation, bool _bEndTaskOnDetected, InputContext _eInputContext);
};

class UAbilityTask_HandleDefense : public UAbilityTask
{

    class UAbilityTask_HandleDefense* BPF_HandleDefense(class UGameplayAbility* _owningAbility, EHitDismissReason _eDismissReason);
};

class UAbilityTask_PushAvailabilityLayers : public UAbilityTask
{
    class UAvailabilityLayerData* m_availabilityLayerData;

    class UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayerWithContext(class UGameplayAbility* _owningAbility, class UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority, bool _bPushContext, EALPriority _eContextPriority);
    class UAbilityTask_PushAvailabilityLayers* BPF_PushAvailabilityLayer(class UGameplayAbility* _owningAbility, class UAvailabilityLayerData* _AvailabilityLayerData, EALBinaryOperation _eOperation, int32 m_iPriority);
};

class UAbilityTask_SlowMotionTask : public UAbilityTask
{
    class UCurveFloat* m_Curve;
    FAbilityTask_SlowMotionTask_OnFinish m_OnFinish;
    void SlowMotionTaskDelegate();
    FAbilityTask_SlowMotionTask_OnStarted m_OnStarted;
    void SlowMotionTaskDelegate();
    FAbilityTask_SlowMotionTask_OnPaused m_OnPaused;
    void SlowMotionTaskDelegate();

    class UAbilityTask_SlowMotionTask* BPF_SlowMotionTask(class UGameplayAbility* _owningAbility, class UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack, bool _bStopOnOtherSlomo, bool _bForce);
};

class UAbilityTask_WaitUnscaled : public UAbilityTask
{
    FAbilityTask_WaitUnscaled_OnFinish m_OnFinish;
    void WaitUnscaled();

    class UAbilityTask_WaitUnscaled* BPF_WaitUnscaled(class UGameplayAbility* _owningAbility, float _fDuration);
};

class UAbsorbDB : public UDataAsset
{
    float m_fDuration;
    class UCurveFloat* m_fAttackScaleScurve;
    float m_fSpecialAbilityDuration;
    int32 m_iFrameBuildUp;
    int32 m_iFrameRelease;
    float m_fSpecialAbilityGuardGaugeCost;
    class UCurveFloat* m_SpecialAbilityMovementDynamic;
    bool m_bSpecialAbilityConsumStamina;
    bool m_bSpecialAbilityHasImpactOnGuardGauge;
    bool m_bSpecialAbilityOverrideAnimDynamicByCurve;
    float m_fSpecialAbilityTrackingDuration;
    class UAbsorbPropertyDB* m_DefaultAbsorbPropertyDB;
    float m_fDamageToRecoryRatio;
    float m_fDamageToRecoryRatioOnGuard;
    float m_fSpecialAbilityAbsorbSuccessRefillValue;
    float m_fSpecialAbilitySuperAbsorbSuccessRefillValue;
    uint8 m_uiNormalAbsorbStackNumber;
    uint8 m_uiSuperAbsorbStackNumber;
    bool m_bGhostDamageActivatedForAttacks;
    int32 m_iOrdersAllowedToPushAbsorbSuccessfulLayer;
    bool m_bNormalAbsorbIsDeathDodger;
    bool m_bSuperAbsorbIsDeathDodger;
    int32 m_iSuperAbsorbFreezeframe;
    int32 m_iSuperAbsorbOrders;

};

struct FSpecialAbilityDelayedLayer
{
    class UAvailabilityLayerData* m_PushLayerOnSuccess;
    float m_fPushLayerDelay;

};

class USpecialAbilityPropertyDB : public UDataAsset
{
    float m_fSuccessGuardGaugeRefill;
    class UAvailabilityLayerData* m_PushLayerOnSuccess;
    TArray<FSpecialAbilityDelayedLayer> m_DelayedLayersOnSuccess;

};

class UAbsorbPropertyDB : public USpecialAbilityPropertyDB
{
    uint8 m_uiAbsorbStackNumber;
    bool m_bAbsorbIsDeathDodger;
    int32 m_iAbsorbFreezeframeNumber;
    bool m_bResistsInterruptAttack;
    bool m_bResistsGuardBreakAttack;
    bool m_bFromSpecialAbility;
    EAbsorbFeedbackTypes m_eAbsorbFeedbackType;
    bool m_bGhostDamageActivated;

};

struct FBaseActorConditionInstance
{
    TSubclassOf<class UBaseActorCondition> m_DefaultClassObject;
    class UBaseActorCondition* m_Instance;

};

class USCAnimNotifyState : public UAnimNotifyState
{
    bool m_bRectifiedActivationConditions;
    bool m_bDebugLogActivationTime;
    FBaseActorConditionInstance m_triggerCondition;

};

class UAbsorbWindowNotifyState : public USCAnimNotifyState
{
    class UAbsorbPropertyDB* m_AbsorbPropertyDB;

};

struct FCameraTransitionInfoPairStruct
{
    class UAbstractCameraData* m_CameraData;
    class UCameraTransitionInfo* m_CameraTransitionInfo;

};

struct FCameraDataModifierWithBehavior
{
    TSubclassOf<class UCameraDataModifier> m_Modifier;
    ECameraDataModifierTickBehavior m_eBehavior;

};

class UAbstractCameraData : public UDataAsset
{
    class UCameraTransitionInfo* m_DefaultCameraTransition;
    TArray<FCameraTransitionInfoPairStruct> m_CameraTransitionDB;
    class UCameraTransitionInfo* m_OutCameraTransition;
    TArray<FCameraDataModifierWithBehavior> m_Modifiers;

    void ClearTransitions();
};

class UBaseActorCondition : public UObject
{
};

class UActionAvailableCondition : public UBaseActorCondition
{
    InputAction m_eAction;

};

struct FBTTaskNodeRelevancyCondition
{
    FBaseActorConditionInstance m_RelevancyCondition;
    TEnumAsByte<EBTNodeResult::Type> m_eResultWhenIrrelevant;

};

class UAIBTTaskNode : public USCBTTaskNode
{
    TArray<FBTTaskNodeRelevancyCondition> m_RelevancyConditions;
    InputAction m_eCancelTaskOnAvailableInput;
    bool m_bCancelWaitedOrdersOnFinish;

};

struct FEditableOrderType
{
    EOrderType m_eOrderType;
    FSCUserDefinedEnumHandler m_BPOrderID;

};

class UActionPlayOrderBTTask : public UAIBTTaskNode
{
    FEditableOrderType m_EnqueueAfterOrder;
    FName m_NotifyEventOnBeforeStart;
    FName m_NotifyEventOnFinished;
    bool m_bNotifyEventOnFinishedOnlyOnSuccess;
    FName m_OrderParamsName;
    EOrderType m_eOrderType;
    FSCUserDefinedEnumHandler m_eOrderTypeBP;
    EFightingActionState m_eActionState;
    bool m_bFailIfParamInvalid;
    bool m_bWaitForOrderEnd;

};

class UBaseActorTargetCondition : public UObject
{
};

class UActionTargetCondition : public UBaseActorTargetCondition
{
    EActionType m_eAction;

};

struct FBPOrderServiceInstance
{
    TWeakObjectPtr<class ABaseCharacter> m_Owner;

};

class UOrderService : public UObject
{

    void BPE_OnInit(const FBPOrderServiceInstance& _instance);
};

struct FLookAtLimits
{
    bool m_bEnabled;
    float m_fYawLimit;
    FRuntimeFloatCurve m_pitchLimitByYaw;

};

class UActivateLookAtOrderService : public UOrderService
{
    FLookAtLimits m_lookAtLimit;

};

class UActorClassCondition : public UBaseActorCondition
{
    TSoftClassPtr<AActor> m_Class;

};

class UActorHasAttachedActorCondition : public UBaseActorCondition
{
    TSoftClassPtr<AActor> m_Class;

};

class UActorHasAttackTicketCondition : public UBaseActorCondition
{
};

class UActorLastTimeOnScreenCondition : public UBaseActorTargetCondition
{
    FFloatRange m_ValidTimeRangeCondition;

};

class UActorTargetCondition : public UBaseActorCondition
{
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;

};

class UActorTransformOrderService : public UOrderService
{
    FVector m_vTranslation;
    FRotator m_Rotation;

};

class UAddVariableWeightOrderService : public UOrderService
{
    FSCUserDefinedEnumHandler m_EnumLayer;
    class UBlendProfile* m_BoneMask;
    class UBlendProfile* m_OptionalMirroredBoneMask;
    bool m_bRemoveOnOrderServiceStop;

};

class UAddWeaponIdleVariableWeightOrderService : public UAddVariableWeightOrderService
{

    FSCUserDefinedEnumHandler BPE_GetEnumLayerForWeapon(const class UBaseWeaponData* _weaponData);
    class UBlendProfile* BPE_GetBlendProfileForWeapon(const class UBaseWeaponData* _weaponData);
};

class UAIAbandoningBTTask : public UAIBTTaskNode
{
    TArray<EOrderType> m_NoReactionDuringOrders;
    TArray<EOrderType> m_PlayReactionAfterOrders;

};

struct FUOrderParamsClassInstance
{
    TSubclassOf<class UOrderParams> m_DefaultClassObject;
    class UOrderParams* m_Instance;

};

struct FUOrderParamsInstanceStruct
{
    class UOrderParams* m_Instance;

};

struct FAIConditionClassInstance
{
    TSubclassOf<class UComboTransitionCondition> m_DefaultClassObject;
    class UComboTransitionCondition* m_Instance;

};

struct FAICancelCondition
{
    float m_fTestFrequency;
    FAIConditionClassInstance m_condition;
    bool m_bInvert;

};

class UWGAiAction : public USCAiAction
{
    ESpeedState m_eDesiredSpeedState;
    bool m_bLockSpeedStateOnSchedule;
    TMap<class FName, class FUOrderParamsClassInstance> m_orderParams;
    TMap<class FName, class FUOrderParamsInstanceStruct> m_OrderParamsInstances;
    bool m_bCancelOnGlobalBehaviorChange;
    bool m_bCancellable;
    TArray<FAICancelCondition> m_CancelConditions;
    EComboAIConditionGroupOperator m_CancelConditionOperator;
    bool m_bForceIdleExit;

    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    void BPF_RemoveAbilitySystemGameplayTag(const FGameplayTag& _tag);
    class AFightingPlayerController* BPF_GetFirstPlayerController();
    class AFightingCharacter* BPF_GetFirstPlayerCharacter();
    class AFightingCharacter* BPF_GetFightingCharacter();
    class AFightingCharacter* BPF_GetEnemyCharacter();
    class AFightingCharacter* BPF_GetCurrentTarget();
    class AFightingAIController* BPF_GetAIFightingController();
    class UAIFightingComponent* BPF_GetAIFightingComponent();
    class USCCrowdFollowingComponent* BPF_GetAICrowdFollingComponent();
    void BPF_AddAbilitySystemGameplayTag(const FGameplayTag& _tag);
    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
};

class UAIActionAttack : public UWGAiAction
{
    bool m_bCheckObstacles;
    bool m_bCheckFriendlyFire;

    void BPF_NotifyAttackStarted();
    void BPE_OnPreCreateOrderAttackParams(FName _paramsName, class UOrderAttackParams* _orderParams);
    void BPE_OnCreatedOrderAttackParams(FName _paramsName, class UOrderAttackParams* _orderParams);
    float BPE_GetAttackRange();
};

class UAIActionChangeCombatRole : public UWGAiAction
{
    ESCAICombatRoles m_eCombatRoleToAssign;

};

struct FWeaponBlendSpaceParam
{
    EBlendSpaceParamComputeType m_eBlendSpaceParamComputeType;
    FFloatRange m_customRange;
    FName m_DistanceRefBone;
    FName m_DistanceTargetBone;
    FVector m_vDistanceOffset;

};

struct FWeaponAnimInfo : public FAssociatedPropsAnimInfo
{
    EWeaponAnimType m_eWeaponAnimType;
    class UAnimationAsset* m_weaponAnimAssociated;
    class UBlendSpaceBase* m_weaponBlendSpaceAssociated;
    TMap<class FString, class FWeaponBlendSpaceParam> m_weaponBlendSpaceParam;
    class UCurveFloat* m_playRateCurve;
    EWeaponBlendSpaceComputeTime m_eBlendSpaceComputeTime;
    EWeaponOrientationConstraint m_eOrientationConstraint;

};

class UAIActionDash : public UAIActionAttack
{
    float m_fAttackRange;
    FAnimContainer m_animation;
    FWeaponAnimInfo m_WeaponAnimation;
    bool m_bUseTargetPositionPrediction;
    float m_fTargetPositionPredictionRatio;
    bool m_bOverrideOrientation;
    float m_fDirectionAngle;
    float m_fDistance;
    bool m_bSnapOnTarget;
    float m_fSnapDistance;
    FAnimContainer m_AnimationPredash;
    FWeaponAnimInfo m_WeaponAnimationPredash;
    FAnimContainer m_AnimationCharge;
    FWeaponAnimInfo m_WeaponAnimationCharge;
    float m_fChargeDuration;
    FAnimContainer m_AnimationPostDash;
    FWeaponAnimInfo m_WeaponAnimationPostdash;

};

class UAIActionDropObject : public UWGAiAction
{
    FVector m_vDropImpulse;

    void BPF_DropObjectInHand();
};

class USCAnimNotify : public UAnimNotify
{
    FBaseActorConditionInstance m_triggerCondition;

};

class UAIActionEventNotify : public USCAnimNotify
{
    FName m_EventName;

};

class UAIActionFetchObject : public UWGAiAction
{
    bool m_bFetchClosestWeaponIfNotSet;
    bool m_bUsePerceptionToFindWeapon;
    class AActor* m_ObjectToFetch;

    void OnPickupStarting(uint8 _uiOrderId, class UOrderComponent* _OrderComponent);
    void BPF_SetObjectToFetch(class AActor* _objectToFetch);
};

class UAIActionFetchObjectBTDecorator : public USCBTDecorator
{
};

class UAIActionHasOrderParamDecorator : public USCBTDecorator
{
    FName m_OrderParamsName;

};

struct FSCAITicketEnum : public FSCUserDefinedEnumHandler
{
};

struct FAIComboLaunchParameters
{
    bool m_bCheckCanAttack;
    bool m_bCheckTicketAvailable;
    FSCAITicketEnum m_Ticket;
    bool m_bMoveToTargetRange;
    class AActor* m_Target;
    int32 m_iRepeats;
    bool m_bCancelPendingActions;
    bool m_bTestInputActionAvailable;

};

class UAIActionLaunchCombo : public USCAiAction
{
    FAIComboLaunchParameters m_Parameters;

};

class UAsyncTaskAiLaunchCombo : public UBlueprintAsyncActionBase
{
    FAsyncTaskAiLaunchComboOnSuccess OnSuccess;
    void DynamicMulticast();
    FAsyncTaskAiLaunchComboOnFailure OnFailure;
    void DynamicMulticast();

    class UAsyncTaskAiLaunchCombo* BPF_AIAction_LaunchCombo(class UAIFightingComponent* _aiComponent, TSubclassOf<class UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, class UAIActionLaunchCombo*& _action);
};

class UAIActionPatrol : public UWGAiAction
{
    class APathPatrol* m_Patrol;

};

class UAIActionPlayDialogLine : public UWGAiAction
{
    FDataTableRowHandle m_Dialog;
    FText m_DialogText;
    float m_fDuration;
    class AActor* m_SecondaryActor;
    class UAnimSequence* m_animation;

};

class UAIActionPlaySequence : public UWGAiAction
{
    TSoftObjectPtr<ALevelSequenceActor> m_LevelSequenceActor;
    class ALevelSequenceActor* m_CreatedLevelSequenceActor;

    void OnCreatedSequenceActorEndedPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
};

class UAIActionRainDashes : public UAIActionAttack
{
    float m_fMinDistanceForFinalDash;
    int8 m_iMaxNumberOfDashes;
    TSubclassOf<class UAIActionDash> m_FirstDashLeft;
    TSubclassOf<class UAIActionDash> m_FirstDashRight;
    TSubclassOf<class UAIActionDash> m_IntermediateDashLeft;
    TSubclassOf<class UAIActionDash> m_IntermediateDashRight;
    TSubclassOf<class UAIActionDash> m_FinalDash;

    void BPF_OnFinishDash();
};

class UAIActionStartConversation : public UWGAiAction
{
    FName m_StartingSegment;
    bool m_bCutOtherDialogs;
    bool m_bGenericSubtitles;
    class ACharacter* m_SecondaryActor;

};

class UAIActionThrowObject : public UAIActionAttack
{
};

class UAIActionThrowObjectBTDecorator : public USCBTDecorator
{
};

class UAIActionTimedPauseInCombat : public UWGAiAction
{
    float m_fPauseTime;

};

class UAIActionTraversalAttack : public UAIActionAttack
{
    float m_fMiniumDistBetweenInstigatorAndTarget;
    float m_fTargetRadiusPrecision;
    float m_fAttackCancelMinDistance;
    float m_fEntryPointReEvaluatePrecision;
    float m_fOffsetOnTraversalSide;

    void BPF_OnReachedEntryPoint();
};

class UAIActionTriggerProxy : public UAIActionAttack
{
    bool m_bTriggerProxyDirectlyAtStart;

    void BPF_TriggerProxy();
    void BPF_SetProxyActorToTrigger(class AActor* _proxyActor);
};

class UAIActionWait : public UWGAiAction
{
    float m_fDuration;

};

struct FSCRangeFloatCurve
{
    FFloatRange m_Range;
    bool m_bUseCurve;
    class UCurveFloat* m_CurveMax;
    class UCurveFloat* m_CurveMin;

};

struct FBaseHitBoxConditionInstance
{
    TSubclassOf<class UHitBoxCondition> m_DefaultClassObject;
    class UHitBoxCondition* m_Instance;

};

struct FHitBoxMetaDataClassInstance
{
    TSubclassOf<class UHitBoxMetaData> m_DefaultClassObject;
    class UHitBoxMetaData* m_Instance;

};

struct FFrameRange
{
    FFloatRange m_Anim;

};

struct FHitImpact
{
    bool m_bUseDamage;
    float m_fDamage;
    bool m_bUseStructureDamage;
    float m_fStructureDamage;
    bool m_bUseSuperDizzyDamage;
    float m_fSuperDizzyDamage;
    bool m_bUseNbFrameStuned;
    uint8 m_iNbFrameStuned;
    bool m_bUseKnockBackDistance;
    float m_fKnockBackDistance;
    bool m_bUseFreezeFrames;
    int32 m_iFreezeFrames;

};

struct FDeflectImpact : public FHitImpact
{
    class UCurveFloat* m_KnockBackDynamic;
    bool m_bSelfStructureDamageCanGuardBreak;
    bool m_bUseSelfStructureDamage;
    float m_fSelfStructureDamage;
    bool m_bUseSelfSuperDizzyDamage;
    float m_fSelfSuperDizzyDamage;

};

struct FAttackPropertyLevel
{
    uint32 m_Level;
    bool m_bUseCustomDuration;
    float m_fCustomDuration;
    bool m_bUseHitAnimDuration;
    bool m_bKeepCurrentStateDuration;
    float m_fKeepCurrentStateThresold;
    bool m_bUseCustomDistance;
    float m_fCustomDistance;

};

struct FHitboxDataRow : public FTableRowBase
{
    int32 m_iHitboxGroupID;
    float m_fMaxImpactAngle;
    bool m_bIgnoreImpactAngleWhenPenetrating;
    int32 m_uiTargetFilters;
    FGameplayTagContainer m_HitboxGameplayTags;
    bool m_bOnlyHitCharacterWithRequiredHitboxGameplayTags;
    FGameplayTagContainer m_AdditionalHitboxGameplayTagsOnTarget;
    FGameplayTagContainer m_RequiredGameplayTags;
    bool m_bHitTargetOnly;
    bool m_bIgnoreTarget;
    bool m_bHitAnyCharacterOnAvoid;
    bool m_bCanTouchMultipleTargetAtOnce;
    bool m_bCanBeLethal;
    bool m_bCanBreakStructure;
    FHitImpact m_OnHitImpact;
    class UCurveFloat* m_KnockBackDynamicOnHit;
    FHitImpact m_OnGuardImpact;
    class UCurveFloat* m_KnockBackDynamicOnGuard;
    FDeflectImpact m_OnDeflectImpact;
    EHittedReaction m_eHittedReaction;
    TSubclassOf<class UHitActionLauncher> m_hitAction;
    bool m_bNotifyHittedOnHitAction;
    bool m_bApplyFreezeFramesOnHitAction;
    bool m_bPlayRumbleOnHitAction;
    bool m_bPlayRumbleOnNormalHit;
    EHitType m_eHitType;
    FSCUserDefinedEnumHandler m_HitContext;
    EAttackPowers m_eAttackPower;
    bool m_bOverrideResilience;
    int32 m_iOverrideResilienceValue;
    bool m_bDizzyOnAvoid;
    bool m_bDizzyOnParry;
    bool m_bParriable;
    bool m_bPlayAvoidedOrder;
    FAttackPropertyLevel m_AttackPropertyLevel;
    TMap<class EFightingState, class FAttackPropertyLevel> m_AttackPropertyLevelOverrides;
    float m_fMinKnockbackAngleFromHit;
    EKnockbackBehavior m_eKnockBackBehavior;
    float m_fKnockbackEastWestAngle;
    int32 m_iHitboxDefenseMatrix;
    int32 m_iAvoidableDefenseMatrix;

};

struct FHitBox
{
    FBaseHitBoxConditionInstance m_activationCondition;
    FHitBoxMetaDataClassInstance m_MetaData;
    FDataTableRowHandle m_HitRow;
    FFrameRange m_FrameRange;
    class UBaseHitDetectionDB* m_HitDetectionDB;
    EAttackTarget m_eHitTarget;
    EAttackTarget m_eAltHitTarget;
    EIKAnimTargetTypes m_eAimTarget;
    EAttackMovementType m_eMovementType;
    EAttackOrigin m_eOrigin;
    EAttackOrigin m_eAvoidCustomOrigin;
    EAttackTarget m_eAvoidCustomHitTarget;
    EAttackMovementType m_eAvoidCustomMovementType;
    FHitboxDataRow m_CachedRow;

};

class UAIActionWallJumpAttack : public UAIActionAttack
{
    float m_fQueryResultLifetime;
    class UEnvQuery* m_QueryTemplate;
    bool m_bDisplayDebugInfos;
    FColor m_DebugDisplayColor;
    FFloatRange m_ValidAngleRange;
    FFloatRange m_DistToWallJumpPoint;
    int32 m_iDeprecationVersion;
    FSCRangeFloatCurve m_AngleRange;
    FSCRangeFloatCurve m_DistToWallJumpSnap;
    FSCRangeFloatCurve m_DistToWallJumpSnapTarget;
    float m_fMaxJumpHeightWhenPossible;
    FHitBox m_WallJumpAttackHitBox;

    bool BPF_PrepareWallJumpAttack(class UAIFightingComponent* _aiComponent, TSubclassOf<class UAIActionWallJumpAttack> _action, class AActor* _wallJumpActor, const FVector& _vSnapLocation, const class AActor* _target, bool _bIgnoreAngleConstraint);
    bool BPF_PerformWallJumpAttackAction(class UAIFightingComponent* _aiComponent, TSubclassOf<class UAIActionWallJumpAttack> _action, class AActor* _wallJumpActor, const FVector& _vSnapLocation, FGameplayTag _behaviorTag, const class AActor* _target, FString& _outError, bool _bIgnoreAngleConstraint);
    bool BPF_ComputeWallJumpStartLocation(FVector& _vOutLocation, const class AFightingCharacter* _instigatorChara, const class AActor* _target, const class AActor* _wallJumpActor, const FVector& _vSnapLocation, TSubclassOf<class UAIActionWallJumpAttack> _attackClass);
};

struct FCarriedProps
{
    FDataTableRowHandle m_props;

};

struct FAICharacterSpawnParams
{
    FName m_ParamsName;
    TSubclassOf<class ABaseCharacter> m_SpawningClass;
    class UAIPhaseScenario* m_PhaseScenarios;
    TArray<FCarriedProps> m_carriedProps;
    TSubclassOf<class ABaseWeapon> m_carriedWeapon;
    FName m_CharacterPoolName;
    FName m_CarriedWeaponPoolName;
    FName m_CustomImpostorName;

};

struct FIdleAnimAndTransition
{
    FAnimContainer m_IdleAnimation;
    FAnimContainer m_IdleExitTransition;

};

class AAISpawner : public AActor
{
    FAISpawnerAIDownDelegateMulticast AIDownDelegateMulticast;
    void AIDownDynamic(class AAISpawner* Spawner);
    FAISpawnerAISpawnedDynamicDelegate AISpawnedDynamicDelegate;
    void AISpawnedDynamic(class ABaseCharacter* SpawnedCharacter);
    FAISpawnerOnPatrolCompleted OnPatrolCompleted;
    void AIPatrolCompleted(class UAIFightingComponent* AI, class APathPatrol* Patrol);
    FAISpawnerOnGenericDialogEvent OnGenericDialogEvent;
    void GenericDialogEventDelegate(FName EventTriggered);
    FAISpawnerOnDialogCompleted OnDialogCompleted;
    void DynamicMulticast();
    FAISpawnerOnDialogCut OnDialogCut;
    void DynamicMulticast();
    FAISpawnerOnLineEnded OnLineEnded;
    void DialogLineEvent(int32 DialogNodeId);
    FAISpawnerOnGlobalBehaviorChanged OnGlobalBehaviorChanged;
    void AICharacterGlobalBehaviorChanged(class ABaseCharacter* Character, EGlobalBehaviors NewBehavior);
    FAICharacterSpawnParams m_SpawnParams;
    FSCAiActionClassInstance m_SpawnAction;
    TSubclassOf<class ABaseCharacter> m_SpawningClass;
    bool m_bForcedPreFightLookAtTarget;
    class AActor* m_ForcedPreFightLookAtTarget;
    class APathPatrol* m_pathPatrol;
    EPatrolLaunchMethod m_ePatrolLaunchMethod;
    class UAIPhaseScenario* m_PhaseScenarios;
    class UAIPhaseScenario* m_PhaseScenario;
    EFactionsEnums m_eFaction;
    float m_fRespawnTime;
    float m_fSpawnDelay;
    bool m_bCanRespawn;
    bool m_bLowStructureOnSpawn;
    bool m_bIsLoneWolf;
    int32 m_iSoundTensionLevelOverride;
    FName m_VoiceVariationSwitchOverride;
    int32 m_iChargesToAddWhenKilled;
    int32 m_iDeathCounterDecreaseWhenKilled;
    bool m_bDeathCounterResetWhenKilled;
    EFirstSpawnMethod m_eFirstSpawnMethod;
    class USceneComponent* m_RootComp;
    TArray<FCarriedProps> m_carriedProps;
    TSubclassOf<class ABaseWeapon> m_carriedWeapon;
    FName m_CarriedWeaponPoolName;
    bool m_bKeepIdleAnimDuringAlertedDialogs;
    TArray<FIdleAnimAndTransition> m_IdleAndExitAnimation;
    class UAIIdleDB* m_AIIdleDB;
    FAnimContainer m_AlertedAnimation;
    TSubclassOf<class ABaseCharacter> m_EditorClass;
    class UAIPhaseScenario* m_PhaseScenarioOverride;
    TArray<float> m_rawCustomPrimitiveData;

    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    bool IsSpawnerBusy();
    TSubclassOf<class ABaseWeapon> GetCarriedWeapon();
    void BPF_WantsSpawn();
    void BPF_UnSpawnAIDelayed();
    void BPF_StartAssociatedPatrolOnSpawnedAI();
    void BPF_SetSpawningClass(TSubclassOf<class ABaseCharacter> _class);
    void BPF_SetPhaseScenario(class UAIPhaseScenario* _scenario);
    void BPF_SetForceSpawnerBusy(bool _bSpawnerBusy);
    void BPF_SetCanRespawn(bool _canRespawn);
    bool BPF_HasSpawnedAI();
    TSubclassOf<class ABaseCharacter> BPF_GetSpawningClass();
    class ABaseCharacter* BPF_GetSpawnedAI();
    FName BPF_GetCarriedWeaponPoolName();
    TArray<FCarriedProps> BPF_GetCarriedProps();
    void BPF_AskForRespawn();
    void BPE_OnRespawnFinished(class AActor* _ActorAIRespawned);
    void BPE_OnIADown(class AActor* _ActorAI);
    void AISpawnedDynamic__DelegateSignature(class ABaseCharacter* SpawnedCharacter);
    void AIPatrolCompleted__DelegateSignature(class UAIFightingComponent* AI, class APathPatrol* Patrol);
    void AIDownDynamic__DelegateSignature(class AAISpawner* Spawner);
    void AICharacterGlobalBehaviorChanged__DelegateSignature(class ABaseCharacter* Character, EGlobalBehaviors NewBehavior);
};

struct FAIArenaSpawnParams
{
    FAICharacterSpawnParams m_ArenaSpawnParams;

};

struct FAICharacterSpawnParamsArray
{
    TArray<FAIArenaSpawnParams> m_CharacterSpawnParams;

};

struct FSpawningClassContainer
{
    TSubclassOf<class ABaseCharacter> m_SpawningClass;
    FName m_ImpostorCustomName;

};

struct FCarriedWeaponContainer
{
    TSubclassOf<class ABaseWeapon> m_carriedWeapon;
    FName m_CarriedWeaponPoolName;

};

struct FCarriedPropsContainer
{
    FCarriedProps m_CarriedProp;

};

class AAIArenaSpawner : public AAISpawner
{
    FName m_CurrentPreset;
    FName m_DefaultPreset;
    TMap<class FName, class FAICharacterSpawnParamsArray> m_SpawnParamsPresets;

    void BPF_SetCurrentPreset(FName _currentPreset);
    void BPF_GetSpawningClassesFromParams(TArray<FSpawningClassContainer>& _outSpawningClassContainers);
    void BPF_GetCarriedWeaponsFromParams(TArray<FCarriedWeaponContainer>& _outCarriedWeaponContainers);
    void BPF_GetCarriedPropsFromParams(TArray<FCarriedPropsContainer>& _outCarriedPropsContainers);
};

struct FTimerAndOffset
{
    float m_fTime;
    float m_fOffset;

};

struct FAITicketCooldowns
{
    FTimerAndOffset m_Cooldowns;

};

struct FAttackTicketConfig
{
    FAttackTicketBehavior m_eBehavior;
    bool m_bTicketIsAlwaysAvailable;
    ESCAICombatRoles m_eCombatRole;
    int32 m_eCombatRolesMask;
    int32 m_iCount;
    FTimerAndOffset m_Cooldowns;
    bool m_bUsePerDifficultyCounters;
    int32 m_iCountPerDifficulty;
    FAITicketCooldowns m_CooldownsPerDifficulty;
    float m_fCooldownOffsetOnSynchedFires;
    float m_fCooldownSynchFiresTolerance;
    float m_fForcedCooldownOnDirectOpponentDeath;
    bool m_bIsRepeated;
    FInt32Range m_Repeats;
    bool m_bUseMinDistanceToPosition;
    float m_fMinDistanceToPosition;
    bool m_bEnableIneligibleTimerOnRelease;
    bool m_bIsNotUsedInCombo;
    float m_fMoveToTimeoutValue;
    EPassiveTicketBehaviorAginstJoker m_eBehaviorAgainstJoker;
    FSCAITicketEnum m_FallbackTicket;

};

class UAIAttackTicketData : public UDataAsset
{
    FAttackTicketConfig m_Config;
    int32 m_iSerializeVersion;

};

class UAIBaseBehaviourDataAsset : public UDataAsset
{
    float m_fProbabilityDepletedPerSecond;
    float m_fMinProbability;
    float m_fInitialProbability;
    float m_fCooldown;

};

class UAIBehaviorSwitchActorComponent : public UActorComponent
{
    TArray<class ASpawnerGroup*> m_groupsToAlert;
    bool m_AlertOnPrimitiveOverlap;
    EGlobalBehaviors m_eNewBehavior;

    void OnComponentStartOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void BPF_TriggerBehaviorChangeToAssociatedGroups(class AActor* _actorTriggeringTheAlert, bool _bSkipBark);
};

class UAIBehaviorTreeComponent : public USCBehaviorTreeComponent
{
};

class USCAITriggerableActions : public UObject
{
};

class UAIChangeRoleTriggerableActions : public USCAITriggerableActions
{
    ESCAICombatRoles m_eCombatRoleToAssign;

};

class UWGCharacterPoseData : public USCCharacterPoseData
{
};

class UAICharacterPoseData : public UWGCharacterPoseData
{
};

struct FComboConditionValueToNodeMap
{
    TMap<uint8, uint8> m_Map;

};

class UComboTransitionCondition : public UObject
{
    TMap<uint8, UComboTransitionCondition*> m_TargetConditions;
    TMap<class FGuid, class FComboConditionValueToNodeMap> m_PerConditionValueToNodeMap;
    FGuid m_ConditionID;

    bool BPF_TestConditionOfClass(TSubclassOf<class UComboTransitionCondition> _condition, const class AFightingCharacter* _owner);
    bool BPF_TestCondition(const class UComboTransitionCondition* _condition, const class AFightingCharacter* _owner);
    uint8 BPE_GetTargetNode(const class AFightingCharacter* _owner, const class AActor* _target);
    FString BPE_GetLog();
};

class UAIComboCondition : public UComboTransitionCondition
{

    void BPF_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
};

class UAIComponent : public USCAIComponent
{
    FAIComponentOnSpawned OnSpawned;
    void SpawnedDelegate(class AAISpawner* Spawner);
    class UArchetypeAsset* m_CurrentAIArchetype;
    TArray<FSCSoundSwitchValue> m_VoiceArchetypeSwitches;
    class AAISpawner* m_Spawner;
    class UBehaviorTree* m_Behavior;

    void SpawnedDelegate__DelegateSignature(class AAISpawner* Spawner);
    void OnRep_Spawner();
    void OnAIInitialized();
    void BPF_TriggerBehaviorChange(class AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, const EAlertedReason _eAlertedReason, bool _bSkipBark);
    FSCSoundSwitchValue BPF_GetVoiceArchetypeSwitch();
    class AAISpawner* BPF_GetSpawner();
    class UArchetypeAsset* BPF_GetArchetypeData();
};

class UAIContextualDefense : public UDataAsset
{
    TArray<class UAIInfluenceNode*> m_Nodes;

};

class UAICounterFeintBehaviourDataAsset : public UAIBaseBehaviourDataAsset
{
};

class UAIDataProviderActionWallJumpAttack : public UAIDataProvider_QueryParams
{
    EWallJumpAttackParameter m_eParameter;

};

struct FAIDebugSpawnerInstance
{
    class AAISpawner* m_Spawner;
    class UArchetypeAsset* m_Archetype;

};

class UAIDebugSpawnerComponent : public UActorComponent
{
    TArray<FAIDebugSpawnerInstance> m_Spawners;

    void BPF_SpawnAIs(int32 _iCoun);
};

class UAIDefenseBTTask : public UAIBTTaskNode
{
    bool m_bFinishWhenIsNotStun;

};

struct FDamageInfos
{
    TWeakObjectPtr<class AActor> m_Instigator;
    bool m_bTakenDown;

};

class AAIDirectorActor : public AActor
{
    FAIDirectorActorOnGlobalBehaviorsChanged OnGlobalBehaviorsChanged;
    void GlobalBehaviorChanged(EGlobalBehaviors EGlobalBehaviors);
    FAIDirectorActorOnAIDeathDetected OnAIDeathDetected;
    void OnAIDeathDetected(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    FAIDirectorActorOnDifficultyLevelChanged OnDifficultyLevelChanged;
    void DynamicMulticast();

    void OnAIDeathDetected__DelegateSignature(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void GlobalBehaviorChanged__DelegateSignature(EGlobalBehaviors EGlobalBehaviors);
    void BPF_UnbindFromAlertLevelChanged(FBPF_UnbindFromAlertLevelChangedDelegate Delegate);
    void BPF_RemoveGlobalAlertLevelThreshold(FName _name);
    EAlertLevel BPF_GlobalAlertLevel();
    EAlertLevel BPF_GetAlertLevel();
    void BPF_GetAIsForEnemy(const class AActor* _enemyActor, ESCAICombatRoles _eCombatRole, TArray<class AActor*>& _AICharactersOutArray);
    void BPF_BindToAlertLevelChanged(FBPF_BindToAlertLevelChangedDelegate Delegate);
    void BPF_AddGlobalAlertLevelThreshold(EAlertLevel _eLevel, EAlertLevelThreshold _eType, FName _name);
    void BPE_OnSituationDeactivated(const class AAISituationActor* _situationActor);
    void BPE_OnSituationActivated(const class AAISituationActor* _situationActor);
    void BPE_OnSafeSanctuaryBarkTrigger(const class AFightingCharacter* _Enemy);
    void BPE_OnMCDominationChanged(EMcDominationGaugeSteps _NewStep);
    void BPE_OnLastManPhaseStarted(const class UAIFightingComponent* _aiComponent);
    void BPE_OnGlobalBehaviorChanged(const class UAIFightingComponent* _aiComponent, EGlobalBehaviors _NewBehavior, EAlertedReason _AlertedReason, bool _SkipBark);
    void BPE_OnEnemyRevival(class ABaseCharacter* _Enemy);
    void BPE_OnEnemyPickedWeapon(const class AFightingCharacter* _Enemy);
    void BPE_OnEnemyOrderStateChanged(const class AFightingCharacter* _Enemy, EOrderType _OrderType, EOrderState _OrderState);
    void BPE_OnEnemyFightingStateChanged(EFightingState _eFightingState, bool _bPushed);
    void BPE_OnEnemyDeathDetected(const class AFightingCharacter* _Enemy, const FDamageInfos& _damageInfos);
    void BPE_OnCombatRolesChanged(ESCAICombatRolesChangeReason _eReason);
    void BPE_OnAIDeathDetected(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void BPE_OnAIActionExecute(const class UAIFightingComponent* _aiComponent, const class USCAiAction* _AIAction);
    bool BPE_CanAICharacterSpeak(const class AFightingCharacter* Character);
    void AlertLevelChangedMulticastDynamic__DelegateSignature(EAlertLevel EAlertLevel);
    void AlertLevelChanged__DelegateSignature(EAlertLevel EAlertLevel);
};

class UCameraWeightComponent : public UActorComponent
{

    float BPE_GetWeight();
};

class UFixedCameraWeightComponent : public UCameraWeightComponent
{
    float m_fFixedWeight;

};

struct FStateWeight
{
    float m_fTargetWeight;
    float m_fInDuration;
    float m_fOutDuration;

};

class UFightingCameraWeightComponent : public UFixedCameraWeightComponent
{
    bool m_bClampAdditiveWeight;
    float m_fMaxAbsAdditiveWeight;
    FStateWeight m_fightingStateWeights;
    float m_fDialogInvolvedAdditiveWeight;
    float m_fDialogSpeakerAdditiveWeight;

    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
};

class UAIFightingCameraWeightComponent : public UFightingCameraWeightComponent
{
    float m_fDamageValidityWindow;
    bool m_bIgnoreFriendlyDamage;
    class UCurveFloat* m_WeightByDamageCurve;
    FStateWeight m_ticketStateWeight;

};

struct FVariableWeightEnumHandler : public FSCUserDefinedEnumHandler
{
};

struct FTurnAnimation
{
    FAnimContainer m_animContainer;
    ESCRotationWay m_eRotationWay;

};

struct FTurnAnimationArray
{
    TArray<FTurnAnimation> m_TurnAnimations;

};

struct FPhasesTransitionObjectCacheEntry
{
    class UAIPhaseTransition* m_Object;

};

struct FPhasesTransitionObjectCache
{
    TArray<FPhasesTransitionObjectCacheEntry> m_Cache;

};

struct FAttackRequest
{
    InputAction m_eInputAction;
    EQuadrantTypes m_eCurrentQuadrant;
    FName m_AttackName;
    FName m_ComboState;
    class UCombo* m_Combo;
    int32 m_iComboNodeID;
    float m_fStartRatio;
    class UAttackDB* m_AttackDB;

};

struct FHitRequest
{
    FAttackRequest m_AttackRequest;
    FHitResult m_EnvironmentImpact;
    TWeakObjectPtr<class AActor> m_Instigator;
    TWeakObjectPtr<class AActor> m_InstigatorItem;
    FVector m_InstigatorDirection;
    EInstigatorType m_eInstigatorType;
    TWeakObjectPtr<class AActor> m_Target;
    FHitBox m_HitBox;
    ELimbs m_eAttackerLimb;
    uint8 m_uiDamageID;
    uint8 m_uiAttackOrderID;
    FVector m_vDamageDir;
    bool m_bCastBoundariesRelativeToInstigator;
    TWeakObjectPtr<class AUsableItem> m_UsableItemIntermediate;
    bool m_bMirror;
    FGameplayTagContainer m_AttackProperties;
    uint8 m_uiHitBoxID;
    bool m_bCanBeDefended;

};

struct FAppliedHitImpact
{
    float m_fDamage;
    float m_fStructureDamage;
    float m_fSuperDizzyDamage;
    uint8 m_iNbFrameStuned;
    bool m_bUseKnockBackDistance;
    float m_fKnockBackDistance;
    int32 m_iFreezeFrames;

};

struct FAppliedDeflectImpact : public FAppliedHitImpact
{
    class UCurveFloat* m_KnockBackDynamic;
    float m_fSelfStructureDamage;
    float m_fSelfSuperDizzyDamage;

};

struct FImpactResult
{
    bool m_bIsValid;
    float m_fDamage;
    bool m_bGuardBreak;
    bool m_bSuperDizzyAlreadyAvailable;
    bool m_bSuperDizzyAvailable;
    class AActor* m_Victim;
    ESCCardinalPoints m_eImpactCardinalPoint;
    ESCCardinalPoints m_eImpactCardinalPointInVictimSpace;
    bool m_bAlreadyGuardBroken;
    bool m_bCriticalHit;
    EHeight m_eHeight;
    EImpactType m_eImpactType;
    EGuardType m_eGuardType;
    FAppliedHitImpact m_HitImpact;
    FAppliedDeflectImpact m_DeflectImpact;
    float m_fInstigatorStructureBeforeImpact;
    float m_fHitAnimationTimeElapsedDuringFreeze;
    bool m_bLethal;
    FVector m_vKnockbackPosition;
    EQuadrantTypes m_eTowardInstigatorQuadrant;
    EQuadrantTypes m_eDefenderQuadrant;
    bool bPushedBlockForce;
    FVector m_vImpactLocation;
    FVector m_vImpactDir;
    float m_fInstigatorFreezeDuration;
    float m_fStunTime;
    bool m_bResilienceImpact;
    FBoneReference m_OptionalImpactBone;
    bool m_bPlaySFX;
    bool m_bPlayDeathSFX;
    bool m_bPlayVFX;
    bool m_bAvoidDizzy;

};

struct FHitDescription
{
    FHitRequest m_Request;
    FHitResult m_Result;
    FImpactResult m_ImpactResult;

};

struct FAIPhaseNodeLink
{
    FGuid m_Guid;
    FName m_Name;

};

struct FAIPhaseNodeSoftLink : public FAIPhaseNodeLink
{
    TSoftObjectPtr<UAIPhaseScenario> m_PhaseScenario;

};

struct FAIPhaseNodeHardLink : public FAIPhaseNodeLink
{
    class UAIPhaseScenario* m_Scenario;

};

struct FAIDefenseTargetAttackInfos
{
    EAIDefendedAttackType m_eType;
    uint8 m_uiHitBoxIndex;
    uint8 m_uiOrderID;

};

class UAIFightingComponent : public UAIComponent
{
    FAIFightingComponentOnOpponentAvoidedAttack OnOpponentAvoidedAttack;
    void OnOpponentAvoidedAttack(EAvoidType _eAvoidType, const FHitRequest& _hitRequest);
    FAIFightingComponentOnComboFinished OnComboFinished;
    void DynamicMulticast();
    FAIFightingComponentOnComboStarted OnComboStarted;
    void DynamicMulticast();
    FAIFightingComponentOnAICalledForHelp OnAICalledForHelp;
    void DynamicMulticast();
    FAIFightingComponentOnAIPhaseChangedDynamic OnAIPhaseChangedDynamic;
    void OnAIPhaseChangedDynamic(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    FAIFightingComponentOnStartFetchingObject OnStartFetchingObject;
    void FetchObjectDelegate(class AActor* _actor, float _fetchDistance);
    FAIFightingComponentOnStartThrowingObject OnStartThrowingObject;
    void ThrowObjectDelegate(class AActor* _objectThrown, class AActor* _targetActor);
    FAIFightingComponentOnCombatRoleChangedDynamic OnCombatRoleChangedDynamic;
    void OnCombatRoleChangedDynamic(ESCAICombatRoles NewCombatRole, ESCAICombatRolesChangeReason ChangeReason);
    FAIFightingComponentOnGlobalBehaviorChangedDelegate OnGlobalBehaviorChangedDelegate;
    void AIGlobalBehaviorChangedDynamic(EGlobalBehaviors NewBehavior, const bool FromDialog);
    FAIFightingComponentOnAbandonning OnAbandonning;
    void MulticastDelegateActorDyn(class AActor* _actor);
    FAIFightingComponentOnPostGlobalBehaviorChangedDelegate OnPostGlobalBehaviorChangedDelegate;
    void AIGlobalBehaviorChangedDynamic(EGlobalBehaviors NewBehavior, const bool FromDialog);
    FAIFightingComponentOnSeenEnemyDeath OnSeenEnemyDeath;
    void AINotify(class UAIFightingComponent* Who);
    FAIFightingComponentOnEnemyRevivalDelegate OnEnemyRevivalDelegate;
    void AINotify(class UAIFightingComponent* Who);
    FAIFightingComponentOnKillSpare OnKillSpare;
    void AINotify(class UAIFightingComponent* Who);
    FAIFightingComponentOnDefensePreparedDelegate OnDefensePreparedDelegate;
    void DynamicMulticast();
    FAIFightingComponentOnDefenseStarted OnDefenseStarted;
    void DynamicMulticast();
    FAIFightingComponentOnDefenseCancelled OnDefenseCancelled;
    void DynamicMulticast();
    FAIFightingComponentOnDefenseFinished OnDefenseFinished;
    void DynamicMulticast();
    FAIFightingComponentOnPendantChargesAdded OnPendantChargesAdded;
    void PendantCharge(int32 _iNumOfCharges);
    FAIFightingComponent_OnEnemyOrderStateChanged m_OnEnemyOrderStateChanged;
    void AIEnemyOrderStateChanged(EOrderState _eOrderState, EOrderType _eOrderType);
    FAIFightingComponentOnDeathCounterOnKilledChanged OnDeathCounterOnKilledChanged;
    void DeathCounter(int32 _iCounterDecrease, bool _bReset);
    FAIFightingComponentOnPrefightLowStructureStateChanged OnPrefightLowStructureStateChanged;
    void PrefightLowStructureChanged(bool _bForcedLowStructure);
    FAIFightingComponentOnMCDominationStepChangedDelegate OnMCDominationStepChangedDelegate;
    void AIDominationStepChanged(EMcDominationGaugeSteps _eNewStep);
    int32 m_iDeathCounterDecreaseWhenKilled;
    bool m_bDeathCounterResetWhenKilled;
    float m_fChainedDodgeDelay;
    float m_fLateralDodgeAngle;
    float m_fMemoryValidity;
    float m_fPickupMaxDist;
    float m_fThreatMinDistForPickup;
    float m_fAlertPropagationDistance;
    bool m_bCanBeAlerted;
    TArray<FVariableWeightEnumHandler> m_DisabledVariableWeightsOnSpawnerIdle;
    uint8 m_uiIdleIndex;
    FAnimContainer m_SurprisedAnimation;
    FAnimContainer m_HeavySurprisedAnimation;
    FTurnAnimationArray m_TurnAnimations;
    TArray<class UBlendSpace1D*> m_AbandoningBlendSpaces;
    FFloatRange m_fAbandoningPlayRateRange;
    TWeakObjectPtr<class UAIPhaseScenario> m_PhaseScenario;
    int32 m_iCurrentPhaseNodeIndex;
    FPhasesTransitionObjectCache m_PhaseTransitionObjects;
    TArray<class UAIPhaseTransition*> m_CurrentPhaseTransitions;

    void ThrowObjectDelegate__DelegateSignature(class AActor* _objectThrown, class AActor* _targetActor);
    void PrefightLowStructureChanged__DelegateSignature(bool _bForcedLowStructure);
    void PendantCharge__DelegateSignature(int32 _iNumOfCharges);
    void OnTargetHitDuringAttack(const FHitDescription& _hitDescription);
    void OnOrderTraversalEnded(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnOrderGrabbedStarted(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnOrderGrabbedEnded(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnOrderAvoidedStarted(uint8 _uiOrderId, class UOrderComponent* _OrderComponent);
    void OnOrderAttackStarted(uint8 _uiOrderId, class UOrderComponent* _OrderComponent);
    void OnOpponentAvoidedAttack__DelegateSignature(EAvoidType _eAvoidType, const FHitRequest& _hitRequest);
    void OnMoveStatusChanged(class UFightingMovementComponent* _movementComponent);
    void OnAIPhaseChangeSequenceFinished();
    void OnAIPhaseChangedDynamic__DelegateSignature(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void HittedDetection(const FHitDescription& _hitDescription);
    void FetchObjectDelegate__DelegateSignature(class AActor* _actor, float _fetchDistance);
    void DeathCounter__DelegateSignature(int32 _iCounterDecrease, bool _bReset);
    void BPF_UnspawnCarriedProps();
    EDefenseTactics BPF_TestContextualDefense(class UAttackDB* _attackToTest);
    bool BPF_SwitchToPhaseBySoftLink(const FAIPhaseNodeSoftLink& _phaseLink);
    void BPF_SwitchToPhaseByName(FName _name);
    bool BPF_SwitchToPhaseByHardLink(const FAIPhaseNodeHardLink& _phaseLink);
    void BPF_SwitchToPhase(int32 _iPhase);
    void BPF_SwitchToIdle(bool _bEnabledPerception);
    void BPF_SwitchToFriendly(const bool _bFromDialog);
    void BPF_SwitchToCombatRole(ESCAICombatRoles _eNewRole);
    void BPF_SwitchToAbandoning(const bool _bFromDialog);
    void BPF_SpawnCarriedProps();
    void BPF_SetStructureGaugeVisible(bool _bVisible);
    void BPF_SetPhaseMesh(int32 _iPhaseNodeIndex);
    void BPF_SetPerceptionEnabled(bool _bEnabled);
    void BPF_SetPathPatrol(class APathPatrol* _newpathPatrol);
    void BPF_SetHealthGaugeVisible(bool _bVisible);
    void BPF_SetDeathCounterResetWhenKilled(bool _bReset);
    void BPF_SetDeathCounterDecreaseWhenKilled(int32 _iCount);
    void BPF_SetCarriedPendantCharges(int32 _iCharges);
    void BPF_SetCanUseReactionAction(bool _bValue);
    void BPF_SetCanTakeAttackTicket(bool _bValue);
    void BPF_SetCanDefend(bool _bValue);
    void BPF_RespawnStartupWeapon();
    void BPF_ResetComboToDefault(FName _nameOfDifficultyLevel);
    void BPF_ResetAvoidAbilityToDefault();
    void BPF_RemoveCarriedProps(int32 _iIndex);
    void BPF_PushContextualDefenseOverride(FName _overrideName, class UAIContextualDefense* _contextualDefenseOverride, EAIContextualDefenseType _eType);
    void BPF_PopContextualDefenseOverride(FName _overrideName, EAIContextualDefenseType _eType);
    void BPF_OverrideCombo(FName _nameOfDifficultyLevel, class UCombo* _combo);
    void BPF_OverrideAvoidAbility(const TSubclassOf<class UAvoidAbility>& _avoidAbility);
    bool BPF_IsStructureGaugeVisible();
    bool BPF_IsInPrefightLowStructure();
    bool BPF_IsInLastManPhase();
    bool BPF_IsHealthGaugeVisible();
    bool BPF_HasSpawnerGroupConfrontationDialog();
    bool BPF_HasPathPatrol();
    bool BPF_HasAttackTicket();
    int32 BPF_GetXPBonus();
    EDefenseTactics BPF_GetPreparedDefenseTactic();
    int32 BPF_GetNbOccurencesInStructureBroken();
    EAlertedReason BPF_GetLastAlertedReason();
    EGlobalBehaviors BPF_GetGlobalBehavior(bool _bWithTimer);
    class AActor* BPF_GetEnemy();
    void BPF_GetDefenseTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos);
    void BPF_GetDefenseLastDefendedTargetAttackInfos(FAIDefenseTargetAttackInfos& _outTargetAttackInfos);
    int32 BPF_GetCurrentPhaseNodeIndex();
    void BPF_GetCurrentPhase(FName& _outName, class UAIPhaseScenario*& _outScenario);
    EDefenseTactics BPF_GetCurrentDefenseTactic();
    ESCAICombatRoles BPF_GetCurrentCombatRole();
    TArray<class AActor*> BPF_GetCarriedProps();
    int32 BPF_GetCarriedPendantCharges();
    bool BPF_GetCanUseReactionAction();
    class UObject* BPF_GetBlackBoardValueAsObject(FName _key);
    void BPF_ForgetEnemy();
    void BPF_ForceEnemyReactionBehavior(EGlobalBehaviors _eGlobalBehavior);
    void BPF_ForceEnemy(class AActor* _Enemy, EGlobalBehaviors _eForcedDetectionReaction);
    bool BPF_CanTriggerSpare();
    void BeforeGhostDamagesReset();
    void AINotify__DelegateSignature(class UAIFightingComponent* Who);
    void AIGlobalBehaviorChangedDynamic__DelegateSignature(EGlobalBehaviors NewBehavior, const bool FromDialog);
    void AIEnemyOrderStateChanged__DelegateSignature(EOrderState _eOrderState, EOrderType _eOrderType);
    void AIDominationStepChanged__DelegateSignature(EMcDominationGaugeSteps _eNewStep);
};

class UAIFightingStateBTTask : public UAIBTTaskNode
{
    EFightingState m_eFightingState;

};

class UAIHelpers : public UBlueprintFunctionLibrary
{

    void FightingAIDelegate__DelegateSignature(class UAIFightingComponent* AIComponent);
    FSCAITicketEnum Conv_SCEnumToAITicketEnum(const FSCUserDefinedEnumHandler& _scEnum);
    class UAIFightingComponent* Conv_PawnToAiComponent(class APawn* _pawn);
    class UAIFightingComponent* Conv_AISpawnerToAiComponent(class AAISpawner* _spawner);
    class AFightingCharacter* Conv_AiComponentToFightingCharacter(class UAIFightingComponent* _aiComponent);
    bool BPF_TestConditionInstances(const TArray<FAIConditionClassInstance>& _conditions, const class AFightingCharacter* _owner);
    bool BPF_TestConditionInstance(const FAIConditionClassInstance& _condition, const class AFightingCharacter* _owner);
    void BPF_SetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, class UAIFightingComponent* _resquester, float _fTimer);
    void BPF_SetAttackJokerSituationsEnabled(const TArray<EAIAttackTicketJokerSituation>& _situationsToSet, class UAIFightingComponent* _requester, bool _bEnabled);
    void BPF_SetAllAttackJokerSituationsEnabled(class UAIFightingComponent* _requester, bool _bEnabled);
    void BPF_ResetTicketsCooldown(const FSCAITicketEnum& _ticketEnum, class UAIFightingComponent* _resquester);
    void BPF_ResetAllTicketsCooldown(class UAIFightingComponent* _requester);
    bool BPF_RequestPassiveAttackTicket(const FSCAITicketEnum& _ticketEnum, class UAIFightingComponent* _resquester);
    void BPF_ReleaseOwnedAttackTicket(class UAIFightingComponent* _resquester);
    void BPF_ReleaseAttackTicket(const FSCAITicketEnum& _ticketEnum, class UAIFightingComponent* _resquester);
    bool BPF_ProjectPointToNavigation(const class UObject* _worldCtxt, const FVector& _vPoint, FVector& _vOutProjected, const FVector& _vExtent);
    bool BPF_IsPassiveAttackTicketAvailable(const FSCAITicketEnum& _ticketEnum, class UAIFightingComponent* _resquester);
    bool BPF_IsCharacterFrozenBySanctuary(const class AFightingCharacter* _AICharacter);
    bool BPF_IsCharacterAssignedToSanctuary(const class AFightingCharacter* _AICharacter);
    bool BPF_IsAttackerRegisteredInCombatForTarget(const class AActor* _attackerToTest, const class AActor* _targetActor);
    bool BPF_IsAnySanctuaryActive();
    bool BPF_HasAttackTicket(class UAIFightingComponent* _resquester, const FSCAITicketEnum& _ticket);
    void BPF_GetTicketCooldownRemaining(const class UAIFightingComponent* _requester, const FSCAITicketEnum& _ticketEnum, float& _fOutMin, float& _fOutMax, int32& _iOutTicketsCount);
    void BPF_GetOwnedAttackTickets(class UAIFightingComponent* _resquester, TArray<FSCAITicketEnum>& _outOwnedTickets);
    int32 BPF_GetCurrentNumberOfAIAttackers(const class AActor* _targetActor);
    void BPF_ForceAssignAICharacterToSanctuary(const class UAIFightingComponent* _aiFightingComponent);
    void BPF_AddDomination(float _fDominationBonus);
};

class UAIIdleDB : public UDataAsset
{
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    ESCRotationWay m_eSouthRotationWay;
    bool m_bCanPlayFidget;
    ELookAtApplyMode m_eLookAtApplyMode;

};

class UAIInfluenceNode : public UObject
{
    int32 m_iVerNum;
    TArray<class UAIInfluenceNode*> m_LinkedNodes;
    int32 m_iNodeIndex;

};

class UAIInfluence_TestSequence : public UAIInfluenceNode
{
    TArray<class UAIInfluenceTest*> m_Tests;
    float m_fProbability;

};

class UAIInfluenceTest : public UAIInfluenceNode
{
    bool m_bInverted;

};

class UAILaunchAttackTriggerableAction : public USCAITriggerableActions
{
    FSCAITicketEnum m_ComboStartNodeEnumValue;
    bool m_bCheckCanAttack;
    bool m_bTestTicketAvailable;
    bool m_bResetTicketCooldown;

};

struct FAISituationNamedActor
{
    FName m_Name;

};

class UAIManagerHelpers : public UBlueprintFunctionLibrary
{

    void BPF_SetWantedArchetypeType(EArchetypeType _eWantedType);
    void BPF_SetAIPositioningOptionToggled(const class AActor* _targetActor, EAIPositioningOption _eOption, bool _bToggled);
    bool BPF_IsAIPositioningOptionToggled(const class AActor* _targetActor, EAIPositioningOption _eOption);
    void BPF_GetRemainingAisInActiveSituations(TArray<class UAIFightingComponent*>& _outAiComponents);
    int32 BPF_GetRawLastManGauge();
    class AAIDirectorActor* BPF_GetDirectorActor();
    float BPF_GetDifficultyLevelGauge();
    void BPF_GetAllAiSituations(TArray<class AAISituationActor*>& _outAiSituations);
    void BPF_GetAllActiveAiSituations(TArray<class AAISituationActor*>& _outAiSituations);
    class AActor* BPF_GetAiSituationNamedActor(const class UAIFightingComponent* _aiComponent, const FAISituationNamedActor& _name);
    void BPF_GetAiSituationActors(TArray<class AAISituationActor*>& _outAiSituations, const class UAIFightingComponent* _aiComponent, bool _bIncludeAlertedSpawners);
    void BPF_AllowStructureDamageOnAI(bool _bAllowStructureDamage);
};

struct FSCAITriggerableActionsArray
{
    TArray<class USCAITriggerableActions*> m_Actions;

};

struct FAIConditionedAction
{
    TArray<class UComboTransitionCondition*> m_Conditions;
    TSubclassOf<class USCAiAction> m_ActionClass;
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    FSCAiActionClassInstance m_Action;

};

struct FAIConditionedActionArray
{
    TArray<FAIConditionedAction> m_Actions;

};

struct FAIAttackReaction
{
    TArray<class UComboTransitionCondition*> m_Conditions;
    TArray<FAIConditionClassInstance> m_ConditionsArray;
    bool m_bCanInterruptMoveToAttack;
    bool m_bCanInterruptAttackWhenAvailable;
    bool m_bCanEndComboAfterOnGoingAttack;
    bool m_bCanInterruptPassiveTicket;
    FSCAITicketEnum m_TicketNameEnumValue;

};

struct FAIActionReaction : public FAIConditionedAction
{
    float m_fTestFrequency;
    bool m_bCanCancelPendingActions;
    bool m_bOnlyWhenAlerted;

};

class UAIMasterArchetype : public UObject
{
    TMap<class EDefenseTactics, class FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    TMap<class EDefenseTactics, class FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    TArray<FAIAttackReaction> m_ReactionAttacks;
    TArray<FAIActionReaction> m_ReactionActions;

};

class AAimingBillboardActor : public ASCActor
{
    FAimingBillboardActorOnSelectionChangedDyn OnSelectionChangedDyn;
    void OnSelectionChangedDyn(bool _bSelected, class AAimingBillboardActor* aimingBillboard);
    class UBoxComponent* m_BoxComponent;
    bool m_bDebug;

    void OnSelectionChangedDyn__DelegateSignature(bool _bSelected, class AAimingBillboardActor* aimingBillboard);
    float BPF_GetScore();
    class AActor* BPF_GetActorOwner();
    FVector2D BPE_ComputeSize();
    float BPE_ComputeScore(FVector _v3DPointToTest);
};

class UAIMoveToBTTask : public UBTTask_MoveTo
{
    FBlackboardKeySelector AcceptableRadiusKey;
    FBlackboardKeySelector FilterClassKey;
    bool m_bCanPredictStopTransition;
    bool m_bOverridePacingGoalActor;

};

struct FAICustomBehaviorTree
{
    FGameplayTag m_DynamicBehaviorGameplayTag;
    class UBehaviorTree* m_BehaviorToUse;

};

struct FAICustomBehaviorTreeList
{
    TArray<FAICustomBehaviorTree> m_DynamicBehaviorList;

};

struct FPhaseTransitionNodeHandler
{
    class UAIPhaseTransition* m_TransitionObject;
    bool m_bNeedsLastManGaugeFull;
    FAnimContainer m_PhaseTransitionAnimContainer;
    TSubclassOf<class USynchronizedAttackHitActionLauncher> m_SyncHitActionLauncher;
    class ULevelSequence* m_LevelSequence;
    EAIPhaseLevelSequenceTransform m_LevelSequenceTransform;
    FAISituationNamedActor m_LevelSequenceTransformActor;
    int32 m_iChildNodeIndex;
    bool m_bResetHealth;
    bool m_bResetStructure;
    bool m_bResetSuperDizzy;
    bool m_bResetCurrentAIActions;

};

struct FPhaseNodeHandler
{
    FGuid m_Guid;
    FName m_Name;
    FAIPhaseNodeHardLink m_Link;
    TSubclassOf<class UArchetypeAsset> m_PhaseArchetype;
    TSubclassOf<class UArchetypeAsset> m_WeakerPhaseArchetype;
    TSubclassOf<class UArchetypeAsset> m_StrongerPhaseArchetype;
    class USkeletalMesh* m_OverrideSkeletalMesh;
    EAIPhaseNodeType m_eType;
    FAICustomBehaviorTreeList m_CustomBehaviorTrees;
    FName m_DialogToLaunch;
    TArray<FPhaseTransitionNodeHandler> m_PhaseTransitions;

};

class UAIPhaseScenario : public UObject
{
    TSubclassOf<class UArchetypeAsset> m_rootPhase;
    TArray<FPhaseNodeHandler> m_PhaseNodes;

    FName BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex);
};

class UAIPhaseNodeHelper : public UBlueprintFunctionLibrary
{

    int32 BPF_GetPhaseNodeIndex(const FAIPhaseNodeHardLink& _nodeHardLink);
};

class UComboEvent : public UObject
{

    FString BPE_GetLog();
    void BPE_Execute(class AFightingCharacter* _character);
};

class UComboEventAIGotoPhase : public UComboEvent
{
    FAIPhaseNodeSoftLink m_Link;
    TArray<FSCAITicketEnum> m_ResetTickets;

};

class UAIPhaseTransition : public UObject
{

    bool BPF_GotoNextPhase();
    void BPE_OnParentPhaseStarted(class UAIFightingComponent* _aiComponent);
    void BPE_OnParentPhaseEnded(class UAIFightingComponent* _aiComponent);
    FString BPE_GetLog();
};

class UAIPhaseTransitionTakedown : public UAIPhaseTransition
{
};

class UAIPhaseTransitionFocusAttackVictim : public UAIPhaseTransition
{
    class UVitalPointData* m_VitalPoint;

};

class UAIPhaseTransitionHealthChange : public UAIPhaseTransition
{
    FSCMathExpressionFloat m_Expression;

    void OnDeathDismiss(class UHealthComponent* _healthComponent);
};

class UAIPhaseTransitionDifficultyLevelChanged : public UAIPhaseTransition
{
    FSCMathExpressionFloat m_Expression;

};

class UAIPhaseTransitionPhaseDuration : public UAIPhaseTransition
{
    float m_fDuration;

    void OnComboFinished();
};

class UAIPhaseTransitionSituationAiCountChange : public UAIPhaseTransition
{
    FSCMathExpressionInteger m_Expression;

};

class UAIPhaseTransitionRoleChange : public UAIPhaseTransition
{
    ESCAICombatRoles m_eRole;

};

class UAIPhaseTransitionBossKill : public UAIPhaseTransition
{

    void OnKillSpare(class UAIFightingComponent* _aiComponent);
};

class UAIPhaseTransitionBossSpare : public UAIPhaseTransitionBossKill
{
};

class UAIPhaseTransitionDialogCompleted : public UAIPhaseTransition
{
    FName m_DialogToWaitFor;

    void OnInteractiveDialogInterrupted();
};

class UWGLevelSequence : public USCLevelSequence
{

    void BPF_SetCharacterPickedObjectVisibility(FName _roleName, bool _bVisible);
    void BPF_PushInputContext();
    void BPF_PopInputContext();
    class UWGLevelSequenceDirectorData* BPF_GetWGData();
};

class UAIPhaseTransitionSequence : public UWGLevelSequence
{

    void BPF_OnLevelTransition(int32 _iTransitionIndex);
    void BPF_NotifyEvent(EAIPhaseTransitionEvents _event);
};

struct FAIPositionningPOI
{
    FFloatRange m_EnemyDistanceRange;
    float m_fEnemyDistanceZTolerance;
    bool m_bUseRotation;
    bool m_bKeepLockMoveOnWayToPOI;
    bool m_bCanUseAttackTickets;
    bool m_bCanBecomeDirectOpponent;
    bool m_bJiggle;
    int32 m_eCombatRolesMask;
    float m_fCooldownWhenOccupantLeaves;
    FSCGestureContainer m_GestureAnimations;
    ESCAICombatRoles m_eRoleOnTargetCloserToMinRange;

};

class UAIPositionningPOIComponent : public UActorComponent
{
    FAIPositionningPOI m_Data;
    TArray<class AAISpawner*> m_AllowedSpawners;

    void BPF_SetData(const FAIPositionningPOI& _data, const TArray<class AAISpawner*>& _allowedSpawners);
};

class UAIReactionActionService : public UBTService
{
};

class UAIReactionAttackService : public UBTService
{
};

class UAISanctuaryComponent : public UActorComponent
{
    FInt32Range m_RangeNbOfEnnemies;
    bool m_bSanctuaryHasLimitedDuration;
    float m_fSanctuaryDuration;
    bool m_bSendBarkEventWhenSanctuaryIsSafe;

};

class AAISanctuaryVolume : public ASCVolume
{
    class UAISanctuaryComponent* m_SanctuaryComponent;

    void OnSanctuaryAssignmentUpdated();
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
};

class UAISenseConfig_SCClose : public UAISenseConfig_Sight
{
};

struct FSpawnerGroupSoundData
{
    float m_FightStateOffDelay;
    TArray<int32> m_MeleeStateLvlSplits;
    TArray<int32> m_MeleeDangerLvlSplits;
    float m_MeleeFightStateOffDelay;
    int32 m_iMeleeThreshold;
    bool m_bIsThreatEnabled;
    TArray<class ASpawnerGroup*> m_DependantGroups;
    TArray<class AAISituationActor*> m_DependantSituations;

};

struct FSCImpostorForSave
{
    FName m_PoolName;
    TSoftObjectPtr<USkeletalMesh> m_ImpostorSkeletalMesh;
    FTransform m_Transform;
    FName m_StreamLevelName;
    FName m_VoiceArchetypeSwitchName;
    ECharacterGender m_eGender;
    FName m_VoiceVariationSwitchValue;

};

struct FAIPhaseTransitionData
{
    int32 m_iNewPhase;
    int32 m_iPreviousPhase;
    FName m_ArchetypeName;
    class ALevelSequenceActor* m_SequenceActor;

};

class AAISituationActor : public AActor
{
    FAISituationActorOnSituationActivated OnSituationActivated;
    void AISituationDynamicMulticastDelegate(class AAISituationActor* SituationChanged);
    FAISituationActorOnSituationResolved OnSituationResolved;
    void AISituationDynamicMulticastDelegate(class AAISituationActor* SituationChanged);
    FAISituationActorOnAnyAiBehaviorChanged OnAnyAiBehaviorChanged;
    void AISituationGlobalBehaviorChangedDynamic(class AAISituationActor* SituationChanged, const class UAIFightingComponent* AI, EGlobalBehaviors NewBehavior);
    FAISituationActorOnSituationSpawnedDynamic OnSituationSpawnedDynamic;
    void AISituationDynamicMulticastDelegate(class AAISituationActor* SituationChanged);
    FAISituationActorOnAISpawned OnAISpawned;
    void EventWithCharacterDynamic(class ABaseCharacter* _character);
    FAISituationActorOnAIDeath OnAIDeath;
    void EventWithCharacterDynamic(class ABaseCharacter* _character);
    bool m_bHasActiveLDVisibilityOverride;
    class USCSaveGameComponent* m_SaveComponent;
    TArray<class ASpawnerGroup*> m_AssociatedSpawnerGroups;
    TArray<class ALockableDoor*> m_AssociatedLockableDoors;
    TArray<class AActor*> m_PositioningPOIs;
    bool m_bIsLastManAllowed;
    bool m_bForceLastMan;
    int32 m_iMinKillBeforeLastMan;
    int32 m_iLastManGaugeIncrementValue;
    int32 m_iLastManMaxOccuranceCount;
    FSpawnerGroupSoundData m_SoundData;
    bool m_bRepeatBarksWhenExhausted;
    bool m_bEnableMaxImpostorsLimit;
    TArray<FName> m_SpawnerGroupClearedPathName;
    TArray<FSCImpostorForSave> m_ImpostorToSpawnOnSaveLoaded;
    bool m_bSpawnRequestedOnSaveLoaded;
    int32 m_iCurrentLastManOccuranceCount;
    bool m_bAutoSpawnedOnSaveLoaded;
    EGlobalBehaviors m_eBehaviorToSetOnSpawn;
    TWeakObjectPtr<class AActor> m_targetForHostileBehaviorsOnSpawn;

    void OnUpdatedFromSaveCallback();
    void EventWithCharacterDynamic__DelegateSignature(class ABaseCharacter* _character);
    FAISituationNamedActor Conv_NameToAISituationNamedActor(FName _name);
    void BPF_UnSpawnSituation();
    void BPF_SwitchToFriendly(bool _bFriendly);
    void BPF_SwitchToAbandoning();
    void BPF_SpawnSituation(EGlobalBehaviors _eBehaviorToSetOnSpawn, class AActor* _targetForHostileBehaviors, bool _bForce, bool _bSkipBark);
    int32 BPF_GetSpawnersUsedCount(bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed);
    void BPF_GetSpawnersUsed(TArray<class AAISpawner*>& _outSpawners, bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed);
    void BPF_GetSpawnerGroupsUsed(TArray<class ASpawnerGroup*>& _outSpawnerGroups);
    class AActor* BPF_GetNamedActor(const FAISituationNamedActor& _namedActor);
    int32 BPF_GetAis(TArray<class UAIFightingComponent*>& _outAiComponents, bool _bIncludeAlertedSpawners, bool _bAppendToArray, bool _bIncludeAbandonningAIs);
    void BPF_EnableHitOnAI(bool _bEnable);
    void BPF_ChangeAiPerception(bool _bActivate);
    bool BPF_AreAllSpawnerGroupsCleared();
    void BPF_AddNamedActor(class AActor* _actor, FName _name);
    void BPE_UpdateLDVisibilityOverride(bool _bVisibility);
    void BPE_OnStartAIPhaseChanged(class AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    void BPE_OnInteractiveDialogInterrupted();
    void BPE_OnEndAIPhaseChanged(class AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    void BPE_OnAIPhaseChangeSequenceFinished(class AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    void BPE_OnAIFightingStateChanged(class AFightingCharacter* _fightingChar, EFightingState _ePreviousFightingState, EFightingState _eNewFightingState);
    void AlertLevelChangedCallback(EAlertLevel _eNewLevel);
    void AISituationGlobalBehaviorChangedDynamic__DelegateSignature(class AAISituationActor* SituationChanged, const class UAIFightingComponent* AI, EGlobalBehaviors NewBehavior);
    void AISituationDynamicMulticastDelegate__DelegateSignature(class AAISituationActor* SituationChanged);
};

class UAISituationVisualizerComponent : public UActorComponent
{
};

class UAISizeDb : public UDataAsset
{
    FVector m_vScale;
    TArray<FVector> m_TargetRelativeLocation;

};

class UAIWallJumAttack_EQContext_ItemWJStartLocation : public UEnvQueryContext
{
};

class UHitOrderService : public UOrderService
{
    FHitBox m_Hit;
    bool m_bFreezeInstigator;
    bool m_bIgnoreOwner;
    bool m_bOrderTargetIsInstigator;
    bool m_bIgnoreTarget;
    bool m_bPersistIgnoredActorsFromPreviousOrderService;
    bool m_bUseBoneLocationFromAnim;
    bool m_bUpdateHitboxVelocity;

    void HitIgnoredActors__DelegateSignature(TArray<class AActor*>& _ignoredActors);
    class AActor* BPE_GetInstigator(const FBPOrderServiceInstance& _orderServiceInstance);
    void BPE_GetIgnoredActors(const FBPOrderServiceInstance& _orderServiceInstance, TArray<class AActor*>& _actors);
    void BPE_GetHitBoxWithLocation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation, FVector& _location);
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation);
};

class UAIWallJumpAttackHitOrderService : public UHitOrderService
{
};

struct FComboAIConditionFindActorsEnvQueryResult
{
    TWeakObjectPtr<class AActor> m_Actor;
    FVector m_vLocation;

};

class UComboAIConditionFindActorsEnvQuery : public UAIComboCondition
{
    FComboAIConditionFindActorsEnvQueryOnEnvQueryFinished OnEnvQueryFinished;
    void FindActorsEnvQueryDelegate(const TArray<FComboAIConditionFindActorsEnvQueryResult>& _result);
    class UEnvQuery* m_QueryTemplate;
    float m_fQueryResultLifetime;
    bool m_bResetResultsOnFailure;
    TArray<FAIDynamicParam> m_QueryParameters;

    void FindActorsEnvQueryDelegate__DelegateSignature(const TArray<FComboAIConditionFindActorsEnvQueryResult>& _result);
    void BPE_FillQueryParameters(TArray<FAIDynamicParam>& _outParams);
};

class UComboAIConditionFindActorEnvQuery : public UComboAIConditionFindActorsEnvQuery
{
    FName m_StoreResultInBlackBoardKey;
    FName m_StoreResultInBlackBoardKeyVector;

};

class UAIWallJumpFindActorToTargetCondition : public UComboAIConditionFindActorEnvQuery
{
    TSubclassOf<class UAIActionWallJumpAttack> m_AttackAction;

    TSubclassOf<class UAIActionWallJumpAttack> BPF_GetAttackActionClass();
    class UAIActionWallJumpAttack* BPF_GetAttackAction();
};

struct FWaveParams
{
    FName m_WaveTitle;
    TArray<class AAIArenaSpawner*> m_WaveSpawners;

};

class AAIWaveDirector : public ASCActor
{
    FAIWaveDirectorOnWaveSpawnCompleted OnWaveSpawnCompleted;
    void WaveRelatedEvent(FName _WaveName);
    FAIWaveDirectorOnWaveKilled OnWaveKilled;
    void WaveRelatedEvent(FName _WaveName);
    FAIWaveDirectorOnAIDownFromWave OnAIDownFromWave;
    void WaveSpawnerRelatedEvent(FName _WaveName, class AAISpawner* _spawner);
    EFirstWaveSpawnMethod m_eFirstWaveSpawnMethod;
    FName m_FirstWavePreset;
    TArray<FWaveParams> m_WaveParams;
    TArray<class ASCPlayerVolume*> m_FirstWaveSpawnVolumes;
    int32 m_iMaxNumberOfAIsSpawned;
    int32 m_iWaveIncrementalIndex;

    void WaveSpawnerRelatedEvent__DelegateSignature(FName _WaveName, class AAISpawner* _spawner);
    void WaveRelatedEvent__DelegateSignature(FName _WaveName);
    void OnPlayerOverlapSpawningVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool BPF_SpawnWaveByName(FName _WaveName, FName _preset);
    bool BPF_SpawnNextWave(FName _preset);
    int32 BPF_GetRemainingAIsInWaves();
};

class UAIWaveDirectorVisualizerComponent : public UActorComponent
{
};

class AAIWaveRefillDirector : public ASCActor
{
    TArray<TSoftObjectPtr<AAIWaveSpawner>> m_WaveSpawners;
    FAIWaveRefillDirectorOnWaveCompleteDelegate OnWaveCompleteDelegate;
    void OnWaveComplete(int32 _iWaveIndex);
    FAIWaveRefillDirectorOnWaveRelatedSituationComplete OnWaveRelatedSituationComplete;
    void OnWaveRelatedSituationComplete(int32 _iWaveIndex, class AAISituationActor* _relatedSituationActor);
    FAIWaveRefillDirectorOnWaveAndSituationComplete OnWaveAndSituationComplete;
    void OnWaveAndSituationComplete(int32 _iWaveIndex);
    FAIWaveRefillDirectorOnWaveAIDeath OnWaveAIDeath;
    void OnWaveAIDeath(const class AFightingCharacter* _FightingCharacter, EAIArchetype _eArchetype);

    void OnWaveRelatedSituationComplete__DelegateSignature(int32 _iWaveIndex, class AAISituationActor* _relatedSituationActor);
    void OnWaveComplete__DelegateSignature(int32 _iWaveIndex);
    void OnWaveAndSituationComplete__DelegateSignature(int32 _iWaveIndex);
    void OnWaveAIDeath__DelegateSignature(const class AFightingCharacter* _FightingCharacter, EAIArchetype _eArchetype);
    void OnSituationAIDeathDetected(class ABaseCharacter* _character);
    void OnAIDeathDetected(const class AFightingCharacter* _character, const FDamageInfos& _damageInfos);
    void OnAIAbandonDetected(class AActor* _actor);
    void BPF_StartWaveByName(FName _WaveName);
    void BPF_StartWave(int32 _iWaveIndex);
    void BPF_StartNextWave();
    void BPF_SetRefillEnabled(bool _bRequestImmediateRefill);
    void BPF_SetRefillDisabled();
    bool BPF_IsWaveInProgress();
    int32 BPF_GetAIRemainingInCurrentWave();
    void BPE_OnWaveStarted(int32 _iWaveIndex);
    void BPE_OnWavesSequenceComplete();
    void BPE_OnWaveComplete(int32 _iWaveIndex);
    void BPE_OnRelatedAISituationComplete(int32 _iWaveIndex, class AAISituationActor* _situationActor);
    void BPE_OnRefillSequenceStarted(int32 _iCurrentWaveIndex, const TArray<EAIArchetype>& _spawnRequests);
    void BPE_OnRefillSequenceEnded(int32 _iCurrentWaveIndex);
};

class AAIWaveSpawner : public AAISpawner
{
    int32 m_iArchetypesMask;
    FGameplayTag m_WaveTag;
    EGlobalBehaviors m_eGlobalBehaviorAtSpawn;

    void BPF_SetArchetypeToSpawn(EAIArchetype _eArchetype);
};

class IAIWeaponTicketable : public IInterface
{
};

class UAkAudioEventsBTService : public UBTService
{
    class UAkAudioEvent* m_InAkEvent;
    class UAkAudioEvent* m_OutAkEvent;

};

struct FInputPresetsEnumHandler : public FSCUserDefinedEnumHandler
{
};

struct FInputMappingKeySlot
{
    EVirtualAction m_eVirtualAction;
    TArray<FInputActionKeyMapping> m_Actions;
    TArray<FInputAxisKeyMapping> m_Axis;

};

struct FSaveInputAxisKeyMapping
{
    FName m_Key;
    float m_fScale;

};

struct FSaveGameInputMappingKeySlot
{
    EVirtualAction m_eVirtualAction;
    TArray<FName> m_Actions;
    TArray<FSaveInputAxisKeyMapping> m_Axis;

};

struct FInputMappingKeySlotContainer
{
    FInputPresetsEnumHandler m_PresetID;
    class UGenericInputData* m_SubInputData;
    FInputMappingKeySlot m_Key;
    FSaveGameInputMappingKeySlot m_SaveGameKey;

};

class UGenericInputData : public UDataAsset
{
    bool m_bIsStackable;
    bool m_bIsToggleable;
    bool m_bResetToggleOnActivation;
    bool m_bResetToggleOnAnyStackedAction;
    FString m_UISeparator;
    int32 m_uiUIKeyIndex;
    float m_fLifeSpan;
    TArray<InputAction> m_StackSiblings;
    TArray<InputAction> m_StackResetSiblings;
    TArray<InputAction> m_ResetOnEnterStack;
    TArray<InputAction> m_ConsumeOnEnterStack;
    InputAction m_Action;
    bool m_bOnlyFallbackToKeyWithBestPrio;
    bool m_bAlwaysCollideWithOtherInputs;
    bool m_bResetOnAnyActionStacked;
    bool m_bResetWhenFilteredByFallback;
    TArray<FInputMappingKeySlotContainer> m_BaseMappingSlots;
    TArray<class UGenericInputData*> m_Fallbacks;
    class UGenericInputUIData* m_UIData;

};

struct FInputBehaviourStruct
{
    InputBehavior m_Behavior;
    float m_fTimePressed;
    bool m_bAutoReset;
    bool m_bRegisterPressTimeOnStack;
    bool m_bRemovePressedTimeFromTimeLeft;

};

class UInputData : public UGenericInputData
{
    FName m_unrealAction;
    FInputBehaviourStruct m_BehaviourStruct;

};

class UAnalogInputData : public UInputData
{
    float m_validityThreshold;

};

struct FAnalogInputSequenceStep
{
    FFloatRange m_SizeTolerance;
    FFloatRange m_VelocityFromRefDirTolerance;
    bool m_bAbsAngle;
    FFloatRange m_AngleDegTolerance;
    FFloatRange m_fHoldDuration;
    float m_fMaxValidityDuration;
    bool m_bIsReferenceDirection;
    EAnalogInputReferenceDirection m_eReferenceDirBehavior;
    bool m_bIsResultDirection;
    bool m_bParallelizeOnValidation;

};

class UAnalogInputSequenceData : public UGenericInputData
{
    class UVectorInputData* m_VectorInputData;
    bool m_bUseRawVectorInputs;
    TArray<FAnalogInputSequenceStep> m_Steps;
    int32 m_iMaxParalellStates;
    TArray<EControllerIconAxisTypes> m_UIAxis;

};

class USCUserWidget : public USCBaseUserWidget
{
    FSCUserWidget_OnVisible m_OnVisible;
    void VisibilityChanged();
    FSCUserWidget_OnHidden m_OnHidden;
    void VisibilityChanged();
    ESlateVisibility m_ActiveVisibility;
    FSCUserWidget_GetDataDelegate m_GetDataDelegate;
    class UWidgetData* GetDataDelegate();
    FSCUserWidget_InitializeDelegate m_InitializeDelegate;
    void InitializeWidgetDelegate(class USCUserWidget* _widget);
    class UWidgetData* m_Data;
    TSubclassOf<class UWidgetData> m_DataClass;
    ESlateVisibility m_eControllerInputModeVisibility;
    ESlateVisibility m_eMouseInputModeVisibility;
    bool m_bGiveFocusIfNeededWithKeyboard;
    ESlateVisibility m_eFocusedVisibility;
    bool m_bOnGiveFocusButtonOnly;
    bool m_bNotifyPawnChanged;
    bool m_bNotifyUIInputModeChanged;
    bool m_bForceGamepadUI;
    bool m_bUpdateDataOnCharacterProgression;
    bool m_bUpdateDataOnVisible;

    void VisibilityChanged__DelegateSignature();
    void OnDataUpdated();
    void InitializeWidgetDelegate__DelegateSignature(class USCUserWidget* _widget);
    class UWidgetData* GetDataDelegate__DelegateSignature();
    void BPF_SetData(class UWidgetData* _data);
    void BPF_PlayAnimationFromCurrentTime(class UWidgetAnimation* _inAnimation, int32 _iNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode);
    void BPF_NotifyDataUpdatedToChildren(class UPanelWidget* _root);
    void BPF_NotifyDataUpdated();
    bool BPF_IsVisibleInTree();
    bool BPF_IsPlayerLeaderInPvpAndHasAllies();
    bool BPF_IsCursorNavigationEnabled();
    void BPF_GiveFocusIfNeeded();
    EUIInputModes BPF_GetUIInputMode();
    class UThePlainesGameInstance* BPF_GetThePlainesGameInstance();
    class UStatsComponent* BPF_GetStatsComponent();
    class USocialManager* BPF_GetSocialManager();
    class USocialComponent* BPF_GetSocialComponent();
    class ASCPlayerController* BPF_GetPlayerController();
    EPlatform BPF_GetPlatform();
    class UMenuWidget* BPF_GetParentMenu();
    class UMenuDB* BPF_GetMenuDB();
    class UCharacterHealthComponent* BPF_GetHealthComponent();
    class AFightingPlayerController* BPF_GetFightingPlayerController();
    class AFightingCharacter* BPF_GetFightingCharacter();
    class UDefenseComponent* BPF_GetDefenseComponent();
    class UWidgetData* BPF_GetData();
    class UWorld* BPF_GetCurrentWorld();
    class UAttackComponent* BPF_GetAttackComponent();
    class USCAbilitySystemComponent* BPF_GetAbilitySystemComponent();
    bool BPF_CheckControllerHasAnyFocus();
    void BPE_UnbindFromDelegates();
    void BPE_OnVisible();
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void BPE_OnReturnToPool();
    void BPE_OnPawnChanged(class AFightingCharacter* _character);
    void BPE_OnHidden();
    void BPE_OnGetFromPool();
    void BPE_OnDataUpdated();
    void BPE_OnCultureChanged();
    void BPE_GiveFocus();
    class UWidgetData* BPE_CreateData();
    void BPE_BindToDelegates(bool _bPawnOnly);
};

class UAngleFeedbackUserWidget : public USCUserWidget
{

    void BPE_DisplayAngleFeedback(float _fAngle);
};

class UAngleWithActorCondition : public UBaseActorTargetCondition
{
    EAngleComputeMethod m_eMethod;
    FFloatRange m_AngleRange;

};

struct FSpeedStateAnimContainer
{
    FAnimContainer m_Anims;

};

struct FRotationAnimContainer
{
    FAnimContainer m_Anims;

};

struct FQuadrantAnimContainer
{
    FAnimContainer m_Anims;

};

struct FOrientedRotationAnimContainer
{
    FRotationAnimContainer m_leftAnims;
    FRotationAnimContainer m_rightAnims;

};

struct FCardinalAnimContainer
{
    FAnimContainer m_Anims;

};

struct FCardinalChangementAnimContainer
{
    FCardinalAnimContainer m_Cardinals;

};

class UAnimContainerLibrary : public UBlueprintFunctionLibrary
{

    void GetSpeedStateAnim(const FSpeedStateAnimContainer& _animContainer, ESpeedState _eSpeedState, FAnimContainer& _result);
    void GetRotationAnim(const FRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, FAnimContainer& _result);
    void GetQuadrantAnim(const FQuadrantAnimContainer& _animContainer, EQuadrantTypes _eQuadrant, FAnimContainer& _result);
    void GetOrientedRotationAnim(const FOrientedRotationAnimContainer& _animContainer, ETransitionRotation _eTransitionRotation, bool _bIsLeft, FAnimContainer& _result);
    void GetCardinalChangementAnim(const FCardinalChangementAnimContainer& _animContainer, ESCCardinalPoints _eInCardinal, ESCCardinalPoints _eOutCardinal, FAnimContainer& _result);
    void GetCardinalAnim(const FCardinalAnimContainer& _animContainer, ESCCardinalPoints _eCardinal, FAnimContainer& _result);
};

class UAnimDrivenCameraOrderBTService : public UBTService
{
    EOrderType m_eOrderType;
    bool m_bForceAsCurrentCamera;
    bool m_bWaitForFirstFrameOrderService;
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    TWeakObjectPtr<class UCameraComponentThird> m_cameraComponent;

    class UAbstractCameraData* GetCameraData();
};

class UAnimDrivenMovementComponent : public UActorComponent
{
    bool m_bUseDisplacement;
    float m_fDisplacementCoeff;
    bool m_bUseRotation;
    float m_fRotationCoeff;

};

struct FReplayPlayerAssetAccumulatedTime
{
    float m_fAccumulatedTime;
    int32 m_iCachedContainerIndex;

};

struct FReplayReplicatedStateMachine
{
    int32 m_iStateIndex;
    int32 m_iAnimInstanceIndex;
    int32 m_iStateMachineIndex;
    TArray<FReplayPlayerAssetAccumulatedTime> m_ReplicatedPlayerAssets;

};

struct FReplayReplicatedAnimInstanceAssetPlayers
{
    int32 m_iAnimInstanceIndex;
    TArray<FReplayPlayerAssetAccumulatedTime> m_AssetPlayers;

};

class UAnimInstanceReplicationComponent : public UActorComponent
{
    uint32 m_uiReplicatedAnimGraphVersionHash;
    TArray<FReplayReplicatedStateMachine> m_ReplicatedStateMachineSnapshots;
    TArray<FReplayReplicatedAnimInstanceAssetPlayers> m_ReplicatedAnimInstancePlayerAssets;
    TArray<class TSubclassOf<USCAnimInstance>> m_AllowedReplicatedTypes;
    TArray<FSCAnimInstanceRef> m_ReplicatedSubAnimInstances;
    TArray<FSCAnimInstanceRef> m_ScrubSnapshotOnlySubAnimInstances;
    class USCAnimInstance* m_AnimInstance;

    void OnReplaySystemRecordingChanged(bool _bIsRecording);
};

struct FBlendSpaceContainer
{
    class UBlendSpaceBase* m_BlendSpace;
    bool m_bMirror;

};

struct FBlendSpaceDirectionContainer
{
    FBlendSpaceContainer m_BlendSpaceFront;
    FBlendSpaceContainer m_BlendSpaceBack;

};

struct FAnimInfo
{
    bool m_bActionInProgress;
    EWeaponAnimType m_eWeaponAnimType;
    class UAnimSequence* m_AnimToPlay;
    class UBlendSpaceBase* m_BlendSpaceToPlay;
    FVector m_vBlendSpaceValue;
    float m_fPlayRate;
    bool m_bMirror;
    bool m_bWeaponInFakieAtStart;
    float m_fStartRatio;
    bool m_bLoop;
    float m_fBlendSpaceAngle;
    float m_fOwnerVelocityLength;

};

struct FSwapperStructBase
{
    bool m_bInProgress1Or2;
    bool m_bInProgress1;
    bool m_bInProgress2;

};

struct FAnimStructBase : public FSwapperStructBase
{
    FAnimContainer m_AnimContainer1;
    FAnimContainer m_AnimContainer2;

};

struct FAnimStructMoveTransition : public FAnimStructBase
{
    EMoveTransitionType m_eTransitionType1;
    EMoveTransitionType m_eTransitionType2;

};

class UAnimInstanceWithDependancy : public USCAnimInstance
{
    FAnimContainer m_IdleAnimContainerFL;
    FAnimContainer m_IdleAnimContainerFR;
    FAnimContainer m_IdleAnimContainerBR;
    FAnimContainer m_IdleAnimContainerBL;
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    TArray<FAnimContainer> m_FreeMoveAnimContainer;
    TArray<FBlendSpaceDirectionContainer> m_FreeMoveBlendSpace;
    class USCAnimInstance* m_MasterAnimInstance;
    bool m_bAnyAnimInProgress;
    FAnimInfo m_animInfo1;
    FAnimInfo m_animInfo2;
    FAnimInfo m_animInfo3;
    FAnimInfo m_animInfo4;
    FAnimInfo m_V0Info;
    FAnimInfo m_V1Info;
    FAnimInfo m_V2Info;
    FAnimInfo m_V3Info;
    FAnimStructMoveTransition m_UTurnInfo;
    FAnimStructMoveTransition m_StartAnimInfo;
    FAnimStructMoveTransition m_StopAnimInfo;
    FAnimStructMoveTransition m_TurnInInfo;
    FAnimStructMoveTransition m_LandingInfo;
    EMoveTransitionType m_eTransitionType;
    FName m_VariableWeightMasterStateName;

    void Update(float _fDt);
    class USCAnimInstance* BPF_GetMasterAnimInstance();
    void BPE_UpdateFromMasterAnimInstance(float _fDt);
};

class UAnimNotifyHitFloor : public USCAnimNotify
{
};

struct FSCAnimNotifyExtraInfo
{
    bool m_bMirrorAnim;
    int32 m_iSubAnimState;
    uint8 m_uiTransitionGlobalType;
    uint8 m_uiOrderID;

};

class UAnimationNotifySerializer : public UBlueprintFunctionLibrary
{

    FSCAnimNotifyExtraInfo BPF_ReadNotifyExtraInfoFromBufferArray(const TArray<uint8>& _extraInfoBufferArray);
};

struct FAnimQuadrantStruct
{
    bool m_bIsInFrontLeft;
    bool m_bIsInFrontRight;
    bool m_bIsInBackRight;
    bool m_bIsInBackLeft;

};

class UAnimQuadrantStructHelper : public UBlueprintFunctionLibrary
{

    void BPF_MakeAnimQuadrantStruct(EQuadrantTypes _eQuadrant, FAnimQuadrantStruct& _outStruct);
};

struct FAnimSequenceDBEntry
{
    class UAnimSequence* m_AnimSequence;
    FText m_DisplayText;
    TArray<float> m_Positions;

};

class UAnimSequenceEntryDB : public UDataAsset
{
    TSubclassOf<class ABaseWeapon> m_WeaponClass;
    TArray<FAnimSequenceDBEntry> m_AnimSequences;

};

class UAnimSequenceEntitlementDB : public UDataAsset
{
    FName m_Entitlement;
    TArray<class UAnimSequenceEntryDB*> m_DBs;

};

struct FAnimSequenceDBCache
{
    TMap<class TSubclassOf<ABaseWeapon>, class UAnimSequenceEntryDB*> m_Sequences;

};

class UAnimSequenceDB : public UDataAsset
{
    TArray<class UAnimSequenceEntitlementDB*> m_DBs;

    void BPF_GetSequences(class ASCPlayerController* _controller, FAnimSequenceDBCache& _outCache);
};

struct FAnimStructTraversal
{
    bool m_bTraversalInProgress;
    ETraversalPhase m_eTraversalPhase;
    FAnimContainer m_animationContainersPerPhase;

};

class UTraversalAnimStructHelper : public UBlueprintFunctionLibrary
{

    FAnimContainer BPF_GetAnimContainerFromPhase(class UPlayerAnim* _playerAnim, const FAnimStructTraversal& _animStructTraversal, ETraversalPhase _eTraversalPhase);
};

struct FAISuperDizzyParams
{
    bool m_bCanBeSuperDizzy;
    float m_fSuperDizzyResistance;
    float m_fSuperDizzyRecoveryCooldown;
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    float m_fSuperDizzyRecoveryPerSec;

};

struct FBaseWeaponOverrideInfo
{
    float m_fLifeDamageModiferOnGuard;
    float m_fStructureDamageModifierOnGuard;
    TArray<class TSubclassOf<UGameplayEffect>> m_GrantedEffects;

};

struct FComboOverride
{
    FName m_DifficultyName;
    class UCombo* m_ComboOverride;

};

struct FSpeedStateFromGoalDistSelector
{
    ESpeedState m_eNearFromGoalSpeedState;
    float m_fDistToGoalThresold;
    ESpeedState m_eFarFromGoalSpeedState;

};

struct FLocomotionPaceSelector
{
    FSpeedStateFromGoalDistSelector m_speedStateFromGoalDistSelectors;

};

struct FWeaponOverrideInfo : public FBaseWeaponOverrideInfo
{
    class UAIContextualDefense* m_ContextualDefenseOverride;
    TArray<FComboOverride> m_ComboOverrides;
    TSubclassOf<class UAvoidAbility> m_AvoidAbility;
    class UBaseMovementDB* m_MovementDB;
    bool m_bActivateAttackTicketFactorsOverride;
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvaluationFactorsOverride;
    bool m_bActivateCirclePerCombatRoleOverride;
    TMap<ESCAICombatRoles, int32> m_CirclePerCombatRolesOverride;
    bool m_bOverrideLocomotionPaceSelector;
    FLocomotionPaceSelector m_OverridingLocomotionPaceSelector;

};

struct FAIWeaponInfo
{
    class UWeaponInfoForAIDataAsset* m_WeaponInfoForAI;
    bool m_bCanFetch;
    bool m_bUseThiWeaponAtStart;
    bool m_bWeaponShouldBreakWhenDropped;
    bool m_bWeaponShouldRegenerateAfterThrown;
    bool m_bWeaponCanTakeDamage;
    FWeaponOverrideInfo m_WeaponOverride;

};

struct FAIDifficultyLevel
{
    FName m_DifficultyName;
    FInt32Range m_DifficultyGaugeRange;
    float m_fDifficultyVariationMultFactor;
    class UCombo* m_Combo;

};

struct FVoiceVariationsAkSwitchContainer
{
    TArray<FName> m_VoiceVariationsSwitchValues;

};

struct FPatrolActivity
{
    FAnimContainer m_animContainer;
    float m_fActivityDuration;

};

struct FAIRangePerCircleIndex
{
    TMap<int32, FFloatRange> m_RangePerCircle;

};

struct FJiggleAnimContainer
{
    FCardinalAnimContainer m_JiggleAnimations;
    bool m_bAllowWeapons;

};

class UArchetypeAsset : public UObject
{
    EAIArchetype m_eAIArchetype;
    FName m_ArchetypeName;
    bool m_bIsBoss;
    bool m_bForceTargetWidgetDisplay;
    bool m_bDismissDeathForTakedown;
    bool m_bInfiniteStructure;
    float m_fGrabbableStructureRatio;
    FAISuperDizzyParams m_SuperDizzyPerDifficulty;
    bool m_bCanBeSuperDizzy;
    float m_fSuperDizzyResistance;
    float m_fSuperDizzyRecoveryCooldown;
    float m_fSuperDizzyRecoveryCooldownWhenComplete;
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    float m_fSuperDizzyRecoveryPerSec;
    float m_fSpeed;
    bool m_bIsSpecial;
    float m_fDamageMultiplier;
    bool m_bInvincible;
    bool m_bHideHealthGauge;
    bool m_bHideStructureGauge;
    bool m_bAICanSeeForever;
    uint8 m_uiResilience;
    uint8 m_uiResilienceBonusFromAttack;
    float m_fAbandonTicketTimeout;
    class UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDBPerDifficulty;
    class UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;
    int32 m_iXPBonus;
    bool m_bBreakWeaponOnDeath;
    class UBaseMovementDB* m_MovementDB;
    bool m_bLowStructureOnSpawn;
    class UCurveFloat* m_GuardRecoveryRateByLife;
    class UCurveFloat* m_GuardRecoveryRateByLifePerDifficulty;
    bool m_bCanDefend;
    float m_fParriedDuration;
    float m_fStructureBrokenParriedDuration;
    class UAIContextualDefense* m_ContextualDefense;
    TSubclassOf<class UAvoidAbility> m_AvoidDB;
    TSubclassOf<class UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    class UAIContextualDefense* m_ContextualDefenseAgainstThrowables;
    class UAIContextualDefense* m_ContextualDefenseGromGround;
    TMap<class EDefenseTactics, class FSCAITriggerableActionsArray> m_DefaultPostDefenseActions;
    TMap<class EDefenseTactics, class FAIConditionedActionArray> m_DefaultPostDefenseActionsMap;
    bool m_bCanAvoidMultiHitAttacks;
    bool m_bCanAttack;
    bool m_bDropAnyWeaponAtStart;
    TSubclassOf<class ABaseWeapon> m_WeaponToEquipAtStart;
    TArray<FAIWeaponInfo> m_UsableWeapons;
    TArray<class UThrowableInfoForAIDataAsset*> m_UsableThrowablesFromGround;
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketEvalFactors;
    TArray<FAIAttackReaction> m_ReactionAttacks;
    TArray<FAIActionReaction> m_ReactionActions;
    bool m_bCanUseReactionActions;
    float m_fFarFromEnemyDistThresold;
    FLocomotionPaceSelector m_LocomotionPaceSelector;
    TSubclassOf<class UNavigationQueryFilter> m_NavigationQueryFilter;
    uint8 m_uiHelpSignalTriggers;
    uint8 m_uiLostAttackTicketCause;
    TArray<FAIDifficultyLevel> m_difficultyLevels;
    float m_fDamageReceivedToDifficultyBonus;
    float m_fDamageDealtToDifficultyMalus;
    float m_fHitWithNoDamageDominationGaugeBonus;
    float m_fHitWithNoDamageDominationGaugeMalus;
    float m_fTakedownDominationBonus;
    float m_fSuccessfulMCParryBonus;
    float m_fSuccessfulMCAvoidBonus;
    float m_fRespawnTime;
    class UBehaviorTree* m_Behavior;
    class UBlackboardData* m_Blackboard;
    bool m_bCanLeaveAbandon;
    int32 m_iArchetypeDifficulty;
    FName m_VoiceArchetypeSwitchName;
    TMap<class ECharacterGender, class FVoiceVariationsAkSwitchContainer> m_VoiceVariationsSwitchValuesPerGenderMap;
    class UDataTable* m_BarksDb;
    TMap<class FName, class FPatrolActivity> m_PatrolActivities;
    class UVitalPointDB* m_VitalPointDB;
    ESCAICombatRoles m_eRoleAffinity;
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRoles;
    TMap<class ESCAICombatRoles, class FFloatRange> m_PerRoleCombatPositionRange;
    TMap<class ESCAICombatRoles, class FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRange;
    TMap<ESCAICombatRoles, int32> m_iCirclePerCombatRolesInPauseOverride;
    TMap<class ESCAICombatRoles, class FAIRangePerCircleIndex> m_PerRolePerCircleCombatPositionRangeInPauseOverride;
    TMap<class ESCAICombatRoles, class FFloatRange> m_fJiggleDelayRange;
    TMap<ESCAICombatRoles, float> m_fJiggleMovementMinDist;
    FCardinalAnimContainer m_JiggleAnimations;
    TArray<FJiggleAnimContainer> m_JiggleAnimationContainers;
    FFloatRange m_JiggleAnimationsRateModifierRange;
    class UFidgetDB* m_FidgetDBs;
    bool m_bCanBeSpared;
    FBaseActorConditionInstance m_SpareCondition;
    float m_fHealth;
    float m_fHealthMultiplier;
    float m_fStructure;
    float m_fStructureMultiplier;

};

struct FArchetypeSituationDescription
{
    class UArchetypeAsset* m_Archetype;
    int32 m_iLevelMin;
    int32 m_iLevelMax;
    uint8 m_uiWeightLevel;
    uint32 m_uiAppearanceProbabilities;

};

class UArchetypeSituationDB : public UDataAsset
{
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;

};

struct FArenaChallengeScoreUnion
{
    int32 m_iPointScore;
    float m_fTimeScore;

};

struct FAIWaveBucketDescription
{
    int32 m_iNumberInBucket;
    int32 m_iMaxInCombat;

};

struct FAIWaveParams
{
    FName m_WaveName;
    TMap<class EAIArchetype, class FAIWaveBucketDescription> m_ArchetypesBuckets;
    FInt32Range m_iMinMaxInCombat;
    EStartWaveType m_eStartWaveType;
    FGameplayTag m_WaveTag;
    FFloatRange m_fDelayBeforeWave;
    TSoftObjectPtr<AAISituationActor> m_RelatedAISituation;

};

struct FArenaChallengeRefillDescription
{
    TSoftObjectPtr<AAIWaveRefillDirector> m_RefillDirector;
    TArray<FAIWaveParams> m_Waves;
    TSoftObjectPtr<UDataTable> m_ArchetypeBank;

};

class UArenaChallengeDescription : public UObject
{
    FText m_Title;
    FText m_Description;
    TArray<FArenaChallengeScoreUnion> m_ScoreThreshold;
    FAchievementUnlockConditionClassInstance m_MasterObjective;
    TArray<FGameplayTag> m_CheatsToActivate;
    TMap<class FGameplayTag, class FString> m_CheatArguments;
    int32 m_iAge;
    int32 m_iDeathCount;
    ECharacterGender m_eCharacterGender;
    bool m_bOverrideOutfit;
    int32 m_iOutfitIndex;
    TSoftObjectPtr<UWorld> m_AIInitialSpawnSublevel;
    FArenaChallengeRefillDescription m_RefillDescription;

    FArenaChallengeScoreUnion BPF_GetWantedScore(int32 _iLevel);
    class AAIWaveRefillDirector* BPF_GetRefillDirector();
    int32 BPF_GetNbWaves();
    int32 BPF_GetDeathCount();
    TArray<FGameplayTag> BPF_GetCheatsToActivate();
    TMap<class FGameplayTag, class FString> BPF_GetCheatsArguments();
    class UBaseArenaObjective* BPF_GetArenaObjective();
    int32 BPF_GetAge();
};

class AThePlainesGameMode : public ASCGameMode
{
    FThePlainesGameModeOnCharacterKilled OnCharacterKilled;
    void TwoControllersDynamicDelegate(class AController* _killer, class AController* _victim, const FDamageInfos& _damageInfos);
    bool m_bOverrideAITraversalInfo;
    bool m_bIsTraversalUniversalLockEnabled;
    float m_fTraversalLockTime;
    float m_fTraversalCooldownPerAI;
    FName m_ForcedPlayerStart;
    bool m_bAllowInitialOverlappingAllButQueryOnly;
    float m_fGMDamageMultiplier;

    void TwoControllersDynamicDelegate__DelegateSignature(class AController* _killer, class AController* _victim, const FDamageInfos& _damageInfos);
    void KillAllAis();
    TArray<class APlayerController*> BPF_GetPlayers();
    void BPF_ForceRestartPlayerAtStartNull(class AController* _controller);
    bool BPE_IsStartupGameMode();
    void AllAisSetFightingState(EFightingState _eFightingState, float _fDuration);
};

class AArenaGameMode : public AThePlainesGameMode
{
    FArenaGameModeOnPlayerPressStart OnPlayerPressStart;
    void OnPlayerPressStart();
    float m_fEndArenaDelay;

    void OnPlayerPressStart__DelegateSignature();
    void BPF_TriggerEndArena();
    void BPF_PlayerPressStart();
    void BPF_FlagArenaForRestart();
};

struct FSpawnerPerZone
{
    TWeakObjectPtr<class AAISpawner> m_Spawner;

};

class AThePlainesGameState : public ASCGameState
{
    FThePlainesGameStateOnMatchHasStarted OnMatchHasStarted;
    void DynamicMulticast();
    FThePlainesGameStateOnMatchHasEnded OnMatchHasEnded;
    void DynamicMulticast();
    FThePlainesGameStateOnLeavingMap OnLeavingMap;
    void DynamicMulticast();
    int32 m_iNumPlayersPerTeam;
    bool m_bFriendlyFire;
    uint8 m_uiLastHostZone;
    int32 m_iNumTeams;
    float m_fTimeBeforeVanishActive;
    bool m_bShouldGiveXPOnKill;
    bool m_bHasRunOnce;
    TArray<FSpawnerPerZone> m_ToSpawnFrom;
    EDangerStates m_eThresholdDangerState;
    float m_fReviveTime;
    float m_fDeathRespawnTime;
    float m_fReviveLifePercent;
    float m_fDeathLifePercent;
    float m_fRoomClearedLifePercent;
    float m_fVanishTime;
    bool m_bCanGoDown;
    float m_fDownTime;
    float m_fRespawnTimeNoDown;

    void OnRepNumTeam();
    bool BPF_IsPvPGameMode();
    float BPF_GetTimeBeforeVanishActive();
    float BPF_GetRespawnTimeNoDown();
    EGameModeTypes BPF_GetGameModeType();
    float BPF_GetDownTime();
};

class AArenaGameState : public AThePlainesGameState
{
};

struct FVolumesArray
{
    TArray<class ASCVolume*> m_Volumes;

};

class AArenaHardpointAreaActor : public AActor
{
    FArenaHardpointAreaActorOnScoreMultiplierChanged OnScoreMultiplierChanged;
    void DynamicMulticast();
    FArenaHardpointAreaActorOnEnemyPresenceInsideHardpointChanged OnEnemyPresenceInsideHardpointChanged;
    void DynamicMulticast();
    TArray<class ASCVolume*> m_ChildrenVolumes;
    bool m_bIsActive;
    float m_fCurrentScoreMultiplier;
    bool m_bIsAnyEnemyInsideHardpoint;
    class USceneComponent* m_RootComponent;
    TMap<class AFightingCharacter*, class FVolumesArray> m_overlappedVolumesPerEnemy;

    void OnOverlappingEnemyDown(class UCharacterHealthComponent* _healthComponent, EDownState _eState);
    void OnHardpointSituationResolved(class AAISituationActor* _situationChanged);
    void OnChildComponentStartOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void OnChildComponentEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    TArray<class ASCVolume*> GetAreaVolumes();
    bool BPF_HasBeenCaptured();
    bool BPF_GetIsActive();
    float BPF_GetCurrentCaptureRatio();
    float BPF_GetCaptureValue();
    FName BPF_GetAreaName();
    void BPE_OnStopCapturing();
    void BPE_OnStartCapturing(float _CurrentScore);
    void BPE_OnScoreCaptureValueChanged(float _fCurrentValue, float _fMaxValue);
    void BPE_OnReactivate();
    void BPE_OnHardpointCaptured();
    void BPE_OnDeactivate();
    void BPE_OnActivate();
};

class UWGAchievementUnlockCondition : public UAchievementUnlockCondition
{
    TArray<class AAISituationActor*> m_ResolvedSituations;
    bool m_bIsActive;
    TArray<TSoftObjectPtr<AAISituationActor>> m_SpecificUnlockSituations;
    TArray<TSoftObjectPtr<ASpawnerGroup>> m_SituationIgnoredSpawnerGroups;
    int32 m_WantedDifficulties;
    int32 m_iCheatsUnlockPointsToAdd;
    bool m_bAddCheatsUnlockPoints;
    FText m_Title;
    FText m_Description;
    ERunType m_eAllowedRunType;
    TMap<class FGameplayTag, class FString> m_NeededCheatsWithArguments;
    bool m_bWantSpecificDifficulty;
    EOrderType m_eMonitoredOrder;
    bool m_bMonitorOrder;

    void BPE_OnSituationResolved(class AAISituationActor* _situation, bool _bHasActiveSituation);
    void BPE_OnSituationActivated(class AAISituationActor* _situation);
    void BPE_OnOrderStarted(uint8 _orderID, class UOrderComponent* _OrderComponent);
    void BPE_OnFirstConditionActive();
    void BPE_OnConditionStops();
    void BPE_OnAllSituationResolved();
    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
};

class UBaseArenaObjective : public UWGAchievementUnlockCondition
{
    FBaseArenaObjective_OnStarsCountChanged m_OnStarsCountChanged;
    void OnStarsCountChanged(int32 _newCount, int32 _oldCount);
    FBaseArenaObjective_OnScoreChanged m_OnScoreChanged;
    void OnScoreChanged(int32 _newScore);
    EScoreComparisonType m_eScoreComparisonType;
    TArray<int32> m_ScoreThresholds;
    int32 m_iScore;
    bool m_bUseChrono;
    int32 m_iStarCount;

    bool ShouldShowScoreAsTime();
    void OnPlayerDownStateChanged(class UCharacterHealthComponent* _healthComponent, EDownState _state);
    void OnGiveInitialControlToPlayer();
    bool BPF_IsValidLevel(int32 _iLevel);
    int32 BPF_GetStarsCount();
    int32 BPF_GetScoreThreshold(int32 _iLevel);
    int32 BPF_GetScore();
    int32 BPF_CountObtainedStars(int32 _iScore);
    void BPF_ComputeHighScore(int32& _iOutSavedHighScore, bool& _bOutIsNewHighScore);
    void BPE_OnPlayerPawnReady();
};

struct FHardpointInfos
{
    FName m_HardpointAreaName;
    TSoftObjectPtr<AArenaHardpointAreaActor> m_HardPointAreaActor;
    TSoftObjectPtr<AAISituationActor> m_AISituationLinkedToHardpoint;

};

class UArenaHardpointsObjective : public UBaseArenaObjective
{
    TArray<FHardpointInfos> m_HardpointsInfos;
    FArenaHardpointsObjectiveOnAllHardpointsClearedOnce OnAllHardpointsClearedOnce;
    void DynamicMulticast();
    FArenaHardpointsObjectiveOnHardpointCapturedDelegate OnHardpointCapturedDelegate;
    void OnHardpointCaptured(const FHardpointInfos& _HardpointInfo, int32 _CurrentChallengeIndex);
    FArenaHardpointsObjectiveOnHardpointActivationChanged OnHardpointActivationChanged;
    void OnHardpointActivationChanged(const class AArenaHardpointAreaActor* _HardpointActor, bool _Activated);
    EHardpointActivationRule m_eHardpointActivationRule;
    ESequentialLoopRule m_eSequentialLoopRule;
    float m_fHardpointCaptureValue;
    bool m_bHasClearedAllHardpointsOnce;

    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& _HardpointInfo, int32 _CurrentChallengeIndex);
    void OnHardpointActivationChanged__DelegateSignature(const class AArenaHardpointAreaActor* _HardpointActor, bool _Activated);
    int32 BPF_GetTotalNumberOfHardpoints();
    int32 BPF_GetCurrentHardpointIndex();
    class AArenaHardpointAreaActor* BPF_GetCurrentHardpointAreaActor();
};

struct FArenaParams
{
    TArray<class TSubclassOf<UArenaChallengeDescription>> m_ChallengesList;

};

class UArenaManagerBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_SetChallengeIndex(int32 _iChallengeIndex);
    void BPF_SetArena(FGameplayTag _arenaTag);
    void BPF_OnCurrentChallengeSpecificLevelLoaded();
    int32 BPF_GetMaxAICharactersPerPool();
    FArenaParams BPF_GetCurrentParams();
    class UBaseArenaObjective* BPF_GetCurrentMasterObjective();
    int32 BPF_GetCurrentChallengeIndex();
    class UArenaChallengeDescription* BPF_GetCurrentChallenge();
    FGameplayTag BPF_GetCurrentArena();
    int32 BPF_GetChallengeHighScore(class UArenaChallengeDescription* _challengeDescription);
};

class UArenaSettings : public UObject
{
    TMap<class FGameplayTag, class FArenaParams> m_ArenaParams;
    int32 m_iMaxNumberOfDifferentCharacterBP;
    int32 m_iNbImpostorPerClasses;
    FFloatRange m_fDelayBetweenSpawns;
    float m_fOutsideVolumeCaptureTimeDelay;
    float m_fBaseCaptureSpeedPerSecond;
    float m_fCaptureSpeedMultiplierPerScoreMultiplier;
    float m_fNoEnemyInsideHardpointMultiplier;
    bool m_bEnableAllHardpointsEnemiesKilledMultiplier;
    float m_fAllHardpointsEnemiesKilledMultiplier;
    float m_fDelayBetweenHardpointActivation;

};

class UArenaTargetsObjective : public UBaseArenaObjective
{
    TArray<TSoftObjectPtr<AAISpawner>> m_Targets;

    TArray<TSoftObjectPtr<AAISpawner>> BPF_GetTargets();
    void BPE_OnTargetDown(class AAISpawner* _AISpawner);
};

class UArenaWaveObjective : public UBaseArenaObjective
{
    FName m_ObjectiveWaveName;
    int32 m_iFinalWaveIndex;
    TSoftObjectPtr<AAISituationActor> m_AIFinalSituation;
    EScoringType m_eScoringType;

    void OnWaveComplete(int32 _iWaveIndex);
    void OnSituationResolved(class AAISituationActor* _situationActor);
};

class UASMComponent : public UActorComponent
{

    EFightingActionState BPF_GetCurrentActionState();
};

class UASMAIComponent : public UASMComponent
{
};

class UASMDetectionComponent : public UActorComponent
{
    TArray<class TSubclassOf<USCGameplayAbility>> m_AbilityDetection;

};

class UASMPlayerComponent : public UASMComponent
{
};

class UAsyncImage : public UImage
{
    FAsyncImageOnLoadingStarted OnLoadingStarted;
    void AsyncImageDelegate(class UAsyncImage* _image);
    FAsyncImageOnLoadingCanceled OnLoadingCanceled;
    void AsyncImageDelegate(class UAsyncImage* _image);
    FAsyncImageOnLoaded OnLoaded;
    void AsyncImageDelegate(class UAsyncImage* _image);
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    float m_fApparitionDuration;
    TSoftObjectPtr<UMaterialInterface> m_AsyncMaterial;
    bool m_bMatchSize;
    bool m_bHideOnLoadStart;

    void BPF_SetTexture(class UTexture2D* _asset, bool _bMatchSize);
    void BPF_SetMaterial(class UMaterialInterface* _asset);
    void BPF_LoadTextureAssetAsync(TSoftObjectPtr<UTexture2D> _asset, bool _bMatchSize, int32 _iQueueID, bool _bForce);
    void BPF_LoadMaterialAssetAsync(TSoftObjectPtr<UMaterialInterface> _asset);
    void BPF_Clear();
    void AsyncImageDelegate__DelegateSignature(class UAsyncImage* _image);
};

class UAsyncTaskAiAction : public UBlueprintAsyncActionBase
{
    FAsyncTaskAiActionOnSuccess OnSuccess;
    void DynamicMulticast();
    FAsyncTaskAiActionOnFailure OnFailure;
    void DynamicMulticast();

    class UAsyncTaskAiAction* BPF_ScheduleAIAction(class UAIFightingComponent* _aiComponent, TSubclassOf<class USCAiAction> _actionClass, class USCAiAction* _action, class USCAiAction*& _scheduledAction, bool _bCancelPendingActions);
};

class UAsyncTaskApplySkillsFromSaves : public UBlueprintAsyncActionBase
{
    FAsyncTaskApplySkillsFromSavesSavesApplied SavesApplied;
    void OnSavesApplied();

    class UAsyncTaskApplySkillsFromSaves* BPF_ApplySavesSkillOnCurrentSave(class UObject* _context, class USCAbilitySystemComponent* _abilitySystemComponent, TArray<int32> _indicesOfSave);
};

class UMenuAsyncActionBase : public UBlueprintAsyncActionBase
{

    void OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void BPF_Cancel();
};

class UAsyncTaskPlayAnimation : public UMenuAsyncActionBase
{
    FAsyncTaskPlayAnimationOnFinished OnFinished;
    void AsyncTaskPlayTransitionAnimation();

    void OnTransitionFinished();
    class UAsyncTaskPlayAnimation* BPF_PlayTransitionAnimationAsync(class UObject* _menu, class UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    void AsyncTaskPlayTransitionAnimation__DelegateSignature();
};

class UAsyncTaskSwapGender : public UBlueprintAsyncActionBase
{
    FAsyncTaskSwapGenderOnSuccess OnSuccess;
    void OnSwapGender();
    FAsyncTaskSwapGenderOnFail OnFail;
    void OnSwapGender();

    class UAsyncTaskSwapGender* BPF_SwapGender(class UPlayerFightingComponent* _playerComponent, ECharacterGender _eNewGender);
};

class UAsyncTaskSwitchAudioCulture : public UBlueprintAsyncActionBase
{
    FAsyncTaskSwitchAudioCultureCultureSwitched CultureSwitched;
    void OnCultureSwitched();
    FAsyncTaskSwitchAudioCultureCultureSwitchFailed CultureSwitchFailed;
    void OnCultureSwitched();

    class UAsyncTaskSwitchAudioCulture* BPF_SwitchAudioCulture(class UObject* _context, FString _cultureName);
};

class UAsyncTaskTick : public UMenuAsyncActionBase
{
    FAsyncTaskTickOnTick OnTick;
    void AsyncTaskTickDel(class UAsyncTaskTick* _task, float _fDeltaTime, float _fProgress, float _fTotalTime);
    FAsyncTaskTickOnFinished OnFinished;
    void AsyncTaskTickDel(class UAsyncTaskTick* _task, float _fDeltaTime, float _fProgress, float _fTotalTime);

    class UAsyncTaskTick* BPF_Tick(class UAsyncTaskTick* _existingTask, class UObject* _menu, float _fFrequency, float _fDuration);
    void BPF_Stop();
    void AsyncTaskTickDel__DelegateSignature(class UAsyncTaskTick* _task, float _fDeltaTime, float _fProgress, float _fTotalTime);
};

class UAsyncTaskWait : public UMenuAsyncActionBase
{
    FAsyncTaskWaitOnFinished OnFinished;
    void AsyncTaskWaitDel();

    class UAsyncTaskWait* BPF_Wait(class UObject* _menu, float _fDuration);
    void AsyncTaskWaitDel__DelegateSignature();
};

class UAsyncTaskWaitForAISituationSpawnedFromSave : public UBlueprintAsyncActionBase
{
    FAsyncTaskWaitForAISituationSpawnedFromSaveAllSpawned AllSpawned;
    void OnSpawned();
    FAsyncTaskWaitForAISituationSpawnedFromSaveNothingToSpawn NothingToSpawn;
    void OnSpawned();

    class UAsyncTaskWaitForAISituationSpawnedFromSave* BPF_WaitForAISituationToSpawnFromSave(const TArray<class AAISituationActor*> _situationsToWaitFor);
};

class UAsyncTaskWaitForInput : public UBlueprintAsyncActionBase
{
    FAsyncTaskWaitForInputValidated Validated;
    void OnInputWait();
    FAsyncTaskWaitForInputSkipped Skipped;
    void OnInputWait();
    FAsyncTaskWaitForInputLaunched Launched;
    void OnInputWait();
    FAsyncTaskWaitForInputSkippedOnError SkippedOnError;
    void OnInputWait();

    class UAsyncTaskWaitForInput* BPF_WaitForInputWithFreezeExtraValidationDelegate(class UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, FBPF_WaitForInputWithFreezeExtraValidationDelegateAdditionalDelegate _additionalDelegate, TSubclassOf<class USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, class UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    class UAsyncTaskWaitForInput* BPF_WaitForInputWithFreeze(class UObject* _context, float _fDelayBeforeFreeze, float _fDelayBeforeAllowingInput, TSubclassOf<class USCGameplayAbility> _abilityToTest, TArray<InputAction> _specificActionsToTest, TArray<InputAction> _extraAvailableActions, ESCBlendType _eBlendType, class UCurveFloat* _curveDynamic, float _fCameraSlomotionFactor, bool _bLaunchOnlyIfAvailable);
    void BPF_Cancel();
};

class UAsyncTaskWaitForSignIn : public UMenuAsyncActionBase
{
    FAsyncTaskWaitForSignInOnSuccess OnSuccess;
    void AsyncTaskWaitForSignInCompleted(const FText& _error);
    FAsyncTaskWaitForSignInOnFail OnFail;
    void AsyncTaskWaitForSignInCompleted(const FText& _error);

    class UAsyncTaskWaitForSignIn* BPF_WaitForSignIn(class UObject* _menu);
    void AsyncTaskWaitForSignInCompleted__DelegateSignature(const FText& _error);
};

class UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase
{
    FAsyncWaitForInputAvailabilityOnInputAvailable OnInputAvailable;
    void DynamicMulticast();

    class UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(class ABaseCharacter* _inCharacter, InputAction _eInInputAction);
};

class UAttachWeapon_Notify : public USCAnimNotify
{
    FName m_sBoneToAttachWeaponTo;
    bool m_bFakie;
    bool m_bIsEndReattachment;
    bool m_bAttachInFakieIfCancelledFromThisNotify;

};

struct FInputDetection
{
    InputAction m_eInput;
    bool m_bValidateOnEnterStack;
    int32 m_iEnterStackValidation;
    bool m_bValidateOnExitStack;
    FBaseActorConditionInstance m_BaseCondition;
    class UTargetActionTypeRequest* m_TargetActionTypeRequest;
    EActionType m_eTarget;
    bool m_bIgnoreTargetOnPriorityResolution;
    int32 m_iNoTargetPriority;
    bool m_bRequiresTarget;
    bool m_bRequiresTargetOnStack;
    FBaseActorConditionInstance m_bRequiresTargetCondition;
    bool m_bUpdateTargetOnExitStack;
    EUpdateTargetCondition m_eUpdateTargetOnExitStackCondition;
    bool m_bResetInputOnDismiss;
    bool m_bResetInputOnActivation;
    bool m_bResetHoldToggleInputOnAbilityEnd;

};

struct FTargetResult
{
    TWeakObjectPtr<class AActor> m_Target;
    uint8 m_uiPriority;
    EActionType m_eActionType;

};

struct FSCGameplayAbilityActorInfo : public FGameplayAbilityActorInfo
{
};

struct FSCGameplayAbilityActivationInfo
{
    FGameplayAbilitySpecHandle m_Handle;
    FSCGameplayAbilityActorInfo m_ActorInfos;
    FGameplayAbilityActivationInfo m_ActivationInfo;
    FGameplayEventData m_EventData;
    class UAbilityPayload* m_Payload;
    TWeakObjectPtr<class AActor> m_Target;

};

struct FPlayOrderInfos
{
    uint8 m_uiAfterOrder;
    float m_fDelay;

};

struct FNetOrderStruct
{
    TWeakObjectPtr<class AActor> m_TargetActor;
    TWeakObjectPtr<class UAbilityPayload> m_Payload;

};

class USCGameplayAbility : public UGameplayAbility
{
    FGameplayTagQuery m_AdvancedSelfTagCondition;
    FGameplayTagQuery m_AdvancedTargetTagCondition;
    bool m_bCommitAbilityOnOrderStart;
    TArray<FInputDetection> m_Inputs;
    TSubclassOf<class UAbilityPayload> m_Payload;
    bool m_bIgnoreAvailabilityLayers;
    bool m_bToggleAbility;
    bool m_bHoldToToggle;
    bool m_bConsumeAndResetInputs;
    class UAvailabilityLayerData* m_AvailabilityLayersWhileActive;
    EALBinaryOperation m_eALOperation;
    bool m_bTargetBecomesLockMoveTarget;
    TSubclassOf<class UGameplayEffect> m_CooldownGameplayEffectClassOnAbilityEnd;
    class UAbilityPayload* m_PayloadInstance;
    FGameplayTagContainer m_CombinedCooldownTags;

    class UBaseTargetEvaluation* BPF_GetTargetEvaluationFromTargetResult(const class AFightingCharacter* _character, const FTargetResult& _targetInfos);
    class AActor* BPF_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo, const FGameplayEventData& _triggerEventData);
    InputAction BPF_GetFirstBestAction(const FSCGameplayAbilityActorInfo& _ActorInfo);
    FVector2D BPF_GetActionVectorValue(const FSCGameplayAbilityActorInfo& _actoInfos);
    void BPE_PreUpdatePayloadFromTargetting(class UAbilityPayload* _payload, class AActor* _self);
    void BPE_PostUpdatePayloadFromTargetting(class UAbilityPayload* _payload, class AActor* _self, InputAction _eInput, const FTargetResult& _target);
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void BPE_InitPayload(class UAbilityPayload* _ePayload);
    class AActor* BPE_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo);
    uint8 BasePlayOrder(class USCGameplayAbility* _self, const FSCGameplayAbilityActivationInfo& _activationInfo, bool _bOnTarget, class AActor* _customTarget, EOrderType _eOrderType, FName _BPOrderID, FPlayOrderInfos _playOrderInfos, bool _bBindToAbility, class UScriptStruct* _baseNetOrderType, const FNetOrderStruct& _netOrderStruct);
};

class UAttackAbility : public USCGameplayAbility
{
    bool m_bUseCameraForwardWhenNoTarget;

};

class UAttackBTTask : public UAIBTTaskNode
{
};

struct FAnimSyncContainer
{
    FAnimContainer m_InstigatorAnim;
    FAnimContainer m_VictimAnim;

};

struct FAttackIKProfileInfos
{
    FSCUserDefinedEnumHandler m_Profile;
    FName m_AnimCurveName;

};

struct FAttackIKLimbProfiles
{
    FAttackIKProfileInfos m_Profiles;

};

struct FAttackHitRequest : public FHitRequest
{
};

struct FAvoidWindow
{
    FFrameRange m_FrameRange;
    int32 m_iAvoidID;
    EAvoidType m_eAvoidType;
    class UAvoidPropertyDB* m_AvoidPropertyDB;

};

struct FAvailabilityLayerWindow
{
    int32 m_uiHitConditions;
    FFrameRange m_FrameRange;
    class UAvailabilityLayerData* m_Layer;

};

struct FAbsorbWindow
{
    FFrameRange m_FrameRange;
    int32 m_iAbsorbID;
    class UAbsorbPropertyDB* m_AbsorbPropertyDB;

};

struct FComboAttack
{
    FDataTableRowHandle m_AnimationRow;
    class UAnimationAsset* m_animation;
    FWeaponAnimInfo m_weaponAnimInfoAssociated;
    bool m_bUsePreviousAttackFakieState;
    float m_fAnimFrameRate;
    float m_fAnimFrameDeltaTime;
    int32 m_iWantedBuildupFrames;
    bool m_bOverrideMinBuildupForwardDisplacement;
    float m_fMinBuildupForwardDisplacement;
    bool m_bOverrideAnimRange;
    float m_fGameplayRange;
    bool m_bIgnoreRange;
    bool m_bWantCustomMaxDisSnap;
    float m_fCustomMaxDisSnap;
    float m_fSnapbackMargin;
    bool m_bWantSnap;
    bool m_bWantSnapBack;
    bool m_bWantSnapDuringStrike;
    bool m_bIsRushAttack;
    bool m_bAlwaysTrackHittedTarget;
    float m_fMaxTrackingAngle;
    bool m_bApplyHitWithoutAttack;
    TArray<FHitBox> m_HitBoxes;
    EApplyDamageOnWeaponType m_eApplyDamageOnWeaponType;
    TArray<FAvailabilityLayerWindow> m_AvailabilityLayerWindows;
    TArray<FAvoidWindow> m_AvoidWindows;
    TArray<FAbsorbWindow> m_AbsorbWindows;
    FGameplayTagContainer m_AttackProperties;

};

class UAttackComponent : public UActorComponent
{
    FAttackComponent_OnAttackChangeState m_OnAttackChangeState;
    void OnAttackChangeState(EAttackStates _eNewState);
    FAttackComponent_OnAttackHitDynamic m_OnAttackHitDynamic;
    void OnAttackHitDymanic(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    FAttackComponent_OnAttackHitFilteredDynamic m_OnAttackHitFilteredDynamic;
    void OnAttackHitFilteredDynamic(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor, EHitDismissReason _eDismissReason);
    FAttackComponent_OnAttackLaunchedDynamic m_OnAttackLaunchedDynamic;
    void DynamicMulticast();
    FAttackComponent_OnNewAttacksChanged m_OnNewAttacksChanged;
    void OnNewAttacksChanged();
    FAttackComponent_OnTargetChange m_OnTargetChange;
    void OnTargetChange(EActionType _eAction);
    FAttackComponentOnMovableUsable OnMovableUsable;
    void OnMovableUsabilityChanged(EMovableType _eMovableType, bool _bUsable);
    FAttackComponentOnDangerStateChanged OnDangerStateChanged;
    void OnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    FAnimSyncContainer m_TakedownDebugAnims;
    FAnimSyncContainer m_EnvTakedownDebugAnim;
    FAttackIKLimbProfiles m_AttackIKProfiles;
    FAttackComponent_OnFocusMechanicStart m_OnFocusMechanicStart;
    void OnFocusMechanicStart();
    FAttackComponent_OnFocusMechanicValidated m_OnFocusMechanicValidated;
    void OnFocusMechanicValidated(class AVitalPointActor* _vitalPointSelected);
    FAttackComponent_OnFocusMechanicStop m_OnFocusMechanicStop;
    void OnFocusMechanicStop(bool _bCancel);
    FAttackComponent_OnFocusMechanicUpdate m_OnFocusMechanicUpdate;
    void OnFocusMechanicUpdate(float _fDeltaTime, float _fRealTimeDeltaTime);
    FAttackComponent_OnFocusMechanicNewPointSelected m_OnFocusMechanicNewPointSelected;
    void OnFocusMechanicNewPointSelected(class AVitalPointActor* _previousVitalPointSelected, class AVitalPointActor* _vitalPointSelected);
    FAttackComponentOnFocusPointsValueChanged OnFocusPointsValueChanged;
    void FocusPointValueChanged(float _fPrevious, float _fNew);
    FAttackComponentOnFocusBarValueChanged OnFocusBarValueChanged;
    void FocusPointValueChanged(float _fPrevious, float _fNew);
    FAttackComponentOnChargedCapStarted OnChargedCapStarted;
    void OnAttackChargedCapStart(uint8 _attackOrderID, uint8 _uiLevel, float _fDuration);
    FAttackComponentOnChargedCapEnded OnChargedCapEnded;
    void OnAttackChargedCapEnd(uint8 _attackOrderID, uint8 _uiLevel, EChargeCapEndReason _eEndReason);
    FAttackComponentOnChargedCapUpdate OnChargedCapUpdate;
    void OnAttackChargedCapUpdate(uint8 _attackOrderID, uint8 _uiLevel, float _fDt, float _fCurrentRatioInChargingPhase);
    FAttackComponentOnChargedAttackLaunched OnChargedAttackLaunched;
    void OnAttackChargedLaunched(uint8 _attackOrderID, uint8 _uiLevel);
    TSubclassOf<class UPushObjectAnimRequest> m_pushAnimRequest;
    class UCombo* m_DefaultCombo;
    TArray<InputAction> m_AttackActions;
    class UComboManager* m_ComboManager;
    float m_fAttackReorientationDurationFromIdle;
    float m_fAttackReorientationDurationFromAttack;
    float m_fAttackReorientationDurationIfChangedDuringAttack;
    class UIdleDB* m_IdleDB;
    class UEnvironmentalAttackDetectionDB* m_TakedownDB;
    float m_fEnterFightDistance;
    float m_fExitFightDistance;
    float m_fVirtualTargetAntiSpamRange;
    class UCurveFloat* m_VirtualTargetRemapCurve;
    TWeakObjectPtr<class AActor> m_Target;
    FName m_HitTargetBoneName;
    TMap<class FName, class ELimbs> m_UpperLimbBoneNames;
    FName m_TargetSocketHigh;
    FName m_TargetSocketHighMiss;
    FName m_TargetSocketHighMissSide;
    FName m_TargetSocketMid1;
    FName m_TargetSocketMidMiss;
    FName m_TargetSocketMidMissSide;
    FName m_TargetSocketMid2;
    FName m_TargetSocketLowLeft;
    FName m_TargetSocketLowMiss;
    FName m_TargetSocketLowMissSide;
    FName m_TargetSocketLowRight;
    FName m_AimIKCurveName;
    FName m_FakeHipsBoneName;
    class UTargetDB* m_TargetDB;
    float m_StaminaConsumptionValues;
    bool m_bAttackHasImpactOnGuardGauge;
    float m_FreezeFrameNb;
    float m_ResilientFreezeFrameNb;
    float m_GuardFreezeFrameNb;
    class URushAttackDB* m_RushAttackDB;
    float m_fFlatHitBoxesCapsuleHalfHeightFactorThresold;
    uint32 m_uiFlatHitBoxesControllerNatureMask;
    float m_fDangerTimeOut;
    EDangerStates m_eDangerState;
    float m_fMaxDistSnap;
    bool m_bDisableSnapWhenTargetInRange;
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    TArray<class UAnimSequence*> m_TakedownHistory;
    bool m_bCanGuardBreakAfterDeflected;
    class UFocusDB* m_FocusDB;

    void SetWantsComboRestart(bool _bWantsRestart);
    void ServerSetTarget(class AActor* _target);
    void OnTargetChange__DelegateSignature(EActionType _eAction);
    void OnRep_DangerState(EDangerStates _ePreviousDangerState);
    void OnNewAttacksChanged__DelegateSignature();
    void OnMovableUsabilityChanged__DelegateSignature(EMovableType _eMovableType, bool _bUsable);
    void OnFocusMechanicValidated__DelegateSignature(class AVitalPointActor* _vitalPointSelected);
    void OnFocusMechanicUpdate__DelegateSignature(float _fDeltaTime, float _fRealTimeDeltaTime);
    void OnFocusMechanicStop__DelegateSignature(bool _bCancel);
    void OnFocusMechanicStart__DelegateSignature();
    void OnFocusMechanicNewPointSelected__DelegateSignature(class AVitalPointActor* _previousVitalPointSelected, class AVitalPointActor* _vitalPointSelected);
    void OnDangerStateChanged__DelegateSignature(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    void OnAttackHitFilteredDynamic__DelegateSignature(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor, EHitDismissReason _eDismissReason);
    void OnAttackHitDymanic__DelegateSignature(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void OnAttackChargedLaunched__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel);
    void OnAttackChargedCapUpdate__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDt, float _fCurrentRatioInChargingPhase);
    void OnAttackChargedCapStart__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDuration);
    void OnAttackChargedCapEnd__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, EChargeCapEndReason _eEndReason);
    void OnAttackChangeState__DelegateSignature(EAttackStates _eNewState);
    void MulticastOrderAttackTrackingOver(uint8 _uiOrderId);
    class AActor* GetNextAttackTarget();
    void FocusPointValueChanged__DelegateSignature(float _fPrevious, float _fNew);
    void BPF_ValidateFocus(class AVitalPointActor* _vitalPoint);
    void BPF_UpdateLockMoveTarget(class AActor* _currentAttacked);
    void BPF_StopFocus(bool _bCancel);
    void BPF_StartFocus();
    void BPF_SetTargetForSlot(FName _BPTargetSlot, class AActor* _target);
    void BPF_SetServiceActive(EActionType _eActionType, bool _bActive);
    void BPF_SetMoveDuringAttacks(bool _bMove);
    void BPF_SetFocusPointsInfinite(bool _bInfinite);
    void BPF_SetAutoDeflectStructureBroken(bool _bAutoDeflectOn, float _fOverrideStructureDamageDeflect, float _fOverrideStructureDamageParry);
    void BPF_ResetToDefaultCombo();
    void BPF_OverrideCombo(class UCombo* _combo);
    bool BPF_IsPlayingAttack();
    bool BPF_IsFocusPointsInfinite();
    class AVitalPointActor* BPF_GetVitalPointSelected();
    class AInteractiveMovable* BPF_GetTempMovable(EActionType _eActionType);
    class AActor* BPF_GetTargetForSlot(FName _BPTargetSlot);
    class AActor* BPF_GetTargetForInput(InputAction _eInput);
    class AActor* BPF_GetTargetForAction(EActionType _eActionType, bool _bForceOutOfDate);
    class UTargetDB* BPF_GetTargetDB();
    TArray<class AActor*> BPF_GetPotentialTargetsForAction(EActionType _eActionType);
    FHitBox BPF_GetNextActiveHitBox(bool _bIncludeActive, bool& _bSuccess, bool& _bOutMirror, float& _fOutDelay);
    ELimbs BPF_GetLimbFromBone(FName _boneName, bool _bMirror);
    float BPF_GetFocusTimeLeftInRatio();
    float BPF_GetFocusTimeLeft();
    class UFocusDB* BPF_GetFocusDB();
    EDangerStates BPF_GetDangerState();
    class AThrowableActor* BPF_GetCurrentThrowable();
    class APushableActor* BPF_GetCurrentPushable();
    float BPF_GetCurrentFocusPointsValue();
    FAvoidWindow BPF_GetCurrentAvoidWindow(bool& _bSuccess);
    float BPF_GetCurrentAttackTimeLeft();
    EAttackStates BPF_GetCurrentAttackState();
    float BPF_GetCurrentAttackRatio();
    FName BPF_GetCurrentAttackName();
    float BPF_GetCurrentAttackDuration();
    FComboAttack BPF_GetCurrentAttack(bool& _bSuccess);
    FAbsorbWindow BPF_GetCurrentAbsorbWindow(bool& _bSuccess);
    FHitBox BPF_GetBestActiveHitBox(bool& _bSuccess, bool& _bOutMirror);
    void BPF_ConsumeFocusPoints(float _fFocusPoints);
    bool BPF_CanConsumeFocusPoints(float _fFocusPointsNeeded);
    void BPF_AddFocusPointRefillValue(float _fFocusPointsToAdd);
    void BPF_AddFocusPointRefill(FSCUserDefinedEnumHandler _focusGainEnum);
};

class UAttackCookingDB : public UDataAsset
{
};

class UAttackForceTrackingNotifyState : public USCAnimNotifyState
{
};

class UAttackFramesNotifyState : public UAnimNotifyState
{
    class UAttackDB* m_DB;

};

class UAttackHitBoxTargetInfluenceTest : public UAIInfluenceTest
{
    EAttackTarget m_eHitTarget;

};

class UAttackMemoryInfluenceTest : public UAIInfluenceTest
{
    FGameplayTagContainer m_AttackProperties;
    bool m_bTestThrowAttack;
    TSoftClassPtr<AThrowableActor> m_ThrowableClassToTest;
    float m_fMemoryLimit;
    uint8 m_uiHitsCount;
    uint8 m_HitTypes;
    bool m_bDodged;
    bool m_bAvoided;

};

class UAttackOriginHelper : public UBlueprintFunctionLibrary
{

    EAttackOrigin BPF_Mirror(EAttackOrigin _eAttackOrigin, bool _bMirror);
};

class UAttackPreview : public UObject
{
};

class UBaseNotification : public UObject
{
    EMenuEnum m_eOpenMenu;

};

class UAttackProgressNotification : public UBaseNotification
{
    bool m_bDiscovered;
    bool m_bUnlocked;
    FName m_Attack;
    int32 m_iBaseXP;
    int32 m_iGainedXP;

    class UAttackProgressNotification* BPF_InitUnlocked(FName _attack);
    class UAttackProgressNotification* BPF_InitProgress(FName _attack, int32 _iBaseXP, int32 _iGainedXP);
    class UAttackProgressNotification* BPF_InitDiscovered(FName _attack);
};

class UAttackPropertiesInfluenceTest : public UAIInfluenceTest
{
    FGameplayTagContainer m_AttackProperties;

};

struct FAttackPropertyResistanceMatrixByFightingState
{
    FAttackPropertyLevel m_Matrix;

};

struct FBaseFightingStateBehavior
{
    bool m_bIsPersistent;
    int32 m_iPersistencePriority;
    class UAvailabilityLayerData* m_SuperAvailabilityLayer;

};

struct FPropertyReactionMovement
{
    class UCurveFloat* m_StateMoveDynamic;
    float m_fStateDistance;
    float m_fDuration;

};

struct FPropertyReactionHit
{
    float m_fHittedDuration;
    class UCurveFloat* m_HittedDynamic;
    float m_fHittedKnockBackDistance;
    float m_fHittedToStateBlendDuration;

};

struct FAITimedConditionedAction
{
    FFloatRange m_TimeRange;
    FAIConditionedAction m_Action;

};

struct FAIResistanceActions
{
    TArray<FAITimedConditionedAction> m_OnTick;
    TArray<FAIConditionedAction> m_OnEnd;

};

struct FPropertyReaction : public FBaseFightingStateBehavior
{
    FPropertyReactionMovement m_Movement;
    FAnimContainer m_RecoveryAnims;
    bool m_bUseRootMotion;
    FPropertyReactionHit m_HitReaction;
    bool m_bAlwayKeepCurrentStateDurationOnHit;
    bool m_bPauseGuardBreak;
    bool m_bHoldDuringStructureBroken;
    float m_fMaxAccumulatedDamage;
    int32 m_iMaxAccumatedHits;
    bool m_bGroupMaxAccumulatedHitsByAttack;
    FAIResistanceActions m_Actions;

};

struct FStructureBrokenReaction : public FBaseFightingStateBehavior
{
    float m_fDuration;
    FAnimContainer m_Loop;
    bool m_bMirrorableLoop;
    float m_fGuardCoefRecoveredAtEnd;
    float m_fGuardRecoveredAtEnd;

};

struct FDizzyReaction : public FPropertyReaction
{
    FAnimContainer m_Loop;
    bool m_bMirrorableLoop;
    bool m_bAllowDizzyOnTopOfDizzy;

};

struct FSuperDizzyReaction
{
    float m_fMandatoryDuration;
    float m_fMaxAccumulatedDamage;
    int32 m_iMaxAccumatedHits;

};

struct FPushedFromGrabbedReaction
{
    FAnimContainer m_Loop;
    FPropertyReactionMovement m_Movement;

};

struct FPushPropertyReaction
{
    FHitBox m_WallSplashHit;
    FHitBox m_WallSplashCloseHit;
    FHitBox m_WallSplashHitOnWall;
    FHitBox m_HitBox;
    FPropertyReaction m_BasePushReaction;
    FPushedFromGrabbedReaction m_PushedFromGrabbedReaction;
    float m_EnvAttackRanges;
    float m_fAttackEnvCapsuleExtent;
    float m_fEnvAttackMaxAngleDeg;
    float m_fEnvAttackMaxAngleWitoutSnapDeg;
    float m_fNavigationCostHeuristicScale;
    float m_fNavigationMaxPathCost;
    FName m_EnvAttackImpactBoneName;

};

class UAttackPropertiesResistanceDB : public UInheritedDataAsset
{
    FAttackPropertyResistanceMatrixByFightingState m_ResistanceMatrix;
    bool m_bIsConsidereredAsKnockdownThreat;
    bool m_bInterruptDownWhenAlone;
    FPropertyReaction m_DownReaction;
    FStructureBrokenReaction m_StructureBrokenReaction;
    FDizzyReaction m_DizzyReaction;
    FSuperDizzyReaction m_SuperDizzyReaction;
    FPushPropertyReaction m_PushedReaction;
    FAnimContainer m_FallFromPushedAnim;

};

class UAttackPropertyLevelHelper : public UBlueprintFunctionLibrary
{

    int32 BPF_GetAttackPropertyLevel(const FAttackPropertyLevel& _attackPropertyLevel, EHitBoxAttackProperties _eProperty);
};

struct FMainAttackComboDB
{
    TArray<FName> m_ComboQuadrantsFrontLeftXls;
    TArray<FName> m_ComboQuadrantsFrontRightXls;
    TArray<FName> m_ComboQuadrantsBackRightXls;
    TArray<FName> m_ComboQuadrantsBackLeftXls;

};

struct FAlternativeAttackComboDB
{
    FName m_Attacks;

};

struct FAttackComboDB
{
    FMainAttackComboDB m_MainAttacksComboDB;
    FAlternativeAttackComboDB m_AlternativeAttacksComboDB;

};

class UAttacksComboDB : public UDataAsset
{
    FAttackComboDB m_Struct;

};

class UAttackStateCondition : public UBaseActorCondition
{
    TArray<EAttackStates> m_AllowedStates;

};

class UAttackTrackingOrderService : public UOrderService
{
    float m_fForceTrackingFrames;
    bool m_bAlwaysTrackHittedTarget;
    bool m_bIsTrackingWindowOpenedByDefault;
    bool m_bIsRushAttack;
    bool m_bUseDisplacementDirAsAttackDir;
    TArray<EOrderType> m_StopTrackingIfTargetPlaysOrder;

    void BPF_GetTrackingLocation(const FBPOrderServiceInstance& _instance, bool& _bSuccess, FVector& _value);
};

class UAttackWithWeaponInfluenceTest : public UAIInfluenceTest
{
};

class UAuthoriseHitNotify : public USCAnimNotify
{
};

class UAvailabilityKeyValuePair : public UDataAsset
{
    EFightingActionState m_eFightingActionState;
    class UAvailabilityLayerData* m_Data;
    bool m_bOverrideAllLayers;

};

struct FAvailabilityLayerCombinations
{
    class UAvailabilityLayerData* m_LayerData;
    EALBinaryOperation m_eOperator;

};

class UAvailabilityLayerData : public UDataAsset
{
    InputContext m_eContext;
    TArray<FAvailabilityLayerCombinations> m_Combinations;
    bool m_bInvertSelection;
    TArray<InputAction> m_inputActionArray;

};

class UAvailabilityLayerDB : public UDataAsset
{
    TArray<class UAvailabilityKeyValuePair*> m_pairs;
    class UAvailabilityLayerData* m_defaultLayerData;
    class UAvailabilityLayerData* m_NoActionLayerData;
    class UAvailabilityLayerData* m_NothingLayerData;
    class UAvailabilityLayerData* m_FallLayerData;

};

class UAvailabilityLayerNotifyState : public USCAnimNotifyState
{
    class UAvailabilityLayerData* m_availabilityLayerData;
    EALBinaryOperation m_eOperation;
    int32 m_iPriority;
    FString m_alName;

};

class UAvailabilityLayerOrderService : public UOrderService
{
    class UAvailabilityLayerData* m_availabilityLayerData;
    EALBinaryOperation m_eOperation;
    int32 m_iPriority;

};

class UAvoidAbility : public USCGameplayAbility
{

    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox);
    void BPE_GetAvoidAnimationsBis(class AActor* _forActor, class AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, class UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType);
};

class UAvoidBTTask : public UAIDefenseBTTask
{
};

struct FCardinalMatchArray
{
    TArray<ESCCardinalPoints> m_Array;

};

class UAvoidDB : public UDataAsset
{
    TSubclassOf<class UAvoidMatchCondition> m_AvoidMatchConditionClass;
    FCardinalMatchArray m_CardinalMatchArray;
    bool m_bHasImpactOnGuardGauge;
    float m_fGuardGaugeCost;
    bool m_bAvoidConsumStamina;
    bool m_bOverrideAnimDynamicByCurve;
    class UCurveFloat* m_AvoidMovementdynamic;
    float m_fAvoidDuration;
    int32 m_iFrameBuildUp;
    int32 m_iFrameRelease;
    float m_fTrackingDuration;
    float m_fJumpSelectionAngleWidth;
    float m_fDuckSelectionAngleWidth;
    float m_fDodgeAvoidNorthAngle;
    float m_fDodgeAvoidSouthAngle;
    class UAvoidPropertyDB* m_DefaultAvoidPropertyDBs;
    EAvoidLaunchMethod m_eAvoidLaunchMethodOnHitDismissed;
    float m_fAvoidedDuration;
    float m_SuperAvoidedDuration;
    float m_fAvoidSuccessfulRefillValue;
    float m_fSuperAvoidSuccessfulRefillValue;
    float m_fAvoidSuccessfulGuardGaugeRefillValue;
    float m_fSuperAvoidSuccessfulGuardGaugeRefillValue;
    class UCurveFloat* m_AvoidedAttackScaleCurves;
    FBool m_AvoidDismissesPerfectLink;
    FBool m_SuperAvoidDismissesPerfectLink;
    int32 m_iOrdersAllowedToPushAvoidSuccessfulLayer;
    int32 m_iSuperAvoidOrders;
    class UAvoidMatchCondition* m_AvoidMatchCondition;

};

class UAvoidMatchCondition : public UObject
{

    EAvoidTrackingTypes BPE_GetAttackTrackingResponseFromAvoidType(EAvoidType _eAvoidType);
    bool BPE_DoesAvoidMatch(EAvoidType _eAvoidType, const FHitBox& _hitbox, bool _bMirror);
    bool BPE_DoesAvoidDismissesHit(EAvoidType _eAvoidType, ESCCardinalPoints _eCardPoint, const FHitBox& _hitbox, bool _bMirror);
};

class UAvoidPropertyDB : public USpecialAbilityPropertyDB
{
    float m_fAvoidedDuration;
    class UCurveFloat* m_AvoidedAttackScaleCurves;
    EAvoidFeedbackTypes m_eAvoidFeedbackTypes;
    bool m_bAvoidedEnterDizzyOnAttacked;
    class UAvoidPropertyDB* m_AvoidDBOnDizzyAttack;
    bool m_bShouldEndCombo;

};

struct FAvoidPropertyContainer
{
    class UAvoidPropertyDB* m_AvoidPropertyDB;

};

class UAvoidWindowNotifyState : public USCAnimNotifyState
{
    TArray<EAvoidType> m_AvoidTypeArray;
    FAvoidPropertyContainer m_AvoidPropertyContainer;

};

class UBlueprintActorCondition : public UBaseActorCondition
{

    bool BPE_Evaluate(const class AActor* _actor);
};

class UBaseActorConditionHelpers : public UBlueprintFunctionLibrary
{

    class UObject* BPF_GetInstance(const FBaseActorConditionInstance& _instance);
    bool BPF_Evaluate(const FBaseActorConditionInstance& _instance, class AActor* _actor, bool _bDefaultResult);
};

class UInverseActorCondition : public UBaseActorCondition
{
    FBaseActorConditionInstance m_condition;

};

class UInverseActorTargetCondition : public UBaseActorTargetCondition
{
    FBaseActorTargetConditionInstance m_condition;

};

class ABaseBreakable : public AActor
{
    class UBoxComponent* m_ProximityBoxCreatePhysics;
    class UReplayableDestructibleComponent* m_ReplayableDestructibleComponent;
    class UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    class UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    class USCStreamingActorComponent* m_StreamingComponent;
    FSCCollisionResponsePreset m_editorBoxCollisionPreset;
    uint64 m_uiActionStateDestroyableByMask;
    uint64 m_uiAIActionStateDestroyableByMask;
    bool m_bFilterByActionStateOnOverlap;
    bool m_bFilterByActionStateOnHit;
    bool m_bFilterByResistanceIfMatchActionStateOnHit;
    bool m_bFilterByResistanceIfDontMatchActionStateOnHit;
    bool m_bDestroyableByThrowable;
    uint32 m_uiThrowableStateDestroyableByMask;
    float m_fDestructionVelocityRef;
    bool m_bExecuteFractureOnce;
    bool m_bHasBeenFracturedOnce;
    float m_fMinDamageRadius;
    float m_fActionStateImpulseStrength;
    float m_fPhysicImpulseStrength;
    float m_fPhysicRightCursor;
    float m_fThrowableImpulseStrength;
    bool m_bPlayBounceSfx;
    FName m_BounceRTPC;
    TMap<float, UAkAudioEvent*> m_PerImpulseBounceSfxs;
    class AActor* m_DestructionCauser;
    float m_fProximityCreatePhysicsOffset;

    void OnWakeStateChanged(bool _bIsAwake);
    void OnPendingDamageReceived(const FVector& _vHitPoint, const FVector& _vHitDirection);
    void OnOverlapEndProximityBoxCreatePhysics(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    void OnOverlapBeginProximityBoxCreatePhysics(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void OnComponentStartOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void OnComponentEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    void BPF_UnbindOverlap();
    void BPF_SetDamageable(bool _bInDamageable);
    void BPF_EngageDestructionCausedByActor(class AActor* _inCauser, float _fInImpulseStrength);
    void BPF_EngageDestruction(const FVector& _vInHurtOrigin, float _fRadius, float _fInImpulseStrength);
    float BPE_GetRTPCValue();
    float BPE_GetMassOverride();
    float BPE_GetHitResistance();
};

struct FDynamicMaterialsPerType
{
    TArray<class UMaterialInstanceDynamic*> m_DynamicMaterials;
    TArray<class UMaterialInstance*> m_RefMaterials;

};

struct FDynamicMaterialInput
{
    FName m_ParameterToUpdate;
    float m_fValue;

};

class ABaseCharacter : public ASCCharacter
{
    class USocialComponent* m_SocialComponent;
    class UOrderComponent* m_OrderComponent;
    class UCharacterTextLipSync* m_LipSyncComp;
    int32 m_iBuildUpMaxShrinkingFrames;
    class USkinTonesDB* m_SkinTones;
    TArray<FDynamicMaterialsPerType> m_DynamicMaterialsPerFxType;
    class USCDialogComponent* m_DialogComponent;

    void OnLandedRaw(const FHitResult& _Impact);
    void OnCapsuleBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    bool IsDead();
    void BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs);
    void BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value);
    void BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue);
    void BPF_SetGenderInSave(ECharacterGender _eNewGender, bool _bSendTrackingData);
    bool BPF_PopAvailabilityLayer(int32 _iId, InputContext _eInputContext);
    bool BPF_IsCurrentGameModeCoopAlly(class AActor* _otherActor);
    bool BPF_IsAvailable(InputAction _eAction);
    class USocialComponent* BPF_GetSocialComponent();
    ERelationshipTypes BPF_GetRelationship(class AActor* _actor);
    class UOrderComponent* BPF_GetOrderComponent();
    ECharacterGender BPF_GetGenderInSave();
    TArray<class UMaterialInstanceDynamic*> BPF_GetCurrentMaterialInstances();
    EControllerNature BPF_GetControllerNature();
    void BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading);
    void BPE_PlayerStateInitialized(class APlayerState* _playerState);
    void BPE_ControllerReplicated(class APlayerController* _controller);
    void BPE_BodyPartsUpdated();
};

class ABaseCharacterImpostor : public ASCCharacterImpostor
{
    ESCSignificanceBuckets m_eMoanMinBucket;
    class UAkAudioEvent* m_MoanEvent;
    TArray<FAkExternalSourceInfo> m_MoanExternalSourceInfos;
    class UAkRtpc* m_MoanIntensityRTPC;
    FName m_MoanIntensityRTPCName;
    float m_fMoanInterpolationInMs;
    class UCurveFloat* m_AngleFromCameraForwardRemappingCurve;
    FName m_MoanRefBoneName;
    float m_MoanIntensityThresold;

};

struct FCombatCircleDescription
{
    float m_fRadius;
    float m_fOffsetRotation;
    int32 m_NbPositionsToGenerate;
    float m_fPositionGenerationThreshold;
    bool m_bAllowSnapAfterRaycast;
    float m_fSnapSafeDistance;
    float m_fNavPickingTolerance;

};

class UBasePositionSettings : public UObject
{
    TArray<FCombatCircleDescription> m_CirclesDescriptions;

};

class UBaseCombatPositionSettings : public UBasePositionSettings
{
    TMap<EAIWuguanTicketEvaluation, float> m_fTestScoreFactors;

};

class IBaseComponent : public IInterface
{
};

struct FNetOrderStructPlayAnim : public FNetOrderStruct
{
    FAnimContainer m_AnimContainerToPlay;
    FWeaponAnimInfo m_weaponAnimInfoAssociated;
    bool m_bUseRootMotion;
    bool m_bOverrideDynamic;
    class UCurveFloat* m_OverrideDynamicCurve;
    bool m_bBlendPreviousSpeed;
    float m_fBlendPreviousSpeedDuration;
    bool m_bOverrideDuration;
    float m_fOverrideDuration;
    bool m_bInterruptAfterDelay;
    float m_fInterruptDelay;
    bool m_bOverrideDistance;
    float m_fOverrideDistance;
    bool m_bIsOverrideDistanceAbsolute;
    bool m_bOverrideDirection;
    FVector m_vOverrideDirection;
    bool m_bOverrideOrientation;
    FVector m_vOverrideOrientation;
    bool m_bOverridePlayRate;
    float m_fOverridePlayRate;
    float m_fFrozenPlayRate;
    bool m_bIsInfinite;
    bool m_bIsMovingOrder;
    bool m_bUseStartRatioOnNewLoop;
    bool m_bAllowMirroringOnWeapon;
    EQuadrantTypes m_eForcedQuadrant;

};

struct FNetOrderStructSnapAnim : public FNetOrderStructPlayAnim
{
    bool m_bIsSnapper;
    bool m_bSnapOnTarget;
    int32 m_iSyncID;
    bool m_bIsInstigator;

};

struct FNetOrderStructAttackEnv : public FNetOrderStructSnapAnim
{
    FTransform m_Snap;
    TWeakObjectPtr<class UBaseEnvironmentalInteractionComponent> m_EnvironementalTakedownComponent;
    EOrderType m_eTargetOrder;
    FHitResult m_Impact;
    FHitBox m_Hit;
    FHitBox m_EnvHit;

};

struct FNetOrderStructTakedown : public FNetOrderStructAttackEnv
{
    bool m_bFromParry;
    bool m_bEnvironementalTakedown;
    FHitResult m_ParryHit;
    FImpactResult m_ParryImpact;
    FHitRequest m_ParryHitRequest;
    FHitResult m_ImpactOnEnv;

};

class UBaseEnvironmentalInteractionComponent : public UActorComponent
{
    FBaseEnvironmentalInteractionComponent_OnImpact m_OnImpact;
    void OnImpact(class AFightingCharacter* _takenDown, const FNetOrderStructTakedown& _takedownInfos);
    bool m_bActive;
    EPushObstacleReaction m_eReaction;
    int32 m_uiAllowedInteractionTypes;

    void OnImpact__DelegateSignature(class AFightingCharacter* _takenDown, const FNetOrderStructTakedown& _takedownInfos);
    void BPE_OnTakedownStarted(class AFightingCharacter* _Instigator, class AFightingCharacter* _takenDown);
    EPushObstacleReaction BPE_GetPushReaction(const class AFightingCharacter* _Instigator, const class AFightingCharacter* _takenDown);
    bool BPE_CanTakeDown(class AFightingCharacter* _Instigator, class AFightingCharacter* _takenDown);
};

class UBaseHitDetectionDB : public UDataAsset
{
    bool m_bUseBoneTransform;
    FName m_boneName;
    bool m_bIsSocket;
    bool m_bOnTargetOnly;
    FVector m_vOffset;
    FRotator m_RotationOffset;

    FName BPF_GetRealBoneName(class USkeletalMeshComponent* _meshComponent);
    FName BPF_GetBoneOnCharacter(class ABaseCharacter* _character, bool _bMirror, FTransform& _delta);
};

class UBaseItemData : public UDataAsset
{
    FText m_ItemName;
    TSoftObjectPtr<UTexture2D> m_InventoryIcon;
    EEquipmentSlot m_EquipmentSlot;
    bool m_bIsAResource;
    bool m_bHasDurability;
    bool m_bIsUnique;
    bool m_bCanBeSalvaged;
    bool m_bCanBeDyed;

};

struct FSpeedStateBlendDescription
{
    float m_BlendTime;
    class UCurveFloat* m_BlendCurve;

};

struct FSpeedStateBlendTo
{
    FSpeedStateBlendDescription m_BlendDescription;

};

struct FreeMoveAnimQuadrant
{
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpace;

};

struct FCardinalSpeed
{
    bool m_bUseCommonSpeed;
    FFloatRange m_CommonSpeed;
    FFloatRange m_CardinalSpeeds;

};

struct FLockMoveAnimQuadrant
{
    FAnimContainer m_LockMoveAnimContainer;
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;

};

struct FLocomotionRotationParams
{
    ELocomotionRotationType m_eRotationType;
    float m_fSnapDuration;
    float m_fLerpFactor;

};

class UBaseMovementDB : public UInheritedDataAsset
{
    class UDetailedMoveTransitionDB* m_DetailedMoveTransitionDB;
    TSubclassOf<class UTransitionAnimRequest> m_TransitionAnimRequest;
    FSpeedStateBlendTo m_BlendDescription;
    float m_fRushMoveAnimSpeed;
    float m_fRushMoveOverallStretchFactor;
    float m_fRushMoveMaxAngularSpeed;
    float m_fRushMoveTransitionMaxAngularSpeed;
    float m_fRushStaminaConsumptionRate;
    class UCurveFloat* m_RushStaminaConsumptionOverWeightRatio;
    float m_fRushCooldownBurnAllStamina;
    float m_fWantToRushInLockMoveTimeOut;
    bool m_bSwitchToExploOnLongRush;
    float m_fRushDurationToExplo;
    bool m_bAuthorizeMirroring;
    TArray<FAnimContainer> m_AlertedAIIdlesAnims;
    TArray<FAnimContainer> m_BaseAIIdlesAnims;
    FAnimContainer m_FreeMoveAnim;
    FreeMoveAnimQuadrant m_FreeMoveAnimQuadrant;
    FAnimContainer m_FreeMoveAnimWeapon;
    FreeMoveAnimQuadrant m_FreeMoveAnimWeaponQuadrant;
    FCardinalSpeed m_LockMoveSpeed;
    float m_fLockMoveOverallStretchFactor;
    FCardinalSpeed m_FreeMoveSpeeds;
    float m_fFreeMoveV1AnimSpeed;
    float m_fFreeMoveV1OverallStretchFactor;
    float m_fFreeMoveV2AnimSpeed;
    float m_fFreeMoveV2OverallStretchFactor;
    float m_fFreeMoveMaxAngularSpeed;
    float m_fFreeMoveTransitionMaxAngularSpeed;
    FBool m_bCamOverTheShoulder;
    uint32 m_uiLookAtLockMoveTargetAllowedPerAlertLevelMask;
    FLockMoveAnimQuadrant m_LockMoveAnim;
    FLockMoveAnimQuadrant m_LockMoveAnimWeapon;
    float m_fAnimNorthSpeed;
    float m_fAnimSouthSpeed;
    float m_fAnimEastSpeed;
    float m_fAnimWestSpeed;
    float m_fLockMoveMaxAngularSpeed;
    float m_fLockMoveTransitionMaxAngularSpeed;
    float m_fV3LandingVelocityThreshold;
    float m_fV2LandingVelocityThreshold;
    float m_fV1LandingVelocityThreshold;
    float m_fV3ActionToLocomotionSpeedThreshold;
    float m_fV2ActionToLocomotionSpeedThreshold;
    float m_fV1ActionToLocomotionSpeedThreshold;
    float m_fActionToLocomotionBlendDuration;
    ESCBlendType m_eActionToLocomotionBlendType;
    float m_WeightCategoryMobilityRatios;
    float m_WeightCategoryMobilityRatiosLockMove;
    bool m_bOverweightImpactFreemoveState;
    class UCurveFloat* m_LockMoveVelocityLerpCurve;
    class UCurveFloat* m_FreeMoveVelocityLerpCurves;
    FLocomotionRotationParams m_LockMoveRotationParams;
    FLocomotionRotationParams m_FreeMoveRotationParams;
    FFloatRange m_AccumulationRotationDelayTimeRange;
    class UCurveFloat* m_RotationSpeedMultiplierByTime;
    bool m_bEnableTransitions;
    float m_fMaxStrafeDeltaAngle;
    float m_fStartInterruptFirstStepRatio;
    bool m_bFreeMoveEnableAnimTransitions;
    bool m_bFreeMoveEnablePivotFoot;
    bool m_bLockMoveEnableAnimTransitions;
    bool m_bLockMoveEnablePivotFoot;
    bool m_EnableInputStabilisationOnMove;
    bool m_EnableSpeedBlender;
    float m_fMaxCoeffToUsePreviousSpeed;
    float m_fMaxCoeffOrderedToUsePreviousSpeed;
    uint32 m_uiForceKeepForwardOnStartsByMoveStatus;
    class USpeedPivotFootData* m_FreeMovePivotFootParams;
    class USpeedPivotFootData* m_LockMovePivotFootParams;
    class UDodgeDB* m_DodgeDB;

    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState _eSpeedState);
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState);
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState);
};

class ASCPlayerController : public ASCBasePlayerController
{
    TWeakObjectPtr<class UUserWidget> m_HUD;
    TArray<FString> m_ControllerMotionOutputList;
    TArray<FString> m_ControllerSecondaryOutputList;
    FSCPlayerController_OnAllActivitiesUpdated m_OnAllActivitiesUpdated;
    void AllActivitiesStarted();
    FSCPlayerController_OnAchievementCompleted m_OnAchievementCompleted;
    void AchievementCompleted(FString _achievementId);
    FSCPlayerController_OnQueryAchievementsCompleted m_OnQueryAchievementsCompleted;
    void OnQueryAchievementsCompleted();

    void UnlockAllAchievements();
    void UnlockAchievement(FString achievementId);
    void ResetAllAchievements();
    void ResetAchievement(FString achievementId);
    void QueryAchievements();
    void PushInputContext(class UInputContextData* _inputContextData);
    void PopInputContext(class UInputContextData* _inputContextData);
    void OnQueryAchievementsCompleted__DelegateSignature();
    void DebugTriggerEventProgession(const FString _eventName, const FString _eventParamName, int32 _iEventParamValue);
    void BPF_UpdateActivity(FString _activityID, EActivityWantedState _eActivityWantedState);
    void BPF_UpdateAchievementCompletion(FString _achievementId, float _fCompletionPercent);
    void BPF_ToggleMouseCaptureMode();
    void BPF_StartTimedAchievement(const FName& _achievementId, int32 _iNumOccurencess);
    void BPF_SetInUIInputMode(bool _bActivate, bool _bUIOnly);
    void BPF_SetHUD(class UUserWidget* _inHUD);
    void BPF_RestartAllActivities();
    void BPF_ResetAllActivities();
    void BPF_QueryAchievements();
    bool BPF_IsAchievementCompleted(FString _achievementId);
    bool BPF_HasUnlockAllAchievements();
    float BPF_GetTimedAchievementElapsed(const FName& _achievementId, int32& _iOutOnGoingOccurences);
    class AActor* BPF_GetStartSpot();
    FName BPF_GetLastGamepadControllerType();
    void BPF_ChangeActivityAvailability(FString _activityID, bool _bSetAvailable);
    void BPE_ShowSkipCutsceneWidget();
    void BPE_LeaveGame();
    void BPE_HideSkipCutsceneWidget();
    class UGenericErrorPopupWidget* BPE_GetPopupWidget();
    float BPE_GetMaxAchievementProgress(FString _achievementId);
    void BPE_GetActivitiesState(TArray<FString>& _activitiesState, TArray<FString>& _tasksToStart, TArray<FString>& _tasksToEnd, TArray<FString>& _subTasks);
    class UGenericErrorPopupWidget* BPE_CreatePopupWidget();
    void AllActivitiesStarted__DelegateSignature();
    void AchievementCompleted__DelegateSignature(FString _achievementId);
};

struct FAvailabilityLayerCache
{
    class UGenericAvailabilityLayerDB* m_DB;
    int32 m_iPriority;

};

struct FAvailabilityLayerCaches
{
    int32 m_iPriority;
    TArray<FAvailabilityLayerCache> m_layers;

};

class ABaseReplayController : public ASCPlayerController
{
    bool m_bFixedSpectatorMode;
    InputContext m_eMainInputContext;
    TSubclassOf<class ASpectatorPawn> m_SpectatorClass;
    TSubclassOf<class AReplayHUD> m_HUDClass;
    TSubclassOf<class UReplayMenuWidget> m_MenuClass;
    class UReplayMenuWidget* m_Menu;
    TMap<class FString, class FString> m_OverrideSoundStates;
    class UAvailabilityLayerData* m_AvailabilityDefaultLayerDB;
    TArray<class UAvailabilityLayerData*> m_DefaultAvailabilityLayerContextOverrides;
    FAvailabilityLayerCache m_SpectatorAvailabilityLayer;
    FAvailabilityLayerCache m_FixedSpectatorAvailabilityLayer;
    FAvailabilityLayerCaches m_ConsoleAvailabilityLayers;
    TSubclassOf<class UAngleFeedbackUserWidget> m_RollFeedbackClass;
    TSubclassOf<class URangeFeedbackUserWidget> m_ZoomFeedbackClass;
    TSubclassOf<class UHUDUserWidget> m_SaveGameWidgetClass;
    TArray<class TSubclassOf<UMessageFeedbackUserWidget>> m_MessageFeedbackClasses;
    class UAngleFeedbackUserWidget* m_RollFeedbackInstance;
    class URangeFeedbackUserWidget* m_ZoomFeedbackInstance;
    class UHUDUserWidget* m_SaveGameWidgetInstance;
    TArray<class UMessageFeedbackUserWidget*> m_MessageFeedbackInstances;

    void OnSaveGameStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    class AReplayHUD* GetReplayHUD();
    void BPF_ShowMessageFeedback(EMessageReason _eReason);
    void BPF_SetSingleActiveMenu(TScriptInterface<class IHandleInput> _menu);
    bool BPF_PushSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPushed);
    void BPF_PushAvailabilityLayers(FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPushed);
    void BPF_PushAvailabilityLayer(FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPushed, int32 _iPriority);
    bool BPF_PopSpectatorAvailabilityLayer(bool _bUpdateUIMode, bool _bCheckAlreadyPopped);
    void BPF_PopAvailabilityLayers(FAvailabilityLayerCaches& _inOutCacheALs, bool _bCheckIfAlreadyPopped);
    void BPF_PopAvailabilityLayer(FAvailabilityLayerCache& _inOutCacheAL, bool _bCheckIfAlreadyPopped);
    bool BPF_IsInputActionAvailable(InputAction _eInputAction);
    class UReplayCineCameraComponent* BPF_GetCineCameraComponent();
};

class UBaseShapeHitDetectionDB : public UBaseHitDetectionDB
{
    bool m_bApplyOwnerScale;

};

struct FAvailabilityLayerPushParams
{
    class UAvailabilityLayerData* m_availabilityLayerData;
    EALBinaryOperation m_eOperation;
    int32 m_iPriority;

};

class UMenuWidget : public USCUserWidget
{
    FMenuWidget_OnTransitionFinished m_OnTransitionFinished;
    void OnTransitionFinished();
    bool m_bIgnoreKeyFlushOnFocus;
    EWidgetLifeCycle m_eLifeCycle;
    bool m_bPushInputContext;
    FAvailabilityLayerPushParams m_availabilityLayer;
    bool m_bBlockParentMenuInputs;
    bool m_bBlockInputsWhenUIInputDisabled;
    bool m_bPopAvailabilityLayersOnlyOnHidden;
    bool m_bHideOnPushedOut;
    bool m_bHideOnPopOut;
    ESlateVisibility m_CurrentMenuVisibility;
    int32 m_iZOrder;

    void OnTransitionFinished__DelegateSignature();
    void BPF_SetMapTagName(FName _mapTagName);
    void BPF_PlayTransitionAnimation(class UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    void BPF_PlayBackSound();
    bool BPF_IsCurrentMenu();
    int32 BPF_GetZOrder();
    class UUserWidget* BPF_GetMenuAnimations();
    FVector2D BPF_GetLeftStickValue();
    bool BPF_GetIsInTransitionAnimation();
    void BPF_EnableInputs();
    void BPF_DisableInputs();
    bool BPF_AreInputsEnabled();
    void BPE_OpenFromNotification(class UBaseNotification* _notification);
    bool BPE_OnTrainingEditPressed();
    bool BPE_OnToggleStatsButtonPressed();
    bool BPE_OnStartTrainingPressed();
    bool BPE_OnSortingInventoryButtonPressed();
    bool BPE_OnRenameButtonPressed();
    bool BPE_OnRemoveButtonPressed();
    bool BPE_OnPasteButtonPressed();
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    bool BPE_OnMenuPreviewPressed();
    bool BPE_OnMenuButtonPressed();
    bool BPE_OnMenuActionSecondaryPressed();
    bool BPE_OnMenuActionSecondaryHoldButtonPressed();
    bool BPE_OnInputAction(InputAction eAction);
    void BPE_OnGroupMemberNewAnswer(const FUniqueNetIdRepl& _groupMemberUniqueId, class AActor* _memberActor, ECoopGameModeAnswerStatus _eNewAnswer, EGameModeTypes _eGameModeType);
    bool BPE_OnEditButtonPressed();
    bool BPE_OnCopyButtonPressed();
    bool BPE_OnBackButtonPressed();
    bool BPE_OnAltPageNavigation(ECycleDirection _eDirection);
    bool BPE_OnActionHoldButtonPressed();
    bool BPE_OnActionButtonPressed();
};

class UBaseStartMenu : public UMenuWidget
{
};

class UBaseUseCondition : public UObject
{

    bool IsFulfilled();
    void GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers);
    bool BPF_IsTargetPlayingOrder(EOrderType _eOrderType, uint8& _uiOutOrderID);
    bool BPF_IsStaminaRatioBelow(float _fStaminaThreshold);
    bool BPF_IsHitted(EGuardType& _eOutGuardType);
    bool BPF_IsHealthRatioBelow(float _fHealthThreshold);
    bool BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime);
    bool BPF_IsAttackIncoming(float& _fOutTimeTillStrike);
    bool BPF_HasAttackTicket();
    ESpeedState BPF_GetTargetSpeedState();
    EFightingState BPF_GetTargetFightingState();
    int32 BPF_GetHitCount(float _fTime, EGuardType _eGuardTypeFilter);
    float BPF_GetDistFromTarget();
    FName BPF_GetDifficultyName();
    float BPF_GetDifficultyLevelGauge();
    float BPF_GetDamageTaken(float _fTime);
    void BPE_OnFulfilled();
};

class AInteractiveMovable : public ASCActor
{
    class USCStreamingActorComponent* m_StreamingComponent;
    bool m_bEnableSreamingEvents;
    class UMovableInteractionComponent* m_InteractionComponent;
    class UInteractiveDestructionComponent* m_DestructibleComponent;
    class USCSaveGameComponent* m_SaveComponent;
    float m_fAngularFallingSpeedThreshold;
    float m_fLinearFallingSpeedThreshold;
    bool m_bIsBreakSilent;
    TSubclassOf<class UTargetSettingsDB> m_throwTargetSettingsDB;
    TWeakObjectPtr<class AActor> m_TmpTarget;
    FTransform m_SavedTransform;

    void OnUpdatedFromSaveCallback();
    void OnPreSaveLevel();
    void BPF_SetInstigator(class AActor* _Instigator);
    void BPF_SetActivate(bool _bActivated);
    bool BPF_IsReadyToUse();
    FVector BPF_GetPivotLoc();
    class AActor* BPF_GetInstigator();
    FVector BPF_GetHUDLocation();
    EDebugMovableState BPF_GetDebugMovableState();
    void BPE_ShowMovableInteractions();
    void BPE_OnUsabilityUpdated(bool _bUsable);
    void BPE_OnObjectBreak(bool _bIsSilent);
    void BPE_HideMovableInteractions();
    void BPE_HasHitChara();
    FText BPE_GetHUDActionText(bool& _bUsable);
    InputAction BPE_FindAppropriateActionFromContext(class AFightingCharacter* _user);
};

class AThrowableActor : public AInteractiveMovable
{
    FThrowableActorOnStateUpdated OnStateUpdated;
    void StateUpdated(EThrowableState _eNewState);
    bool m_bIsPickedupFromSpawning;
    FName m_sBoneToAttachToWhenThrowing;
    TSubclassOf<class UThrowObjectAnimRequest> m_ThrowAnimRequest;
    FVector m_vThrowStartBoxExtent;
    FVector m_vLastHitLocation;
    FVector m_vLastHitNormal;
    TArray<class AActor*> m_aHitActorToRemove;
    class UBoxComponent* m_BoxColl;
    class USphereComponent* m_BreakableProximity;
    class USceneComponent* m_ThrowPivot;
    class UPhysicalActorDependencyComponent* m_PhysicalActorDependencyComponent;
    float m_fDistToThrow;
    class UThrowableObjMovementComponent* m_MovementComponent;
    class UAIPerceptionStimuliSourceComponent* m_PerceptionStimuli;
    class UReplayablePhysObjectComponent* m_ReplayablePhysObjectComponent;
    class UReplayableDestructionComponent* m_ReplayableDestructionComponent;
    class UHitBoxComponent* m_throwHitBox;
    float m_fTimeIgnoreFloor;
    float m_fOnTargetHitSpeedReduction;
    float m_fMissingSpeedReduc;
    float m_fMissedDistance;
    bool m_bApplyGravityWhenFlyingFreely;
    EBounceType m_eBounceType;
    EBounceType m_eCurrentBounceType;
    class UCurveFloat* m_BounceBackAngle;
    FFloatRange m_BounceBackRange;
    bool m_bSimulatePhysicOnSpawn;
    FSCCollisionResponsePreset m_ColProfileAtRest;
    FSCCollisionResponsePreset m_ColProfileAtRestOnBreakable;
    FSCCollisionResponsePreset m_ColProfileThrown;
    FSCCollisionResponsePreset m_ColProfileThrownNoCol;
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithoutTarget;
    FSCCollisionResponsePreset m_ColProfileSnappedWithColWithTarget;
    FSCCollisionResponsePreset m_ColProfileSnapped;
    FSCCollisionResponsePreset m_ColProfileAfterHit;
    FSCCollisionResponsePreset m_ColProfileOnBounce;
    FSCCollisionResponsePreset m_ColProfilePickedUp;
    EHeight m_eTargettedHeight;
    EHeight m_eAltTargettedHeight;
    float m_fHeightLimitForFootAnimation;
    bool m_bUseAlternateHeightForFreeThrow;
    float m_fOffsetDistTrace;
    float m_fDistToCheckCollOnPathFreely;
    float m_fSoundNoiseRadius;
    bool m_bDestroyActorOnBreak;
    TSubclassOf<class UThrowableData> m_throwableData;
    EThrowableState m_eState;

    void StateUpdated__DelegateSignature(EThrowableState _eNewState);
    void OnWakeUp(bool _bWakesUp);
    void CheckStabilisationForPhysicOptimization();
    bool BPF_UseFootToThrow(const class AFightingCharacter* _Instigator);
    void BPF_ThrowFreely(class AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    void BPF_ThrowAtTarget(class AActor* _target, class AActor* _Instigator, bool _bForceOrientation, FRotator _rotationOffset);
    void BPF_SetupThrow(class AFightingCharacter* _Instigator, class AActor* _target, FVector _vThrowDirection);
    void BPF_SetThrowableState(EThrowableState _eNewState);
    void BPF_OverrideThrowableData(TSubclassOf<class UThrowableData> _newThrowableData);
    bool BPF_IsTooCloseToThrow(const class AActor* _Instigator, const class AActor* _target);
    EThrowableState BPF_GetThrowableState();
    class UThrowableData* BPF_GetThrowableData();
    class AActor* BPF_GetTarget(const class AFightingCharacter* _character);
    EDebugTargetState BPF_GetDebugTargetState(const class AFightingCharacter* _character, float& _fOutDist);
    void BPE_OverrideBounceType(const class AActor* _Instigator, const class AActor* _target);
    void BPE_OnThrown();
    void BPE_GetHitBox(FHitBox& _outHitbox, class AActor* _actorHit);
};

class ABaseWeapon : public AThrowableActor
{
    FBaseWeapon_OnDrop m_OnDrop;
    void OnDrop(EDropReason _eDropReason);
    TSubclassOf<class UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    TSubclassOf<class UBaseWeaponData> m_weaponData;
    TSubclassOf<class UWeaponGameplayData> m_weaponGameplayData;
    class USkeletalMeshComponent* m_SkeletalMeshComponent;
    class UAnimInstanceReplicationComponent* m_AnimInstanceReplicationComponent;
    FName m_EquipmentSocketName;
    TWeakObjectPtr<class AFightingCharacter> m_weaponBearer;
    class UAvailabilityLayerData* m_ThrowingFromPickupAvaibilityLayer;
    bool m_bAttachedFakie;
    FFloatRange m_ResourceCooldownRangeValue;
    float m_fWeaponTicketMaxDistance;
    bool m_bAvailableForIA;

    void OnDrop__DelegateSignature(EDropReason _eDropReason);
    void BPF_ResetWeaponGameplayData();
    void BPF_ResetWeaponData();
    void BPF_OverrideWeaponGameplayData(TSubclassOf<class UWeaponGameplayData> _newWeaponGameplayData);
    void BPF_OverrideWeaponData(TSubclassOf<class UBaseWeaponData> _newWeaponData);
    class UWeaponGameplayData* BPF_GetWeaponGameplayData();
    class UBaseWeaponData* BPF_GetWeaponData();
    void BPF_DropWeapon(EDropReason _eDropReason);
    void BPF_AttachWeapon(class USkeletalMeshComponent* _charMesh, FName _socketName, bool _bEquipOnOppositeHand, bool _bChangeFakie);
    void BPF_ApplyDamage(EOnDestructibleDamageType _eDamageType, const FVector& _vImpactLocation, float _fCustomDamage, bool _bPlayDropOrderOnDestroy);
    bool BPE_CanUseDamagedWeapon(int32 _iDamagedWeaponIndex);
};

struct FVariableWeightLayerToBoneMask
{
    FSCUserDefinedEnumHandler m_LayerEnum;
    class UBlendProfile* m_BoneMask;

};

class UBaseWeaponData : public UObject
{
    FName m_Socket;
    FName m_OnWeaponSocketName;
    TMap<class EOrderType, class bool> m_UseSwapHandByOrder;
    bool m_bUseSwapHand;
    bool m_bMirrorAllowed;
    bool m_bAllowFakieFromAnimNotify;
    class UCurveFloat* m_DesignatedTargetPreciseSearchWidthCurveForAttack;
    class UCurveFloat* m_DesignatedTargetRoughSearchWidthCurveForAttack;
    TMap<ETargetingPrio, float> m_mfRangeMaxForAttack;
    float m_afDamageReceiveFromAttackPower;
    float m_afGuardTypeDamageMultiplier;
    class UCurveFloat* m_SlowMotionCurve;
    float m_fSlowMotionScale;
    TSubclassOf<class UThrowObjectAnimRequest> m_ThrowFromPickupAnimRequest;
    FBaseWeaponOverrideInfo m_MainCharOverrides;
    bool m_bUseSpecificMirrorPickupAnim;
    TMap<class EOrderType, class FVariableWeightLayerToBoneMask> m_variableWeightLayerByOrder;

    void BPE_PrePickUpWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon, bool _bMirror);
    void BPE_PreDropWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_OnUnequipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
    void BPE_OnEquipWeapon(class AFightingCharacter* _owner, class UPlayerAnim* _animGraph, const class ABaseWeapon* _weapon);
};

class UBasicSpawningComponent : public UActorComponent
{
};

class UBehaviorTargetCondition : public UBaseActorTargetCondition
{
    uint32 m_uiBehaviorMask;

};

struct FCombinationInput
{
    class UGenericInputData* m_Input;
    float m_fLifeSpan;
    bool m_bRegisterPressTimeOnStack;
    bool m_bRemovePressedTimeFromTimeLeft;

};

class UCombinationInputData : public UGenericInputData
{
    bool m_bResetChildHoldToggleOnActivation;
    TArray<FCombinationInput> m_IncludedInputs;
    TArray<FCombinationInput> m_ExcludedInputs;

};

class UBehaviourCombinationInputData : public UCombinationInputData
{
    FInputBehaviourStruct m_BehaviourStruct;

};

class UVectorInputData : public UGenericInputData
{
    FRuntimeFloatCurve m_ResetInputScaleOverTime;
    FName m_unrealActionX;
    FName m_unrealActionY;
    float m_fInnerBound;
    float m_fOuterBound;
    bool m_bBoundPerAxis;
    class UCurveFloat* m_Curve;
    class UTrumpetSkewData* m_trumpetSkewData;
    bool m_bInvertXAxis;
    bool m_bInvertYAxis;
    bool m_bInvertAxises;
    bool m_bDebugIsXAxisVertical;
    bool m_bNoInputTreatment;

};

class UBehaviourVectorInputData : public UVectorInputData
{
    FInputBehaviourStruct m_BehaviourStruct;
    bool m_bConsiderChangingValueAsNewPress;

};

class UBeingTakendownTask : public UBTTaskNode
{
};

struct FAsyncTextureStruct
{
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;

};

class UAsyncTextureBinding : public UPropertyBinding
{

    FAsyncTextureStruct GetValue();
};

class UBindableAsyncImage : public UUserWidget
{
    class UAsyncImage* m_AsyncImage;
    FAsyncTextureStruct AsyncTexture;
    FBindableAsyncImageAsyncTextureDelegate AsyncTextureDelegate;
    FAsyncTextureStruct GetAsyncTextureAsset();

};

class UBindableMaterialWidget : public USCUserWidget
{
    class UMaterialInstanceDynamic* m_MaterialInstance;
    FName m_FloatParameterName;
    float FloatValue;
    FBindableMaterialWidgetFloatValueDelegate FloatValueDelegate;
    float GetFloat();

    void BPF_SetMaterialInstance(class UMaterialInstanceDynamic* _materialInstance);
};

class UBindablePropertyBase : public UObject
{
    FBindablePropertyBase_OnUpdateFromModel m_OnUpdateFromModel;
    void BindablePropertyUpdateSignature(class UBindablePropertyBase* _property);
    FBindablePropertyBase_OnPropertyUpdate m_OnPropertyUpdate;
    void BindablePropertyUpdateSignature(class UBindablePropertyBase* _property);
    FBindablePropertyBase_OnPropertyPreUpdate m_OnPropertyPreUpdate;
    void BindablePropertyUpdateSignature(class UBindablePropertyBase* _property);

    void BPF_SetOwner(class UObject* _owner);
    bool BPF_IsValid();
};

class UBindableFloatProperty : public UBindablePropertyBase
{

    void BPF_SetValue(float _fValue);
    void BPF_SetRef(float& _fValue);
    float BPF_GetValue();
};

class UBindableEnumProperty : public UBindablePropertyBase
{

    void BPF_SetValue(uint8 _uiValue);
    void BPF_SetRef(uint8& _uiValue);
    uint8 BPF_GetValue();
};

class UBindableBoolProperty : public UBindablePropertyBase
{

    void BPF_SetValue(bool _bValue);
    void BPF_SetRef(bool& _bValue);
    bool BPF_GetValue();
};

class UBindableStringProperty : public UBindablePropertyBase
{

    void BPF_SetValue(FString _value);
    void BPF_SetRef(FString& _value);
    FString BPF_GetValue();
};

class UBindableIntProperty : public UBindablePropertyBase
{

    void BPF_SetValue(int32 _iValue);
    void BPF_SetRef(int32& _iValue);
    int32 BPF_GetValue();
};

class UBindableFlagProperty : public UBindableIntProperty
{

    void BPF_RemoveFlags(int32 _iFlags);
    bool BPF_HasAnyFlags(int32 _iFlags);
    bool BPF_HasAllFlags(int32 _iFlags);
    void BPF_AddFlags(int32 _iFlags);
};

class UBindablePropertyUserWidget : public USCUserWidget
{
    FBindablePropertyUserWidget_OnInputUpdate m_OnInputUpdate;
    void OnInputUpdateSignature();
    FBindablePropertyUserWidget_OnPropertyUpdated m_OnPropertyUpdated;
    void OnPropertyUpdatedSignature();
    bool m_bSelfBindingProperty;
    bool m_bConstructProperty;
    TSubclassOf<class UBindablePropertyBase> m_PropertyClass;
    FName m_PropertyName;
    class UBindablePropertyBase* m_Property;

    void OnPropertyUpdated(class UBindablePropertyBase* _property);
    void BPF_RefreshDisplay();
    void BPF_OnInputUpdate();
    void BPF_CreateProperty();
    void BPE_OnSelfBinding();
};

class UCameraMixerBlender : public UObject
{

    float BPE_EvaluateBlendRatio(class UCameraComponentThird* _camera, float _fDt, float _fOldRatio, bool _bNoDamping);
};

class UOverTimeCameraMixerBlender : public UCameraMixerBlender
{

    float GetCoeff();
    void BlendWithStarting(float _fTarget, float _fDelay, float _fStarting, ESCBlendType _eBlendType, class UCurveFloat* _blendCurve);
    void Blend(float _fTarget, float _fDelay, ESCBlendType _eBlendType, class UCurveFloat* _blendCurve);
};

class UBoolCameraMixerBlender : public UOverTimeCameraMixerBlender
{
    bool m_bInversed;
    float m_fDuration;
    ESCBlendType m_eBlendType;
    class UCurveFloat* m_Curve;
    bool m_bConstantSpeed;

    bool GetOldValue();
    bool BPE_GetBool(class UCameraComponentThird* _camera, bool _bNoDamping);
};

class UBlackboardBoolCameraMixerBlender : public UBoolCameraMixerBlender
{
    FName m_KeyName;

};

class UBlackboardSubActorCondition : public UBaseActorCondition
{
    FName m_BlackboardKey;

};

class UBlendableWidget : public USCUserWidget
{
    float m_fBlendDuration;
    ESCType m_eBlendValueType;
    FLinearColor m_ColorStart;
    FLinearColor m_ColorEnd;

    void BPF_StartTimerBlend(bool _bReverse);
    float BPF_GetBlendedFloat();
    FLinearColor BPF_GetBlendedColor();
    int32 BPF_BindMaterialParameterToBlendAlpha(class UMaterialParameterCollection* _collection, FName _parameterName);
};

struct FCameraTransitionEventStruct
{
    float m_fRatio;
    TSubclassOf<class UCameraTransitionEvent> m_Event;

};

class UCameraTransitionInfo : public UDataAsset
{
    float m_fDuration;
    class UCurveFloat* m_Curve;
    class UCurveFloat* m_CurveForAngle;
    bool m_bFreezeUnderneathTransition;
    bool m_bWantUseAngleFromStartNode;
    EUpdateAngleMode m_eUpdateAngleMode;
    TArray<class TSubclassOf<UCameraTransitionModule>> m_Modules;
    TArray<FCameraTransitionEventStruct> m_events;

};

class UBlendInLockCameraTransitionInfo : public UCameraTransitionInfo
{
    bool m_bUseDefaultTargetReachDurationAsFallback;

};

struct FBlendProfileBySpeedStateStruct
{
    class UBlendProfile* m_BlendProfileBySpeedState;

};

class UBlendProfileHelper : public UBlueprintFunctionLibrary
{

    class UBlendProfile* BPF_GetBlendProfile(const FBlendProfileBySpeedStateStruct& _blendProfileBySpeedStateStruct, ESpeedState _eSpeedState);
};

class UBlueprintOrderService : public UOrderService
{

    void BPE_OnTick(const FBPOrderServiceInstance& _instance, float _fDelta);
    void BPE_OnStop(const FBPOrderServiceInstance& _instance, bool _bInterrupted);
    void BPE_OnStart(const FBPOrderServiceInstance& _instance);
};

class UBoxHitDetectionDB : public UBaseShapeHitDetectionDB
{
    FVector m_Extent;

};

class UBoxWithNavComponent : public UBoxComponent
{

    void BPF_SetAreaClass(TSubclassOf<class UNavArea> _navArea);
};

class UBPInfluenceTest : public UAIInfluenceTest
{
    FText m_NodeName;

    bool BPE_RunBPTest(const class UAIFightingComponent* _testedAI);
    FText BPE_GetDescriptionDetails();
};

class UBTTask_CameraNode : public UBTTaskNode
{
    class UAbstractCameraData* m_CameraData;

};

class UBTTask_DynamicCameraNode : public UBTTaskNode
{
    FBlackboardKeySelector m_CameraDataBlackboardKeySelector;
    FBlackboardKeySelector m_ActorRefBlackboardKeySelector;

};

class UButtonInputRegionWidget : public USpacer
{
};

struct FButtonAction
{
    FText m_Text;
    InputAction m_eAction;
    EUIInputModes m_eInputMode;
    EControllerIconAxisTypes m_eAxisType;
    TArray<class UGenericInputData*> m_InputDatas;
    EActionMouseButtons m_Mouse;
    class UTexture2D* m_MouseModeTexture;

};

class UButtonUserWidget : public USCUserWidget
{
    FButtonUserWidget_IsActionEnabledDelegate m_IsActionEnabledDelegate;
    bool ButtonActionEnabledDelegate(const class UButtonUserWidget* _button, const FButtonAction& _action);
    FButtonUserWidget_OnFocusReceived_Bindable m_OnFocusReceived_Bindable;
    void BindableButtonUserWidgetDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FButtonUserWidget_OnFocusLost_Bindable m_OnFocusLost_Bindable;
    void BindableButtonUserWidgetDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FButtonUserWidget_OnClick_Bindable m_OnClick_Bindable;
    void BindableButtonUserWidgetClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FButtonUserWidget_OnInputActionPressed_Bindable m_OnInputActionPressed_Bindable;
    void BindableButtonUserWidgetInputActionDelegate(class UButtonUserWidget* _button, InputAction _eInput);
    FButtonUserWidget_OnNavigation_Bindable m_OnNavigation_Bindable;
    void BindableNavigationDelegate(class UButtonUserWidget* _button, EUINavigation _eNavigation);
    FButtonUserWidget_OnHoldStarted_Bindable m_OnHoldStarted_Bindable;
    void BindableButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnHoldCanceled_Bindable m_OnHoldCanceled_Bindable;
    void BindableButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnHoldSuccess_Bindable m_OnHoldSuccess_Bindable;
    void BindableButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnFocusReceived m_OnFocusReceived;
    void ButtonUserWidgetDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FButtonUserWidget_OnFocusLost m_OnFocusLost;
    void ButtonUserWidgetDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FButtonUserWidget_OnClick m_OnClick;
    void ButtonUserWidgetClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FButtonUserWidget_OnRightClick m_OnRightClick;
    void ButtonUserWidgetRightClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FButtonUserWidget_OnInputActionPressed m_OnInputActionPressed;
    void ButtonUserWidgetInputActionDelegate(class UButtonUserWidget* _button, InputAction _eInput);
    FButtonUserWidget_OnSelect m_OnSelect;
    void ButtonUserWidgetSelectedDelegate(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    FButtonUserWidget_OnDeselect m_OnDeselect;
    void ButtonUserWidgetDeselectedDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnNavigation m_OnNavigation;
    void ButtonUserWidgetNavigationDelegate(class UButtonUserWidget* _button, EUINavigation _eNavigation);
    FButtonUserWidget_OnHoldStarted m_OnHoldStarted;
    void ButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnHoldCanceled m_OnHoldCanceled;
    void ButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FButtonUserWidget_OnHoldSuccess m_OnHoldSuccess;
    void ButtonUserWidgetSimpleDelegate(class UButtonUserWidget* _button);
    FSlateBrush m_DefaultStateBrush;
    FSlateBrush m_MouseOverStateBrush;
    FSlateBrush m_MouseDownStateBrush;
    bool m_bUseFocusStateBrush;
    FSlateBrush m_FocusStateBrush;
    FSlateBrush m_CurrentStateBrush;
    TEnumAsByte<EButtonClickMethod::Type> m_eClickMethod;
    float m_fHoldDuration;
    bool m_bFocusOnVisible;
    bool m_bUseCustomNavigation;
    FButtonAction m_Action1;
    FButtonUserWidget_OnExecuteAction1 m_OnExecuteAction1;
    void ButtonActionExecuteDelegate(class UButtonUserWidget* _button, const FButtonAction& _action);
    FButtonAction m_Action2;
    FButtonUserWidget_OnExecuteAction2 m_OnExecuteAction2;
    void ButtonActionExecuteDelegate(class UButtonUserWidget* _button, const FButtonAction& _action);
    FButtonAction m_Action3;
    FButtonUserWidget_OnExecuteAction3 m_OnExecuteAction3;
    void ButtonActionExecuteDelegate(class UButtonUserWidget* _button, const FButtonAction& _action);
    bool m_bIsClickable;
    bool m_bFocusOnMouseOver;
    bool m_bLoseFocusOnMouseLeave;
    bool m_bSelectOnClick;
    bool m_bSelectOnNavigationFocus;
    ESlateVisibility m_eSelectedVisibility;
    ESlateVisibility m_eDeselectedVisibility;
    ESlateVisibility m_eMouseOverVisibility;
    ESlateVisibility m_eMouseOutVisibility;
    bool m_bIsSelected;
    bool m_bPlayClickSound;
    bool m_bPlayRightClickSound;
    bool m_bIsMouseOver;
    bool m_bIsMouseDown;

    void ButtonUserWidgetSimpleDelegate__DelegateSignature(class UButtonUserWidget* _button);
    void ButtonUserWidgetSelectedDelegate__DelegateSignature(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    void ButtonUserWidgetRightClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void ButtonUserWidgetNavigationDelegate__DelegateSignature(class UButtonUserWidget* _button, EUINavigation _eNavigation);
    void ButtonUserWidgetInputActionDelegate__DelegateSignature(class UButtonUserWidget* _button, InputAction _eInput);
    void ButtonUserWidgetDeselectedDelegate__DelegateSignature(class UButtonUserWidget* _button);
    void ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void ButtonActionExecuteDelegate__DelegateSignature(class UButtonUserWidget* _button, const FButtonAction& _action);
    bool ButtonActionEnabledDelegate__DelegateSignature(const class UButtonUserWidget* _button, const FButtonAction& _action);
    void BPF_SetSelected(bool _bSelected, bool _bForce);
    bool BPF_IsActionEnabled(const FButtonAction& _action);
    bool BPF_GetIsSelected();
    float BPF_GetHoldProgress();
    void BPE_OnSelected();
    void BPE_OnRightClicked();
    void BPE_OnInputActionPressed(InputAction _eAction);
    void BPE_OnDeselected();
    void BPE_OnClicked();
    void BindableNavigationDelegate__DelegateSignature(class UButtonUserWidget* _button, EUINavigation _eNavigation);
    void BindableButtonUserWidgetSimpleDelegate__DelegateSignature(class UButtonUserWidget* _button);
    void BindableButtonUserWidgetInputActionDelegate__DelegateSignature(class UButtonUserWidget* _button, InputAction _eInput);
    void BindableButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BindableButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
};

class ICameraBearerInterface : public IInterface
{

    FTransform GetActorRefTransform(float _fDt);
};

class UCameraBlendToOffsetRatioNotifyState : public UAnimNotifyState
{
    float m_fTargetRatio;
    class UCurveFloat* m_BlendCurve;

};

struct FCameraRepulsionConfigElement
{
    TArray<FBaseActorConditionInstance> m_Conditions;
    TArray<FBaseActorTargetConditionInstance> m_ActorTargetConditions;
    class UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeFront;
    class UCurveFloat* m_DeadZoneHidingAngleSizePerSafeZoneSizeBack;
    class UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetFront;
    class UCurveFloat* m_DeadZoneHidingSizeFactorPerDistanceToTargetBack;
    class UCurveFloat* m_RepulsionSpringValuePerCameraRailCollisionRatio;

};

struct FCameraRepulsionConfig
{
    float m_fRepulsionSleepTimerAfterManualCam;
    TArray<FCameraRepulsionConfigElement> m_RepulsionsElements;
    float m_fDeadZoneHidingTargetPositionSpringSpeed;
    float m_fCollidingDeadZoneExtraAngleOffset;
    float m_fLookAtYawDampingValueThisFrameToDisableRepulsion;
    float m_fCollisionRailRatioToActivateRepulsionFromCollidingDeadZone;
    bool m_bUseMergedDeadZonesWhenRepulsingFromOnlyHidingZone;

};

struct FCameraLookAtServiceBehaviorTime
{
    float m_fReachDuration;
    class UCurveFloat* m_CurveReachDurationPerAngleDiff;
    ESCBlendType m_eReachBlendType;
    class UCurveFloat* m_ReachCurveDynamic;

};

struct FCameraLookAtServiceBehaviorConfig
{
    bool m_bLookAtUsePitch;
    bool m_bLookAtUseYaw;
    bool m_bUseForcePitch;
    float m_fForcePitch;
    bool m_bUseForceYaw;
    float m_fForceYaw;
    bool m_bStayLock;
    bool m_bDeactivateOnManual;
    float m_fMinYawDiffAbsoluteToCancelLookAtLaunch;
    bool m_bUseYawDampingBasedOnDistance;
    bool m_bUseRepulsionAngleToComputeYaw;
    bool m_bRelaunchLookAtIfYawDampingNonZeroAgain;
    class UCurveFloat* m_YawOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_YawNearOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_YawOrientationDampingCurveRatioFromDist;
    bool m_bUsePitchDampingBasedOnDistance;
    class UCurveFloat* m_PitchOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_PitchNearOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_PitchOrientationDampingCurveRatioFromDist;
    bool m_bUsePitchComputedWithSlope;
    class UCurveFloat* m_PitchValuePerSlopeAngleMinDist;
    class UCurveFloat* m_PitchValuePerSlopeAngleMaxDist;
    FFloatRange m_PitchWithSlopeRangeMinMaxDist;
    bool m_bTeleportPointComputation;
    bool m_bUseCollisionAnticipationCorrection;
    bool m_bUsePositionToLockDamping;
    float m_fTargetPosDampingValue;
    bool m_bUsePositionZOffset;
    float m_fLookAtUpOffset;
    bool m_bUsePositionRatio;
    float m_fPositionRatioToTarget;
    float m_fPositionRatioDistanceMaxToComputeRatioForLockRange;
    float m_fPositionRatioLockDistMin;
    float m_fPositionRatioLockDistMax;
    float m_fPositionRatioLookAtUpOffsetCompensation;

};

struct FCameraMirrorManagementConfig
{
    ECameraMirrorManagementType m_eMirrorType;
    float m_fTargetValue;
    float m_fSpringSpeed;
    bool m_bInstantSpring;
    ESCBlendType m_eBlenderBlendType;
    class UCurveFloat* m_BlenderCustomCurve;
    float m_fBlenderDuration;

};

struct FCameraTargetPosition
{
    class AActor* m_Actor;
    FVector m_vPreProcessedTargetPosition;
    FVector m_vRawTargetPosition;
    float m_fLifeTime;

};

struct FCameraLookAtServiceBehavior
{
    ELookAtType m_eLookATType;
    TWeakObjectPtr<class AActor> m_Target;
    FVector m_vTargetPosition;
    FCameraLookAtServiceBehaviorTime m_timeParams;
    FCameraLookAtServiceBehaviorConfig m_configParams;

};

class UCameraComponentThird : public UCameraComponent
{
    class UCameraLagStruct* m_sActualLagParameters;
    FCameraComponentThirdOnLevelSequenceViewBlendStateChanged OnLevelSequenceViewBlendStateChanged;
    void OnSequenceViewBlendChange(class USCLevelSequence* _levelSequence);
    FCameraComponentThirdOnCameraAnimDrivenStateChanged OnCameraAnimDrivenStateChanged;
    void OnCameraAnimDrivenStateChanged(ECameraTransitionState _eNewState);
    class UCameraDB* m_CameraDB;
    float m_fMouseYawScale;
    float m_fMousePitchScale;
    class UMaterialParameterCollection* m_MaterialParameterCollectionCameraDither;
    FName m_CameraDistanceMPCParameterName;
    float m_fDialogAspectRatio;
    float m_fDialogAspectRatioBlendDuration;
    ESCBlendType m_eDialogAspectRatioBlendType;
    FName m_CameraFadeMaterialParam;
    bool m_bCameraLDMode;

    void OnSequenceViewBlendChange__DelegateSignature(class USCLevelSequence* _levelSequence);
    void OnCameraAnimDrivenStateChanged__DelegateSignature(ECameraTransitionState _eNewState);
    void BPF_UpdateCachedTargets();
    void BPF_UnPauseLookAt(int32 _iHandle);
    void BPF_UnFreezeMirrorServices(int32 _iHandle);
    void BPF_UnFreezeLockService(int32 _iHandle);
    void BPF_UnFreezeHidingZoneRepulsion(int32 _iHandle);
    void BPF_UnFreezeCameraDeadZoneRepulsion(int32 _iHandle);
    FVector BPF_TransformInputVector(FVector2D _vInputVector);
    void BPF_SetSlowMotionFactor(float _fSlowMotionFactor);
    void BPF_SetMirrorCursorValue(float _fValue);
    void BPF_SetIsCameraLDMode(bool _bCameraLDMode, const class AActor* _replayCameraAnchor);
    void BPF_SetDialogAspectRatio(bool _bInEnabled);
    void BPF_ResetLockManualCooldownToDefault();
    void BPF_ResetCameraRepulsionConfig();
    void BPF_ResetCameraDataToDefault(class UAbstractCameraData* _cameraDataToReset);
    void BPF_Reset1vNLockBehaviorToDefault();
    void BPF_Reset1v1LockBehaviorToDefault();
    void BPF_RemoveLookAt(int32 _iHandle);
    void BPF_RemoveAllLookAt();
    int32 BPF_PauseLookAtWithHandle(FString _contextString);
    void BPF_PauseLookAt(float _fDuration, FString _contextString);
    void BPF_OverrideLockManualCooldown(float _fNewCooldown);
    void BPF_OverrideCameraRepulsionConfig(const FCameraRepulsionConfig& _newConfig);
    void BPF_OverrideCameraData(class UAbstractCameraData* _cameraDataToOverride, class UAbstractCameraData* _newCameraDataToUse);
    void BPF_Override1vNLockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig);
    void BPF_Override1v1LockBehavior(const FCameraLookAtServiceBehaviorTime& _timeConfig, const FCameraLookAtServiceBehaviorConfig& _behaviorConfig);
    void BPF_LaunchNewMirrorTarget(const FCameraMirrorManagementConfig& _newMirrorTarget);
    bool BPF_IsWorldLocationInFront(const FVector& _vLocation);
    bool BPF_IsSleepingFromManualInput();
    bool BPF_IsLookAtActive(int32 _iHandle);
    bool BPF_IsLockAlgoActiveAndRunning(ECameraLockAlgorithms _eAlgo);
    bool BPF_IsLockActiveAndRunning();
    bool BPF_IsInCinematic();
    bool BPF_IsCurrentCameraAllowingLookAtCollisionExtraction();
    bool BPF_IsCurrentCameraAllowingDodgeMirrorChange();
    bool BPF_IsColliding();
    bool BPF_IsAnimDrivenInMixerNode(bool _bAllowSearchInBlenderStartNode);
    bool BPF_IsAnimDriven();
    bool BPF_HasLookAt();
    void BPF_GetValidTarget(bool _bIncludeAllPotentialAlertedTarget, TArray<class AActor*>& _arrayOfTarget);
    float BPF_GetTimeSinceNoInput();
    int32 BPF_GetNumberOfValidTarget(bool _bIncludeAllPotentialAlertedTarget);
    FVector BPF_GetNearestColDirection();
    void BPF_GetMirrorFarTargettedPosition(TArray<FCameraTargetPosition>& _outTargetPosition);
    float BPF_GetMirrorCursorValue();
    float BPF_GetCurrentLookAtRatio();
    ESCSequenceBlendViewState BPF_GetCurrentCinematicState();
    float BPF_GetCollisionMinDist();
    FTransform BPF_GetCameraTransform();
    float BPF_GetCameraShakeFactor();
    float BPF_GetCameraCollisionTargetRatio();
    float BPF_GetCameraCollisionRatio();
    class UBlackboardComponent* BPF_GetBlackBoardComponent();
    float BPF_GetBlackBarScreenRatio();
    void BPF_GetAngleDiffFromAnimDriven(float& _fOutYawDeg, float& _fOutPitchDeg);
    int32 BPF_FreezeMirrorServices(FString _contextString);
    int32 BPF_FreezeLockService(FString _contextString);
    int32 BPF_FreezeHidingZoneRepulsion(FString _contextString);
    int32 BPF_FreezeCameraDeadZoneRepulsion(FString _contextString);
    bool BPF_ComputeIsMirrorFromCharacterPosOnScreen();
    void BPF_AddLookAt(const FCameraLookAtServiceBehavior& _newLookAt, int32& _iHandle);
};

class UCameraCutNotifyState : public USCAnimNotifyState
{
};

struct FCameraNodeStruct
{
    ECameraTrackingMode m_eTrackingTranslationMode;
    ECameraTrackingMode m_eTrackingRotationMode;
    FVector4 m_vFulcrumOffset;
    bool m_bDynamicFulcrumOffsetEnabled;
    FVector4 m_vSafeOffset;
    bool m_bUseAboveIdealOffset;
    FVector m_vAboveIdealOffset;
    FVector4 m_vIdealOffset;
    bool m_bUseBelowIdealOffset;
    FVector m_vBelowIdealOffset;
    bool m_bIsCollisionEnabled;
    float m_fFov;
    bool m_bIsFovVertical;
    bool m_bConstraintAspectRatio;
    float m_fContraintAspectRatio;
    bool m_bIsAnimDriven;
    bool m_bAllowAnimDrivenFov;
    bool m_bFovFromPreviousCameraData;
    bool m_bSnapRefLocation;
    float m_fRefDampingFactor;
    float m_fCoolDownAfterManualCameraTouch;
    bool m_bAllowComfortService;
    float m_fHorizontalSpeed;
    float m_fVerticalSpeed;
    bool m_bFixedYaw;
    bool m_bFixedPitch;
    bool m_bFixedRoll;
    float m_fFixedYaw;
    float m_fFixedPitch;
    float m_fFixedRoll;
    float m_fAboveLimitPitch;
    float m_fBelowLimitPitch;
    class UCurveFloat* m_curveCameraShakeFactorByDistToOwner;
    bool m_bFollow;
    float m_fFollowPitchOffset;
    float m_fFollowPitchDampingFactor;
    float m_fFollowPitchMultiplier;
    class UCurveFloat* m_followYawDampingFactorCurve;
    float m_fFollowWakeUpMaxPitchDiffAngle;
    float m_fFollowWakeUpMaxYawDiffAngle;
    bool m_bIsCamOverTheShoulderDisabled;
    bool m_bLockOnTarget;
    float m_fLockOnTargetWakeUpMaxPitchDiffAngle;
    float m_fLockOnTargetWakeUpMaxYawDiffAngle;
    bool m_bLockFollowing;
    float m_fLockFollowingWakeUpMaxPitchDiffAngle;
    float m_fLockFollowingWakeUpMaxYawDiffAngle;
    bool m_bLockFramingContainer;
    float m_fLockFraimingContainerDeadZonenCenterX;
    float m_fLockFraimingContainerDeadZonenCenterY;
    float m_fScreenPercentSoftEdgeX;
    float m_fScreenPercentSoftEdgeY;
    float m_fScreenPercentHardEdgeX;
    float m_fScreenPercentHardEdgeY;
    float m_fMinRangeDistanceToOwner;
    float m_fMaxRangeDistanceToOwner;
    float m_fDistanceDampingFactor;
    bool m_bCameraFramingLerpOnDistance;
    float m_fHeightAboveOwner;
    float m_fCameraFramingHeightDampingFactor;
    bool m_bCameraFramingLerpOnHeight;
    bool m_bUsePitchAtRest;
    bool m_bPitchAtRestComputationMethodSlope;
    bool m_bPitchAtRestComputationMethodTarget;
    bool m_bPitchAtRestComputationMethodTargetThenSlope;
    float m_fPitchAtRestSprintSpeedValue;
    class UCurveFloat* m_PitchAtRestValuePerSlopeAngle;
    class UCurveFloat* m_PitchAtRestOffsetPerSafeZoneSize;
    class UCurveFloat* m_PitchAtRestOffsetFactorByDistToTarget;
    float m_fPitchAtRestOffsetSpringSpeedValue;
    float m_fPitchAtRestWakeUpMaxPitchDiffAngle;
    bool m_bUseAboveHeadIdealOffset;
    class UCurveFloat* m_AboveHeadIdealOffsetOffsetPerSafeZoneSize;
    class UCurveFloat* m_AboveHeadIdealOffsetFactorByDistToTarget;
    float m_fAboveHeadIdealOffsetSpringSpeedValue;
    bool m_bAboveHeadIdealOffsetApplyOnAbove;
    bool m_bAboveHeadIdealOffsetApplyOnBelow;
    bool m_bUseRepulsionFromDeadZone;
    float m_fCollisionRatioToConsideredAsNearInRepulsion;
    bool m_bCanBeMirrored;
    bool m_bUseCameraSideCollisionMirror;
    bool m_bUseCameraCombatMirrorService;
    float m_fCameraCombatMirrorCursorAvoidRangeAroundMiddle;
    float m_fCameraCombatMirrorCursorAvoidRangeMinRailCollisionRatio;
    float m_fCameraCombatMirrorCursorAvoidRangeMinCamDist;
    class UCurveFloat* m_CombatMirrorWeightWhiskerCastByAngularDistToRight;
    float m_fCombatMirrorCachedAngleDistAtWeightZero;
    class UCurveFloat* m_CameraCombatMirrorProjRemapNotInMirror;
    class UCurveFloat* m_CameraCombatMirrorSideTraceDistRatioRemap;
    float m_fCombatMirrorProjSpringSpeedInsideCollisionBoundary;
    float m_fCombatMirrorProjSpringSpeedOutsideCollisionBoundary;
    bool m_bAllowCameraLookAtToExtractCollision;
    bool m_bAllowDodgeToTriggerMirrorChange;

};

class UCameraData : public UAbstractCameraData
{
    FCameraNodeStruct m_CameraNodeStruct;
    class UCameraData* m_ParentCamera;

};

class UCameraDataModifier : public UObject
{

    void BPE_ReceiveOnStop(class UCameraComponentThird* _cameraComponent);
    void BPE_ReceiveOnStart(class UCameraComponentThird* _cameraComponent);
    void BPE_ReceiveOnProcess(class UCameraComponentThird* _cameraComponent, float _fDt);
};

struct FCameraSafePointPlacement
{
    FFloatRange m_fSafePointDistRange;
    bool m_bOrientateTowardsCamForward;
    bool m_bUseDeadZoneBissector;
    float m_fSafeZoneAngleOffset;
    float m_fBlendInTime;

};

struct FCameraSafePointCondition
{
    bool m_bUseDeadZoneCountRange;
    FInt32Range m_iDeadZoneCountRange;
    bool m_bUseDeadZoneAngleRange;
    FFloatRange m_fDeadZoneAngleRange;
    bool m_bUseSafeZoneAngleRange;
    FFloatRange m_fSafeZoneAngleRange;

};

struct FCameraSafePointConditionalPlacement
{
    FCameraSafePointCondition m_condition;
    FCameraSafePointPlacement m_placement;

};

class UCameraDB : public UDataAsset
{
    class UBehaviorTree* m_BehaviorTreeAsset;
    class UAbstractCameraData* m_CameraDataDefault;
    float m_fUnlockOnPlaceCompensationTime;
    class UCurveFloat* m_OrientationDampingFromDistanceCurve;
    class UCurveFloat* m_NearOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_OrientationDampingCurveRatioFromDist;
    class UCurveFloat* m_PitchDampingFromDistanceCurve;
    class UCurveFloat* m_PitchNearOrientationDampingFromDistanceCurve;
    class UCurveFloat* m_PitchOrientationDampingCurveRatioFromDist;
    float m_fLockManualControlCooldownDuration;
    class UCurveFloat* m_weightFromDistCurve;
    float m_fLookAtDurationUnderneathSequence;
    FCameraLookAtServiceBehaviorTime m_lookAtBehaviorTimeRelated1V1;
    FCameraLookAtServiceBehaviorConfig m_lookAtBehavior1V1;
    FCameraLookAtServiceBehaviorTime m_lookAtBehaviorTimeRelated1VN;
    FCameraLookAtServiceBehaviorConfig m_lookAtBehavior1VN;
    uint32 m_uiTargetableBehaviorMask;
    class UCurveFloat* m_LockFollowYawDampingFactorByAngleDelta;
    class UCurveFloat* m_followingYawDampingFactorFromVelocity;
    float m_fLockFollowingDampingInCollision;
    float m_fLockFollowingCollisionAngleOffset;
    float m_fLockFollowingPitchMultiplier;
    float m_fLockFollowingPitchOffset;
    float m_fLockFollowingPitchDampingFactor;
    float m_fLockFollowingMaxAngleToResume;
    float m_fLockFollowingMinDeltaCamPlayerToFreezeOrientation;
    float m_fLockFollowingMinDeltaCamPlayerToFreezeOrientationNoInput;
    float m_fLockFollowingMinDeltaInputToUnfreezeOrientation;
    float m_fLockFollowingRotationChangeThreshold;
    bool m_bLockFollowingResumeIfNoInput;
    float m_fLockFollowingManualControlCooldownDuration;
    float m_fLockFramingAimZOffset;
    float m_fDurationAfterManualControlToGetBackToRegularPos;
    float m_fSpringSpeedFactorForCameraPosition;
    float m_fOffsetAngleToGetOutOfCollisionFromDeadZone;
    uint8 m_uiCameraPoolNumber;
    class UCameraTransitionInfo* m_DefaultTransition;
    float m_fCollisionDampingFactor;
    float m_fCollisionSphereMarginFactor;
    float m_fSoftCollisionDistanceAllowedInsideWall;
    float m_fCollisionDeadEndAngle;
    int32 m_iDetectionRaycastCount;
    float m_fCollisionDetectionDistance;
    class UCurveFloat* m_maxRaycastDistCoeffByMinDist;
    float m_fRaycastStartZOffset;
    float m_fRaycastAngle;
    float m_fFalsePositiveSafeZoneMaxAngle;
    bool m_bUseSpringForReturningToFurtherCollision;
    float m_fSpringSpeedForReturningToFurtherCollision;
    bool m_bEnableSafePoint;
    class UCurveFloat* m_safePointRatioFromDeadZoneMinDist;
    float m_fSafePointDampingSpeed;
    float m_fSafePointBlendOutDuration;
    FCameraSafePointPlacement m_fSafePointDefaultPlacement;
    TArray<FCameraSafePointConditionalPlacement> m_fSafePointConditionalPlacement;
    FCameraRepulsionConfig m_RepulsionConfig1v1;
    FCameraRepulsionConfig m_RepulsionConfig1vN;
    float m_fRepulsionAngleDiffToBeConsideredInsideSafeZone;
    float m_fRepulsionTargetAngleDiffMax;
    float m_fFulcrumOffsetDampingFactorEnabled;
    float m_fFulcrumOffsetDampingFactorDisabled;
    class UCurveFloat* m_fFulcrumOffsetRatioToMaxDistByBissectorRatio;
    float m_fFulcrumOffsetDistanceRatioOutside;
    bool m_bFulcrumOffsetOrientateCamera;
    float m_fFulcrumOffsetCameraOrientationBlendDuration;
    float m_fFulcrumOffsetMaxDistance;
    float m_fFollowRotationChangeThreshold;
    class UCurveFloat* m_followingPitchMulitplierFromDeltaYaw;
    float m_fMinDeltaCamPlayerToFreezeOrientation;
    float m_fMinDeltaInputToUnfreezeOrientation;
    float m_fCooldownReturnToRestAfterLookAtWithPitch;
    class UCurveFloat* m_SideTraceDistRatioRemap;
    class UCurveFloat* m_BothSideColRatioRemap;
    float m_fSideTraceMirrorCursorAvoidRangeAroundMiddle;
    float m_fCollisionSideSpeedFactorGoingOpposite;
    float m_fCollisionSideSpeedFactorGoingOnTheSameSide;
    float m_fMaxTargetDistanceToBeConsideredByMirrorFar;
    float m_fTimeToMaintainTargetIfNotValid;
    float m_fMirrorDistSideMax;
    float m_fMirrorFarExtraDistanceInPushedState;
    float m_fMirrorFarExtraDistanceInDownState;
    float m_fMeleeAngleToUseCamForwardDirToTargetToChangeMirror;
    class UCurveFloat* m_AnimDrivenRotationWeightByMixerWeight;
    class UCurveFloat* m_AnimDrivenWeightForCollisionDistance;
    class UCurveFloat* m_AnimDrivenWeightFactorForAnimRatio;
    class UCurveFloat* m_AnimDrivenWeightByAngularDistance;
    float m_fAnimDrivenWeightRepartitionBetweenCollisionAndAngularDist;
    class UCurveFloat* m_AnimDrivenWeightByDistance;
    float m_fAnimDrivenWeightRepartitionBetweenCollisionAndDist;
    TArray<class TSubclassOf<UAnimNotify>> m_ListOfPotentialNotifyClassesToStopCameraAnimDriven;
    TEnumAsByte<ECollisionChannel> m_eAnimDrivenRootCheckCollisionChannel;
    FSCCollisionResponseBuilder m_AnimDrivenRootCheckCollisionResponseBuilder;
    FCollisionResponseContainer m_CameraAnimDrivenRootCheckCollisionResponseParam;

};

class UCameraLagStruct : public UDataAsset
{
    bool m_bEnableInputLag;
    float m_fInputLagGlobalMultiplier;
    float m_fInputLagGlobalMultiplierMax;
    float m_fInputLagGlobalMultiplierMin;
    float m_fInputLagMouseMultiplier;
    FVector2D m_vInputLagProportionnalIncrementFadeIn;
    FVector2D m_vInputLagConstantIncrementFadeIn;
    FVector2D m_vInputLagProportionnalIncrementFadeOut;
    FVector2D m_vInputLagConstantIncrementFadeOut;

};

class UCameraMixerData : public UAbstractCameraData
{
    class UAbstractCameraData* m_StartCamera;
    class UAbstractCameraData* m_EndCamera;
    TSubclassOf<class UCameraMixerBlender> m_BlenderClass;
    bool m_bUseEndCamForTransition;

    void ImportTransitionsFromStartCam();
    void ImportTransitionsFromEndCam();
};

class UCameraTransitionEvent : public UObject
{

    void ReceiveLaunchEvent(class UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fBlendRatio);
};

class UCameraTransitionModule : public UObject
{

    void ReceiveOnStop(class UCameraComponentThird* _cameraComponent, float _fTimeElapsed);
    void ReceiveOnStart(class UCameraComponentThird* _cameraComponent, float _fDuration);
    void ReceiveOnProcess(class UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fOldBlendRatio, float _fNewBlendRatio);
};

struct FCancelAnimContainerQuadrantArray
{
    FAnimContainer m_Array;

};

class UCancelDB : public UDataAsset
{
    float m_fCancelReorientationDuration;
    class UCurveFloat* m_CancelReorientationCurve;
    class UCurveFloat* m_CancelDisplacementCurve;
    FCancelAnimContainerQuadrantArray m_AnimContainerArray;
    float m_fCancelDuration;
    float m_fCancelGuardGaugeCost;
    bool m_bCancelHasImpactOnGuardGauge;
    float m_fCancelWindowDuration;
    class UAvailabilityLayerData* m_CancelInterruptibleReleaseLayer;
    int32 m_iFrameInterruptibleRelease;

};

class UCapsuleHitDetectionDB : public UBaseShapeHitDetectionDB
{
    float m_fRadius;
    float m_fHalfHeight;

};

struct FInputMappingData
{
    FInputPresetsEnumHandler m_PresetID;
    class UGenericInputData* m_InputData;
    TArray<FInputMappingKeySlotContainer> m_Slots;

};

struct FMappingID
{
    FInputPresetsEnumHandler m_PresetID;
    InputAction m_eAction;
    InputContext m_eContext;
    bool m_bUsePreset;

};

class UCaptureInputAction : public UBlueprintAsyncActionBase
{
    FCaptureInputActionOnSuccess OnSuccess;
    void CaptureDelegate(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    FCaptureInputActionOnUpdate OnUpdate;
    void CaptureDelegate(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    FCaptureInputActionOnStepStarted OnStepStarted;
    void CaptureDelegate(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    FCaptureInputActionOnCancel OnCancel;
    void DynamicMulticast();
    class UInputMappingWidgetData* m_Data;

    void CaptureDelegate__DelegateSignature(const FInputMappingData& _result, ECaptureInputStep _NewStep);
    class UCaptureInputAction* BPF_CaptureInput(const class UInputMappingWidgetData* _data, const FMappingID& _item, FInputMappingData _baseInputData, int32 _iSlodID, bool _bCaptureAxis, float _fMouseAxisThreshold, int32 _iControllerTypes, bool _bBreakDependency, bool _bInverseMouseVerticalAxis);
};

class UCarriedWeaponCondition : public UBaseActorCondition
{
    bool m_bInvertCondition;
    TArray<class TSubclassOf<UBaseWeaponData>> m_WeaponList;

};

class UCDM_AnimDrivenSound : public UCameraDataModifier
{
    class UDeltaTransformAudioData* m_whooshAudio;

};

class UCDM_Sound : public UCameraDataModifier
{
    class UAkAudioEvent* m_InAkEvent;
    class UAkAudioEvent* m_OutAkEvent;

};

class UCDM_SwitchCameraTrackingMode : public UCameraDataModifier
{
    ECameraTrackingMode m_eCameraTrackingModeTranslationIn;

};

class UChangeCollisionNotify : public USCAnimNotify
{
    bool m_bEnableCollisions;

};

class UChangeMainFoot_Notify : public USCAnimNotify
{
};

class UChangePhaseBTTask : public UBTTaskNode
{
};

class UChangeWeaponBearer_Notify : public USCAnimNotify
{
    FName m_sBoneToAttachWeaponTo;
    EWeaponOrientationConstraint m_eWeaponConstraint;
    bool m_bKeepAttachedOnImpostor;
    FName m_sBoneToAttachWeaponToOnImpostor;

};

struct FCharacterStatsValues
{
    TMap<ECharacterStat, float> m_Values;

};

class UCharacterBuildDB : public UDataAsset
{
    ECharacterGender m_eGender;
    FCharacterStatsValues m_DefaultStats;
    FCharacterStatsValues m_DefaultStatsPerDifficulty;

};

class UCharacterBuildListDB : public UDataAsset
{
    TArray<class UCharacterBuildDB*> m_CharacterBuilds;

};

class UCharacterContextualObjectCondition : public UBaseActorCondition
{
    bool m_bHasContextualObjectInRange;
    FBaseActorTargetConditionInstance m_ConditionOnObject;
    TSubclassOf<class UInteractionObjectComponent> m_CheckType;

};

class UHealthComponent : public UActorComponent
{
    FHealthComponent_OnDamage m_OnDamage;
    void OnDamageDelegate(float _fAmount, class UHealthComponent* _healthComponent, bool _bApplied);
    FHealthComponent_OnLifeStockLostDyn m_OnLifeStockLostDyn;
    void HeathComponentDelegateDynamic(class UHealthComponent* _healhComponent);
    FHealthComponent_OnDeathDismissed m_OnDeathDismissed;
    void HeathComponentDelegateDynamic(class UHealthComponent* _healhComponent);
    FHealthComponent_OnDeath m_OnDeath;
    void DeathComponentDelegate();
    float m_fHealth;
    float m_fMaxHealth;
    int32 m_iLifeStock;

    void ServerHackSetHealth(float _fHealth);
    void OnDamageDelegate__DelegateSignature(float _fAmount, class UHealthComponent* _healthComponent, bool _bApplied);
    void HeathComponentDelegateDynamic__DelegateSignature(class UHealthComponent* _healhComponent);
    void GhostDamageLost__DelegateSignature();
    void DeathComponentDelegate__DelegateSignature();
    void BPF_SetCanDieByDamage(bool _bValue);
    void BPF_SetCanBeDamaged(bool _bValue);
    void BPF_SetCanAddHealth(bool _bValue);
    void BPF_ServerSetHealth(float _fHealth);
    void BPF_ServerAddHealth(float _fHealth);
    float BPF_GetMaxHealth();
    float BPF_GetBaseMaxHealth();
    void BPF_ApplyDamage(float _fDamage);
};

class UCharacterHealthComponent : public UHealthComponent
{
    bool m_bCanRecoverHealth;
    FCharacterHealthComponentOnGhostDamageLost OnGhostDamageLost;
    void GhostDamageLost();
    FCharacterHealthComponentOnDownStateChange OnDownStateChange;
    void OnDownStateChanged(class UCharacterHealthComponent* _healhComponent, EDownState _state);
    float m_fMaxHealthMultiplier;
    float m_fRecoveryRate;
    float m_fRecoveryCooldownInit;
    float m_fGhostDamageRecoveryRate;
    float m_fGhostDamage;
    bool m_bIsDown;
    EDownState m_eDownState;
    int64 m_iTimeRespawnNoDown;
    bool m_bCanUnspawnCharacter;
    float m_RecoveryRateByDangerState;

    void OnRepSetIsDown();
    void OnDownStateChanged__DelegateSignature(class UCharacterHealthComponent* _healhComponent, EDownState _state);
    void GhostDamageLost__DelegateSignature();
    void BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue);
    void BPF_ResetRecoveryCooldown();
    float BPF_GetGhostDamage();
};

class UHitBoxComponent : public USceneComponent
{
    FHitBoxComponent_OnHit m_OnHit;
    void OnHit(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FImpactResult& _Impact);
    FHitBoxComponent_OnAnyHit m_OnAnyHit;
    void OnAnyHit();
    float m_fMinVelocity;
    bool m_bRecoveryAfterDelay;
    float m_fRecoveryAfterDelay;
    bool m_bRecoveryOnLeaveZone;
    FHitBox m_HitBox;
    TMap<TWeakObjectPtr<AActor>, float> m_Recoveries;

    void OnHit__DelegateSignature(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FImpactResult& _Impact);
    void OnAnyHit__DelegateSignature();
    void BPF_SetOwningCharacter(class AFightingCharacter* _owningCharacter);
};

class UCharacterHitBoxComponent : public UHitBoxComponent
{
};

struct FCharacterProgressionReward
{
    ECharacterProgressionRewardConditions m_eUnlockCondition;
    int32 m_iUnlockParameter;
    TArray<class UCharacterProgressionUnlockDB*> m_Unlocks;
    bool m_bAddToNewRewards;
    FText m_NotificationText;
    TSoftObjectPtr<UTexture2D> m_NotificationIcon;

};

struct FProgressionRewardArray
{
    TArray<ECharacterProgressionRewardTypes> m_WeaponRewards;

};

struct FProgressionDoorStruct
{
    class UProgressionDoorData* m_ProgressionDoorData;
    TArray<class UQuestItemData*> m_Conditions;

};

struct FRetrieveLostItemStruct
{
    class UBaseItemData* m_ItemOwned;
    class UBaseItemData* m_ItemToGetIfOwned;
    bool m_bCheckReciprocity;

};

class UCharacterProgressionDB : public UDataAsset
{
    FCharacterProgressionReward m_Rewards;
    TArray<ECharacterProgressionRewardTypes> m_FightingStyleProgression;
    FProgressionRewardArray m_AttackSlotProgression;
    TArray<float> m_SpecialAbilityXPOnSuccess;
    TArray<FProgressionDoorStruct> m_ProgressionDoors;
    int32 m_uiAttackXPOnTargetted;
    int32 m_uiAttackXPOnHit;
    int32 m_uiAttackXPOnGuard;
    int32 m_uiAttackXPOnDodge;
    int32 m_uiAttackXPOnParry;
    int32 m_uiAttackXPOnAvoid;
    int32 m_uiAttackXPOnAbsorb;
    int32 m_uiOffenseAttackXPOnHit;
    int32 m_uiOffenseAttackXPOnGuarded;
    int32 m_uiOffenseAttackXPOnPerfectLink;
    int32 m_uiOffenseAttackXPOnAbsorb;
    int32 m_uiOffenseAttackXPOnGuardBreak;
    int32 m_iCairnsToOpen;
    TArray<FRetrieveLostItemStruct> m_RetrieveLostItems;

    ECharacterProgressionRewardTypes BPF_GetProgressionRewardForSchoolLevel(int32 _iSchoolLevel);
    FCharacterProgressionReward BPF_GetProgressionReward(ECharacterProgressionRewardTypes _type);
    FProgressionDoorStruct BPF_GetProgressionDoorStructByQuestItem(class UQuestItemData* _questItemData);
    FProgressionDoorStruct BPF_GetProgressionDoorStructByDoorData(class UProgressionDoorData* _progressionDoorData);
    void BPF_GetNextProgressionRewards(ECharacterProgressionRewardConditions _condition, const int32& _iValue, TArray<FCharacterProgressionReward>& _result);
};

class UCharacterProgressionUnlockDB : public UDataAsset
{
};

class UCharacterProgressionUnlockPowerDB : public UCharacterProgressionUnlockDB
{
    int32 m_iCharacterBuildPowerIndex;
    FText m_NotificationText;

};

class UCharacterStatAttributeSet : public USCAttributeSet
{
    FGameplayAttributeData MaxHealth;
    FGameplayAttributeData MaxStructure;
    FGameplayAttributeData FocusPoints;
    FGameplayAttributeData SkillPoints;
    FGameplayAttributeData Level;
    FGameplayAttributeData Experience;
    FGameplayAttributeData Age;
    FGameplayAttributeData DeathCounter;
    FGameplayAttributeData PendantCharges;
    FGameplayAttributeData PendantChargesRefill;
    FGameplayAttributeData PendantChargesLimit;
    FGameplayAttributeData XPMultiplier;
    FGameplayAttributeData DemoTrials;
    FGameplayAttributeData CurrentComboKills;
    FGameplayAttributeData MaxComboKills;
    FGameplayAttributeData CurrentComboXp;
    FGameplayAttributeData MaxComboXp;
    FGameplayAttributeData Score;
    FGameplayAttributeData DeathCounterMax;
    FGameplayAttributeData GameDifficulty;
    FGameplayAttributeData CheatsUnlockPoints;

    void OnRep_DeathCounter();
    void OnRep_Age();
};

struct FCombatDeckStat
{
    float m_fAverage;
    FString m_AverageString;
    float m_fRating;
    FSlateColor m_ComparisonColor;
    FSlateColor m_RatingComparisonColor;

};

struct FEquipmentCategoryInfos
{
    FText m_Name;
    FText m_Description;
    FText m_Lore;
    FAsyncTextureStruct m_SelectedIcon;
    FAsyncTextureStruct m_Icon;
    FAsyncTextureStruct m_MiniIcon;

};

struct FCombatDeckDetails
{
    FCombatDeckStat m_TotalDamage;
    FCombatDeckStat m_StatsDamage;
    FCombatDeckStat m_WeaponDamage;
    FCombatDeckStat m_WeaponDamageScale;
    FCombatDeckStat m_BaseAttackDamage;
    FCombatDeckStat m_AttackBonus;
    FCombatDeckStat m_Range;
    FCombatDeckStat m_Speed;
    FCombatDeckStat m_StrengthScale;
    FCombatDeckStat m_AgilityScale;
    FCombatDeckStat m_WRScale;
    TSoftObjectPtr<UTexture2D> m_eWeaponFamilyMiniIcon;
    FAsyncTextureStruct m_eWeaponFamilyMiniIconAsync;
    FEquipmentCategoryInfos m_WeaponFamilyInfos;
    FText m_ComboName;
    TArray<FName> m_Attacks;
    float m_fTotatDamageWithCoef;

};

struct FBaseStatBindings
{
    FText m_Text;
    FSlateColor m_ComparisonColor;

};

struct FIntStatBinding : public FBaseStatBindings
{
    int32 m_iValue;

};

struct FFloatStatBinding : public FBaseStatBindings
{
    float m_fValue;

};

struct FCharacterStatsBindings
{
    FAsyncTextureStruct m_FightingStyleIcon;
    FIntStatBinding m_CurrentLevelXP;
    FIntStatBinding m_XPToNextLevel;
    float m_fLevelProgress;
    FIntStatBinding m_AttributePoints;
    FIntStatBinding m_PrestigePoints;
    FIntStatBinding m_PrestigeGrade;
    FIntStatBinding m_Fragments;
    FIntStatBinding m_Level;
    FFloatStatBinding m_BareHandsWeightRatio;
    FFloatStatBinding m_WeaponWeightRatio;

};

class UCharacterStatsWidget : public USCUserWidget
{
    FString m_CharacterName;
    FString m_CharacterClass;
    FCombatDeckDetails m_CurrentWeaponCombatDeckDetails;
    FCombatDeckDetails m_PreviewWeaponCombatDeckDetails;
    FCombatDeckDetails m_CurrentHandCombatDeckDetails;
    FCombatDeckDetails m_PreviewHandCombatDeckDetails;
    FCharacterStatsBindings m_CurrentCharacterStats;

    void BPF_UpdateStats();
};

class UCharacterTextLipSync : public UTextLipSync
{

    void BPF_Speak(const FLipSync_TimedData& _phrase, const TArray<FLipSyncPhonemeInPhrase>& _phonemes, const TArray<FLipSyncEmotionData>& _emotions, class UAkAudioEvent* _audioEvent, TMap<float, float> _enveloppeValueByTime, bool _bUseImprovedTextToPhoneme);
};

class ASCPlayerStart : public APlayerStart
{
    FSCPlayerStartOnGotoGameplaySequenceStarted OnGotoGameplaySequenceStarted;
    void DynamicMulticast();
    FSCPlayerStartOnGotoGameplaySequenceFinished OnGotoGameplaySequenceFinished;
    void DynamicMulticast();
    TArray<FName> m_levelsNameToLoad;
    class USceneComponent* m_AnchorSceneComponent;
    bool m_bKeepBackGroundDuringStartupMenu;
    FVector m_vCameraForwardAtIntroEnd;
    FGameplayTag m_PlayerStartGameplayTag;
    bool m_bForFirstSpawn;
    EPlayerScreenSide m_ePlayerScreenSide;
    class ULevelSequence* m_IdleStartupSequence;
    class ULevelSequence* m_StartupSequence;
    float m_fCameraBlendDurationBetweenLoopAndGoto;
    TSubclassOf<class UMatineeCameraShake> m_CameraShakeClass;

    bool BPF_WantKeepBackgroundDuringStartupMenu();
    void BPE_PrepareSequence(int32 _sequenceID);
};

class ACheckPoint : public ASCPlayerStart
{
    class UBoxComponent* m_TriggerCheckpointEnter;

    void OnBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void BPF_SetNewCheckPointInSave();
};

class UCheckTargetPerceptionDecorator : public USCBTDecorator
{
    FBlackboardKeySelector m_TargetKey;
    TArray<class TSubclassOf<UAISense>> m_Senses;

};

class UCheckTargetStateOrderService : public UOrderService
{
    bool m_bCheckOrder;
    TArray<FEditableOrderType> m_StopOnInterruptedOnlyByOrders;
    EOrderType m_eExpectedTargetCurrentOrder;
    FSCUserDefinedEnumHandler m_EpectedTargetCurrentBPOrder;
    bool m_bCheckSnap;
    EControllerNature m_eCheckSnapOnControllerNature;
    float m_fMaxDistFromSnap;
    bool m_bCheckState;
    bool m_bCheckDeath;
    bool m_bInverseStateCheck;
    EFightingActionState m_eExpectedState;
    EInterruptionBehavior m_eInterruptionBehaviour;
    bool m_bSwapAtCurrentTime;
    TArray<EFightingState> m_RecoveredFightingStates;
    FAnimContainer m_SwapAnimation;
    FAnimContainer m_CustomFightingStateRecoveryAnim;
    FHitBox m_Hit;

};

class UCinematicManager : public UObject
{
    float m_fFadeDuration;

    void MovieStopped();
};

struct FClusterStruct
{
    class UStaticMeshComponent* m_MeshComp;
    TSubclassOf<class AThrowableActor> m_ThrowableSubClass;

};

class AClusterActor : public ASCActor
{
    TArray<FClusterStruct> m_MeshToThrowable;
    float m_fTimeBeforeSpawningThrowable;
    FVector m_vImpulseWhenDestroyed;
    bool m_bCanBeTargeted;
    float m_fSoundNoiseRadius;

    void BPF_SpawnActorFromMesh();
    void BPF_MakeNoise(class AActor* _noiseSource, FVector _vLocationOverride);
    FVector BPF_GetImpulseVector();
};

class UCollisionNotifyState : public USCAnimNotifyState
{
    FString m_alName;
    bool m_bDisableCollisions;

};

class UColorComparisonProfile : public UDataAsset
{
    FSlateColor m_BonusTint;
    FSlateColor m_MalusTint;

};

class UCombatPositionSettings : public UBaseCombatPositionSettings
{
    float m_fPositionEliminationAngle;

};

class UComboTransitionHelper : public UBlueprintFunctionLibrary
{

    EComboTransition BPF_GetTransitionFromInput(InputAction _eInput);
    InputAction BPF_GetInputFromTransition(EComboTransition _eTransition);
};

struct FChargedAttackNameByQuadrants
{
    FName m_Attacks;
    float m_StartRatio;

};

struct FChargedBuildUpStructGenericInfos
{
    float m_fDurationOfCharging;
    float m_fExtraHoldingTimeAfterChargeIscomplete;
    bool m_bAllowQuadrantToRecompute;

};

struct FChargedBuildUpStructByQuadrant
{
    FAnimContainer m_BuildUpByQuadrant;
    FChargedBuildUpStructGenericInfos m_Infos;

};

struct FComboNodeAttackInfos
{
    FName m_Attacks;
    TArray<FChargedAttackNameByQuadrants> m_ChargedAttacks;
    TArray<FChargedBuildUpStructByQuadrant> m_BuildUpForChargedAttack;

};

struct FAIActionAttackClassInstance
{
    TSubclassOf<class UAIActionAttack> m_DefaultClassObject;
    class UAIActionAttack* m_Instance;

};

struct FComboTransition
{
    EComboTransition m_eInputTransition;
    class UComboTransitionCondition* m_ConditionInstance;
    TMap<uint8, int32> m_TargetNodes;
    float m_fProbability;

};

struct FComboTransitions
{
    TArray<FComboTransition> m_Transitions;
    FName m_ParentNodeName;

};

struct FAvailabilityLayerContainer
{
    class UAvailabilityLayerData* m_availabilityLayerData;
    EALBinaryOperation m_eOperation;
    int32 m_iPriority;

};

struct FComboNode
{
    FGameplayTagContainer m_RequiredTags;
    FComboNodeAttackInfos m_AttackInfos;
    TMap<class FGameplayTag, class FComboNodeAttackInfos> m_ConditionalAttacks;
    UClass* m_AIAttackActionClass;
    FAIActionAttackClassInstance m_AIAttackAction;
    FComboTransitions m_Transitions;
    int32 m_NodeRedirect;
    FAvailabilityLayerContainer m_NodeRedirectAvailabilityLayer;
    TArray<EComboTransition> m_NodeRedirectIgnoredTransitions;
    class UComboEvent* m_Event;
    FName m_Name;
    bool m_bSkip;

};

struct FComboStartNode
{
    FSCUserDefinedEnumHandler m_EnumState;
    FComboTransitions m_ComboTransitions;
    FName m_PhaseName;
    uint32 m_uiMCDominationFlags;

};

class UCombo : public UObject
{
    FSCUserDefinedEnumHandler m_DefaultStartState;
    TArray<FComboNode> m_Nodes;
    TMap<class FName, class UAttackDB*> m_Attacks;
    TArray<FComboStartNode> m_ComboStartNodesContainer;
    FSCUserDefinedEnumHandler m_StartStatesEnum;
    int32 m_DefaultAttacks;

    FComboNode BPF_GetNode(int32 _ID);
};

class UComboAIConditionCanPerformAction : public UAIComboCondition
{
    TSubclassOf<class USCAiAction> m_Action;

};

class UComboAIConditionEnemyDistance : public UAIComboCondition
{
    FSCMathExpressionFloat m_condition;

};

class UComboAIConditionFindProxyNearPlayer : public UAIComboCondition
{
    float m_fMinimumDistance;

};

class UComboAIConditionGameDifficulty : public UAIComboCondition
{
    uint32 m_uiGameDifficultyFlags;

};

class UComboAIConditionGroup : public UAIComboCondition
{
    EComboAIConditionGroupOperator m_eOperator;
    bool m_bForceTestAllConditions;
    TArray<FAIConditionClassInstance> m_Conditions;

};

class UComboAIConditionHasAttackTicket : public UAIComboCondition
{
    bool m_bInvert;

};

class UComboAIConditionIsAttacking : public UAIComboCondition
{
    bool m_bInvert;
    class UAttackDB* m_AttackToTest;

};

class UComboAIConditionIsCharacterOnScreen : public UAIComboCondition
{
    float m_fMinTimeOnScreen;

};

class UComboAIConditionIsCombatRole : public UAIComboCondition
{
    int32 m_eCombatRolesMask;

};

class UComboAIConditionIsFrozenBySanctuary : public UAIComboCondition
{
    bool m_bInvert;

};

class UComboAIConditionIsInLastManPhaseScenario : public UAIComboCondition
{
};

struct FAIPhaseNodeSoftLinkByMCDomination
{
    FAIPhaseNodeSoftLink m_PhaseLink;
    uint32 m_uiMCDominationFlags;

};

class UComboAIConditionIsInPhaseScenario : public UAIComboCondition
{
    TArray<FAIPhaseNodeSoftLink> m_PhasesToTest;
    TArray<FAIPhaseNodeSoftLinkByMCDomination> m_Phases;

};

class UComboAIConditionIsInputActionAvailable : public UAIComboCondition
{
    InputAction m_eInput;

};

class UComboAIConditionIsTargetCarryingWeapon : public UAIComboCondition
{
};

class UComboAIConditionOnState : public UAIComboCondition
{
    FFloatRange m_RandomDelay;

};

class UComboAIConditionIsTargetFightingState : public UComboAIConditionOnState
{
    EComboAIConditionOnState m_eDesiredState;
    EFightingState m_eFightingState;
    bool m_bOnlyHighestFightingState;
    bool m_bUseStateDuration;
    float m_fStateValidDuration;

};

class UComboAIConditionIsTargetOrderState : public UComboAIConditionOnState
{
    EAITargetOrderState m_eDesiredState;
    EOrderType m_eOrder;
    bool m_bUseOrderDuration;
    float m_fStateValidDuration;

};

class UComboAIConditionMCDomination : public UAIComboCondition
{
    uint32 m_uiMCDominationFlags;
    int32 m_iSerializeVersion;

};

class UComboAIConditionNoAttackPosition : public UAIComboCondition
{
};

class UComboAIConditionRequestPassiveAttackTicket : public UAIComboCondition
{
    FSCAITicketEnum m_TicketNameEnumValue;
    bool m_bReleaseTicketInstantly;

};

class UComboAIConditionTimedTargetDistance : public UAIComboCondition
{
    FSCMathExpressionFloat m_condition;
    float m_fValidationTime;

};

struct FAIConditionTraceOffset
{
    EAIConditionTraceOffsetContext m_eRelativeTo;
    FVector m_vOffset;

};

class UComboAIConditionTraceCollision : public UAIComboCondition
{
    bool m_bShouldHit;
    EAIConditionTraceContext m_eFrom;
    EAIConditionTraceContext m_eTo;
    FAIConditionTraceOffset m_FromOffset;
    FAIConditionTraceOffset m_ToOffset;
    TEnumAsByte<ECollisionChannel> m_TraceChannel;
    FCollisionResponseContainer m_TraceCollision;
    TEnumAsByte<EEnvTraceShape::Type> m_eShape;
    FVector m_vShapeExtents;
    EAIConditionTraceRotationContext m_ShapeRotationRelativeTo;

    bool BPF_TestEQCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
};

class UAttackDB : public UDataAsset
{
    FComboAttack m_Attack;
    int32 m_iVersionNumber;

};

class UComboManager : public UObject
{
    FComboManager_OnEnded m_OnEnded;
    void ComboEndedDelegate();
    class UCombo* m_Combo;

};

class UComboStartStateOrderService : public UOrderService
{
    FName m_ComboStartName;
    FName m_ComboStartPostOrderName;

};

class UComboTransitionConditionActionState : public UComboTransitionCondition
{
    EFightingActionState m_ActionState;

};

class UComboTransitionConditionAIAttackMemory : public UAIComboCondition
{
    FGameplayTagContainer m_AttackProperties;
    bool m_bTestThrowAttack;
    TSoftClassPtr<AThrowableActor> m_ThrowableClassToTest;
    EAIMemoryAttackType m_eAttackOrigin;
    float m_fMemoryLimit;
    uint8 m_uiHitsCount;
    bool m_bSuccessive;
    bool m_bWhiff;
    uint8 m_HitTypes;
    bool m_bDodged;
    bool m_bAvoided;

};

class UComboTransitionConditionAICheckObstacles : public UComboTransitionCondition
{
};

class UComboTransitionConditionAILastAttackGuardType : public UComboTransitionCondition
{
    uint8 m_uiGuardType;
    bool m_bDodged;
    bool m_bAvoided;

};

class UComboTransitionConditionLastAttackHit : public UComboTransitionConditionAILastAttackGuardType
{
};

class UComboTransitionConditionLastAttackGuarded : public UComboTransitionConditionAILastAttackGuardType
{
};

class UComboTransitionConditionLastAttackDeflected : public UComboTransitionConditionAILastAttackGuardType
{
};

class UComboTransitionConditionLastAttackWhiff : public UComboTransitionConditionAILastAttackGuardType
{
};

struct FNavMeshFreeRange
{
    ESCCardinalPoints m_eOrientation;
    float m_fRange;

};

struct FNavMeshFreeSquare
{
    FVector m_OffsetToInstigator;
    float m_fSquareSize;
    float m_fRaycastHeight;

};

class UComboTransitionConditionAINavMesh : public UComboTransitionConditionAICheckObstacles
{
    TArray<FNavMeshFreeRange> m_FreeRanges;
    TArray<FNavMeshFreeSquare> m_FreeSquares;

};

class UComboTransitionConditionGeneric : public UComboTransitionCondition
{
    FBaseActorTargetConditionInstance m_condition;

};

class UComboTransitionConditionRandom : public UComboTransitionCondition
{
    float m_fTrueProbability;

};

class UComboTransitionConditionTargetDistance : public UComboTransitionCondition
{
    FSCMathExpressionFloat m_condition;

};

class UComboWidgetData : public UDataAsset
{
    FSlateColor m_RegularAttackNormalTint;
    FSlateColor m_RegularAttackNextTint;
    FSlateColor m_RegularAttackInactiveTint;
    FSlateColor m_RegularAttackCurrentTint;
    FSlateColor m_AlternativeAttackNormalTint;
    FSlateColor m_AlternativeAttackNextTint;
    FSlateColor m_AlternativeAttackFinishedTint;
    FSlateColor m_BlackEnlighted;
    FSlateColor m_BlackDarkened;
    FSlateColor m_WhiteEnlighted;
    FSlateColor m_WhiteDarkened;
    FSlateColor m_ErrorTint;
    class USpecialAttackData* m_SpecialAttackData;

};

class UConfrontationDialogAction : public UDialogActionBase
{
    FName m_ActorSentToConfrontation;
    int32 m_iCircleIndex;
    bool m_bPlayPrefightAnimations;

    TArray<FName> GetActorOptions();
};

class UStaminaNotify : public UAnimNotify
{
};

class UConsumStaminaNotify : public UStaminaNotify
{
};

class UContextualDefenseInfluenceNode : public UAIInfluenceNode
{
    FGameplayTagContainer m_TagsToFlushOnSuccess;
    FGameplayTagContainer m_TagsToRaiseOnSuccess;
    bool m_bFlushThrowAttackMemory;
    float m_fMemoryFlushLimit;
    bool m_bLaunchDefaultActions;
    FName m_InfluenceNodeName;
    TArray<class USCAITriggerableActions*> m_ActionsToTriggerOnValidation;
    TArray<FAIConditionedAction> m_ActionsOnSuccess;

};

struct FInputMappingNode
{
    class UGenericInputData* m_InputData;
    FInputPresetsEnumHandler m_Preset;
    FInputMappingKeySlot m_KeySlot;

};

class UControllerButtonWidget : public UButtonUserWidget
{
    int32 m_iInputSlotIndex;
    FFloatRange m_AxisScaleRange;
    InputContext m_eInputContext;
    EControllerIconAxisTypes m_eAxisType;
    bool m_bUpdateOnControllerTypeChanged;
    TArray<class UGenericInputData*> m_InputDatas;
    EControllerIconStyles m_IconStyle;
    InputAction m_eAction;
    FMappingID m_MappingID;

    void BPF_SetMappingID(const FMappingID& _mappingID, bool _bRefresh);
    void BPF_SetInputSlotIndex(int32 _iSlotIndex);
    void BPF_SetInputDatas(TArray<class UGenericInputData*> _InputDatas);
    void BPF_SetInputData(class UGenericInputData* _InputData);
    void BPF_SetIconStyle(EControllerIconStyles _eIconStyle, bool _bRefresh);
    void BPF_SetAxisType(EControllerIconAxisTypes _eAxisType, bool _bRefresh);
    void BPF_SetAction(InputAction _eAction, bool _bRefresh);
    bool BPF_IsKeyboardInput();
    void BPF_GetUIKeyInfos(bool& _bOutFoundIcon, FInputMappingNode& _outNode, TSoftObjectPtr<UTexture2D>& _icon, FKey& _key, FText& _replacementText, bool& _bShowText, FString& _outSeparator);
    FText BPF_GetKeyDisplayName(const FKey& _key);
    void BPF_GetInputNode(FInputMappingNode& Node);
};

class UControllerNatureCondition : public UBaseActorCondition
{
    EControllerNature m_eControllerNature;

};

struct FCreditContributorStruct
{
    FName m_FirstName;
    FName m_LastName;

};

struct FCreditCategoryStruct
{
    FText m_CategoryName;
    TArray<FCreditContributorStruct> m_Contributors;

};

struct FCreditCompanyStruct
{
    FName m_CompanyName;
    TArray<FCreditCategoryStruct> m_Categories;

};

class UCreditsWidget : public UMenuWidget
{
    float m_fScrollFactor;
    int32 m_iScrollPixelPerSeconds;
    float m_fSpeedFactorWithStick;
    float m_fScrollTime;
    TArray<FCreditCompanyStruct> m_Companies;

};

class UCTM_LookAt : public UCameraTransitionModule
{

    FVector BPE_GetPositionToLook(class UCameraComponentThird* _cameraComponent);
    bool BPE_CanLaunchLookAt(class UCameraComponentThird* _cameraComponent);
};

class UCTM_PauseLookAt : public UCameraTransitionModule
{

    bool BPE_CanLaunchPauseLookAt(class UCameraComponentThird* _cameraComponent);
};

class UCTM_SynchroMirrorMeleeService : public UCameraTransitionModule
{
};

class UCurrentAttackTargetCondition : public UBaseActorTargetCondition
{
    float m_fMaxElapsedTimeSinceLastUpdate;

};

class UCursorInputData : public UVectorInputData
{
    bool m_bNormalize;
    float m_fNormalizeRegionRadius;

};

class UCustomBoundingBoxComponent : public UBoxComponent
{
    int32 m_UsableSides;

};

class ACustomLightingVolume : public ASCPlayerVolumeNoPhysics
{
    FWuguanCustomLightingUserParameters m_Parameters;

};

struct FCustomWidgetNavigationData
{
    bool m_bAnalogNavigation;

};

class UCustomWidgetNavigation : public UObject
{
    FCustomWidgetNavigationData m_CustomNavigationConfig;

    void BPF_RestoreNavigationConfig();
    bool BPF_IsAnalogNavigationEnabled();
    void BPF_ApplyNavigationConfig();
};

class UDeathAbility : public USCGameplayAbility
{
};

struct FDeathRadialImpulse
{
    float Radius;
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    float ImpulseStrength;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    bool bImpulseVelChange;
    float DestructibleDamage;

};

struct FSCDeathAnimTypeEnum : public FSCUserDefinedEnumHandler
{
};

struct FDeathStandupAnimationFromAnimation
{
    class UAnimSequence* m_DeathAnim;
    FAnimContainer m_StandAnim;

};

struct FDeathStandupAnimations
{
    FAnimContainer m_FaceDown;
    FAnimContainer m_FaceUp;
    FAnimContainer m_SideLeft;
    FAnimContainer m_SideRight;
    float m_fMinFaceAngle;
    TArray<FDeathStandupAnimationFromAnimation> m_SpecialCases;

};

class UDeathDB : public UInheritedDataAsset
{
    bool m_bFallOnSlopes;
    FDeathRadialImpulse m_RadialImpulse;
    TMap<class FSCDeathAnimTypeEnum, class UAnimSequence*> m_DeathAnims;
    FDeathStandupAnimations m_StandUpAnims;
    FAnimContainer m_DownBeforeStandupAnim;
    float m_fKnockBackDistance;
    uint8 m_iNbFrameStuned;
    class ULevelSequence* m_Sequence;
    float m_fDelayBeforeSequence;
    float m_fFloorCorrectionCoeff;
    float m_fCollisionsFreeRadius;
    bool m_bCameraTargetPelvis;

};

class UDeathDetectionBTTask : public UBTTaskNode
{
};

class UDeathLevelSequence : public UWGLevelSequence
{

    void BPF_NotifyEvent(EDeathSequenceEvents _event);
};

class UDeathMenu : public UMenuWidget
{

    void BPF_StandBackUp();
    void BPF_SetIsGameover(bool _bGameOver);
    void BPF_IncrementAge(int32 _iAgeIncrement);
};

class UDeathPositionSettings : public UBaseCombatPositionSettings
{
    float m_fHeavySurpriseDistance;
    float m_fLightSurpriseDistance;
    int32 m_iProbaToPlayLightSurprise;

};

class UDebugMenu : public USCUserWidget
{
    FString m_CharacterBuildPath;
    class UCharacterBuildDB* m_DummyCharcterBuild;
    class UCharacterBuildListDB* m_CharacterBuildList;
    TSubclassOf<class ULoadSlot> m_LoadingButtonClass;

    void BPF_ShowSaves(class UPanelWidget* _boxToFill);
    void BPF_SetVBoxInvisible();
    void BPF_LoadEquipmentSelection();
    void BPF_LoadBackup(FString _backupName);
    void BPF_LoadAndSetFirstSave(class ULoadSlot* _loadSlot);
    void BPF_DeleteBackup(FString _backupName);
    void BPF_CreateNewSave(FString _charaName);
    void BPF_CreateBackup(FString _backupName);
};

class UDebugMenuAbility : public USCGameplayAbility
{
};

struct FHittedOrderServiceInfos
{
    float m_fStartDelayFrames;
    bool m_bUseCustomEnabledDuration;
    float m_fEnabledFrames;
    TSubclassOf<class UOrderService> m_OrderService;

};

struct FHittedAnimContainer : public FAnimContainer
{
    bool m_bLockAttacker;
    EKnockbackReorientationBehaviour m_eReorientationBehaviour;
    bool m_bInterruptible;
    bool m_bInterruptAnimationOnEnd;
    bool m_bScaleAnimationToHitDuration;
    bool m_bInvertReorientationFromBehind;
    ESCCardinalPoints m_eOrientationOffset;
    bool m_bUseRootMotion;
    bool m_bIgnoreHitKnockbackDistance;
    FAnimContainer m_FightingStateLoopAnim;
    TArray<FHittedOrderServiceInfos> m_OrderServices;
    bool m_bOverrideHitDuration;
    float m_fOverrideHitDuration;

};

struct FDefenseAnimInfos
{
    FAnimContainer m_Anim;
    FHittedAnimContainer m_ParryToStructureBrokenAnim;
    FHittedAnimContainer m_ParryToDizzyAnim;
    bool m_bMirrorFightingStateLoop;
    TMap<class ESCCardinalPoints, class FAnimContainer> m_PushFromGrabAnims;
    TMap<class ESCCardinalPoints, class FAnimContainer> m_PushFromGrabCloseWallAnims;
    FAnimContainer m_ParrySuccessAnim;

};

struct FDefenderAnimInfos : public FDefenseAnimInfos
{
    bool m_bParryToStructureBrokenDisableReorient;
    bool m_bParryToDizzyDisableReorient;
    bool m_bParrySuccessDisableReorient;

};

class UDefenseAnimRequest : public UObject
{

    void BPE_GetHitDefenseAnimation(const FHitDescription& _hitDescription, class AFightingCharacter* _grabber, FDefenderAnimInfos& _outDefenderAnims, FDefenseAnimInfos& _outDefendeeAnims);
    void BPE_GetDefaultThrowAnimation(FDefenseAnimInfos& _outGrabberAnims, FDefenseAnimInfos& _outGrabbedAnims);
};

struct FActionConditions
{
    bool bAllowedOnEmptyGauge;
    bool bAllowedOnBrokenGuard;

};

struct FGuardUpdateStruct
{
    float m_fGuardGaugePercentageTargetValue;
    int64 m_iGuardGuageTargetTime;

};

struct FDefenseGauge
{
    float m_fMaxValue;
    float m_fCooldownBeforeRecovery;
    float m_fRecoveryRatePerSec;
    float m_fRecoveryRatePerSecWhenComplete;

};

struct FFightingStateElement
{
    bool m_bPause;
    float m_fStateDuration;
    float m_fElapsedTime;
    bool m_bInfinite;
    float m_fMaxAccumulatedDamages;
    float m_fAccumulatedDamages;
    int32 m_iMaxAccumulatedHits;
    bool m_bGroupMaxAccumulatedHitsByAttack;
    int32 m_iAccumulatedHits;
    FName m_LastAttackName;
    EFightingState m_eState;
    ESubFightingState m_eSubFightingState;
    TWeakObjectPtr<class UAttackPropertiesResistanceDB> m_specialResistanceDB;

};

class UDefenseComponent : public UActorComponent
{
    FDefenseComponentBPE_GuardChanged BPE_GuardChanged;
    void GuardChanged(EGuardType _eGuardType);
    TArray<EOrderType> m_UninterruptibleOrderByGuard;
    FDefenseComponentBPE_FightingStateChanged BPE_FightingStateChanged;
    void FightingStateChanged(EFightingState _eFightingState, bool _bPush);
    FDefenseComponentBPE_AvoidWindowOpened BPE_AvoidWindowOpened;
    void AvoidWindowOpened();
    class UParryDB* m_ParryDB;
    class UAvoidDB* m_AvoidDB;
    float m_fCurrentGuard;
    FDefenseComponentBPE_GuardBroken BPE_GuardBroken;
    void GuardBrokenDynamicDelegate();
    FDefenseComponentOnGuardGaugeChanged OnGuardGaugeChanged;
    void GuardGaugeChangedDelegate(float NewValue);
    FActionConditions m_CancelConditions;
    FActionConditions m_AttackConditions;
    FActionConditions m_DodgeConditions;
    FActionConditions m_RushConditions;
    class UGuardDB* m_DefaultGuardDB;
    FGuardUpdateStruct m_GuardTargettedStruct;
    float m_fMaxGuard;
    float m_MaxGuardMultiplier;
    float m_fGrabbableGuardRatio;
    float m_fGuardBrokenGaugeCoolDownBeforeRecovery;
    float m_fGuardRecoveryRate;
    class UCurveFloat* m_GuardRecoveryRateByLife;
    class UCurveFloat* m_GuardRecoveryRateByLifePerDifficulty;
    float m_fGuardBrokenRecoveryRate;
    class UCurveFloat* m_GuardGaugeRecoveryRateOverWeightRatioCurve;
    float m_fGuardRecoveryRateCoeffWhenGuarding;
    float m_fGuardBreakDuration;
    bool m_bCanDoActionIfGuardGaugeEmpty;
    bool m_bGuardBlocksImpactsFromBack;
    bool m_bIgnoreRecoveryBlockInGuardBroken;
    EGuardType m_eGuardType;
    float m_fRangeOfDodgeForRefill;
    float m_fDodgeRefillValue;
    float m_fDodgeGuardGaugeRefillValue;
    float m_fBareHandsGuardCoeff;
    float m_fBareHandsGuardSpecialCoeff;
    class UAbsorbDB* m_AbsorbDB;
    bool m_bCanBeSuperDizzy;
    FDefenseGauge m_SuperDizzyGauge;
    float m_fSuperDizzyGaugeRatioAfterSuperDizzy;
    float m_fGuardGaugeRecoveryCooldown;
    float m_GuardGaugeRecoveryCooldownPerDifficulty;
    int32 m_iResilience;
    int32 m_iResilienceAttackBonus;
    class UAttackPropertiesResistanceDB* m_AttackPropertyResistanceDB;

    void ServerSetGuardValue(float _fGuard);
    void ServerRepSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    void PopFightingStates();
    void OnRep_GuardTargettedStruct();
    void OnMoveStatusChanged(class UFightingMovementComponent* _movementComponent);
    void OnHit(const FHitDescription& _hitDescription);
    void OnEffectAddedOrRemovedCallback(bool _bAdded, class UEffectData* _effectData);
    void OnDeath();
    void OnDamage(float _fAmount, class UHealthComponent* _healthComponent, bool _bApplied);
    void MultiCastSetGuardGaugeTarget(float _fPercentageTarget, int64 _iTimeToTarget);
    bool IsParryWindowOpen(bool _bPrediction);
    bool IsParryActive(bool _bPrediction);
    bool IsGuarding();
    bool IsAbsorbWindowOpened(bool _bInPrediction);
    void GuardGaugeChangedDelegate__DelegateSignature(float NewValue);
    void GuardChanged__DelegateSignature(EGuardType _eGuardType);
    void GuardBrokenDynamicDelegate__DelegateSignature();
    EGuardType GetGuardType();
    void FightingStateChanged__DelegateSignature(EFightingState _eFightingState, bool _bPush);
    void ClientNotifyIsTargettedByAttack(class AFightingCharacter* _attackInstigator, FName _attack);
    void BPF_SetPermanentFightingState(EFightingState _ePermanentFightingState);
    void BPF_SetGuardType(EGuardType _eGuardType, bool _bInPrediction);
    void BPF_SetDisableGuard(bool _bValue);
    void BPF_SetBuildUpFramesMultiplicator(float _fMult);
    void BPF_RestoreIncreaseGuardGauge();
    void BPF_ResetGuardDBToDefault();
    void BPF_PushVitalPointsDbOverride(FName _overrideName, class UVitalPointDB* _db);
    void BPF_PushAttackPropertiesResistanceDBOverride(FName _name, class UAttackPropertiesResistanceDB* _resistanceDB);
    void BPF_PopVitalPointsDbOverride(FName _overrideName);
    void BPF_PopAttackPropertiesResistanceDBOverride(FName _name);
    void BPF_OverrideGuardDB(class UGuardDB* _guardDB);
    void BPF_NotifyVitalPointsChanged();
    bool BPF_IsGuardBroken();
    bool BPF_IsFightingStateActive(EFightingState _eFightingState);
    void BPF_IncreaseGuardGauge(float _fAmount);
    class UVitalPointDB* BPF_GetVitalPointsDb();
    int32 BPF_GetResilienceBonusFromAttack();
    int32 BPF_GetResilience();
    float BPF_GetMaxGuardGauge();
    float BPF_GetGuardRatio();
    class UGuardDB* BPF_GetGuardDB();
    float BPF_GetGrabbableGuardRatio();
    float BPF_GetFightingStateTimeLeft(EFightingState _eFightingState, bool& _bOutActive, bool& _bOutInfinite);
    bool BPF_GetFightingStateInfos(EFightingState _eFightingState, FFightingStateElement& _outInfos);
    float BPF_GetBaseMaxGuard();
    class UAttackPropertiesResistanceDB* BPF_GetAttackPropertiesResistanceDB();
    void BPF_DecreaseGuardGaugeOverTime(float _fAmount, float _fDelay);
    void BPF_DecreaseGuardGauge(float _fAmount);
    void AvoidWindowOpened__DelegateSignature();
    uint8 AbsorbStacksLeft(bool _bInPrediction);
};

class UDefenseInfluenceNodeAttackAsDefense : public UContextualDefenseInfluenceNode
{
    float m_fTimeBeforeTagetAttackHit;
    FName m_ComboTrigger;
    FSCAITicketEnum m_AttackTicket;

};

class UDefenseInfluenceNodeAvoid : public UContextualDefenseInfluenceNode
{
};

class UDefenseInfluenceNodeDodge : public UContextualDefenseInfluenceNode
{
    bool m_bOverrideDirection;
    EDodgeDirectionType m_eDirectionTypeOverride;

};

class UDefenseInfluenceNodeGotoPhase : public UContextualDefenseInfluenceNode
{
    FAIPhaseNodeHardLink m_phaseHardLink;

};

class UDefenseInfluenceNodeGotoPhaseDynamic : public UContextualDefenseInfluenceNode
{
    FAIPhaseNodeSoftLink m_phaseSoftLink;

};

class UDefenseInfluenceNodeGuard : public UContextualDefenseInfluenceNode
{
};

class UDefenseInfluenceNodeInvalid : public UContextualDefenseInfluenceNode
{
};

class UDefenseInfluenceNodeParryDeflect : public UContextualDefenseInfluenceNode
{
};

class UDefenseInfluenceNodeTraversalEvasion : public UContextualDefenseInfluenceNode
{
};

class UDefenseNotifyState : public USCAnimNotifyState
{
    FString m_alName;

    void BPE_OnHitDefense(const FHitResult& _hitResult, FImpactResult& _Impact, const FHitRequest& _hitRequest, bool& _bShouldDismiss);
};

class UDefenseTacticUseCondition : public UBaseUseCondition
{

    EDefenseTactics BPE_SelectBestDefenseTactic(bool& _bOutTriggerCounter);
};

class UDefenseTagsOrderService : public UOrderService
{
    FGameplayTagContainer m_SetHitBoxRequiredTags;

};

struct FDeltaTransformAudioStep
{
    float m_fMinDistance;
    float m_fMinDeltaAngle;
    class UAkAudioEvent* m_akEvent;

};

class UDeltaTransformAudioData : public UDataAsset
{
    class UAkAudioEvent* m_defaultAkEvent;
    TArray<FDeltaTransformAudioStep> m_Steps;

    class UAkAudioEvent* GetAudioEvent(FTransform _from, FTransform _to);
};

class UDemoPreStartMenu : public UBaseStartMenu
{

    void OnRetryLoadProfile();
    void OnContinueWithoutSaving();
    void OnConfirmGeneric();
    void OnConfirmCancel();
    void OnAudioLanguageSetup();
};

struct FDetailedMoveTransition
{
    ESpeedState m_eInSpeedState;
    bool m_bAllowAllInCardinal;
    ESCCardinalPoints m_eInCardinalPoint;
    ESpeedState m_eOutSpeedState;
    ESCCardinalPoints m_eOutCardinalPoint;
    bool m_bFilterByVelocityRotation;
    ETransitionRotation m_eVelocityRotation;
    bool m_bOverrideVelocityRotationRange;
    FFloatRange m_fVelocityRotationRangeOverride;
    ETransitionRotationDirection m_eVelocityRotationDirection;
    EMoveTransitionType m_eResultingTransition;
    FString m_Description;

};

class UDetailedMoveTransitionDB : public UDataAsset
{
    TArray<FDetailedMoveTransition> m_TransitionList;
    TMap<class ETransitionGlobalType, class EMoveStatus> m_NeededMoveStatusMap;

};

class UDetectEnemyBehindTraversalsBTService : public UBTService
{
    float m_fDetectionDistance;

};

class UDetectFallOrderService : public UOrderService
{
    bool m_IgnoreWhenDead;
    bool m_bProjectVelocityOnDirection;
    FFloatRange m_VelocityFallRange;
    ESlopeReaction m_eReactionOnStart;
    ESlopeReaction m_eSlopeReactionWhenStartsOnSlope;
    float m_fEnterLeaveSlopeHitActivationDelay;
    bool m_bHasHitOnEnterSlope;
    FHitBox m_HitOnEnterSlope;
    bool m_bHasHitOnLeaveSlope;
    FHitBox m_HitOnLeaveSlope;
    ESlopeReaction m_eSlopeReaction;
    float m_fSteepSlopeAngleThreshold;
    ESlopeReaction m_eSteepSlopeReaction;
    float m_fFarSlopeHAngleMinDegree;
    ESlopeReaction m_eFarSlopeHAngleReaction;
    FAnimContainer m_CustomFallAnimOnSlope;

    FVector BPE_GetDirection(const FBPOrderServiceInstance& _instance);
};

class UFloatInfluenceTest : public UAIInfluenceTest
{
    EAIInfluenceTest m_eTestType;
    float m_fValueMin;
    float m_fValueMax;

};

class UDifficultyInfluenceTest : public UFloatInfluenceTest
{
};

class UDisableCamFadeOnOwnerOrderService : public UOrderService
{
};

class UDisableCollisionOrderService : public UOrderService
{
    bool m_bWithTargetOnly;
    bool m_bCollisionWithStaticMeshOn;
    bool m_bBlockTargettedAttacks;
    bool m_bEnableCollisionsOnLastThreat;

};

class UDisableExpulseOrderService : public UOrderService
{
};

class UDisableTargetTrackingNotifyState : public USCAnimNotifyState
{
};

class UDisableTraversalInvulnerabilityNotify : public USCAnimNotify
{
};

class UDisableWalkOffLedgesOrderService : public UOrderService
{
};

class UDistanceInfluenceTest : public UFloatInfluenceTest
{
};

class UDistFromFloorOrderService : public UOrderService
{
    float m_fMinFloorDist;
    float m_fMaxFloorDist;

};

class UDistributionStatCompareWidget : public UUserWidget
{
    class UPreviewData* m_PreviewData;

    class UStatsComponent* BPF_GetStatsComponent();
    class UPreviewData* BPF_GetPreviewData();
};

class UDizzyReductionAbility : public USCGameplayAbility
{
    class UCurveFloat* m_TimeReductionAsPercentCurve;

    void BPE_OnDizzyReduction(const FSCGameplayAbilityActorInfo& _infos, float _fTimeLeft, float _fTimeReduced);
};

class UDodgeAbility : public USCGameplayAbility
{
};

class UDodgeBTTask : public UAIDefenseBTTask
{
};

struct FNetOrderStructDodge : public FNetOrderStruct
{
    EDodgeType m_eDodgeType;
    FVector m_vDirection;
    FVector m_vOrientation;
    TWeakObjectPtr<class AActor> m_Target;
    FVector2D m_vDirOnStick;
    InputAction m_eInputAction;

};

class UDodgeAnimRequest : public UObject
{

    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, class AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const class AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct);
};

struct FDodgeConfigStruct
{
    float m_fMinDuration;
    float m_fMaxDurationArray;
    float m_fMovementLengthArray;
    bool m_bOverrideAnimDynamicByCurve;
    class UCurveFloat* m_OverrideDodgeDynamicCurve;
    int32 m_iFrameBuildUp;
    int32 m_iNbFrameDodgeWindowMiddle;
    int32 m_iFrameInterruptibleRelease;
    int32 m_iFrameRelease;
    bool m_bHasImpactOnGuardGauge;
    float m_fGuardGaugeCost;
    bool m_bForceDirOnNeutralDodge;
    ESCCardinalPoints m_eForcedCardinalDirOnNeutralDodge;

};

class UDodgeDB : public UDataAsset
{
    float m_fMaxDodgeRetargettingDistance;
    FDodgeConfigStruct m_dodgeConfigs;
    bool m_bWantDodgeLock;
    float m_fDodgeOpponentAttackRangeTolerance;
    bool m_bDefaultDodgeQuadrantSwitchActivated;
    bool m_bInvertRedirectOnBackQuadrant;
    class UCurveFloat* m_GuardGaugeCostOverWeightRatio;
    bool m_bSmoothedOrderDodgeNotifyStartDT;
    TSubclassOf<class UDodgeAnimRequest> m_animRequest;

};

class UDodgeTypeUseCaseMatrix : public UObject
{

    EDodgeDirectionType BPE_GetDodgeToUseFromHitbox(const FHitBox& _hitbox, const class UArchetypeAsset* _archetype);
};

class UDropWeaponNotify : public USCAnimNotify
{
    FVector m_vImpulse;
    bool m_bImpulseInLocalSocketSpace;
    ECoordinateSystem m_eImpulseCharacterSpace;
    EDropNotifyApplyMode m_ApplyMode;
    EDropReason m_eDropReason;

};

class UDropWeaponOrderService : public UOrderService
{
    FVector m_vDropImpulse;
    EDropReason m_eDropReason;

};

class UEarlyBlendOutNotify : public UAnimNotify
{
    TArray<EFightingState> m_FightingStateActiveConditions;

};

class UPostProcessAnimInstance : public USCAnimInstance
{
    bool m_bUseClothAnimDrive;
    FName m_ClothAnimDriveCurveName;

};

class UEditorPreviewPostProcessAnimInstance : public UPostProcessAnimInstance
{
    FName m_DebugIKDummySubInstanceTag;
    FName m_DebugIKMasterSubInstanceTag;
    EPostProcessAnimDebugRole m_eDebugRole;
    float m_fDebugFloorHeight;
    FVector m_vLocationDelta;
    FVector m_vExpectedLocation;
    TWeakObjectPtr<class UAnimSequence> m_DummyAnim;
    float m_fDummyAnimTime;
    bool m_bDummyAnimMirror;

};

class UEffectData : public UDataAsset
{
    float m_fDuration;
    bool m_bHitInteruptible;
    bool m_bInfinite;
    bool m_bKeepAfterDeath;
    float m_fStaminaRefillCoeff;
    float m_fStaminaActionsCostCoeff;
    float m_fStaminaRushCostCoeff;
    float m_fStaminaHitOnGuardCostCoeff;
    float m_fKnockbackCoeff;
    float m_fBluntProtectionValueAdded;
    float m_fCutProtectionValueAdded;
    float m_fWeightAdded;
    float m_fHealthRegenRateAdded;
    float m_fInstantHealthRecovery;
    float m_fInflictedDamageConversionCoeff;
    bool m_bHealIsCapped;
    float m_fGhostDamageBonus;
    float m_fAttackDamageMultiplier;
    float m_fDamageReceivedMultiplier;
    float m_fBarehandSpecialDamageRatio;
    int8 m_iResilienceBonus;
    float m_fImpactOnWeaponDurabilityMultiplier;

};

class UEnvironmentalAttackDetectionDB : public UDataAsset
{
    TSubclassOf<class UTakedownAnimRequest> m_DefaultAnimRequest;
    TSubclassOf<class UTakedownAnimRequest> m_WallAnimRequest;
    float m_fDetectionRadius;
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;

};

class UEnvironmentalImpactComponent : public UActorComponent
{

    void BPE_OnImpact(class AActor* _Instigator, uint8 _uiImpactType, const FHitResult& _hit);
};

class AEnvironmentalInteractionZone : public AActor
{
    bool m_bFallEnabled;
    bool m_bEnvironmentalTakedownEnabled;

};

class UEnvQueryGenerator_ActorClassFromManager : public UEnvQueryGenerator
{
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    FAIDataProviderFloatValue m_SearchRadius;
    TSubclassOf<class UEnvQueryContext> m_SearchCenter;
    TSubclassOf<class AActor> m_ActorClass;

};

class UEnvQueryGenerator_FightingCharacters : public UEnvQueryGenerator_ActorClassFromManager
{
};

class UEnvQueryGenerator_WallJumps : public UEnvQueryGenerator
{
    TSubclassOf<class UActorComponent> m_RequiredComponentClass;
    TSubclassOf<class AActor> m_SearchedActorClass;
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    TSubclassOf<class UEnvQueryContext> m_SearchCenter;
    FAIDataProviderFloatValue m_SearchRadius;
    FAIDataProviderFloatValue m_MinAngle;
    FAIDataProviderFloatValue m_MaxAngle;
    FAIDataProviderFloatValue m_MinAngleForwardToWall;
    FAIDataProviderFloatValue m_MaxAngleForwardToWall;
    FAIDataProviderFloatValue m_MinSelfToWallJumpDist;
    FAIDataProviderFloatValue m_MaxSelfToWallJumpDist;
    FAIDataProviderFloatValue m_MinTargetToWallJumpDist;
    FAIDataProviderFloatValue m_MaxTargetToWallJumpDist;

};

class UEnvQueryItemType_WallJump : public UEnvQueryItemType_ActorBase
{
};

class UEnvQueryTest_ActorsRelativeSideToBox : public UEnvQueryTest
{
    EGetActorsRelativeSideToBox m_eTest;
    float m_fMaxDistanceToBox;
    TSubclassOf<class UEnvQueryContext> m_ActorA;
    TSubclassOf<class UEnvQueryContext> m_ActorB;
    ETestAxis2D m_eTestAxis;

};

class UEnvQueryTest_AngleBetween : public UEnvQueryTest
{
    FEnvDirection LineA;
    FEnvDirection LineB;
    ESCTestAngle TestMode;
    bool m_bInDegree;
    TSubclassOf<class UEnvQueryContext> ThreatsToEvaluate;

};

class UEnvQueryTest_CanNavigateAroundBox : public UEnvQueryTest
{
    int32 m_iTestsPerBoxSide;

};

class UEnvQueryTest_DistanceFromBounding : public UEnvQueryTest
{
    ESCTestDistance TestMode;
    TSubclassOf<class UEnvQueryContext> DistanceTo;

};

class UEnvQueryTest_HasComponent : public UEnvQueryTest
{
    TSubclassOf<class UActorComponent> m_ComponentClass;

};

class UEnvQueryTest_IsInNextAttackRange : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> m_Target;
    float m_fTolerance;

};

class UEnvQueryTest_IsThrowableUsable : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> m_Target;

};

class UEnvQueryTest_Targetable : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> m_TargetTo;
    float m_fTargetRange;

};

class UEnvQueryTest_TargettingQueryer : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> m_TargetTo;

};

class UEQContext_Enemy : public UEnvQueryContext
{
};

class USCButton : public UButton
{
    FSCButtonOnFocusReceived OnFocusReceived;
    void ButtonFocused(class USCButton* _buttonFocused);
    FSCButtonOnFocusLost OnFocusLost;
    void ButtonUnFocused(class USCButton* _buttonUnfocused);

    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
};

class UEquipmentSelectionButton : public USCButton
{

    void OnButtonClicked();
};

class UEquipmentSelectionData : public UDataAsset
{
    int8 m_EquipmentMaterials;
    class UBaseWeaponData* m_Weapon;
    class USkeletalMesh* m_CharacterMesh;
    uint8 m_uiSkinToneIndex;

};

class UBaseTargetEvaluation : public UObject
{
    class UCurveFloat* m_Curve;
    ETargetingPrio m_eTargettingType;

};

class UTE_AllInRange : public UBaseTargetEvaluation
{
};

class UTE_CameraTarget : public UBaseTargetEvaluation
{
    bool m_bOnlyRelevantForOneTarget;

};

class UTE_CurrentAttacked : public UBaseTargetEvaluation
{
    float m_fAutoSelectTargetCooldown;

};

class UTE_DesignatedPrecise : public UBaseTargetEvaluation
{
    InputAction m_eDirectionAction;
    float m_fOnScreenToleranceTimeForDesignated;
    bool m_bUseRetrainOnDesignatedToOnScreenTargets;

};

class UTE_DesignatedRough : public UTE_DesignatedPrecise
{
};

class UBaseDirectionalTargetWeightEvaluation : public UObject
{
};

class UGenericStickTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation
{
    EWeightBinaryOperator m_eOperator;
    TArray<class UBaseTargetWeightEvaluation*> m_Evaluations;

};

class UAngleTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation
{
    FRuntimeFloatCurve m_AngleCurve;

};

class UTE_DirectionalWeightEvaluation : public UBaseTargetEvaluation
{
    InputAction m_eAction;
    bool m_bBlockWhenActionIsInactive;
    EWeightBinaryOperator m_eOperator;
    TArray<class UBaseDirectionalTargetWeightEvaluation*> m_Evaluations;

};

class UTE_LockMoveTarget : public UBaseTargetEvaluation
{
};

class UTE_GetOrderTarget : public UBaseTargetEvaluation
{
    FEditableOrderType m_OrderType;
    bool m_bIncludeChildTypes;

};

class UTE_Nearest : public UBaseTargetEvaluation
{
    float m_fOutOfSightTimer;
    float m_fAutoSelectTargetCooldown;
    bool m_bWantKeepPreviousTarget;
    bool m_bAutoResetBestTarget;

};

class UTE_NearestMenace : public UTE_Nearest
{
};

class UTE_NearestVirtual : public UBaseTargetEvaluation
{
};

struct FETS_NextHitExtraInfos
{
    FHitBox m_HitBox;
    bool m_bMirror;
    float m_fHitTime;

};

class UETS_NextHitHelper : public UBlueprintFunctionLibrary
{

    bool BPF_GetNextHitTargetExtraInfos(class AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos);
};

class UTE_NextHit : public UBaseTargetEvaluation
{
    float m_fMinHitboxTimeLeft;

    bool BPF_TryGetTargetExtraInfos(const class AFightingCharacter* _character, const FTargetResult& _targetInfos, FETS_NextHitExtraInfos& _infos);
};

class UTE_Preview : public UBaseTargetEvaluation
{
    float m_fCameraTargetDirectionCoeff;

};

class UTE_TargetSlot : public UBaseTargetEvaluation
{
    FSCUserDefinedEnumHandler m_Slot;
    bool m_bForced;

};

class UBaseTargetWeightEvaluation : public UObject
{
};

class UDistanceTargetWeightEvaluation : public UBaseTargetWeightEvaluation
{
    FRuntimeFloatCurve m_DistanceCurve;

};

class ULastTimeOnScreenTargetWeightEvaluation : public UBaseTargetWeightEvaluation
{
    FRuntimeFloatCurve m_TimeCurve;

};

struct FConditionOnTargetWeightEvaluation
{
    FBaseActorTargetConditionInstance m_condition;
    float m_fBonus;

};

class UConditionTargetWeightEvaluation : public UBaseTargetWeightEvaluation
{
    EWeightBinaryOperator m_eOperator;
    TArray<FConditionOnTargetWeightEvaluation> m_BonusPerCondition;

    FString GetEditorDesc(const FConditionOnTargetWeightEvaluation& _eval);
};

class UGenericTargetWeightEvaluation : public UBaseTargetWeightEvaluation
{
    EWeightBinaryOperator m_eOperator;
    TArray<class UBaseTargetWeightEvaluation*> m_Evaluations;

};

class UTE_WeightEvaluation : public UBaseTargetEvaluation
{
    EWeightBinaryOperator m_eOperator;
    TArray<class UBaseTargetWeightEvaluation*> m_Evaluations;

};

class UEvaluateTargetCondition : public UObject
{
    bool m_bInverseCondition;

};

struct FTargetableFactions
{
    uint8 m_TargetableFactions;

};

class UFactionsManager : public UObject
{
    FTargetableFactions m_FactionsTargetTable;

};

class UFakePhysicComponent : public UActorComponent
{
    float m_fZImpulse;
    float m_fImpulseReduc;
    FVector m_vAngularImpulse;
    class UPrimitiveComponent* m_OverlappingComponent;

    void NotifyBeginOverlap(class UPrimitiveComponent* _OverlappedComp, class AActor* _Other, class UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _OverlapInfo);
    void BPF_SetOverlappingComponent(class UPrimitiveComponent* _primComp);
};

class UFallHitActionLauncher : public UHitActionLauncher
{
    bool m_bMCIsInstigator;
    bool m_bHitOnInstigator;
    FHitBox m_HitOnInstigator;

    void BPE_GetDirection(class AActor* _Instigator, class AActor* _victim, FVector& _vOutStartDirection, FVector& _vOutTargetDirection, bool& _bOutForceStartDirection);
};

class UFallInterruptAbility : public USCGameplayAbility
{
};

class UBlendProfileBySpeedStatePayload : public UBlendProfilePayload
{
    FBlendProfileBySpeedStateStruct m_BlendProfiles;

};

struct FSCConditionnalGestureAndBlendProfile
{
    EFidgetMirroringTypes m_eMirrorWithQuadrantHandling;
    FSCGestureAndBlendProfile m_animContainer;
    EQuadrantTypes m_eQuadrant;
    TArray<FBaseActorConditionInstance> m_Conditions;

};

class UFidgetDB : public UDataAsset
{
    FFloatRange m_fTimerRange;
    TArray<FSCConditionnalGestureAndBlendProfile> m_Anims;
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    bool m_bAllowSyncFidgetMirrorWithQuadrant;

    FSCGestureAndBlendProfile BPF_GetGestureContainer(class AActor* _requester);
    FSCConditionnalGestureAndBlendProfile BPF_GetConditionnalGestureContainer(class AActor* _requester);
    float BPF_ComputeTimer();
};

class UFidgetPlayerBTService : public UBTService
{
    EAIFidgetTypes m_eFidgetType;
    bool m_bRestoreTypeOnCeaseRelevant;

};

class UFidgetVariableWeightOrderService : public UOrderService
{
    FSCUserDefinedEnumHandler m_EnumLayer;
    class UBlendProfile* m_DefaultBoneMask;
    FEditableOrderType m_OrderType;
    ESpeedState m_eRefSpeedState;

};

class UFightingActionStateCondition : public UBaseActorCondition
{
    EFightingActionState m_eActionState;

};

class AFightingAIController : public AAIController
{

    void OnPerceptionUpdate(const TArray<class AActor*>& _updatedActors);
    void AiSpawned(class AAISpawner* _spawner);
};

class UFightingAIDialogComponent : public USCDialogComponent
{
};

struct FPelvisDirectionComputationParams
{
    bool m_bUseFeetLocation;
    bool m_bInverseAxis;
    FName m_boneName;
    TEnumAsByte<EAxis::Type> m_eAxis;

};

struct FHandledWeaponInfo
{
    TWeakObjectPtr<class UVisibleWeaponData> m_Data;
    TWeakObjectPtr<class AActor> m_WeaponOwner;

};

struct FHitDefenseResult
{
    EOrderType m_eDefenseOrder;
    uint8 m_uiOrderID;
    uint8 m_uiDefenseType;
    bool m_bHitDismissed;
    bool m_bResultRemoved;
    bool m_bIsPlayingOrder;
    class USpecialAbilityPropertyDB* m_DB;

};

class AFightingCharacter : public ABaseCharacter
{
    FFightingCharacterOnEquipWeapon OnEquipWeapon;
    void OnEquip(bool _bEquipmentSuccessful);
    FFightingCharacterOnUnequipWeapon OnUnequipWeapon;
    void OnEquip(bool _bEquipmentSuccessful);
    FFightingCharacterOnActorHiddenChanged OnActorHiddenChanged;
    void OnActorHiddenChanged(bool _bActorHidden);
    FFightingCharacterOnAvoidCapsuleHitDynamic OnAvoidCapsuleHitDynamic;
    void AvoidCapsuleHitDelegate(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    class UAvailabilityLayerDB* m_availabilityLayerDB;
    FName m_AnimSyncBoneViewPoint;
    FFightingCharacterOnKilledSomething OnKilledSomething;
    void KilldDelegate(class AActor* Victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, const FDamageInfos& _damageInfos);
    FFightingCharacterOnAvoidSuccessDynamic OnAvoidSuccessDynamic;
    void OnAvoidSuccessDelegate(FHitRequest _hitRequest, FHitDefenseResult _hitDefenseResult);
    FFightingCharacterOnEffectAddedOrRemoved OnEffectAddedOrRemoved;
    void OnEffectAddedOrRemoved(bool _bAdded, class UEffectData* _effectData);
    FFightingCharacterOnRecoveryFromDamageDealt OnRecoveryFromDamageDealt;
    void OnRecoveryFromDamageDealt(float _fHealAmount);
    FFightingCharacterOnResilienceChanged OnResilienceChanged;
    void OnResilienceChanged(int32 _iNewResilience);
    FFightingCharacterOnLanding OnLanding;
    void DynamicMulticast();
    FFightingCharacterOnFalling OnFalling;
    void DynamicMulticast();
    class UCharacterHitBoxComponent* m_PushHitBox;
    bool m_bHasJustBeenHitted;
    FHitDescription m_HittedDescription;
    bool m_bAllowAutonomousAnimPoseTick;
    class UDefenseComponent* m_DefenseComponent;
    class USCAbilitySystemComponent* m_AbilityComponent;
    class UTargetableActorComponent* m_TargetLocation;
    class UPhysicalAnimationComponent* m_PhysicalAnimationComponent;
    FName m_currentlyAttachedSocket;
    class UAttackComponent* m_AttackComponent;
    class UCameraComponentThird* m_Camera;
    class UBaseWeaponData* m_DefaultHandWeapons;
    class UBaseWeaponData* m_DefaultLegWeapons;
    class UHitComponent* m_HitComponent;
    class UPlayerFightingComponent* m_PlayerComponent;
    class UAIFightingComponent* m_AIComponent;
    class UCapsuleComponent* m_AvoidCapsule;
    class UCapsuleComponent* m_HitCapsule;
    class UCharacterHealthComponent* m_HealthComponent;
    class UMessengerComponent* m_MessengerComponent;
    class UReplayablePhysicsComponent* m_ReplayablePhysicsComponent;
    class UFightingCharAnimRepComponent* m_FightingCharAnimRepComponent;
    class UReplayFightingCharacterComponent* m_ReplayFightingCharacterComponent;
    class UASMComponent* m_ASMComponent;
    class UDeathDB* m_DeathDB;
    uint8 m_uiTransitionZoneId;
    float m_fMinHeightForVisbilityTrace;
    float m_fMaxHeightForVisbilityTrace;
    float m_PickUpAngle;
    bool m_bSpawnOccured;
    bool m_bReceivedSaveFailedCompensation;
    bool m_bCheckInventoryBug1_25;
    uint8 m_uiPawnCounter;
    EFactionsEnums m_eFaction;
    bool m_bUpdateCollisionProfileOnBeginPlay;
    class UMaterialParameterCollection* m_MaterialParameterCollectionGameplay;
    FName m_asTargetBones;
    float m_fCapsuleRadiusRatioForThrowableTargetLocation;
    FPelvisDirectionComputationParams m_defaultPelvisComputationParams;

    void SetTarget(class AActor* _target);
    void ServerUpdateMovementAnimation();
    void ServerSuicide(bool _bForceUnrevivable);
    void ServerSetFlyMode(bool _bFlyModeActivated);
    void ServerSetFaction(uint8 _uiFaction);
    void ServerPullOutWeapon(const FHandledWeaponInfo& HandledWeaponInfo);
    void RemoveGameplayTag(FString _tag);
    void PushCamera(FString _inCameraName);
    void PopCamera();
    void OnTakingOutWeaponOrderEnded(uint8 _uiOrderId, class UOrderComponent* _orderComp);
    void OnResilienceChanged__DelegateSignature(int32 _iNewResilience);
    void OnRep_TransitionZoneId();
    void OnRecoveryFromDamageDealt__DelegateSignature(float _fHealAmount);
    void OnOrderParryInstigatorStarted(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnEquip__DelegateSignature(bool _bEquipmentSuccessful);
    void OnEffectAddedOrRemovedInternalCallback(bool _bAdded, class UEffectData* _effectDataAsset);
    void OnEffectAddedOrRemoved__DelegateSignature(bool _bAdded, class UEffectData* _effectData);
    void OnAvoidSuccessDelegate__DelegateSignature(FHitRequest _hitRequest, FHitDefenseResult _hitDefenseResult);
    void OnActorHiddenChanged__DelegateSignature(bool _bActorHidden);
    void MulticastSetFaction(uint8 _uiFaction);
    void MulticastRemoveEffect(class UEffectData* _effectData, int64 _iRemovalTimeTick);
    void MulticastLoadWeaponMesh(const FHandledWeaponInfo& HandledWeaponInfo);
    void MulticastAddEffect(class UEffectData* _effectData, int64 _iStartTimeTick);
    void MulticastActivateRagdoll(bool _bActivate, float _fBlendWeight);
    void KilldDelegate__DelegateSignature(class AActor* Victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, const FDamageInfos& _damageInfos);
    void Hitted(const FHitDescription& _hit);
    void HandleSwapHand(EOrderType _ePreviousOrderType);
    void HandleEndComboForWeapon();
    class AActor* GetTarget();
    class UPlayerFightingComponent* GetPlayerComponent();
    class UPhysicalAnimationComponent* GetPhysicalAnimationComponent();
    class UDefenseComponent* GetDefenseComponent();
    class UAttackComponent* GetAttackComponent();
    class UAIFightingComponent* GetAiComponent();
    void ComboStarted();
    void ClearCameras();
    void BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce, bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    void BPF_TakeOutWeapon();
    void BPF_SwapWeaponHandWithAnim(class AActor* _actorToPickup, uint8 _uiPreviousOrderID);
    void BPF_SpawnFootStepDecal(class UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    void BPF_SetIsValidTarget(bool _bIsValidTarget);
    void BPF_SetInvincibility(bool _bIsInvincible);
    void BPF_SetGuardGaugeInfinite(bool _bIsInfinite, bool _bRestoreGauge);
    void BPF_SetFaction(EFactionsEnums _eFaction);
    void BPF_SaveAnimInstanceReference();
    void BPF_RestoreSavedAnimInstance();
    void BPF_ResetOverrideTargetting(FString _targettingToRemove);
    void BPF_ResetInputStack(FString _context);
    int32 BPF_PushAvailabilityLayerContext(InputContext _eInputContext, EALPriority _eALPriority);
    int32 BPF_PushAvailabilityLayer(const class UAvailabilityLayerData* _layer, EALBinaryOperation _eBinaryOperation, InputContext _eContext, EPredictionBehavior _ePredictionBehavior, int32 _iLinkedLayerId, int32 _iPriority, int32 _iALContext);
    void BPF_PopAvailabilityLayerContext(InputContext _eInputContext, int32 _iContextID);
    uint8 BPF_PlayGestureOnCharacter(const FSCGestureContainer& _gestureContainer, bool _bLoop);
    uint8 BPF_PlayGesture(FSCGestureAndBlendProfile _gesture, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bLoop, EFidgetMirroringTypes _eMirrorHandling);
    void BPF_PickUpObject(class AInteractiveMovable* _object, bool _bMirrorPickup);
    void BPF_OverrideTargetting(FString _targettingToOverride);
    void BPF_NotifyTeleport(bool _bOnTeleportLocation, ECameraTeleportationRotationBehavior _eCameraRotationBehavior);
    void BPF_MulticastRemoveEffect(class UEffectData* _effectData, float _fPredictionTime);
    void BPF_MulticastAddEffect(class UEffectData* _effectData, float _fPredictionTime);
    void BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime);
    bool BPF_IsInvicible();
    bool BPF_IsGuardGaugeInfinite();
    bool BPF_IsGetUpDone();
    bool BPF_IsDown();
    bool BPF_IsBestActionAvailable(InputAction _eAction);
    bool BPF_IsActorInAttackRange(const class AActor* _actor);
    bool BPF_HasWeaponEquipped(class ABaseWeapon*& _outWeaponEquipped, bool _bIgnoreUnusableWeapon);
    bool BPF_HasValidTarget();
    class UStatsComponent* BPF_GetStatsComponent();
    class USkeletalMeshComponent* BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot);
    class ABaseWeapon* BPF_GetPickedUpWeapon();
    class AInteractiveMovable* BPF_GetPickedUpObject();
    FVector BPF_GetLeftStickDirection(bool _bFallbackToCameraDir);
    class UHitComponent* BPF_GetHitComponent();
    float BPF_GetHeightFromFeet(const FVector& _vLocToCheck);
    class UCharacterHealthComponent* BPF_GetHealthComponent();
    FVector BPF_GetDirToTarget(bool _bCanUseCamera, const class AActor* _specifiedTarget, bool _bFallbackToDefaultTarget);
    class UDeathDB* BPF_GetDeathDB();
    EDangerStates BPF_GetDangerState();
    int32 BPF_GetCurrentTotalResilience();
    class UCameraComponentThird* BPF_GetCameraThird();
    class UActorComponent* BPF_GetBPComponent(EFightingCharacterBPComponents _eComponent);
    class UASMComponent* BPF_GetASMComponent();
    class UPlayerAnim* BPF_GetAnimGraph();
    TArray<class UEffectData*> BPF_GetAllActiveEffects();
    class USCAbilitySystemComponent* BPF_GetAbilitySystemComponent();
    void BPF_DrawDecalToRenderTarget(class UMaterialInterface* _decalMaterial, float _fSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    EQuadrantTypes BPF_ComputeQuadrant(class AActor* _towardSpecificTarget);
    void BPF_CharacterFullySpawned();
    void BPF_ActivateCollision(FString _contextString, bool _bActivate, bool _bLetStaticMeshOn, bool _bBlockTargettedAttacks);
    void BPE_UpdateTargettedByThrowable(bool _bIsTargetted, EHeight _eTargettingHeight);
    void BPE_UpdateTargettedByPushable(bool _bIsTargetted);
    void BPE_UpdateTargettedByGrab(bool _bIsTargetted);
    void BPE_ThrowableHit(const FHitDescription& _hit);
    void BPE_TargetChanged(class AActor* _old);
    void BPE_StartPowerFX(EItemPowers _eFxType);
    void BPE_Spawn(bool m_bRespawn);
    void BPE_SetCharacterHidden(bool _bHidden);
    void BPE_ReviveStart();
    void BPE_ReviveInProgressPercent(float _fPercent);
    void BPE_ReviveCancelPercent(float _fPercent);
    void BPE_PickUpWeaponStart(class UVisibleWeaponData* _handledWeaponData);
    void BPE_PerfectLinkWoOMissed();
    void BPE_OnRelationshipChanged(class AActor* _shifter, class AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _eNewRelation);
    void BPE_OnRecoveryFromDamageDealt(float _fHealthRecovered);
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);
    void BPE_OnEffectStart(class UEffectData* _effectData);
    void BPE_OnEffectEnd(class UEffectData* _effectData, bool _bInterrupted);
    void BPE_OnDeath();
    void BPE_OnAvoidSuccessful_PredictionServer(const FHitRequest& _inHitRequest, const FHitDefenseResult& _defenseInfos);
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    void BPE_OnAvoidCapsuleHit(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    void BPE_MoveStatusChanged(EMoveStatus _MoveStatus);
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    void BPE_Hit(const FHitDescription& _hit);
    void BPE_EndRevive(bool _bSuccess);
    void BPE_EndPowerFX(EItemPowers _eFxType);
    void BPE_EndBeingRevived(bool _bSuccess);
    void BPE_DropWeaponStart(class UVisibleWeaponData* _handledWeaponData);
    void BPE_DoParry(EQuadrantTypes _eParryQuadrantRegardingTarget, EQuadrantTypes _eParryQuadrant);
    void BPE_DoDodge(FVector _vDodgeDirection);
    void BPE_DodgeSuccess(class AFightingCharacter* _attacker);
    void BPE_DoAvoid(EAvoidType _eAvoidType);
    void BPE_DoAbsorb();
    void BPE_BeingRevivedStart();
    void BPE_Avoided(EAvoidType _eAvoid, const class UAvoidPropertyDB* _AvoidPropertyDB);
    void BPE_AttackStarted();
    void BPE_AttackEnded();
    void BPE_Absorb_PredictionServer(const FHitResult& _hitResult, const FHitRequest& _inHitRequest, const FImpactResult& _result, const FHitDefenseResult& _defenseInfos);
    void BPE_Absorb(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    void BlueprintEventParrySuccessful(const FHitResult& _hitResult, const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    void BlueprintEventParried(FVector _vImpactPosition, class AFightingCharacter* _ParryInstigator);
    void AvoidCapsuleHitDelegate__DelegateSignature(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    void AddGameplayTag(FString _tag);
};

class UFightingCharacterHelpers : public UBlueprintFunctionLibrary
{

    int32 BPF_PickRandomAnimSequence(TArray<class UAnimSequence*>& _inOutAnimHistory, const TArray<class UAnimSequence*>& _animSelection, bool _bAddToHistory);
    int32 BPF_PickRandomAnimation(TArray<class UAnimSequence*>& _inOutAnimHistory, const TArray<FAnimContainer>& _animSelection, bool _bAddToHistory);
};

class UFightingCharAnimRepComponent : public UAnimInstanceReplicationComponent
{
};

class UFightingMovementComponent : public UCharacterMovementComponent
{
    float m_fPenetrationExpulsionSpeed;
    FVector m_vVelocity;
    EMoveStatus m_eMoveStatus;
    class UBaseMovementDB* m_BaseMovementDB;
    bool m_bOverlapOnRemoveCollision;
    uint8 m_bPushForceScaledToMassInNavWalking;
    float m_fInitialPushForceFactorInNavWalking;
    float m_fPushForceFactorInNavWalking;
    float m_fFlyModeSpeed;
    float m_fFlyModeRushSpeed;
    TSubclassOf<class UTraversalDB> m_TraversalInfosDB;
    TArray<class UAnimSequence*> m_LastDodgeAnims;

    void ServerPopDesyncFromServer(uint8 _uiResyncID);
    void OnEffectAddedOrRemovedCallback(bool _bAdded, class UEffectData* _effectData);
    FVector GetRealVelocity();
    float GetRealSpeed();
    FVector GetRealHorizontalVelocity();
    float GetRealHorizontalSpeed();
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    void BPF_ResetBaseMovementDBToDefault();
    void BPF_PushBlockV2(class AActor* _blocker);
    void BPF_PopBlockV2(class AActor* _blocker);
    void BPF_OverrideBaseMovementDB(class UBaseMovementDB* _newBaseMovementDB);
    bool BPF_IsRushing();
    FVector BPF_GetLastWantedDir();
    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState& _eSpeedState);
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState);
    float BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState);
    float BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState);
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState);
    EFallLevel BPF_GetFallLevel();
    ETraversalPhase BPF_GetCurrentTraversalPhase();
    ESpeedState BPF_GetCurrentSpeedState();
};

struct FOrderServiceFrameRange
{
    bool m_bBoundToAnim;
    class UOrderServiceFrameRangeRequest* m_FrameRangeRequest;
    FFloatRange m_FrameRange;

};

struct FOrderServiceClassInstance
{
    TSubclassOf<class UOrderService> m_DefaultClassObject;
    class UOrderService* m_Instance;

};

struct FOrderServiceInfos
{
    bool m_bDisabled;
    EOrderServiceFreezeFrameHandling m_eFreezeFrameHandling;
    bool m_bActivateFromFrameRange;
    bool m_bActivateWhenMissingFromAnim;
    TSubclassOf<class UOrderServiceActivationConditions> m_activationCondition;
    bool m_bInvertCondition;
    FOrderServiceFrameRange m_FrameRangeInfos;
    FOrderServiceClassInstance m_OrderServiceInstance;

};

struct FOrderInfosInstance
{
    TArray<FOrderServiceInfos> m_Services;
    class UOrderDB* m_DB;

};

struct FOrderInfosInstanceMap
{
    TMap<class EOrderType, class FOrderInfosInstance> m_OrderServiceInstances;
    TMap<class FName, class FOrderInfosInstance> m_BPOrderServiceInstances;

};

struct FOrderType
{
    EOrderType m_eOrderType;
    FName m_BPOrderID;

};

struct FBuffer
{
    TArray<uint8> m_BufferArray;
    TArray<FName> m_BufferFnames;
    TArray<class AActor*> m_BufferActors;
    TArray<class UObject*> m_BufferUObjects;

};

struct FOrderTransformData
{
    float m_fPosX;
    float m_fPosY;
    float m_fOrientation;
    float m_fOrderRatio;

};

class UOrderComponent : public UActorComponent
{
    TArray<class TSubclassOf<UOrderDBSet>> m_OrderDBs;
    FOrderInfosInstanceMap m_OrderServiceInstances;
    TMap<class FOrderType, class UOrderDelegateHandler*> m_OrderDelegateHandler;

    void ServerUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    void ServerPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    void ServerCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer, bool _bIncludeChildType);
    void ServerCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer);
    void ServerCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer);
    void MultiCastUpdateOrder(uint8 _uiOrderId, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    void MultiCastPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, uint8 _uiAfterOrder, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore, uint8 _uiReplaceInSequence);
    void MultiCastFirstOrderTransformData(uint8 _uiOrderId, FOrderTransformData _orderTransformData);
    void MultiCastCancelOrderByType(const FOrderType& _OrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions, bool _bIncludeChildType);
    void MultiCastCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId);
    void MultiCastCancelOrderByID(uint8 _uiOrderId, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster);
    class UOrderDelegateHandler* GetOrderDelegates(const FOrderType& _OrderType);
    void ClientPlayOrderRejected(uint8 _uiOrderId);
    bool BPF_IsOrderRunningWithID(uint8 _uiID, EOrderAccessMode _eAccessMode);
    bool BPF_IsOrderRunning(const FOrderType& _OrderType, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase, bool _bIncludeChildType);
    bool BPF_IsLastActionOrderPlayedInMirror();
    TArray<uint8> BPF_GetRunningAndPendingActionOrders(bool _bStillInRunningPhase);
    EOrderType BPF_GetOrderTypeFromOrderID(uint8 _uiOrderId);
    uint8 BPF_GetOrderIDFromType(EOrderType _eOrderType, bool& _bFound, EOrderAccessMode _eAccessMode, bool _bStillInRunningPhase);
    class UOrderDelegateHandler* BPF_GetOrderDelegates(EOrderType _eOrderType);
    class UOrderDB* BPF_GetOrderDB(FOrderType _OrderType);
    uint8 BPF_GetLastActionOrderId();
    FOrderType BPF_GetBPOrderTypeFromOrderID(uint8 _uiOrderId);
    class UOrderDelegateHandler* BPF_GetBPOrderDelegates(FName _BPOrderType);
    void BPF_CancelAllOrders();
};

class UFightingOrderComponent : public UOrderComponent
{
};

struct FInteractionTextStruct
{
    FText m_FirstText;
    InputAction m_eInputAction;
    FText m_SecondText;

};

struct FMenuReferenceWithRequiredTags
{
    TSoftClassPtr<UMenuWidget> m_Menu;
    FGameplayTagContainer m_RequiredGameFlowTags;
    bool m_bLoadSyncAtInit;

};

struct FMenuStackInfos
{
    EMenuEnum m_eMenu;
    TWeakObjectPtr<class UPanelWidget> m_Container;
    TWeakObjectPtr<class UWidget> m_FocusedButton;

};

struct FCoopGroupMemberInfo
{
    FUniqueNetIdRepl m_UniqueNetId;
    ECoopGameModeAnswerStatus m_eAnswerStatus;

};

struct FCoopGroup
{
    TArray<FCoopGroupMemberInfo> m_GroupMemberInfos;
    EGameModeTypes m_eGameModeType;

};

class AFightingPlayerController : public ASCPlayerController
{
    FFightingPlayerControllerOnOptionChanged OnOptionChanged;
    void OnOptionChangedDynamicDelegate(EGameOptionTypes eGameOptionType);
    FFightingPlayerControllerOnCurrentMenuChanged OnCurrentMenuChanged;
    void CurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    FFightingPlayerControllerOnNotifyProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    void ProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, class UCharacterProgressionUnlockDB* _unlock);
    FInteractionTextStruct m_InteractionText;
    FText m_InteractionLockText;
    bool m_InteractionUseLockText;
    class ASkillTree* m_MenuSkillTree;
    bool m_bShowAltAttackStartQuadrant;
    FFightingPlayerControllerDropItemDelegate DropItemDelegate;
    void DropItem(class AController* _discarder);
    FFightingPlayerControllerOnChangeMenuPage OnChangeMenuPage;
    void ChangeMenuPage(ECycleDirection _eDirection);
    FFightingPlayerControllerOnPawnInitializedDynamic OnPawnInitializedDynamic;
    void PawnInitializedDynamic(class AFightingCharacter* _pawn);
    FFightingPlayerControllerOnPawnWasKilled OnPawnWasKilled;
    void OnWasKilled(class AFightingCharacter* _victim, class AFightingCharacter* _deathInstigator);
    FFightingPlayerControllerOnMenuClosed OnMenuClosed;
    void CloseIngameMenu();
    FFightingPlayerControllerOnGiveInitialControlToPlayer OnGiveInitialControlToPlayer;
    void DynamicMulticast();
    bool m_bEnvDeathRespawn;
    TArray<class UTexture2D*> m_MenuIconCache;
    bool m_bDebugDisplayAttackLearning;
    TArray<EMenuEnum> m_DisabledMenus;
    bool m_bHideNonInteractableObjectComponent;
    TMap<class EMenuEnum, class FMenuReferenceWithRequiredTags> m_MapMenuClassesSoft;
    TSubclassOf<class UUserWidget> m_MenuAnimationsClass;
    TArray<EMenuEnum> m_eMenuListPreventingInGameMenu;
    class UMenuWidget* m_MenuInstances;
    TArray<FMenuStackInfos> m_MenuStack;
    class UMaterialInterface* m_OutlineMaterial;
    class UPopupWidget* m_PopupYesNo;
    FFightingPlayerControllerOnAFKWarningActivated OnAFKWarningActivated;
    void OnAFKWarningActivated(bool _bActivated);
    float m_fTimeSinceLastNonRedundantUserInput;
    class UUserWidget* m_MenuAnimationsInstance;
    class UEquipmentSelectionData* m_EquipmentSelection;
    class UTargetableWidgetUpdaterComponent* m_TagetableWigetUpdaterComponent;
    class UASMDetectionComponent* m_ASMDetectionComponent;
    class UWidgetPoolComponent* m_WidgetPoolComponent;
    TSubclassOf<class UPickUpMenu> m_PickUpMenuClass;
    float m_fPreviewTimerHighlight;
    float m_fPreviewTimerScrollBox;
    float m_fFadeTime;
    TSubclassOf<class UUserWidget> m_WaterMarkBP;
    class UUserWidget* m_WaterMarkScreen;
    int32 m_iCharacterLevel;
    TSubclassOf<class AInteractiveObject> m_CairnClass;
    class UMaterialParameterCollection* m_MaterialParameterCollectionFXVisualParam;
    FName m_EmissiveMultiplierMPCParameterName;

    void ToggleWaterMark();
    void ToggleInteractionDetectionDebug();
    void SuicideAll();
    void Suicide(float _fDelay);
    void SimulateError(FString _error);
    void SimulateClientReturnToMainMenu(FString _reason);
    void ShowQuadrant(uint8 _uiParam);
    void SetOptionValue(FName _optionType, float _fOptionValue);
    void SetHealth(float _fHP);
    void SessionTimeManagerActivateDebug(bool _bActivate);
    void ServerUseInterractiveObject(bool _bSuccess, class UInteractionObjectComponent* _componentUsed);
    void ServerSuicideAll();
    void ServerSetEnvDeathRespawn(bool _bValue);
    void ServerSendLocalCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    void ServerRequestTimeSync(uint8 _uiClientRequestID);
    void ServerFirstRequestTimeSync(uint8 _uiClientRequestID);
    void ServerDropItem();
    void RemovePlayer();
    void RelationshipChanged__DelegateSignature(class AActor* _shifter, class AActor* _shiftTarget, ERelationshipTypes previousRelation, ERelationshipTypes _eNewRelation);
    void ProgressUpdated__DelegateSignature();
    void ProgressionRewardUnlocked__DelegateSignature(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, class UCharacterProgressionUnlockDB* _unlock);
    void PawnInitializedDynamic__DelegateSignature(class AFightingCharacter* _pawn);
    void PawnDestructionOver(class AActor* _destroyedActor);
    void OnWasKilled__DelegateSignature(class AFightingCharacter* _victim, class AFightingCharacter* _deathInstigator);
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 uiNewIndex);
    void OnPlayerProgressionUpdated();
    void OnPlayerNotifyProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, class UCharacterProgressionUnlockDB* _unlock);
    void OnPickUpDestroyed(class UInteractionObjectComponent* _component);
    void OnPawnDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    void OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes eGameOptionType);
    void OnNeedUpdateFromGameUserSettings();
    void OnComboLastAttack(EQuadrantTypes newQuadrant);
    void OnComboChangedQuadrant(EQuadrantTypes oldQuadrant);
    void OnCharacterInteractionObjectChanged(class UInteractionObjectComponent* _objectComp, bool _bNewComp);
    void OnAltAttack(EQuadrantTypes newQuadrant, uint8 _uiCurrentComboIndex);
    void OnAFKWarningActivated__DelegateSignature(bool _bActivated);
    void Mute(bool bMute);
    void GiveFocusToGameViewport();
    void ForceCameraOffsetAt(bool _bActivate, float _fRatio);
    void DumpPlayerInfo();
    void DropItem__DelegateSignature(class AController* _discarder);
    void DebugToggleFollowPlayer(int32 _iPlayerIndex);
    void DebugSpeedForceZ(bool _bActivate, float _fZValue);
    void CurrentMenuChanged__DelegateSignature(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void ComboEnded(EQuadrantTypes newQuadrant);
    void CloseIngameMenu__DelegateSignature();
    void ClientSendNewCoopGroup(const TArray<FCoopGroup>& _coopGroup);
    void ClientSendEntireCoopGroup(const TArray<FCoopGroup>& _coopGroup, const FCoopGroup& _coopGroupReturnToPVE);
    void ClientRespawnLocalAI(class AAISpawner* _spawner);
    void ClientRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    void ClientFirstRequestTimeSync(uint8 _uiClientRequestID, int64 _serverTimeTicks);
    void Client_RestartMatch();
    void Client_ReceiveAllyHeal();
    void CheckAttackAnimations();
    void ChangeMenuPage__DelegateSignature(ECycleDirection _eDirection);
    void BPF_ValidationReceived(bool _bResult);
    void BPF_UnlockAllEmotes();
    bool BPF_ShouldDisplayInteractionText(bool& _bOutCanInteract);
    void BPF_SetWantsRespawnOnStartPoint(bool _bRespwnOnStartPoint);
    void BPF_SetEmoteLock(bool _bLock, const FName& _emoteName);
    void BPF_SetEmissiveParamOnPawn(float _fParamValue);
    void BPF_SetCurrentMenu(EMenuEnum _eMenu);
    void BPF_RemoveMenuFromStack(EMenuEnum _eMenu);
    class UMenuWidget* BPF_PushMenu(EMenuEnum _eMenuEnum, class UPanelWidget* _container);
    void BPF_PopMenuStack(EMenuEnum _eMenuEnum, bool _bIncluded);
    void BPF_PopMenu(bool _bRestoreFocus);
    bool BPF_IsMenuInStack(EMenuEnum _eMenu);
    bool BPF_IsMenuEnabled(EMenuEnum _eMenu);
    bool BPF_IsKeyBindedToInputAction(FKey _key, InputAction _eInputAction);
    bool BPF_IsInGameMenuEnabled();
    bool BPF_HasSpawnedAtFirstStart();
    class UWidgetPoolComponent* BPF_GetWidgetPoolComponent();
    bool BPF_GetWantRespawn();
    bool BPF_GetVirtualCursorEnabled();
    class UMenuWidget* BPF_GetTopMenuInstance();
    EMenuEnum BPF_GetTopMenu();
    class UTargetableWidgetUpdaterComponent* BPF_GetTagetableWigetUpdaterComponent();
    class UPopupWidget* BPF_GetPopupYesNo();
    class UMenuWidget* BPF_GetParentMenu(EMenuEnum& _eOutMenu, int32 _iOffset);
    class UMenuWidget* BPF_GetMenuInstance(EMenuEnum _eMenu);
    class UUserWidget* BPF_GetMenuAnimations();
    float BPF_GetFadeTime();
    EMenuEnum BPF_GetCurrentMenu();
    class UInteractionObjectComponent* BPF_GetCurrentInteractionObjectComponent();
    void BPF_EnterSpectatorMode();
    void BPF_EnableVirtualCursor(bool _bEnable);
    void BPF_EnableInGameMenu();
    void BPF_DismissNewProgressionRewards(ECharacterProgressionRewardTypes _eReward);
    void BPF_DisableInGameMenu();
    void BPF_DebugForcePerfectLink(bool _bActivate);
    void BPF_DebugForceAttackQuadrant(EQuadrantTypes _eQuadrant);
    void BPF_DebugAutoTargetAttackTicketAI(bool _bActivate);
    void BPF_ClosePickUpMenu();
    void BPF_ClearMenuStack();
    void BPF_CacheMenuIcons();
    void BPF_ActivateHitDetailsDebug(bool _bActivate);
    void BPE_TryQuitBadCombo();
    void BPE_ToggleDebugMenu();
    bool BPE_ShouldEnablePostProcessComponent();
    void BPE_RestartAsked();
    void BPE_PawnInitialized();
    void BPE_OnUsedHealStone();
    void BPE_OnSetInteractiveObjectComponent(class UInteractionObjectComponent* _newInteractionObjectComponent);
    void BPE_OnReceiveAllyHeal();
    void BPE_OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void BPE_OnComboEditorClose();
    void BPE_MenuEvent();
    void BPE_GameInitialized(bool bHideLoadingScreen);
    void BPE_ChangeEditorQuadrantState(EQuadrantTypes _eNewQuadrant);
    void BakeAttackAnimations();
    void ActivateHitIgnorance(bool _bActivate);
    void ActivateCameraAimDebug(bool _bActivate);
};

class AFightingPlayerState : public APlayerState
{
    FFightingPlayerStateOnPlayerNameChanged OnPlayerNameChanged;
    void NameChanged();
    EJoinMethod m_eJoinMethod;
    uint16 m_uDispatcherToken;
    int32 m_iTeamNumber;
    int32 m_iNumKills;
    int32 m_iNumDeaths;
    uint8 m_uiRespawnZoneId;
    uint8 m_bQuitter;

    void OnRep_TeamNumber();
    void OnRep_SchoolLevel();
    void NameChanged__DelegateSignature();
    void InformAboutKill(class AFightingPlayerState* KillerPlayerState, const class UDamageType* KillerDamageType, class AFightingPlayerState* KilledPlayerState);
    int32 GetKills();
    void BroadcastDeath(class AFightingPlayerState* KillerPlayerState, const class UDamageType* KillerDamageType, class AFightingPlayerState* KilledPlayerState);
    void BPF_SetTeam(int32 _iTeam);
    int32 BPF_GetTeam();
    int32 BPF_GetDeaths();
};

class UFightingStateCondition : public UBaseActorCondition
{
    EFightingState m_eFightingState;

};

class UFightingStateInfluenceTest : public UAIInfluenceTest
{
    EFightingState m_eFightingState;

};

class UFightingStatePushedBTTask : public UBTTaskNode
{
};

struct FFilterPresetData
{
    FPostProcessSettings m_PostProcessSettings;
    FText m_DisplayText;

};

class UFilterPresetEntryDB : public UDataAsset
{
    FFilterPresetData m_Data;

};

class UFilterNewPresetEntryDB : public UDataAsset
{
    FFilterPresetData m_Data;

};

class UFilterPresetEntitlementDB : public UDataAsset
{
    FName m_Entitlement;
    TArray<class UFilterPresetEntryDB*> m_Filters;

};

struct FFilterPresetCache
{
    TArray<FFilterPresetData> m_Filters;

};

class UFilterPresetDB : public UDataAsset
{
    TArray<class UFilterPresetEntitlementDB*> m_DBs;

    void BPF_GetFilters(class ASCPlayerController* _controller, FFilterPresetCache& _outCache);
};

class UFilterPresetOLDDB : public UDataAsset
{
    TArray<class UFilterPresetEntryDB*> m_Filters;

};

class UFloatStatTextBlock : public UTextBlock
{
    float Stat;
    FFloatStatTextBlockStatDelegate StatDelegate;
    float GetFloat();
    float CompareStat;
    FFloatStatTextBlockCompareStatDelegate CompareStatDelegate;
    float GetFloat();
    class UColorComparisonProfile* m_ColorComparisonProfile;
    bool m_bHightIsBetter;
    FText m_EmptyText;
    FText m_Format;
    float m_fMultiply;
    bool m_bIsAttributeScale;
    bool m_bUseGrouping;
    int32 m_iMinimumIntegralDigits;
    int32 m_iMaximumIntegralDigits;
    int32 m_iMinimumFractionalDigits;
    int32 m_iMaximumFractionalDigits;
    bool m_bCanBeNegative;

};

class UFlyModeAbility : public USCGameplayAbility
{
};

class UFocusDB : public UDataAsset
{
    FSCUserDefinedEnumHandler m_FocusTargetSlot;
    TSubclassOf<class AAimingBillboardActor> m_ClassOfBillBoardToSpawn;
    FName m_BoneToAttachBillboard;
    TSubclassOf<class AVitalPointActor> m_ClassOfVitalPointToSpawn;
    FSCCollisionResponseTemplate m_collisionTemplate;
    TEnumAsByte<ECollisionChannel> m_eFocusTraceType;
    float m_fTimeDuration;
    float m_fMaxDist;
    FStateWeight m_BonusStateWeightOnCameraWhenExitFocus;
    FAnimContainer m_PrepFocusAnimContainer;
    float m_fSlowMotionFactor;
    float m_fCameraSlowMotionFactor;
    float m_fAnimationSlowMotionFactor;
    float m_fDelayBeforeFocusExecution;
    float m_fSlowMoFactorBeforeFocusExecution;
    FSCUserDefinedEnumHandler m_WidgetPoolEnumEntry;
    float m_fPostProcessFadeInDuration;
    float m_fPostProcessFadeOutDuration;
    float m_fVitalPointsFXFadeInDuration;

};

class UFocusExecutionAbility : public USCGameplayAbility
{
    FEditableOrderType m_InstigatorOrderType;
    FEditableOrderType m_VictimOrderType;

};

class UFocusPointCondition : public UBaseActorCondition
{
    int32 m_iValue;

};

class UFocusPrepAbility : public USCGameplayAbility
{
    float m_fDeactivationDuration;
    float m_fMinFocusPointsToActivate;

};

class UFootIkAnimInstance : public USCFootIkAnimInstance
{
    TArray<EFightingActionState> m_eHandledActionStates;
    bool m_bExcludeActionStates;
    TArray<EFightingActionState> m_eHipsHandledActionStates;
    bool m_bExcludeHipsActionStates;
    ESCSignificanceBuckets m_eMinSignificanceRequired;
    TArray<ESCSignificanceBuckets> m_ePerServiceMinSignificanceRequired;

};

class UFootStepAnimNotify : public UAnimNotify
{
    FName m_Foot;
    TEnumAsByte<ECollisionChannel> m_eChannel;
    bool m_bTraceComplex;
    float m_fRaycastOffsetUp;
    float m_fRaycastOffsetDown;
    ESCSignificanceBuckets m_eMinSignifiance;

    void BPF_SetFoot(FName _Foot);
    void BPE_NotifyFootStep(class USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult);
};

class UForceFightingStateOrderService : public UOrderService
{
    EFightingState m_eFightingState;

};

class UForceGlobalBehaviorBTTask : public USCBTTaskNode
{
    EGlobalBehaviors m_Behavior;

};

class UForceQuadrantOrderService : public UOrderService
{
    bool m_bForceBackFrontOnly;
    bool m_bForceFront;
    EQuadrantTypes m_eQuadrantToTarget;

};

class UForceSpeedStateOrderService : public UOrderService
{
    ESpeedState m_eForcedSpeedState;

};

struct FEquipmentValues
{
    int32 m_iFragmentValue;
    int32 m_iDirtValue;
    int32 m_iDyeCost;
    int32 m_iRepairCost;

};

struct FSlotEquipmentValues
{
    TMap<class EGearRarity, class FEquipmentValues> m_EquipmentsValues;

};

class UFragmentEcononyDB : public UDataAsset
{
    TMap<class EEquipmentSlot, class FSlotEquipmentValues> m_SlotEquipmentsValues;
    int32 m_iPrestigePointValue;
    TMap<ELootBoxType, int32> m_LootBoxesValues;
    int32 m_iApperacenChangeCost;

    int32 BPF_GetRepairCost(EEquipmentSlot _eSlot, EGearRarity _eRarity);
    int32 BPF_GetFragmentValue(EEquipmentSlot _eSlot, bool _bIsDirty, EGearRarity _eRarity);
    int32 BPF_GetDyeCost(EEquipmentSlot _eSlot, EGearRarity _eRarity);
};

class UGameDifficultyInfluenceTest : public UAIInfluenceTest
{
    uint32 m_uiGameDifficultyFlags;

};

class UGameMathTools : public USCMathTools
{

    EQuadrantTypes GetQuadrantTowardTarget(class AFightingCharacter* _originChar, class AActor* _target);
    EQuadrantTypes GetQuadrantFromStick(const FVector2D& _vStick);
    ESCRotationWay GetBaseHipsRotationWayFromQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant);
    float GetBaseHipsAngleFromQuadrant(EQuadrantTypes _eQuadrant);
    FVector GetBaseFakePelvisDirection(EQuadrantTypes _eQuadrant, FVector _vRefDir);
    void GetAnimQuadrantAndMirror(EQuadrantTypes _eActorQuadrant, EQuadrantTypes _eActionQuadrant, bool& _bOutAnimMirror, EQuadrantTypes& _outAnimQuadrant);
    EQuadrantTypes ComputeQuadrantFromDirectionVectors(const FVector& _vRefDir, const FVector& _vOtherVector);
    ESCRotationWay ComputeBlendWay(const EQuadrantTypes _eStartQuadrant, const EQuadrantTypes _eEndQuadrant, const float _fStartAngle, const float _fEndAngle);
};

class UGameplayOptionsMenu : public UMenuWidget
{

    void BPF_SetGameOptionValue(EGameOptionTypes _eOptionType, float _fOptionValue);
    void BPF_SetGameOptionRatio(EGameOptionTypes _eOptionType, float _fOptionRatio);
    void BPF_RestoreOptionDefaultValue(EGameOptionTypes _eOptionType);
    bool BPF_IsModificationHasBeenMade();
    void BPF_Default();
    void BPF_Cancel();
    void BPF_ApplyCurrentOptionsToDefault();
    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
};

struct FGameOptionOverride
{
};

class UGameOptionTypeHelper : public UBlueprintFunctionLibrary
{

    void BPF_SetUserSettingValue(EGameOptionTypes _eSetting, float _fValue);
    bool BPF_RestoreGameOptionOverrides(TArray<FGameOptionOverride>& _inOutGameOptionOverrides, bool _bResetOptionOverridesOnRestore);
    bool BPF_RestoreGameOption(FGameOptionOverride& _inOutGameOptionOverride, bool _bResetOptionOverrideOnRestore);
    bool BPF_OverrideGameOptions(TArray<FGameOptionOverride>& _outGameOptionOverrides);
    bool BPF_OverrideGameOption(FGameOptionOverride& _outGameOptionOverride);
    float BPF_GetValueFromRatio(EGameOptionTypes _eInOption, float _fInRatio);
    float BPF_GetValueClamped(EGameOptionTypes _eInOption, float _fInValueToClamp);
    int32 BPF_GetValueAsInt(EGameOptionTypes _eInOption);
    bool BPF_GetValueAsBool(EGameOptionTypes _eInOption);
    float BPF_GetValue(EGameOptionTypes _eInOption);
    float BPF_GetUserSettingValueByOptionType(EGameOptionTypes _eOption);
    float BPF_GetRatioFromValue(EGameOptionTypes _eInOption, float _fInValue);
    float BPF_GetRatio(EGameOptionTypes _eInOption);
    void BPF_GetRange(EGameOptionTypes _eInOption, float& _fOutMin, float& _fOutMax);
    float BPF_GetDefaultValue(EGameOptionTypes _eInOption);
};

class AGameplayPhotoModeController : public ABaseReplayController
{

    void BPF_LeavePhotoMode();
    class ASCPlayerController* BPF_GetOriginalPlayerController();
    void BPF_EnterPhotoMode(const class UObject* _worldContextObject);
    void BPE_OnPhotoModeDeactivationRequested();
    void BPE_OnPhotoModeActivated();
};

class UGameplayTagsCondition : public UBaseActorCondition
{
    FGameplayTagContainer m_RequiredTags;

};

class UGameplayTagsOrderService : public UOrderService
{
    FGameplayTagContainer m_SetTags;
    bool m_bOnHitComponent;
    bool m_bOnAbilityComponent;

};

class UHUDUserWidget : public USCUserWidget
{
    bool m_bVisibleWithMenus;
    TArray<EMenuEnum> m_HideWithMenus;
    bool m_bSearchMenusInStack;
    bool m_bVisibleInTraining;
    bool m_bVisibleInTrainingOnly;
    TArray<class UWidget*> m_WidgetsToOffset;

    void BPF_UpdateHUDOffset();
    void BPE_VisibilityChangedFromMenu(ESlateVisibility _eNewVibility);
};

class UGauge : public UHUDUserWidget
{
    float m_fPercentage;
    FGauge_fPercentageDelegate m_fPercentageDelegate;
    float GetPercentageDelegate();

};

class UGenderCondition : public UBaseActorCondition
{
    ECharacterGender m_eGender;

};

class UGenerateImpactOrderService : public UOrderService
{
    FHitBox m_HitGenerated;

};

class UOrderServiceActivationConditions : public UObject
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

class UGenericActivationCondition : public UOrderServiceActivationConditions
{
    EOrderServiceConditionUpdateFrequency m_eUpdateFrequency;
    EOrderServiceDeactivationMethod m_eDeactivationMethd;
    FBaseActorTargetConditionInstance m_GenericCondition;

};

class UGenericAvailabilityLayerDB : public UDataAsset
{
    class UAvailabilityLayerData* m_availabilityLayerData;
    EALBinaryOperation m_eALBinaryOperation;

};

class UGenericEnvironmentalInteractionComponent : public UBaseEnvironmentalInteractionComponent
{
    bool m_bIgnoreNavMesh;
    EWallSide m_eWallSide;
    TArray<class USplineComponent*> m_Splines;
    TSubclassOf<class UWallEnvironmentalAttackSettings> m_Settings;
    FSCUserDefinedEnumHandler m_EnvType;

};

class UGenericErrorPopupWidget : public USCUserWidget
{

    class UPopupWidget* BPE_GetPopupWidget();
};

class UGenericInputUIData : public UObject
{
};

struct FNetOrderStructPlayAnimVariableWeight : public FNetOrderStruct
{
    FAnimContainer m_AnimContainerToPlay;
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    ELookAtApplyMode m_eLookAtApplyMode;

};

struct FNetStructPickUpObject : public FNetOrderStructPlayAnimVariableWeight
{
    TWeakObjectPtr<class AActor> m_PickUpObject;

};

class IGenericPickableActorInterface : public IInterface
{

    void OnPickedUp(const FNetStructPickUpObject& _pickupObjectOrderStruct, class AFightingCharacter* _picker);
    void OnOrderPickupEnd(const FNetStructPickUpObject& _pickupObjectOrderStruct, class AFightingCharacter* _picker);
};

class UGhostAnimInstance : public UAnimInstance
{
    TWeakObjectPtr<class UAnimationAsset> m_MasterAnim;
    float m_fMasterAnimCurrentCursor;
    bool m_bMasterAnimMirror;

};

struct FSubZoneShortcutStruct
{
    bool m_bIsAShortCut;
    int32 m_iZone;
    int32 m_iSubZone;

};

class IGhostGateCarrierInterface : public IInterface
{

    FSubZoneShortcutStruct GetSubzoneShortcut();
    class UStaticMeshComponent* GetStaticMeshComponentDoor();
    FVector GetColliderScale();
    class UShapeComponent* GetColliderRegularDoor();
};

struct FAIAttackHitDetectionCone
{
    FFloatRange m_fRange;
    float m_fAngle;

};

struct FAIAttackHitDetectionVolume
{
    TArray<FAIAttackHitDetectionCone> m_RangedCones;

};

struct FNavAreaPerRange
{
    FFloatRange m_Range;
    TSubclassOf<class UNavArea> m_associatedArea;

};

struct FAIDominationGaugeSteps
{
    float m_Steps;

};

class UGlobalAISettings : public UObject
{
    int32 m_iSerializeVersion;
    float m_fDelayBeforeInvestigation;
    float m_fOnPlayerDeathDifficultyRatio;
    float m_fMaxDistToTriggerSuspicious;
    float m_fInvestigationDistance;
    float m_fSightMaxVerticalAngle;
    float m_fFallSoundDistance;
    float m_fEnemyUpdateDelay;
    float m_fDelayBetween2SurprisedDialogSegemnt;
    FFloatRange m_fSurprisedPlayRateRange;
    float m_fMaxGlobalDifficultyValue;
    TMap<EAIGameplayStates, float> m_RecordedStateDelay;
    TSubclassOf<class UDodgeTypeUseCaseMatrix> m_DodgeTypeUseCaseMatrixClass;
    float m_fAttackPositionRadius;
    float m_fDirectOponentAttackPositionRadius;
    bool m_bEnableJiggleWithMove;
    bool m_bEnableJiggleWithAnimation;
    float m_fJiggleTolerance;
    float m_fJiggleMinDist;
    TArray<FEditableOrderType> m_NoPhaseTransitionOrders;
    ESpeedState m_eJiggleSpeedState;
    float m_TraceTargetCapsuleRadius;
    float m_TraceTargetCapsuleHalfHeight;
    float m_fTraceTargetForObstacleFrequency;
    TEnumAsByte<ECollisionChannel> m_TraceTargetForObstacleChannel;
    FCollisionResponseContainer m_TraceTargetForObstacleCollision;
    FAIAttackHitDetectionVolume m_AttackHitDetectionVolume;
    bool m_bUseCapsuleRadiusToDetectFriendlyFire;
    int32 m_iMaxComboStreak;
    bool m_bAlwaysLogComboEvaluationStack;
    float m_fCombatPositionPathCostLimit;
    TArray<EAIPositioningOption> m_DefaultPositioningOptions;
    int32 m_AttackTicketJokerComboAttackCount;
    float m_fSpawningTimePerFrame;
    TSubclassOf<class UNavArea> m_TraversalNavArea;
    TArray<FNavAreaPerRange> m_ClimbNavArea;
    TArray<FNavAreaPerRange> m_DropDownNavAreas;
    TSoftClassPtr<UTraversalDB> m_TraversalDb;
    float m_fTraversalLockTimer;
    bool m_bIsTraversalLockTimerUniversal;
    float m_fDefaultNavLinkCooldown;
    float m_fPatrolAcceptanceRadius;
    float m_fTraversalZNavExtent;
    float m_fStopPredictionRequiredDistance;
    bool m_bCanSlowDownSpeedStateOnPathChanged;
    bool m_bStopLockOnEnemyIfFarFromEnemy;
    float m_fDifficultyUpdateRate;
    FAIDominationGaugeSteps m_DominationGaugeStepsPerDifficulty;
    float m_DominationGaugeSteps;
    int32 m_MaxIndirectOponentPerDominationGauge;
    float m_fTauntDifficultyBonus;
    int32 m_iTauntTicketBehaviorMask;
    TMap<class ESCAICombatRoles, class FTimerAndOffset> m_CombatRolesReactionTimes;
    TMap<EAIWuguanTicketEvaluation, float> m_fCombatRolesTestScoreFactors;
    TMap<EAIChangeToIndirectRoleStates, float> m_fSwtichToIndirectOnStateTimers;
    TArray<EOrderType> m_ForbiddenOrdersForDirectOpponent;
    float m_fCombatRolesRedistributionFallHeight;
    float m_fCombatRoleRedistributionRushInitialDelay;
    float m_fCombatRoleRedistributionRushUpdateDelay;
    TMap<EAIWuguanTicketEvaluation, float> m_fSuspiciousTestScoreFactors;
    bool m_bActivateCancelDamagesOnWeaponsForAI;
    float m_fAIweaponDropImpulseMultiplier;
    int32 m_DefenseVsThrowableWindowFrameNb;
    int32 m_DefenseVsThrowableStartWindowAnticipationFrameNb;
    TMap<EDefenseTactics, float> m_DefenseTriggerWindowMaxDuration;
    float m_fPrefightStructureBrokenLastChanceDuration;
    int32 m_iAvoidWindowMultiHitDelayFramesOffset;
    int32 m_iAvoidWindowEndMultiHitFramesOffset;
    uint32 m_uiThreateningActionsMask;
    TArray<EOrderType> m_eThreateningAttackOrders;
    float m_fFleeMinDist;
    float m_fTooCloseMaxDist;
    bool m_bTriggerTooCloseOnlyDuringDialog;
    bool m_bTriggerTooCloseOnlyOnJoinDialogActors;
    TSubclassOf<class UAIMasterArchetype> m_MasterArchetype;
    float m_fTicketManagerMaxIterationTime;
    bool m_bTimeSliceTicketManagers;
    bool m_bRunTicketManagerDuringSlate;
    float m_fBehaviorChangedMaxRandomDelays;
    float m_fFidgetNearDeathMaxRatio;
    int32 m_iLastManBonusPerDomination;
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerCharges;
    TSoftObjectPtr<UCurveFloat> m_LastManBonusPerDeathCounter;
    FInt32Range m_iLastManValueDeviation;
    TSoftClassPtr<UNavigationQueryFilter> m_NothingQueryFilter;
    FFloatRange m_fSanctuaryFirstBarkTriggerWindow;
    FFloatRange m_fSanctuaryFollowingBarkTriggerWindow;
    TSoftClassPtr<AAIDirectorActor> m_AIDirectorClass;
    int32 m_iArenaMaxAICharactersPerPool;

};

class UGotoPhaseBTTask : public UBTTaskNode
{
    FAIPhaseNodeSoftLink m_phaseSoftLink;

};

class UGPStateInfluenceTest : public UAIInfluenceTest
{
    EAIGameplayStates m_eState;

};

class UGrabHitActionLauncher : public UHitActionLauncher
{
    TSubclassOf<class UDefenseAnimRequest> m_overridenDefenseRequest;

};

class UGraphOptionsMenu : public UGameplayOptionsMenu
{
    int32 m_iCurrentResIndex;
    TArray<FString> m_ResList;
    bool m_bSetCameraInStartIdlePosition;

    void OnRequestUIChange();
    void BPF_ResolutionChanged(int32 _iIndex);
    int32 BPF_GetCurrentDisplayMode();
    void BPF_AutoDetectSettings();
    void BPF_AcceptSetting();
};

class UGravityCheatData : public UCheatData
{
    bool m_bIsGravityEnabled;
    float m_fWantedGravityScale;

};

class UGroupActivationCondition : public UOrderServiceActivationConditions
{
    EConditionGroupOperators m_eOperator;
    TArray<class UOrderServiceActivationConditions*> m_Conditions;

};

class UGroupCondition : public UBaseActorCondition
{
    EConditionGroupOperators m_eOperator;
    TArray<FBaseActorConditionInstance> m_Conditions;

};

class UGroupTargetCondition : public UBaseActorTargetCondition
{
    EConditionGroupOperators m_eOperator;
    TArray<FBaseActorTargetConditionInstance> m_Conditions;

};

class UGuardAbility : public USCGameplayAbility
{
    FHitBox m_StructureBrokenHit;
    FHitBox m_ParryDizzyHit;
    FGameplayTagContainer m_TakedownTags;
    bool m_bEnableNewGuard;
    bool m_bEnableDeflectInterruptOnDeflectNonInterrupt;
    bool m_bAlwaysShowParry;
    EALBinaryOperation m_eForceGuardALBinaryOperation;
    int32 m_iForceGuardALBinaryPriority;
    FGameplayTagContainer m_ParryGrabRequiredTags;
    FGameplayTagContainer m_ParryPickupRequiredTags;
    TArray<InputAction> m_HoldToggleResetOnGuardLost;

    bool BPF_CanActivateTakedown(class AFightingCharacter* _owner);
    bool BPF_CanActivateParryGrab(class AFightingCharacter* _owner);
    void BPE_OnSlowmoActivable(bool _bActivable);
    void BPE_OnParryPickup(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FHitRequest& _request);
    void BPE_OnGuardInputPressChange(bool _bPressed);
    void BPE_OnDefense(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FImpactResult& _Impact, const FHitRequest& _request);
};

class UDeflectImpactDB : public UObject
{
    FDeflectImpact m_DeflectImpact;

};

struct FAnimByHeight
{
    class UAnimSequence* m_Array;

};

struct FAnimByCardinalThenHeight
{
    FAnimByHeight m_Array;

};

class UGuardDB : public UInheritedDataAsset
{
    class UAnimSequence* m_aGuardAnimations;
    bool m_bGuardMirrorFrontRightBackLeft;
    FAnimByHeight m_aGuardPrepAnimations;
    FAnimByCardinalThenHeight m_aHittedGuardAnimations;
    FAnimByCardinalThenHeight m_aHittedDeflectAnimations;
    class UAnimSequence* m_aGuardAnimationsWeapon;
    FAnimByHeight m_aGuardPrepAnimationsWeapon;
    FAnimByCardinalThenHeight m_aHittedGuardAnimationsWeapon;
    FAnimByCardinalThenHeight m_aHittedDeflectAnimationsWeapon;
    float m_fGuardAngleRootToHips;
    float m_fGuardAngleHipsToRoot;
    bool m_bGuardReorientBackToFront;
    bool m_bPrepEnabled;
    class UCurveFloat* m_DynamicEnteringPrep;
    float m_fEnteringPrepDuration;
    class UCurveFloat* m_DynamicExitingPrep;
    float m_fExitingPrepDuration;
    float m_fPrepRange;
    bool m_bPrepForbidMove;
    float m_fKnockbackCoeff;
    FHitBox m_ParryHit;
    float m_fParryStructureRecovery;
    float m_fParryFreezeFrames;
    float m_fParrySBFreezeFrames;
    float m_ParryAttackerStructureDamage;
    float m_ParryAttackerSuperDizzyDamage;
    bool m_bApplyDamagesOnGuardBroken;
    FDeflectImpact m_DefaultDeflectImpact;
    FHitImpact m_DefaultHitImpact;
    FHitImpact m_DefaultGuardImpact;
    float m_fDeflectedDuration;
    class UCurveFloat* m_DeflectedAttackScaleCurves;
    EAvoidLaunchMethod m_eDeflectedLaunchMethodOnHit;
    bool m_bTmpEnableDeflectedOrder;
    float m_fParryAnimDuration;
    float m_fGrabDuration;
    FFloatRange m_ParryWindow;
    float m_fForcedGuardDuration;
    class UAvailabilityLayerData* m_ForcedGuardAvailabilityLayer;
    TSubclassOf<class UDefenseAnimRequest> m_DefenseAnimRequest;
    TSubclassOf<class UParryAnimRequest> m_ParryAnimRequest;
    FSCUserDefinedEnumHandler m_BPPickupOnParryOrderID;

    void BPF_GetPickupOnParryAnim(const FHitRequest& _request, class AFightingCharacter* _character, FAnimContainer& _outAnim);
    class UAnimSequence* BPF_GetHittedGuardAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight);
    class UAnimSequence* BPF_GetHittedGuardAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight);
    class UAnimSequence* BPF_GetHittedDeflectAnimWeapon(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight);
    class UAnimSequence* BPF_GetHittedDeflectAnim(EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, EHeight _eHeight);
};

struct FTargetForSlotsEnumHandler : public FSCUserDefinedEnumHandler
{
};

class UAbilityTask_HandleFocusBillboard : public UAbilityTask
{
    FAbilityTask_HandleFocusBillboard_OnVitalPointSelected m_OnVitalPointSelected;
    void HandleFocusBillboardDelegate(class AVitalPointActor* _target);

    class UAbilityTask_HandleFocusBillboard* BPF_HandleFocusBillboard(class UGameplayAbility* _owningAbility, const FTargetForSlotsEnumHandler& _focusTargetSlot);
    class AAimingBillboardActor* BPF_GetAimedVitalPoint();
    class AAimingBillboardActor* BPF_GetAimedBillboard();
};

class IHandleInput : public IInterface
{

    bool BPE_HandleInput();
};

class UHandleLDCollisionOrderService : public UOrderService
{
    bool m_bHandleHittedByEnvironment;
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    bool m_bWallHitMinAngleDegUseCurve;
    FRuntimeFloatCurve m_WallHitMinAngleDegOverTime;
    float m_fWallHitMinAngleDeg;
    float m_fWallHitMinVelocity;
    bool m_bInverseOrientationOnHit;
    bool m_bUseCustomWallHit;
    bool m_bBlockedByTarget;
    FHitBox m_CustomWallHit;
    bool m_bActivateHitbox;
    bool m_bIgnoreHitOnTarget;
    bool m_bUseCustomHitbox;
    float m_fActivateHitboxMinVelocity;
    FHitBox m_CustomHitBox;
    FHitBox m_SelfHitOnCollisionWithCharacter;
    bool m_bDetectTraversal;
    float m_fDetectTraversalDuration;
    float m_fTraversalDetectionDistance;
    ESCCardinalPoints m_eTraversalCardinal;
    ESpeedState m_eTraversalSpeedState;
    bool m_bSetTargetAsOwningChar;

    void GetHitboxDelegateTest__DelegateSignature(const FBPOrderServiceInstance& _orderServiceInstance);
    void GetHitboxDelegate__DelegateSignature(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    void BPE_OnCollisionWithCharacter(const FBPOrderServiceInstance& _orderServiceInstance, class ACharacter* _otherChara);
    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    FHittedAnimContainer BPE_GetHittedAnimContainer(const FBPOrderServiceInstance& _orderServiceInstance);
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    void BPE_GetDirection(const FBPOrderServiceInstance& _orderServiceInstance, FVector& _vOutDir);
};

class UHandleSlopeOrderService : public UOrderService
{
    FName m_SelfBoneName;
    float m_fProjectionMinAxisSize;
    float m_fMinSlopeAngle;
    float m_fMaxSlopeAngle;
    int32 m_iNumProjectionIteration;
    float m_fInterpSpeed;

};

struct FHandPoseBlendStruct
{
    float m_fLength;
    ESCBlendType m_eBlendType;

};

class UHandPoseDB : public UDataAsset
{
    FHandPoseBlendStruct m_BlendInStruct;
    FHandPoseBlendStruct m_BlendOutStruct;
    class UAnimSequence* m_Anims;

};

class UHandWeaponData : public UBaseWeaponData
{
    float m_fHandRadius;

};

class UHardpointAreaActorVisualizerComponent : public UActorComponent
{
};

class UHasStunOrdersDecorator : public USCBTDecorator
{
};

class UHaveCloseEnemiesCondition : public UBaseActorCondition
{
    bool m_bTestMaxDist;
    float m_fMaxDist;

};

class UHealthCondition : public UBaseActorCondition
{
    EOperationType m_eOperation;
    float m_fValue;

};

class UHeightDifferenceWithActorCondition : public UBaseActorTargetCondition
{
    class UCurveFloat* m_HeightDiffCurve;

};

class UHitAchievementUnlockCondition : public UWGAchievementUnlockCondition
{

    void BPE_OnMCHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
};

struct FHitAnimsPerHitbox
{
    FDataTableRowHandle m_HitRow;
    bool m_bUseCustomHit;
    FHittedAnimContainer m_Hit;
    bool m_bUseCustomGuard;
    FHittedAnimContainer m_OnGuard;
    bool m_bUseCustomDeath;
    FHittedAnimContainer m_OnDeath;

};

struct FHitAnimsPerDataTable
{
    TMap<class FName, class FHitAnimsPerHitbox> m_HitAnimsPerHitboxMap;

};

struct FHitAnimsPerDataTableContainer
{
    TMap<class UDataTable*, class FHitAnimsPerDataTable> m_Data;

};

class UHitAnimRequest : public UObject
{

    bool BPF_FindCustomHitAnimation(const FHitAnimsPerDataTableContainer& _data, const FHitRequest& _request, const FImpactResult& _Impact, FHittedAnimContainer& _result);
    TArray<class UAnimSequence*> BPE_GetHitDeathAnimations();
    void BPE_GetHitAnimation(const FHitRequest& _request, const FImpactResult& _Impact, class AFightingCharacter* _defender, FHittedAnimContainer& _result, FAnimContainer& _weaponResult);
};

class UHitBoxMetaData : public UObject
{
};

class UHitboxHelper : public UBlueprintFunctionLibrary
{

    void BPF_SetHitboxStructureDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage);
    void BPF_SetHitboxRow(FHitBox& _outHitbox, const FHitboxDataRow& _dataRow);
    void BPF_SetHitboxDamageOnRef(FHitBox& _hitbox, float _fDamage);
    void BPF_SetHitboxDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage);
    void BPF_MirrorAvoidDefenseMatrix(int32 _iDefenseMatrix, int32& _iOutResult, bool _bMirror);
    class UHitBoxMetaData* BPF_GetHitboxMetaDataInstance(const FHitBoxMetaDataClassInstance& _instance);
    FHitboxDataRow BPF_GetHitboxDataRow(const FHitBox& _hitbox);
};

class UHitBoxCondition : public UObject
{
};

class UHitBoxGenericCondition : public UHitBoxCondition
{
    FBaseActorTargetConditionInstance m_condition;

};

class UHitComponent : public UActorComponent
{
    FHitComponentOnHitDetection OnHitDetection;
    void HittedDynamicDelegate(const FHitDescription& HitDescription);
    class UCurveFloat* m_Curve;
    float m_fHitStrength;
    FGameplayTagContainer m_Tags;
    FGameplayTagContainer m_RequiredHitBoxTags;
    FGameplayTagContainer m_IgnoreHitBoxTags;
    bool m_bCriticalHitEvenOnResilience;
    float m_fDamageMultiplierCriticalHit;
    float m_fGuardDamageMultiplierCriticalHit;
    float m_fStunTimeMultiplierCriticalHit;
    int32 m_iAdditionnalFreezeFramesCriticalHit;
    int32 m_iFreezeFramesLethalHit;
    class UCurveFloat* m_DefaultKnockBackDynamic;
    float m_fHittedTrackingDuration;
    float m_fHittedTrackingMaxAngleFromTarget;
    float m_fHittedFrozenPlayRate;
    float m_fHittedFrontQuadrant;
    float m_fLowHeightDiffCapsuleHalfHeightFactorThresold;
    float m_fHighHeightDiffCapsuleHalfHeightFactorThresold;
    class UHittedDB* m_HittedDB;
    float m_fBrokenGuardDisarmCoef;
    float m_fDisarmGaugeRegenRate;
    float m_fDisarmGaugeRegenRateWhileHoldingWeapon;

    void OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    void HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void BPF_ToggleInfiniteDamageOnHit(bool _bActivate);
    void BPF_SetStructureOnly(bool _bUseStructureOnly);
    void BPF_ResetHitAnimRequestToDefault();
    void BPF_OverrideHitAnimRequest(TSubclassOf<class UHitAnimRequest> _hitAnimRequest);
    FGameplayTagContainer BPF_GetTags();
    class UHittedDB* BPF_GetHittedDB();
    class UHitAnimRequest* BPF_GetHitAnimRequest();
    void BPF_GenerateFakeImpact(const FHitResult& _hitResult, const FHitRequest& _inHitRequest);
    bool BPE_ValidateHit(const FHitResult& _hitResult, const FHitRequest& _inHitRequest);
    void BPE_OnHit(const FHitDescription& _description);
};

class UHitDefenseResultHelpers : public UBlueprintFunctionLibrary
{

    EAvoidType BPF_GetAvoidType(const FHitDefenseResult& _defenseResult);
    class UAvoidPropertyDB* BPF_GetAvoidDB(const FHitDefenseResult& _defenseResult);
};

class UDeflectImpactHelpers : public UBlueprintFunctionLibrary
{

    FAppliedHitImpact BPF_MakeAppliedHitImpact(const FHitImpact& _hitImpact, const class AFightingCharacter* _defender);
    FAppliedDeflectImpact BPF_MakeAppliedDeflectImpact(const FDeflectImpact& _hitImpact, const class AFightingCharacter* _defender, bool _bParriable);
};

class UOrderServiceHasHitTargetActivationCondition : public UOrderServiceActivationConditions
{
    bool m_bMustBeSucessful;

};

class IHittableActor : public IInterface
{

    bool CanBeHitted(class AActor* _Instigator);
};

class UHittedAnimHelper : public UBlueprintFunctionLibrary
{

    void BPF_MakeGenericHitAnimWithOrderType(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, const FOrderType& _OrderType);
    void BPF_MakeGenericHitAnim(FHittedAnimContainer& _animContainer, FAnimContainer _fightingStateLoopAnim, const FAnimContainer& _anim, TSubclassOf<class UOrderHittedGenericDB> _order);
    float BPF_GetHitAnimDuration(const FHittedAnimContainer& _animContainer, const FImpactResult& _Impact);
};

class UHittedBTTask : public UBTTaskNode
{
};

class UFallHitRequest : public UObject
{

    void BPE_GetFallHitOnSlope(const class AFightingCharacter* _character, const FHitResult& _hitResult, FHitBox& _outHitbox);
    void BPE_GetFallHitOnPhysicAnimImpact(const class AFightingCharacter* _character, const FHitResult& _hitResult, float _fImpulseSize, FHitBox& _outHitbox);
    void BPE_GetFallHit(const class AFightingCharacter* _character, const FHitResult& _hitResult, EFallHitOrigin _eFallHitOrigin, float _fHeight, FHitBox& _outHitbox);
};

class UHittedDB : public UInheritedDataAsset
{
    float m_fLowDistanceFromRoot;
    float m_fHighDistanceFromRoot;
    float m_fHalfAngleSouth;
    float m_fItemHalfAngleSouth;
    float m_fAutoKillTimeMax;
    float m_fAutoKillHeightMax;
    float m_fMediumFallHeightThreshold;
    float m_fHeavyFallHeightThreshold;
    float m_fFallMaxHeight;
    float m_fDamagePercentAssistDetectionThreshold;
    float m_fDamagePercentKillDetectionThreshold;
    float m_fDamageHistoryNotInFightTimeOut;
    float m_fDamageHistoryOutOfRangeTimeOut;
    float m_fDamageHistoryDeadTimeOut;
    float m_fDamageHistoryInvalidTimeOut;
    bool m_bTimeSinceLastHitPrevails;
    bool m_bLongestStunPrevailsBetweenHits;
    bool m_bKnockbackDurationBoundToAnimation;
    bool m_bHitDamagesDetailsDebugActivated;
    class UAvailabilityLayerData* m_HitRecoveryAvailability;
    TSubclassOf<class UHitAnimRequest> m_HitAnimationRequest;
    TSubclassOf<class UFallHitRequest> m_FallHitRequest;
    FAnimContainer m_FallAnim;

};

class UHittedDeathNotify : public UAnimNotify
{
    class UAnimSequence* m_DeathAnimation;
    FSCUserDefinedEnumHandler m_DeathAnimType;
    bool m_bMirrorDeathAnimation;
    bool m_bUnspawnNow;
    uint32 m_uiDeathTriggeredConditionMask;

};

class UHittedDeathOrderService : public UOrderService
{
    class UAnimSequence* m_DeathAnimation;
    FSCUserDefinedEnumHandler m_DeathAnimType;
    bool m_bMirrorDeathAnimation;
    bool m_bUnspawnNow;
    uint32 m_uiDeathTriggeredConditionMask;

};

struct FHittedServiceInfos
{
    bool m_bDiscardHitOrderOnSurvive;
    bool m_bDiscardHitOrderOnKill;
    bool m_bDropWeaponOnKill;
    bool m_bDiscardFightingStatesOrders;
    bool m_bEnqueueFightingStateOrder;
    class UAnimSequence* m_DeathAnimationOnStop;
    bool m_bMirrorDeathAnimation;
    bool m_bGenerateImpactOnStop;
    bool m_bUseCustomHitAnimOnKill;
    FHittedAnimContainer m_CustomHitAnimOnKill;
    bool m_bUseCustomHitAnimOnSurvive;
    FHittedAnimContainer m_CustomHitAnimOnSurvive;
    bool m_bForceDamageToHitBox;
    bool m_bForceStructureDamageToHitBox;
    bool m_bLaunchFightingStateOrderAfterCurrentAnim;
    bool m_bStructureBrokenOrderWaitForEndOfAnim;
    bool m_bDelayKillToNextHit;
    bool m_bUseCustomFightingStateLoopAnim;
    FHittedAnimContainer m_CustomFightingStateLoopAnim;
    bool m_bUseCustomFightingStateRecoveryAnim;
    FHittedAnimContainer m_CustomFightingStateRecoveryAnim;
    FBoneReference m_OptionalImpactBone;
    bool m_bPlayHitSFX;
    bool m_bPlayDeathSFX;
    bool m_bPlayHitVFX;

};

class UHittedOrderService : public UOrderService
{
    FHittedServiceInfos m_Infos;
    FHitBox m_Hit;
    bool m_bFreezeInstigator;
    EOrderType m_eInstigatorOrderType;

    class UAttackPropertiesResistanceDB* BPE_GetSpecialResistanceDB(const FBPOrderServiceInstance& _orderServiceInstance);
    FHittedAnimContainer BPE_GetLethalHittedAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    void BPE_GetHitRequest(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult);
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation);
    FAnimContainer BPE_GetFightingStateRecoveryAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance);
};

class UOrderServiceNotifyState : public USCAnimNotifyState
{
    bool m_bTickFrozen;
    TSubclassOf<class UOrderService> m_ServiceClass;
    class UOrderService* m_ServiceInstanced;
    TSubclassOf<class UOrderServiceActivationConditions> m_activationCondition;

    TSubclassOf<class UOrderService> GetServiceClass(bool _bIncludeInstanced);
};

class UHittedOrderServiceNotifyState : public UOrderServiceNotifyState
{
    FHittedServiceInfos m_Infos;

};

class UHoldLockMove : public USCAnimNotifyState
{
};

class UHUDWidget : public USCUserWidget
{
    EQuadrantTypes m_eCurrentQuadrant;

    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 _uiNewIndex);
    void OnComboEnd(EQuadrantTypes _eNewQuadrant);
    void OnComboChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    void OnComboChangeNextImg(EQuadrantTypes _eNewQuadrant);
    void OnChangeQuadrantState(EQuadrantTypes _eNewQuadrant);
    void OnAltAttack(EQuadrantTypes _eNewQuadrant, uint8 _uiCurrentComboIndex);
    bool BPF_IsAttacking();
    void BPE_ResetFillingsFromQuadrant(EQuadrantTypes _eQuadrant);
    void BPE_RegularAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, uint8 _uiAttackIndex, bool _bFromEditor);
    void BPE_RefreshQuadrantError(EQuadrantTypes _eQuadrant, bool _bError);
    void BPE_OnRebuild();
    void BPE_ComboStart(EQuadrantTypes _eNewQuadrant);
    void BPE_ComboEnds(EQuadrantTypes _eNewQuadrant);
    void BPE_ChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    void BPE_AttackEndsInOtherQuadrant(EQuadrantTypes _eNewQuadrant);
    void BPE_AlternativeAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, bool _bFromEditor);
};

class UIdleDB : public UDataAsset
{
    float m_fReorientationTime;
    float m_fReorientationTimeForEarlyBlendOutFromAttack;

};

struct FIKProfileBlendInfos
{
    float m_fValueCoef;
    float m_fBlendInDuration;
    TEnumAsByte<EEasingFunc::Type> m_eBlendInFunction;
    float m_fBlendOutDuration;
    TEnumAsByte<EEasingFunc::Type> m_eBlendOutFunction;
    FName m_CurveName;

};

class UIKProfileAnimNotifyState : public USCAnimNotifyState
{
    FSCUserDefinedEnumHandler m_Profile;
    FSCUserDefinedEnumHandler m_CrossFadeOutWithProfile;
    FIKProfileBlendInfos m_BoneLocationBlend;
    FIKProfileBlendInfos m_LimbRotationBlend;
    FFloatRange m_ImpactTime;
    FBoneReference m_TargetBoneReference;
    bool m_bResetIKAlphaOnStop;
    bool m_bRotateImpactOrientation;
    bool m_bForceBoneRotation;
    float m_fForceBoneRotationBlendDuration;

};

class UIKAnimOnSelfNotifyState : public UIKProfileAnimNotifyState
{
};

struct FPropertyFloorBoneRepartition
{
    FBoneReference m_Bone;
    FFloatRange m_DegreeFloorAngleRange;
    float m_fRepartitionAlpha;
    float m_fResultAlpha;
    FTransform m_BoneResultTransform;

};

struct FIKPropertyEvaluation
{
    FSCUserDefinedEnumHandler m_Mirror;
    FBoneReference m_RootLimbBone;
    FBoneReference m_TipBone;
    float m_fBoneLocationAlpha;
    float m_fBoneRotationAlpha;
    float m_fLimbRotationAlpha;
    FVector m_vSelfReferenceBonePosition;
    FVector m_vTargetBonePosition;
    FRotator m_TargetBoneRotation;
    FTransform m_TipBoneWantedTransform;
    FRotator m_LimbLocalRotation;

};

class UIKSubAnimInstance : public USCAnimInstance
{
    FName m_SlopeCurveName;
    FRotator m_FloorAngleToTarget;

    void BPF_BindRepartitionProperty(FPropertyFloorBoneRepartition& _property);
    void BPF_BindProperty(FIKPropertyEvaluation& _fProperty, uint8 _uiEnum);
};

class UInGameMenuAbility : public USCGameplayAbility
{
};

class UInGameNotification : public UHUDUserWidget
{
    TArray<class UBaseNotification*> m_NotificationStack;

    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void BPF_ShowNextNotification();
    void BPF_PushNotification(class UBaseNotification* _notification);
    void BPF_PopNotification();
    void BPF_EnableOpenMenu();
    void BPF_DisableOpenMenu();
    void BPF_ClearPendingNotificationOfTypes(TArray<class UClass*> _NotificationTypes);
    void BPE_HideCurrentNotification();
    void BPE_HandleProgressionRewardNotification(const class UProgressionRewardNotification* _rewardNotification);
    void BPE_HandleProgressionDoorNotification(const class UProgressionDoorNotification* _progressionDoorNotification);
    void BPE_HandleNotification(const class UBaseNotification* _messageNotification);
    void BPE_HandleMessageNotification(const class UMessageNotification* _messageNotification);
    void BPE_HandleLevelUpNotification(const class ULevelUpNotification* _levelUpNotification);
    void BPE_HandleAttackProgressNotification(const class UAttackProgressNotification* _attackProgressNotification);
    class UAttackProgressNotification* BPE_FindOrCreateAttackProgressNotification(const FName& _attackName);
};

class IInputAvailability : public IInterface
{
};

class UInputAvailabilityUserWidget : public USCUserWidget
{
    InputAction m_eInputAction;

    void BPF_SetInputAvailabilityOverride(FBPF_SetInputAvailabilityOverrideDelegate _delegate);
    void BPE_OnAvailabilityUpdated(bool _bAvailable);
};

struct FInputActionData
{
    float m_fStackLifeSpan;
    bool m_bUseScaledTime;
    bool m_bBlockLowerContext;

};

struct FInputMapping
{
    FInputMappingData m_MappingData;

};

struct FInputMappingGroup
{
    TMap<class InputAction, class FInputMapping> m_Mapping;

};

class UInputContextData : public UDataAsset
{
    InputContext m_contextType;
    bool m_disableOther;
    bool m_bPauseOther;
    TMap<class InputAction, class FInputActionData> m_InputActionSettings;
    TArray<class UGenericInputData*> m_inputActions;
    TArray<FInputMappingGroup> m_DefaultGamepadMapping;
    TArray<FInputMappingGroup> m_DefaultKeyboadMapping;

    void CreateOwners();
    void ClearUnUsedInputs();
    void Clear();
    void Build();
};

class UInputHelpers : public UBlueprintFunctionLibrary
{

    float BPF_GetInputActionPressedDurationNormalized(class ASCPlayerController* _playerController, InputAction _eInputAction);
};

class UInputManager : public UObject
{
    class UInputsDB* m_inputsDB;
    TArray<class UInputPad*> m_pads;

    void BPF_ResetAction(class UObject* _requester, const class ASCPlayerController* _playerController, InputAction _eInputAction);
    void BPF_FlushAction(class UObject* _requester, const class ASCPlayerController* _playerController, InputAction _eInputAction);
    void BPF_ConsumeAction(class UObject* _requester, const class ASCPlayerController* _playerController, InputAction _eInputAction);
};

class UInputManagerHelpers : public UBlueprintFunctionLibrary
{

    class UInputPad* BPF_GetControllerInputPad(class ASCPlayerController* _playerController);
    FVector2D BPF_GetActionVectorValue(class ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
    float BPF_GetActionValue(const class ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
};

class UInputMappingPresets : public UDataAsset
{
    TMap<class FInputPresetsEnumHandler, class FInputMappingData> m_Presets;

};

class UInputMappingProfileContextDB : public UDataAsset
{
    TArray<FInputMappingGroup> m_MappingGroups;

    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
};

class UInputMappingProfileUIData : public UObject
{
};

class UInputMappingProfileDB : public UDataAsset
{
    bool m_bGamepadMapping;
    class UInputMappingPresets* m_PresetDB;
    class UInputMappingProfileUIData* m_UIData;
    TMap<class InputContext, class UInputMappingProfileContextDB*> m_MappingPerContext;

};

class UWidgetData : public UObject
{

    void BPF_NotifyDataUpdated();
};

struct FInputMappingProfileData
{
    bool m_IsSet;
    TMap<class FInputPresetsEnumHandler, class FInputMappingData> m_Presets;
    TMap<class InputContext, class FInputMappingGroup> m_MappingPerContext;

};

class UInputMappingWidgetData : public UWidgetData
{
    FInputMappingProfileData m_InputContext;
    EInputMappingForceController m_eControllerType;

};

struct FInputPriorityGroup
{
    TSet<TSoftObjectPtr<UGenericInputData>> m_Data;

};

struct FInputMappingProfileEnumHandler : public FSCUserDefinedEnumHandler
{
};

class UMappingEditorHelpers : public UClass
{

    FString BPF_GetInputPriorityGroupDesc(const FInputPriorityGroup& _group);
    bool BPF_GetInputMappingShowSlot(const FInputMappingKeySlotContainer& _slot);
    bool BPF_GetInputMappingShowData(const FInputMappingKeySlotContainer& _slot);
    FString BPF_GetInputMappingKeySlotDesc(const FInputMappingKeySlot& _slot);
    FString BPF_GetInputMappingKeySlotContainerTitle(const FInputMappingKeySlotContainer& _slot);
    FString BPF_GetInputMappingKeySlotContainerDesc(const FInputMappingKeySlotContainer& _slot);
    FString BPF_GetInputMappingGroupTitle(const FInputMappingGroup& _mapping);
    FString BPF_GetInputMappingGroupDesc(const FInputMappingGroup& _mapping);
    FLinearColor BPF_GetInputMappingGroupColor(const FInputMappingGroup& _mapping);
    FString BPF_GetInputMappingDataSlotDesc(const FInputMappingData& _data);
    bool BPF_GetInputMappingDataShowSlot(const FInputMappingData& _slot);
    bool BPF_FindInputProfileAvailableKey(FInputMappingProfileEnumHandler& _modifier, int32 _iIndex);
    bool BPF_FindInputPresetAvailableKey(FInputPresetsEnumHandler& _modifier, int32 iIndex);
};

struct FMappingValidationError
{
    EMappingValidationErrorType m_eResult;
    FMappingID m_ID;
    FMappingID m_CollideID;
    class UGenericInputData* m_CollideWithData;

};

class UInputMappingHelpers : public UBlueprintFunctionLibrary
{

    bool ValidateMappingForPreset(const FInputMappingProfileData& _mappingContext, const FInputMappingGroup& _context, const FInputPresetsEnumHandler& _preset, InputContext _eContext, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions);
    bool EqualEqual_MappingID(const FMappingID& _ID1, const FMappingID& _ID2);
    bool EqualEqual_MappingData(const FInputMappingData& _data1, const FInputMappingData& _data2);
    FText Conv_MappingIDToText(const FMappingID& _ID);
    FMappingID Conv_InputPresetsEnumHandlerToMappingID(const FInputPresetsEnumHandler& _handler, InputContext _eContext);
    FMappingID Conv_InputActionToMappingID(InputAction _action, InputContext _eContext);
    FInputMappingProfileEnumHandler Conv_EnumToProfileID(const FSCUserDefinedEnumHandler& _ID);
    bool BPF_ValidateMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _item, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions);
    bool BPF_ValidateCompleteMapping(const FInputMappingProfileData& _mapping, TArray<FMappingValidationError>& _outErrors);
    bool BPF_SetMapping(FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, const FInputMappingData& _mapping);
    void BPF_SetHoldToggleEnabled(bool _bActivated);
    void BPF_SetCurrentMappingProfile(class ASCPlayerController* _controller, const FInputMappingProfileEnumHandler& _profile, bool _bGamePad);
    void BPF_SaveCustomInputMapping(class ASCPlayerController* _controller, FInputMappingProfileData& _mappingContext, bool _bGamePad);
    void BPF_ResolveConflicts(FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, TArray<FMappingID>& _outResettedItems);
    FMappingID BPF_MakeMappingID(const FInputPresetsEnumHandler& _PresetID, InputAction _eAction, InputContext _eContext);
    bool BPF_IsValid(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext);
    bool BPF_IsEmpty(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext);
    bool BPF_IsDependencyBrokenWithPreset(const FInputMappingProfileData& _inOutRemapping, const FMappingID& _ID);
    void BPF_GetMappingResult(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingNode& _outResultNode);
    void BPF_GetMappingProfiles(TMap<class FInputMappingProfileEnumHandler, class UInputMappingProfileDB*>& _outResult, bool _bGamePad);
    class UInputMappingProfileDB* BPF_GetMappingProfileDB(const FInputMappingProfileEnumHandler& _profileID);
    void BPF_GetMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingData& _outMapping);
    EKeyboardLayout BPF_GetKeyboardLayout();
    bool BPF_GetHoldToggleEnabled();
    void BPF_GetDefaultMapping(const class ASCPlayerController* _controller, FInputMappingProfileData& _mappingContext, bool _bGamePad);
    void BPF_GetDefaultInputMapping(class ASCPlayerController* _controller, const FMappingID& _ID, FInputMappingData& _outMapping, bool _bGamePad);
    FInputMappingProfileEnumHandler BPF_GetCurrentMappingProfile(bool _bGamePad);
    void BPF_GetCurrentMapping(FInputMappingProfileData& _outMappingContext, bool _bGamePad);
    void BPF_GetAvailableInputDatas(const FInputMappingProfileData& _mappingContext, bool _bGamePad, const FMappingID& _mappingID, const FInputMappingData& _mappingData, TArray<class UGenericInputData*>& _outAvailableInputData);
    FInt32Range BPF_GetAuthorizedCombinationCount(const FMappingID& _mappingID, bool _bGamePad);
    bool BPF_CreateMappingFromSlots(const FInputMappingProfileData& _inMappingContext, const FMappingID& _item, const TArray<FInputMappingKeySlotContainer>& _slots, FInputMappingData& _outMapping, bool _bBreakDependencies, bool _bGamePad);
    void BPF_BuildContextFromProfile(FInputMappingProfileData& _outMappingContext, FInputMappingProfileEnumHandler _profile);
    void BPF_BreakMappingID(const FMappingID& _mappingID, bool& _bOutUsePreset, InputAction& _eOutAction, FInputPresetsEnumHandler& _eOutPreset);
    FInputMappingData BPF_BreakDependencyWithPreset(const FInputMappingProfileData& _inOutMappingContext, const FInputMappingData& _mapping);
    void BPF_ApplyInputRemapping(class ASCPlayerController* _controller, const FInputMappingProfileData& _mappingContext);
    void BPF_ApplyCurrentInputMapping(class ASCPlayerController* _controller);
};

class UInputMappingWidget : public USCUserWidget
{
    FInputMappingWidget_OnWaitingForRemappingInput m_OnWaitingForRemappingInput;
    void OnInteractionWithRemappingFieldDelegate(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    FInputMappingWidget_OnFocusReceived m_OnFocusReceived;
    void OnInteractionWithRemappingFieldDelegate(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    FInputMappingWidget_OnFocusLost m_OnFocusLost;
    void OnInteractionWithRemappingFieldDelegate(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    FString m_MappingStringName;
    FString m_MappingNameStringNegativeScale;
    FString m_MappedKeyName;
    FString m_MappedKeyNameNegativeScale;
    FAsyncTextureStruct m_KeyInputTexture;
    FAsyncTextureStruct m_KeyInputTextureNegativeScale;
    bool m_bIsMappingFieldForAxis;
    bool m_bForceDisplayAsSingleField;
    bool m_bCheckDuplicateKey;
    EMappableFieldScaleTypes m_eSelectedFieldScaleType;
    EMappableFieldScaleTypes m_eFocusedFieldScaleType;
    ERemappingAllowedInputTypes m_eRemappingAllowedType;

    void OnInteractionWithRemappingFieldDelegate__DelegateSignature(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    void BPF_WaitingKeyInput(EMappableFieldScaleTypes _eScaleType);
    void BPF_SetRemappingButton(class UButtonUserWidget* _remappingButton, EMappableFieldScaleTypes _eScaleType);
    void BPF_OnRemappingFieldGettingFocusLost(EMappableFieldScaleTypes _eScaleType);
    void BPF_OnRemappingFieldGettingFocused(EMappableFieldScaleTypes _eScaleType);
    FName BPF_GetActionName();
    void BPE_ShouldDisplayTextureKeyRatherThanTextKeyForKeyboard(bool _bUseTexture, EMappableFieldScaleTypes _eScaleType);
    void BPE_OnRemappingStarted(bool _bIsKeyboardRemapping);
    void BPE_OnRemappingFinished(bool _bIsKeyboardRemapping, FKey _newMappingKey);
};

class UInputPad : public UObject
{

    class UGenericInputData* BPF_GetInputDataForAction(InputAction _eAction);
};

class UInputsDB : public UDataAsset
{
    class UInputContextData* m_contexts;
    float m_fStartStabilizationDuration;
    float m_fStopStabilizationDuration;
    float m_fThresholdInputDiffForStabilisation;
    float m_fStickThresholdBetweenV1V2;

};

struct FInputSequenceStep
{
    class UGenericInputData* m_Input;
    FFloatRange m_DelayBeforeNextAction;

};

class UInputSequenceData : public UGenericInputData
{
    TArray<FInputSequenceStep> m_Sequence;

};

struct FInputKeyMappingHandler
{
    FKey m_Key;
    FName m_ActionName;
    FName m_AxisName;
    bool m_bShift;
    bool m_bAlt;
    bool m_bCmd;
    bool m_bCtrl;
    float m_fScale;

};

class UInputsMappingMenu : public UMenuWidget
{
    class UMappableInputsDB* m_MappableInputsDB;
    TSubclassOf<class UInputMappingWidget> m_InputMappingWidgetClass;
    FMargin m_sectionTitleMargin;
    FSlateFontInfo m_sectionTitleFont;
    FLinearColor m_sectionTitleColorAndOpacity;
    FSlateBrush m_sectionTitleBrush;
    bool m_bIsRemappingOccured;

    void OnRemappingStarted(FName _ActionName, EMappableFieldScaleTypes _eScaleType);
    void OnRemappingFieldFocusLost(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    void OnRemappingFieldFocused(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    void OnGamepadControllerTypeChanged(FName _gamepadControllerType);
    void BPF_UpdateRemappingKeyList();
    void BPF_UpdateMappingListKeyIcons();
    void BPF_RestoreDefaultMapping();
    bool BPF_RemoveMapping(FName _ActionName);
    bool BPF_PerformKeyRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping);
    bool BPF_IsWaitingInputForRemapping();
    FText BPF_GetRemappingFailMessage(ERemappingFinishedStates _finishState);
    void BPF_FillRemappingKeyList(class UPanelWidget* _KeyContainer, ERemappingAllowedInputTypes _eRemappingAllowedInputTypes, class UButtonUserWidget* _LastRemappingFieldNextButton);
    void BPF_Cancel();
    void BPF_BuildRemappingListOuterNavigation(class UButtonUserWidget* _LastRemappingFieldNextButton);
    void BPF_BuildRemappingFieldsListExplicitNavigation(class UButtonUserWidget* _LastRemappingFieldNextButton);
    void BPF_ApplyMapping(ERemappingAllowedInputTypes _eRemappingInputTypeToApply);
    void BPE_OnRemappingSucceed();
    void BPE_OnRemappingStarted();
    void BPE_OnRemappingFieldLostFocus(class UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    void BPE_OnRemappingFieldFocused(class UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    void BPE_OnRemappingFailed(ERemappingFinishedStates _eRemappingStates, FKey _keyPressed);
    void BPE_OnKeyPressedForRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping, bool _bIsKeyboardRemapping);
};

struct FInteractionHintInfo
{
    bool m_bIsVisible;
    bool m_bIsUsable;

};

class UInteractionDetectionComponent : public UActorComponent
{
    FBaseActorTargetConditionInstance m_CandidateObjectCondition;
    float m_fAngleThresholdWalking;
    float m_fAngleThresholdRunning;
    float m_fCatchFrontRangeWalking;
    float m_fCatchBackRangeWalking;
    float m_fCatchFrontRangeRunning;
    float m_fCatchBackRangeRunning;
    float m_fInteractionHintDist;
    bool m_bShowOnlyVisibleHint;
    bool m_bShowOnlyUsableHint;
    TArray<class UInteractionObjectComponent*> m_interactionHintToShow;
    TMap<class UInteractionObjectComponent*, class FInteractionHintInfo> m_interactionHintInfos;

    TMap<class UInteractionObjectComponent*, class FInteractionHintInfo> BPF_GetInteractionHintInfos();
    TArray<class UInteractionObjectComponent*> BPF_GetInteractionHintComponent();
    class AActor* BPF_GetCurrentInteractiveObject();
    class UInteractionObjectComponent* BPF_GetCurrentInteractiveComponent();
    void BPF_DisableInteractionWithObjects(TSubclassOf<class AActor> _actorToDisable);
    void BPF_AllowInteractionWithObjects(TSubclassOf<class AActor> _actorToEnable);
};

class UInteractionObjectComponent : public UActorComponent
{
    FInteractionObjectComponentOnUseInteractionObject OnUseInteractionObject;
    void UseObject(class APlayerController* PlayerController);
    FInteractionObjectComponentOnUseInteractionObjectFailed OnUseInteractionObjectFailed;
    void FailedUseObject(class APlayerController* PlayerController, FText FailReason);
    FInteractionObjectComponentOnBecomeCurrentInteractionObject OnBecomeCurrentInteractionObject;
    void UseObject(class APlayerController* PlayerController);
    FInteractionObjectComponentOnNoLongerCurrentInteractionObject OnNoLongerCurrentInteractionObject;
    void UseObject(class APlayerController* PlayerController);
    FInteractionObjectComponentOnTextChanged OnTextChanged;
    void OnTextStructChanged();
    FInteractionObjectComponentOnUsableChanged OnUsableChanged;
    void OnUsableChanged();
    bool m_bUseCustomWalkInteractionDist;
    float m_fCustomWalkInteractionDist;
    bool m_bUseCustomRunInteractionDist;
    float m_fCustomRunInteractionDist;
    FInteractionObjectComponentOnDestroyComponent OnDestroyComponent;
    void DestroyComponent(class UInteractionObjectComponent* _component);
    FCollisionProfileName m_InteractionTraceResponse;
    bool m_bIgnoreOwnerOnHint;
    bool m_bIgnoreChildActorsOnTrace;
    class UOrderParams* m_orderParams;
    bool m_bVisibleOnlyWhenUsable;
    bool m_bIsUsable;
    FInteractionTextStruct m_InteractionTextStruct;
    bool m_bUseLockedText;
    FText m_LockedText;
    bool m_bUseGenericUI;
    int32 m_iPriority;
    bool m_bUseInteractionHint;
    bool m_bOverrideInteractionHintDistance;
    float m_fInteractionHintDistanceOverride;
    bool m_bConstraintToViewport;
    FVector2D m_vViewportConstraint;

    void UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnUsableChanged__DelegateSignature();
    void OnTextStructChanged__DelegateSignature();
    void ForceUse();
    void FailedUseObject__DelegateSignature(class APlayerController* PlayerController, FText FailReason);
    void DestroyComponent__DelegateSignature(class UInteractionObjectComponent* _component);
    void BPF_SetVisualComponent(class USceneComponent* _component);
    void BPF_SetMainDetectionPrimitive(class UPrimitiveComponent* _component);
    void BPF_SetIsUsable(bool _bCanUse);
    void BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct);
    bool BPF_IsUsingLockedText();
    bool BPF_IsUsable();
    class USceneComponent* BPF_GetVisualComponent();
    FText BPF_GetLockedText();
    FInteractionTextStruct BPF_GetInteractionTextStruct();
};

class UInteractiveCamMenuWidget : public UMenuWidget
{
    class AInteractiveMenu* m_menuHandler;

};

struct FDestructibleStateInfo
{
    int32 m_iHealthThreshold;
    class UStaticMesh* m_StateStaticMesh;
    class USkeletalMesh* m_StateSkeletalMesh;

};

struct FFXInfo
{
    class UParticleSystem* m_ParticleSystem;
    FVector m_vScale;

};

class UInteractiveDestructionComponent : public UHealthComponent
{
    FInteractiveDestructionComponentOnStateChanged OnStateChanged;
    void OnStateChanged(int32 _iNewState);
    int32 m_iHitByCharaDamage;
    int32 m_iHitByObjectDamage;
    TArray<FDestructibleStateInfo> m_DestructibleStateInfo;
    TArray<class UMeshComponent*> m_aOwnerMeshToSwap;
    class UStaticMesh* m_DestroyedStaticMesh;
    class USkeletalMesh* m_DestroyedSkeletalMesh;
    FFXInfo m_ImpactParticleSystem;
    FFXInfo m_BreakParticleSystem;
    TArray<class UStaticMeshComponent*> m_SimChunks;
    FVector m_vRandomSpreadAmplitude;
    bool m_bUseCustomCollisionProfile;
    FCollisionProfileName m_DeactivatedChunkCollisionProfile;
    float m_fChunkDeactivationDelay;

    void OnStateChanged__DelegateSignature(int32 _iNewState);
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    int32 BPF_GetStateIndex();
};

class IInteractiveInterface : public IInterface
{

    bool CanInteract(class APawn* _Instigator, FText& _outReason);
};

class AInteractiveMenu : public ASCActor
{
    EMenuEnum m_eMenu;
    class UInteractionObjectComponent* m_InteractiveComp;
    class AActor* m_ActorToBlendTo;
    class UMenuWidget* m_MenuToShow;
    class USceneComponent* m_RootComponent;

    void BPF_OpenMenu(class AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility);
    FVector2D BPF_GetLeftStickValue(class ASCPlayerController* _controller);
    void BPF_CloseMenu(class AFightingPlayerController* _controller, float _fBlendTime);
};

class AInteractiveObject : public AActor
{
    class UInteractionObjectComponent* m_InteractionObjectComponent;

    void UseInteractiveObjectFailed(class APlayerController* _controller, FText _reason);
    void UseInteractiveObject(class APlayerController* _controller);
    class UInteractionObjectComponent* BPF_GetInteractionObjectComponent();
    void BPF_Deactivate();
    void BPE_OnUseFailed(const FText& _reason);
    void BPE_OnUse();
};

struct FInterchangeableData
{
    FBaseActorConditionInstance m_condition;
    class UGenericInputData* m_Data;

};

class UInterchangeableInputData : public UGenericInputData
{
    TArray<FInterchangeableData> m_Inputs;
    bool m_bUseActiveSubInputLifeSpan;

};

class UIntStatTextBlock : public UTextBlock
{
    int32 Stat;
    int32 StatIncrement;
    FIntStatTextBlockStatDelegate StatDelegate;
    int32 GetInt32();
    int32 CompareStat;
    FIntStatTextBlockCompareStatDelegate CompareStatDelegate;
    int32 GetInt32();
    class UColorComparisonProfile* m_ColorComparisonProfile;
    bool m_bHightIsBetter;
    bool m_bCanBeNegative;

};

class UInvestigationPositionUpdaterService : public UBTService
{
};

class UInvulnerabilityOrderService : public UOrderService
{
    bool m_bAcceptHitsFromTarget;
    bool m_bResetGuardOnStart;

    void BPE_ShouldDismissHit(const FBPOrderServiceInstance& _instance, const FHitResult& _result, FImpactResult& _Impact, const FHitRequest& _request, bool& _outShouldDismiss);
};

class UIsInInteractiveDialogCondition : public UBaseActorCondition
{
    int32 m_iMaxChoicesCount;

};

class UIsInvolvedInDialogCondition : public UBaseActorCondition
{
};

class UIsLockTargetCondition : public UBaseActorTargetCondition
{
};

class UIsOnNavmeshCondition : public UBaseActorCondition
{
    float m_fDistTolerance;

};

class UIsOrderRunningService : public UBTService
{
    FBlackboardKeySelector m_BlackboardKey;
    EOrderType m_eOrder;

};

class UIsTargetSlotCondition : public UBaseActorTargetCondition
{
    FSCUserDefinedEnumHandler m_Slot;

};

class UIsTargettedInfluenceTest : public UAIInfluenceTest
{
};

class UItemsDB : public UDataAsset
{
    TArray<class UBaseItemData*> m_Items;

};

class UJoinDialogAction : public UDialogActionBase
{
    FName m_ActorSentToDialog;
    bool m_bPlayPrefightAnimations;

    TArray<FName> GetActorOptions();
};

class AKeyPass : public AActor
{
    class UInteractionObjectComponent* m_InteractionObjectComponent;
    bool m_bCollected;
    bool m_bForAllPlayers;

    void UseInteractiveObject(class APlayerController* _controller);
    void On_RepCollected();
    void BPE_OnKeyCollected();
    void BPE_KeyLareadyCollected();
};

class AKillzone : public AStaticMeshActor
{
    class UBoxComponent* m_BoxComponent;

    void OnBoxTouched(class UPrimitiveComponent* _OverlappedComp, class AActor* _Other, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    bool BPF_IsKillzoneActive();
    void BPE_OnBoxTouched(class AFightingCharacter* _Char, const FVector& _vImpactpoint);
};

class ALDCameraActor : public ASCActor
{
};

struct FReplicatedSequencerAnimMontage
{
    int32 m_iMontageId;
    class UAnimSequenceBase* m_AnimSequence;
    uint8 m_uiCinematicSlot;

};

struct FReplicatedSequencerAnimMontagePosition
{
    int32 m_iMontageId;
    float m_fPosition;

};

class ULevelSequenceAnimReplicationComponent : public UActorComponent
{
    TArray<FReplicatedSequencerAnimMontage> m_SequencerMontages;
    TArray<FReplicatedSequencerAnimMontagePosition> m_SequencerAnimMontagesPosition;
    float m_fCinematicSlotWeight;
    int32 m_iPlayingSequenceId;

    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    void OnRep_SequencerMontagesPosition();
    void OnRep_CinematicSlotWeight();
    void BPF_OnSequenceRegisterActor(class ALevelSequenceActor* _levelSequenceActor, class ULevelSequenceDirector* _director);
    void BPF_OnSequenceFinished(class ALevelSequenceActor* _levelSequenceActor);
};

class ALevelSequenceRoot : public AActor
{
};

class ULevelUpNotification : public UBaseNotification
{
    int32 m_iLevel;

    class ULevelUpNotification* BPF_Init(int32 _iLevel);
};

class ULifeInfluenceTest : public UFloatInfluenceTest
{
};

class ULimbsHelper : public UBlueprintFunctionLibrary
{

    ELimbs BPF_Mirror(ELimbs _eLimb, bool _bMirror);
};

class ULineHitDetectionDB : public UBaseHitDetectionDB
{
    float m_fHalfHeight;
    int32 m_iNumLines;
    bool m_bOneSided;

};

class UMenuItem : public USCUserWidget
{
    class UWidget* m_PreviousWidget;
    class UWidget* m_WidgetToFocusOnCancel;
    class UMenuItem* m_NextPanel;
    bool m_bAllowSoundPlaying;

    void BPE_OnChangeNextWidget(class UWidget* _widgetToHide, class UWidget* _previousWidget, class UWidget* _widgetToFocusOnCancel);
    void BPE_OnCancelPressed();
    void BPE_OnCancelChangeWidget();
};

class ULoadChoices : public UMenuItem
{
    TWeakObjectPtr<class UPanelWidget> m_SlotsBox;
    TSubclassOf<class ULoadSlot> m_LoadingButtonClass;
    FMargin m_SlotsPadding;

    void BPF_SetFocusedIndex(uint8 _uiIndex);
    void BPF_HideWidgetAndSetFocusOnFirstSlot(class UWidget* _widget);
    void BPF_FillLoadChoices();
    void BPF_DeleteSelectedSave();
};

class UMenuSlot : public USCUserWidget
{
    bool m_bAllowSoundPlaying;

};

class ULoadSlot : public UMenuSlot
{

    uint8 BPF_GetSlotIndex();
    FString BPF_GetSaveName();
    FCharacterSaveDescription BPF_GetSaveDescription();
    class ULoadChoices* BPF_GetLoadPanel();
    void BPE_InitSlot(FCharacterSaveDescription _save);
};

class ALockableDoor : public AActor
{
    class USkeletalMeshComponent* m_SkeletalMeshComponent;
    class USceneComponent* m_RootComponent;
    float m_fCloseDistThreshold;
    FVector m_vHandleLocation;
    class USCSaveGameComponent* m_SaveComponent;
    bool m_bShouldStayOpen;
    class ULevelSequence* m_levelSequenceWay1;
    class ULevelSequence* m_levelSequenceWay2;
    FLockableDoor_OnDoorEndClose m_OnDoorEndClose;
    void LockableDoorEndClose(const class AActor* _lockableDoorActor);
    bool m_bCanLockNavBuild;
    class USkeletalMesh* m_SkeletalMesh;
    bool m_bLocked;
    bool m_bOpened;
    FName m_sequenceRoleName;

    void SetOpened(bool bOpened);
    void SetLocked(bool bLocked);
    void OnReplaySystemRecordingChanged(bool _bRecording);
    void OnRep_SkeletalMesh();
    void LockableDoorEndClose__DelegateSignature(const class AActor* _lockableDoorActor);
    void BPF_SetNonOccluding(bool bNonOccluding);
    void BPF_SetDoorInOpenedState(class UAnimationAsset* _openingAnimAsset);
    void BPF_RemoveNavBuildLock();
    void BPF_OpenDoor(class AFightingCharacter* _interactor, class UAnimationAsset* _openingAnimAsset, class UAnimationAsset* _closingAnimAsset);
    void BPF_CloseDoor();
    void BPF_AddNavBuildLock();
    void BPE_OpenedStatusChanged();
    void BPE_OnDoorAnimationFinished();
    bool BPE_MustMirrorOpeningAnim(const class AFightingCharacter* _Instigator, bool _bInteraction1);
    void BPE_LockedStatusChanged();
    void BPE_GetOpeningDoorInfo(const class AFightingCharacter* _Instigator, bool _bInteraction1, bool& _outPlayAnimOnCharacter, bool& _outMustMirrorAnimOnCharacter);
};

struct FRelationshipActionArray
{
    ELockActionCondition m_Array;

};

struct FRelationshipActionConditionArray
{
    FRelationshipActionArray m_Array;

};

class ULockDB : public UDataAsset
{
    FRelationshipActionConditionArray m_RelationshipBehaviours;
    EMoveStatus m_MoveStatusOutOfFightRange;
    EMoveStatus m_MoveStatusInFightRange;
    class UCurveFloat* m_MaxVerticalAngleCurve;
    bool m_bDebugMaxVerticalAngle;
    class UCurveFloat* m_MaxZDiff;

};

struct FAimOffsetStruct
{
    class UAimOffsetBlendSpace* m_aimOffset;
    bool m_bMirror;
    float m_fMaxHeadDiffYaw;
    float m_fMaxHeadDiffPitch;

};

class ULookAtAnimRequest2 : public UObject
{

    FAimOffsetStruct BPE_GetLookAtAimOffset(class UPlayerAnim* _animInstance);
};

class ULookAtAnimRequest : public UObject
{

    FAimOffsetStruct BPE_GetLookAtAimOffset(class ULookAtAnimInstance* _animInstance);
};

struct FLookAtConfig
{
    bool m_bCanHaveInteractionComponent;
    class ULookAtConfigData* m_configData;
    float m_fValidDuration;

};

struct FLookAtModifierParams
{
    bool m_bOverrideSpringSpeed;
    float m_fOverridenSpringSpeed;
    float m_fRotationMultiplier;
    float m_fMaxClampedYaw;
    float m_fMaxClampedPitch;

};

struct FLookAtLocomotionLimits
{
    ESpeedState m_eSpeedState;
    EMoveStatus m_eMoveStatus;
    FLookAtLimits m_limits;

};

class ULookAtAnimInstance : public USCAnimInstance
{
    FAimOffsetStruct m_aimOffset0;
    FAimOffsetStruct m_aimOffset1;
    int32 m_iAimOffsetIndex;
    bool m_bLookAtEnabled;
    FVector2D m_vBlendSpaceParams;
    FRotator m_BoneModifierRot;
    FRotator m_CompensationRot;
    bool m_bEnableAnimationCompensation;
    float m_fMaxHeadDiffYaw;
    float m_fMaxHeadDiffPitch;
    FName m_headInWorldSpaceSaveBoneName;
    FName m_headComparaisonInWorldSpaceSaveBoneName;
    ELookAtApplyMode m_eApplyMode;
    ELookAtRefDirMode m_eRefDirMode;
    float m_fAngleThreshold;
    float m_fMaxFrontAngle;
    bool m_bLookInCameraDir;
    TSubclassOf<class ULookAtAnimRequest> m_animRequest;
    FLookAtConfig m_lookAtConfigs;
    TArray<ELookAtTargetType> m_targetPriorities;
    FLookAtModifierParams m_defaultModifierParams;
    FLookAtLimits m_boneModifierLimits;
    bool m_bInverseValuesOnBoneModifier;
    FVector2D m_vBoneModifierOffset;
    FVector2D m_vBoneModifierMultiplier;
    FLookAtLimits m_defaultLimits;
    TArray<FLookAtLocomotionLimits> m_locomotionLimits;
    TMap<class ETransitionGlobalType, class FLookAtLimits> m_transitionLimits;
    FLookAtModifierParams m_friendlyModifierParams;
    FLookAtModifierParams m_hostileInIdleModifierParams;

};

class ULookAtConfigData : public UInheritedDataAsset
{
    float m_fMaxRequiredYaw;
    float m_fMaxRequiredPitch;
    ESpeedState m_eMaxSpeedState;
    EMoveStatus m_eNeededMoveStatus;
    float m_fTimerBeforeLookAt;
    FLookAtModifierParams m_modifierParams;
    float m_fRotationMultiplier;
    float m_fMaxClampedYaw;
    float m_fMaxClampedPitch;

};

struct FLootBoxStaticData
{
    FName m_Name;

};

struct FLootBoxInstancedData
{
    int32 m_iGMLevel;
    ELootBoxType m_Type;

};

struct FLootBaseItemStruct
{
    class UBaseItemData* m_Item;
    uint16 m_uiItemNumber;
    uint8 m_uiMaterialIndex;

};

class ULootBoxDB : public UDataAsset
{
    TMap<class ELootBoxType, class FLootBoxStaticData> m_LootBoxTypes;
    class UDataTable* m_SmallLootDataTable;
    TArray<class UDataTable*> m_BigLootDataTables;

    void BPF_GetLoot(const FLootBoxInstancedData& _LootBoxData, TArray<FLootBaseItemStruct>& Out_LootedItems);
};

class ALootboxes_BlackRoom : public AActor
{

    void LoadTextureAsyncForMaterial(TSoftObjectPtr<UTexture2D> _texture, class UMaterialInstanceDynamic* _material, FName _paramName);
    void BPF_EnableTextureStreamingLoc();
    void BPF_DisableTextureStreamingLoc();
};

struct FPictoData
{
    FLinearColor m_color;
    float m_fGlow;
    float m_fIntensity;

};

struct FSequenceCheckPointData
{
    float m_fPlayBackPosition;

};

class ULootBoxOpeningSequenceDB : public UDataAsset
{
    TMap<class EGearRarity, class FPictoData> m_pictosData;
    float m_fSequenceStart;
    float m_fSequenceEnd;
    TArray<FSequenceCheckPointData> m_sequenceCheckPointsData;
    float m_fLoopPlayBackStartPosition;
    float m_fLoopPlayBackEndPosition;

};

class UMainMenu : public UMenuWidget
{
};

struct FMappableInputStruct
{
    FName m_UnrealMappingName;
    ERemappingAllowedInputTypes m_eRemappingAllowedInputType;
    FText m_DisplayedMappingNameText;
    bool m_bIsAxisMappingAllowed;
    bool m_bCheckDuplicateKey;
    bool m_bForceDisplayAsSingleField;
    float m_fKeyToAxisMultScaleFactor;

};

struct FRemappingSectionStruct
{
    FText m_SectionDisplayText;
    TArray<FMappableInputStruct> m_RemappableActions;

};

class UMappableInputsDB : public UDataAsset
{
    FText m_RemappingNotificationMessages;
    bool m_bKeysInSelectionAreForbidden;
    TSoftObjectPtr<UTexture2D> m_NoMappingIcon;
    TArray<FKey> m_KeysSelectionForRemapping;
    TArray<FKey> m_KeysIgnoredForRemapping;
    TArray<FKey> m_CancelRemappingKeys;
    TArray<FRemappingSectionStruct> m_MappableInputsSection;

};

class UMCDominationInfluenceTest : public UAIInfluenceTest
{
    uint32 m_uiMCDominationFlags;

};

class UMenuAsyncActionBaseHelper : public UBlueprintFunctionLibrary
{

    void BPF_CancelAsyncAction(class UMenuAsyncActionBase* _action);
};

class UMenuDataSource : public UBlueprintFunctionLibrary
{
};

struct FControllerKeyIcons
{
    FKey m_Key;
    TSoftObjectPtr<UTexture2D> m_Icons;
    bool m_bShowText;
    FText m_ReplacementText;

};

struct FControllerAxisTypeIcons
{
    TSoftObjectPtr<UTexture2D> m_AxisTypeIcons;

};

struct FControllerAxisIcons
{
    TArray<FKey> m_Keys;
    FControllerAxisTypeIcons m_AxisIcons;
    bool m_bShowText;
    FText m_ReplacementText;

};

struct FControllerIcons
{
    TArray<FName> m_Controllers;
    TArray<EPlatform> m_Platforms;
    TArray<FControllerKeyIcons> m_KeyIcons;
    TArray<FControllerAxisIcons> m_AxisIcons;

};

struct FIconTextures
{
    class UTexture2D* m_Textures;

};

class UMenuDB : public UDataAsset
{
    class UAkAudioEvent* m_AudioMove;
    class UAkAudioEvent* m_AudioValidate;
    class UAkAudioEvent* m_AudioBack;
    FEquipmentCategoryInfos m_EquipmentSlotInfos;
    TArray<FEquipmentCategoryInfos> m_ItemSlotInfos;
    FEquipmentCategoryInfos m_EmptyCategoryInfos;
    TSoftObjectPtr<UTexture2D> m_AvoidIcons;
    TSoftObjectPtr<UTexture2D> m_ParryIcons;
    TSoftObjectPtr<UTexture2D> m_AbsorIcon;
    TSoftObjectPtr<UTexture2D> m_GuardBreakIcon;
    TSoftObjectPtr<UTexture2D> m_DiscipleIcon;
    FEquipmentCategoryInfos m_GameModeInfos;
    TArray<FControllerIcons> m_ControllerIcons;
    FControllerIcons m_DefaultControllerIcons;
    class UTexture2D* m_QuadrantSelectionIcons;
    FIconTextures m_QuadrantIcons;
    FIconTextures m_StanceIcons;

    class UTexture2D* BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle);
    class UTexture2D* BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant);
    class UTexture2D* BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle);
    void BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _outInfos);
    FString BPF_GetControllerKeyIconDesc(const FControllerKeyIcons& _slot);
    FString BPF_GetControllerIconsDesc(const FControllerIcons& _icons);
    FString BPF_GetControllerAxisIconDesc(const FControllerAxisIcons& _slot);
    TSoftObjectPtr<UTexture2D> BPF_GetAttackParryIcon(EParrySide _eParrySide);
    TSoftObjectPtr<UTexture2D> BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType);
};

class UMenuIconsDB : public UDataAsset
{
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotDefaultIcons;
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotSelectedIcons;
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemDefaultIcons;
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemSelectedIcons;
    TSoftObjectPtr<UTexture2D> m_EmptyMiniWeaponIcon;
    TArray<TSoftObjectPtr<UTexture2D>> m_FightingStyleMiniIcons;
    TArray<FControllerIcons> m_ControllerIcons;
    FControllerIcons m_DefaultControllerIcons;
    FEquipmentCategoryInfos m_EmptyWeaponFamilyInfos;

    FControllerIcons GetControllerIcons(FName _controllerType);
};

class UMessageFeedbackUserWidget : public USCUserWidget
{
    class ABaseReplayController* m_Controller;
    EMessageReason m_eShowForReason;

    bool BPF_IsActive();
    void BPE_Show(bool _bHasActiveMessage);
};

class UMessageManager : public UObject
{
    class UMessengerComponent* m_MessengerComponent;

};

class UMessageNotification : public UBaseNotification
{
    FText m_Message;

    class UMessageNotification* BPF_Init(FText _message);
};

class UMessengerComponent : public UActorComponent
{
};

class UMMCPrepFocusCooldown : public UGameplayModMagnitudeCalculation
{
};

class UMovableActionCondition : public UBaseActorCondition
{
    InputAction m_HasAction;
    bool m_bIgnoreNonMovables;

};

class UMovableInteractionComponent : public UInteractionObjectComponent
{
    FMovableInteractionComponentOnPushObject OnPushObject;
    void UseObject(class APlayerController* PlayerController);
    FMovableInteractionComponentOnThrowObject OnThrowObject;
    void UseObject(class APlayerController* PlayerController);
    FMovableInteractionComponentOnPickUpObject OnPickUpObject;
    void UseObject(class APlayerController* PlayerController);
    TArray<InputAction> m_aInputActions;
    float m_fShowInteractionRange;

};

class UMoveInterruptAbility : public USCGameplayAbility
{
};

class UMovementCapsuleOrderService : public UOrderService
{
    float m_fTargetHalfHeight;
    float m_fTargetRadius;
    class UCurveFloat* m_Blend;

};

class UMovementFocusUpdateBTService : public UBTService
{
};

class UMovementModeCondition : public UBaseActorCondition
{
    TEnumAsByte<EMovementMode> m_eMovementMode;

};

class UMovementModeNotify : public USCAnimNotify
{
    TEnumAsByte<EMovementMode> m_eDesiredMode;

};

class UMovementModeNotifyState : public USCAnimNotifyState
{
    TEnumAsByte<EMovementMode> m_eEnterMovementMode;
    TEnumAsByte<EMovementMode> m_eExitMovementMode;

};

class UMovementModeOrderService : public UOrderService
{
    TEnumAsByte<EMovementMode> m_eMovementMode;

};

class UMoveSpeedOrderService : public UOrderService
{
    FName m_CurveName;
    float m_fSpeedStateBlendDuration;

};

class UMoveStatusCondition : public UBaseActorCondition
{
    EMoveStatus m_eMoveStatus;

};

class UMoveToTargetNextAttackRangeBTTask : public UBTTask_MoveTo
{
};

class UMovieSceneRetargetingOverrideSection : public UMovieSceneSection
{
    class UWGRetargetingOverrideData* m_RetargetingOverrideData;

};

class UMovieSceneRetargetingOverrideTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> m_Sections;

};

class UMovieSceneSubtitlesSection : public UMovieSceneAkAudioEventSection
{
    FText Subtitle;
    bool m_bIsMCSpeaking;

};

class UMovieSceneSubtitlesTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieWidget : public UUserWidget
{
    class UMediaTexture* m_MediaTexture;
    class UImage* m_WidgetTorender;
    FMovieWidgetOnEndReached OnEndReached;
    void OnEndReached();
    class UMediaPlayer* m_MediaPlayer;

    void OnEndReached__DelegateSignature();
    void MediaOpenedCallback(FString _url);
    void MediaEndCallback();
    bool BPF_OpenMovie(FString _url, bool _bLooping);
    void BPF_CloseMovie();
};

class UOrderParams : public UObject
{
};

class UNetOrderStructHelper : public UBlueprintFunctionLibrary
{

    bool GetBaseNetOrderStruct(class UOrderComponent* _OrderComponent, uint8 _uiOrderId, bool _bCheck, FNetOrderStruct& _outNetOrderStruct);
};

struct FBaseAttackDataRow : public FTableRowBase
{
    FName m_Name;
    FText m_RealAttackName;

};

struct FAttackDataRow : public FBaseAttackDataRow
{
    TSoftObjectPtr<UAnimationAsset> m_Anim;
    bool m_bCanBeMirrored;
    EAttackMirroringMethod m_eMirroringMethod;
    float m_fMirrorUseNextFootMarkerThreshold;
    EQuadrantTypes m_eStartQuadrant;
    EQuadrantTypes m_eEndQuadrant;
    float m_fMeasuredForwardMovement;
    float m_fMovementRightLength;
    bool m_bDirectRightMovementFollow;
    int32 m_iLastBuildupFrame;
    float m_fHitFrame;
    bool m_bStrikelessAttack;

};

struct FNetOrderStructAttack : public FNetOrderStruct
{
    FAttackRequest m_AttackRequest;
    FAttackDataRow m_AttackData;
    bool m_bIsMirrorAnimToUse;

};

class UOrderAttackParams : public UOrderParams
{
    FNetOrderStructAttack m_Params;
    FNetOrderStructAttack m_TransientParams;

};

struct FNetOrderStructDash : public FNetOrderStructPlayAnim
{
    FVector m_vDirection;

};

class UOrderDashParams : public UOrderParams
{
    FNetOrderStructDash m_Params;
    FNetOrderStructDash m_TransientParams;

};

class UOrderPlayAnimParams : public UOrderParams
{
    FNetOrderStructPlayAnim m_Params;
    FNetOrderStructPlayAnim m_TransientParams;

};

struct FTraversalInfo
{
    TWeakObjectPtr<class UTraversalComponent> m_traversalComponent;
    FVector m_vTraversalStartPos;
    FVector m_vTraversalEndPos;
    float m_fTraversalLength;
    float m_fTraversalHeight;
    ETraversalEntryType m_eEntryType;
    ECharacterTraversalType m_eType;
    bool m_bClimbWithFence;
    TWeakObjectPtr<class UTraversalComponent> m_TraversalFenceOnTop;
    bool m_bTraversalOnStaticMesh;

};

struct FNetOrderStructTraversal : public FNetOrderStruct
{
    FTraversalInfo m_TraversalInfo;
    FHitBox m_FallHit;

};

class UOrderTraversalParams : public UOrderParams
{
    FNetOrderStructTraversal m_Params;
    FNetOrderStructTraversal m_TransientParams;
    ETraversalEntryType m_eForceEntryType;

};

struct FNetOrderStructWallJumpAttack : public FNetOrderStructPlayAnim
{
    EWallJumpAttackPhase m_eCurrentWallJumpPhase;

};

class UOrderWallJumpAttackParams : public UOrderParams
{
    FNetOrderStructWallJumpAttack m_Params;
    FNetOrderStructWallJumpAttack m_TransientParams;

};

struct FInventorySearchFilter
{
    EEquipmentSlot m_eSlot;
    bool m_bOutfitsOnly;
    bool m_bOnlyNewItems;
    bool m_bIgnoreMentoringItems;

};

class UNewNotificationWidget : public USCUserWidget
{
    EAttackLearningState m_eAttackLearningState;
    FInventorySearchFilter m_InventoryItemFilter;
    TArray<ECharacterProgressionRewardTypes> m_eProgressionRewards;
    bool m_bAlwaysVisible;
    FText m_displayedText;

    void OnStatsChanged();
    void BPF_SetNotifyProgressionRewards(const TArray<ECharacterProgressionRewardTypes>& _rewards);
    void BPF_SetNotifyNewSparePoints(bool _bNewSparePoints);
    void BPF_SetNotifyNewAttacks(bool _bNotify);
    void BPF_Initialize(const TArray<ECharacterProgressionRewardTypes>& _rewards, const FInventorySearchFilter& _inventoryFilter, const TArray<EButtonNotificationType>& _notifications);
    void BPF_Init(TArray<ECharacterProgressionRewardTypes> _rewards, FInventorySearchFilter _inventoryFilter, bool _bNewSparePoints, bool _bNewAttacks, bool _bNewInventoryItems, bool _bNewEmotes, bool _bNewIntros);
    void BPE_Show();
};

class UNotifyAttackFinishedBTTask : public UBTTaskNode
{
};

class UNotifyAttackStartedBTTask : public USCBTTaskNode
{
};

class UOptionListenerComponent : public UActorComponent
{
    FOptionListenerComponentOnOptionChanged OnOptionChanged;
    void OnOptionChangedDynamicDelegate(EGameOptionTypes _eOptionType);

    void ReceiveOnOptionChanged(EGameOptionTypes _eOptionType);
    void OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
};

class UOptionsMenu : public UMenuWidget
{
};

class UOrderAnimSyncHelpers : public UBlueprintFunctionLibrary
{

    int32 BPF_GenerateAnimSyncID();
};

struct FOrderServiceInserted
{
    int32 m_iInsertionIndex;
    FOrderServiceInfos m_OrderService;

};

struct FOrderServiceInfosList
{
    TArray<class TSubclassOf<UOrderPresetDB>> m_Presets;
    TArray<FOrderServiceInfos> m_Services;
    TArray<FOrderServiceInserted> m_InsertedServices;

};

class UOrderDB : public UObject
{
    EOrderType m_eOrderType;
    FSCUserDefinedEnumHandler m_BlueprintID;
    EFightingActionState m_ePushFightingStateOnStart;
    bool m_bPopFightingStateOnStop;
    bool m_bIsStunOrder;
    bool m_bDelayHitsWhenStarting;
    EVisibilityBasedAnimTickOption m_eVisibilityBasedAnimTickOption;
    bool m_bAnimgraphShouldAlwaysTick;
    bool m_bEnableIK;
    bool m_bOverrideLookAtApplyMode;
    ELookAtApplyMode m_eOverridenLookAtApplyMode;
    bool m_bOverrideLookAtRefDirMode;
    ELookAtRefDirMode m_eOverridenLookAtRefDirMode;
    FDynamicBlendSettings m_LocoToOrderBlendSettings;
    FDynamicBlendSettings m_OrderToOrderBlendSettings;
    FDynamicBlendSettings m_OrderToLocoBlendSettings;
    bool m_bOrderToLocoUseSpeedStateSpeedForStartingSpeedBlend;
    FOrderServiceInfosList m_OrderServices;

    void BPE_OnOrderStopped(uint8 _uiOrderId, class UOrderComponent* _component);
    void BPE_OnOrderStarted(uint8 _uiOrderId, class UOrderComponent* _component);
    void BPE_OnOrderCanceled(uint8 _uiOrderId, class UOrderComponent* _component);
};

class UOrderAttackDB : public UOrderDB
{
    float m_fRepulsionSpeed;

};

class UOrderAttackGenericParams : public UOrderParams
{
    FNetOrderStructPlayAnim m_Params;
    FNetOrderStructPlayAnim m_TransientParams;

};

class UOrderAvoidedDB : public UOrderDB
{
    TSubclassOf<class UOrderServiceActivationConditions> m_activationCondition;
    bool m_bInvertCondition;
    FAvailabilityLayerContainer m_AvailabilityInfo;

};

class UOrderDelegateHandler : public UObject
{
    FOrderDelegateHandler_OnStarting m_OnStarting;
    void OrderStartingDynamicDelegate(uint8 _ID, class UOrderComponent* _OrderComponent);
    FOrderDelegateHandler_OnStarted m_OnStarted;
    void OrderStartingDynamicDelegate(uint8 _ID, class UOrderComponent* _OrderComponent);
    FOrderDelegateHandler_OnEnding m_OnEnding;
    void OrderStartingDynamicDelegate(uint8 _ID, class UOrderComponent* _OrderComponent);
    FOrderDelegateHandler_OnEnded m_OnEnded;
    void OrderStartingDynamicDelegate(uint8 _ID, class UOrderComponent* _OrderComponent);
    FOrderDelegateHandler_OnCanceled m_OnCanceled;
    void OrderStartingDynamicDelegate(uint8 _ID, class UOrderComponent* _OrderComponent);

};

class UOrderCondition : public UBaseActorCondition
{
    EOrderType m_eOrderType;
    FSCUserDefinedEnumHandler m_BPOrderType;
    EOrderAccessMode m_eAccessMode;

};

class UOrderPresetDB : public UObject
{
    TArray<FOrderServiceInfos> m_Services;

};

class UOrderDBSet : public UObject
{
    TArray<class TSubclassOf<UOrderDB>> m_Orders;

};

class UOrderDeflectedDB : public UOrderDB
{
    TSubclassOf<class UOrderServiceActivationConditions> m_activationCondition;
    bool m_bInvertCondition;
    FAvailabilityLayerContainer m_AvailabilityInfo;

};

class UOrderFallFromPushedDB : public UOrderDB
{
    float m_fMinFallVelocity;
    float m_fMaxFallVelocity;
    bool m_bRedirectToSlopeDir;
    float m_fDelayBeforeEnteringFallFromPushed;

};

struct FFallOnSlopeConfiguration
{
    float m_fWakeVelocityThreshold;
    float m_fMaxDuration;
    class UCurveFloat* m_ImpulseCurve;
    float m_fAngularDamping;
    float m_fLinearDamping;

};

class UOrderFallOnSlopeDB : public UOrderDB
{
    bool m_bPhysicAnimEnabled;
    FFallOnSlopeConfiguration m_SlopeConfiguration;
    FFallOnSlopeConfiguration m_GroundConfiguration;
    float m_fFallVelocityThreshold;
    float m_fSlopeGroundAngleThreshold;
    float m_fSlopeRampAngleThreshold;
    FName m_PhysicalAnimationProfile;
    float m_fActorRotationFromPelvisForward;
    float m_fFloorDetectionLengthFromPelvis;
    float m_fPelvisVerticalOffset;
    FCollisionProfileName m_RagdollCollisionProfileName;
    class UPhysicsAsset* m_PhysicAsset;
    float m_fStartupDuration;
    float m_fVelocityPushCoef;
    float m_fTotalMaxDuration;
    class UAnimSequence* m_Loop;
    TMap<class ERagdollMeshOrientation, class FAnimContainer> m_RecoveryAnims;
    bool m_bPlayInstantRecoveryAnim;
    bool m_bPlayInstantRecoveryAnimOnPlaneGround;
    FAnimContainer m_InstantRecoveryAnim;
    FName m_PoseSnapshotName;
    bool m_bMirrorFallOnRightSide;
    class UAkRtpc* m_RTCPSpeed;
    FFloatRange m_RTCPMinMaxVelocity;
    FName m_RTPCName;
    bool m_bCallRTPCOnSelf;

    void BPE_StopBodyRollLoop(class UObject* _owner, uint8 _uiOrderId);
    void BPE_StartBodyRollLoop(class UObject* _owner, uint8 _uiOrderId, const class UPhysicalMaterial* _floorMaterial, bool _bInitialTrace);
    void BPE_BodyRollLoopMaterialSwitch(class UObject* _owner, uint8 _uiOrderId, const class UPhysicalMaterial* _floorMaterial);
};

class UOrderFallOnSlopeEntryDB : public UOrderDB
{
    FAnimContainer m_OnHitSlope;
    FRuntimeFloatCurve m_VelocityBlendRatio;
    bool m_bForceVelocity;
    float m_fForceVelocity;
    bool m_bForceVelocityOnPlaneGround;
    float m_fForceVelocityOnPlaneGround;
    TSubclassOf<class UDetectFallOrderService> m_SlopeDetectionDB;

};

struct FFidgetDBDescription
{
    class UFidgetDB* m_FidgetDB;
    class UFidgetDB* m_OnAlertLevelChangedFidgetDB;
    uint32 m_uiAllowedSpeedState;
    FBlendProfileBySpeedStateStruct m_BlendProfiles;

};

class UOrderFidgetDB : public UOrderDB
{
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    class UDataTable* m_BlendProfileBySpeedStateTable;
    float m_fSyncFidgetMirrorWithQuadrantCooldown;
    FFidgetDBDescription m_FidgetDBs;
    class UFidgetDB* m_TakeOutWeaponFidgetDB;
    float m_fHideWeaponPostBlendRatio;
    TArray<FEditableOrderType> m_eTakeOutWeaponPostOrderList;
    bool m_bPlayAlertFidgetIfMoveStatusMatch;
    bool m_bPlayAlertFidgetIfMoveStatusDoesntMatch;
    float m_fFidgetDefaultBlendInDuration;
    float m_fFidgetMaxBlendInDurationByAnimPercent;
    float m_fFidgetDefaultBlendOutDuration;
    float m_fFidgetQuickBlendOutDuration;

};

class UOrderHasTargetActivationCondition : public UOrderServiceActivationConditions
{
};

class UOrderHittedDB : public UOrderDB
{
};

class UOrderHittedGenericDB : public UOrderDB
{
};

class UOrderHittedGuardTypeCondition : public UOrderServiceActivationConditions
{
    bool m_bCheckWasGuarded;
    bool m_bWasGuarded;
    bool m_bCheckGuardBreak;
    bool m_bWasGuardBroken;
    bool m_bCheckGuardType;
    EGuardType m_eGuardType;

};

struct FNetStructOpeningDoor : public FNetOrderStructPlayAnimVariableWeight
{
    class UAnimationAsset* m_OpeningDoorAnimAsset;
    class UAnimationAsset* m_ClosingDoorAnimAsset;
    bool m_bInteraction1;
    FAnimContainer m_AnimContainerToPlayWhenCarryingWeapon;
    FSCUserDefinedEnumHandler m_VariableWeightLayerWhenCarryingWeapon;

};

class UOrderOpeningDoorParams : public UOrderParams
{
    FNetStructOpeningDoor m_Params;
    FNetStructOpeningDoor m_TransientParams;

};

class UOrderParamsHitActionLauncher : public UHitActionLauncher
{
    FUOrderParamsClassInstance m_OrderParamsInstance;
    bool m_bApplyDamage;
    bool m_bNotifyHitted;
    bool m_bApplyFreezeFrame;

};

class UOrderPickupObjectHelper : public UBlueprintFunctionLibrary
{

    bool BPF_SetupPickupOrderParamsAndPlay(class AFightingCharacter* _fightingChar, class AActor* _actorToPickup, class UAnimSequence* _animSequence, FSCUserDefinedEnumHandler _variableWeightLayer, bool _bPushPopActionState, bool _bMirror);
};

class UOrderPlayAnimHelper : public UBlueprintFunctionLibrary
{

    void BPF_GetOrderAnimContainer(class UOrderComponent* _OrderComponent, uint8 _uiID, FAnimContainer& _outAnimContainer);
};

class UOrderPlayAnimVariableWeightDB : public UOrderDB
{
    bool m_bUpdateQuadrant;

};

class URedirectToTargetOrderService : public UOrderService
{
    TSubclassOf<class UOrderService> m_StartAfterTargetService;
    bool m_bUseAnimRootMotion;
    bool m_bApplyEvenIfNoRootRotation;
    bool m_bForceAnimRotationWay;
    ESCRotationWay m_eRootRotationWay;
    bool m_bUseTargetableActorComponentLocation;
    bool m_bWantLock;
    bool m_bUseFakeDirIfNoTarget;
    bool m_bInvertDirOnBackQuadrant;
    float m_fRedirectFrames;
    float m_fMaxAngleFromTarget;
    float m_fMaxAngleFromStart;
    ERedirectToTargetOrigin m_eRedirectionOrigin;
    EOrientationApplyMethod m_eOrientationApplyMethod;

    FVector BPF_GetRedirectionOrigin(const FVector& _target, const FBPOrderServiceInstance& _instance);
    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
    float BPE_GetMaxAngularSpeed(const FBPOrderServiceInstance& _instance);
};

class URedirectToTrackedTargetOrderService : public URedirectToTargetOrderService
{
};

class URagingBullRedirectToTrackedTargetOrderService : public URedirectToTrackedTargetOrderService
{
};

class UOrderServiceRagingBullPhaseActivationCondition : public UOrderServiceActivationConditions
{
    uint8 m_uiAllowedPhases;

};

class UOrderRunningDecorator : public USCBTDecorator
{
    TArray<EOrderType> m_eOrders;

};

class UOrderServiceFrameRangeRequest : public UObject
{

    FFloatRange BPE_GetFrameRange(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

class UOrderServiceFrameRangeRequestByDodgeType : public UOrderServiceFrameRangeRequest
{
    FFloatRange m_frameRanges;

};

class UOrderServiceInstanceHelper : public UBlueprintFunctionLibrary
{

    void BPF_GetOrderInstanceInfos(const FBPOrderServiceInstance& _orderServiceInstance, uint8& _uiOutOrder, EOrderType& _eOutType, class UOrderComponent*& _OrderComponent);
    class UOrderService* BPF_FindOrderServiceByClass(const FBPOrderServiceInstance& _myOrderServiceInstance, TSubclassOf<class UOrderService> _class, FBPOrderServiceInstance& _resultOrderServiceInstance);
};

class UOrderServiceIsPlayingActivationCondition : public UOrderServiceActivationConditions
{
    TSubclassOf<class UOrderService> m_InstanceClass;
    bool m_bStopWhenOrderServiceRunning;

};

class UOrderTargetCondition : public UBaseActorTargetCondition
{
    EOrderType m_eOrderType;
    bool m_bTargetShouldTargetSelf;
    EOrderType m_eRequiredTargetOrderType;

};

class UOrderTauntHelper : public UBlueprintFunctionLibrary
{

    void BP_TriggerTauntEffects(class AActor* _Instigator);
};

class UOrderTimeCondition : public UBaseActorCondition
{
    FEditableOrderType m_OrderType;
    EOrderAccessMode m_eAccessMode;
    FFloatRange m_ValidTimeRange;

};

class UOrderTraversalDB : public UOrderDB
{
    bool m_bCanBeHitted;

    void BPE_HittedFallOnSlopeEntryAnim(const FNetOrderStructTraversal& _netOrderStruct, FAnimContainer& _outResult);
};

class UTraversalPushExitNotifyState : public USCAnimNotifyState
{
};

class UOrderTraversalPushDB : public UOrderDB
{
    float m_fMarginAfterTraversalEnd;
    FHitBox m_HitOnLandedWithoutFall;
    FHitBox m_HitOnLethalFall;
    float m_fMaxLandingDistanceFromNavmesh;
    float m_fFallVelocityVariation;

};

class UOrderTypeHelper : public UBlueprintFunctionLibrary
{

    FOrderType MakeOrderTypeFromEnum(EOrderType _eOrderType);
    FOrderType MakeOrderTypeFromBP(const class ABaseCharacter* _owner, FName _OrderType);
    FOrderType MakeFromEditableOrderType(const class ABaseCharacter*& _owner, const FEditableOrderType& _OrderType);
};

class UOutsideCirclesLifeBTTaskNode : public UBTTaskNode
{
};

class UOverwriteDropOnBreakMomentNotify : public USCAnimNotify
{
};

class UPagingScrollBox : public UScrollBox
{
    FPagingScrollBox_OnItemClicked m_OnItemClicked;
    void ItemClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FPagingScrollBox_OnItemRightClicked m_OnItemRightClicked;
    void ItemRightClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FPagingScrollBox_OnItemFocused m_OnItemFocused;
    void ItemDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FPagingScrollBox_OnItemLostFocus m_OnItemLostFocus;
    void ItemDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FPagingScrollBox_OnItemSelected m_OnItemSelected;
    void ItemSelectedDelegate(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    FPagingScrollBox_OnItemVisible m_OnItemVisible;
    void ItemVisibleDelegate(int32 _iDataIndex, class UUserWidget* _cell);
    FPagingScrollBox_ItemPreviewButtonPressed m_ItemPreviewButtonPressed;
    void ItemPreviewButtonPressed();
    int32 m_iLoadedRowCount;
    TSubclassOf<class USCUserWidget> m_CellClass;
    TArray<class UWidget*> m_Headers;

    void OnItemSelected(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    void OnItemRightClicked(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnItemPreviewButtonPressedCallback();
    void OnItemLostFocus(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnItemFocused(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnItemClicked(class UButtonUserWidget* _button, bool _bWithMouse);
    void ItemVisibleDelegate__DelegateSignature(int32 _iDataIndex, class UUserWidget* _cell);
    void ItemPreviewButtonPressed__DelegateSignature();
    class UUserWidget* BPF_GetWidgetFromSectionDataIndex(int32 _iSection, int32 _iDataIndex);
    class UUserWidget* BPF_GetWidgetFromDataIndex(int32 _iIndex);
    int32 BPF_GetWidgetDataIndex(const int32 iRow, const int32 iCol);
    int32 BPF_GetRowDataIndex(const int32 iRow);
    class UUserWidget* BPF_GetLastVisibleWidgetFromSection(int32 _iSection);
    class UUserWidget* BPF_GetLastVisibleCell();
    int32 BPF_GetItemCount();
    int32 BPF_GetDataIndexFromWidget(class UUserWidget* _widget);
};

class UParriedBTTask : public UBTTaskNode
{
};

struct FParryRequestInfos
{
    EQuadrantTypes m_eQuadrant;
    ESCCardinalPoints m_eCardinal;
    bool m_bFromDown;
    bool m_bHasAWeapon;
    bool m_bIsWeaponOnOppositeHand;

};

class UParryAnimRequest : public UObject
{

    void BPE_GetPickupOnParryAnim(const FHitRequest& _request, class AFightingCharacter* _character, FAnimContainer& _outAnim);
    void BPE_GetParryAnimWeapon(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
    void BPE_GetParryAnim(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
};

class UParryBTTask : public UAIDefenseBTTask
{
};

struct FParryAnimationParryQuadrantArray
{
    FAnimContainer m_Array;

};

struct FParryAnimationCharacterQuadrantArray
{
    FParryAnimationParryQuadrantArray m_Array;

};

struct FParriedProfile
{
    float m_fParriedDuration;
    ESCBlendType m_eParriedReorientationBlendType;
    class UCurveFloat* m_ParriedReorientationCurve;

};

class UParryDB : public UDataAsset
{
    FParryAnimationCharacterQuadrantArray m_ParryAnimations;
    TSubclassOf<class UParryMatch> m_ParryMatchClass;
    float m_fParryDuration;
    int32 m_iFrameBuildUp;
    int32 m_iFrameRelease;
    class UCurveFloat* m_ParryMovementdynamic;
    bool m_bParryConsumStamina;
    bool m_bParryConsumStaminaWhenSucceed;
    bool m_bOverrideAnimDynamicByCurve;
    float m_fTrackingDuration;
    float m_fParrySelectionAxisOffset;
    class UAvailabilityLayerData* m_ParryLayerDataOnSucceed;
    TArray<FParriedProfile> m_ParriedProfile;
    class UCurveFloat* m_ParriedAttackScaleCurve;
    float m_fFrontBackMargin;
    float m_fLeftRightMargin;
    float m_fHighLowMargin;
    float m_fFrontBackOffset;
    float m_fLeftRightOffset;
    float m_fHighLowOffset;
    float m_fGuardGaugeCost;
    bool m_bHasImpactOnGuardGauge;
    class UParryPropertyDB* m_DefaultParryPropertyDB;
    class UParryMatch* m_ParryMatch;

};

class UParryFromDownAbility : public USCGameplayAbility
{
    bool m_bLaunchDownRecovery;
    FAnimContainer m_animRecoveryOverriden;

};

class UParryMatch : public UObject
{

    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin);
    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin);
};

class UParryPropertyDB : public USpecialAbilityPropertyDB
{
};

class UParryToHitActionOrderService : public UOrderService
{
    TSubclassOf<class UHitActionLauncher> m_hitActionLauncher;
    TArray<class UBaseHitDetectionDB*> m_IgnoringHitDetectionDBs;
    FGameplayTagContainer m_IgnoringGameplayTagContainer;

    void BPE_OnParryFailed(FBPOrderServiceInstance _description);
};

class UParryToHitOrderService : public UOrderService
{
    FHitBox m_HitToApply;
    float m_fFreezeFrames;

    void BPE_GetParryAnimations(const FHitDescription& _hitDescription, class AFightingCharacter* _parriyer, FAnimContainer& _outParryierAnim, FHittedAnimContainer& _outParriedAnim);
};

struct FParryType
{
    EParryDirection m_eParryDirection;
    EParrySide m_eParrySide;
    EParryHeight m_eParryHeight;

};

class UParryWindowNotifyState : public USCAnimNotifyState
{
    TArray<FParryType> m_ParryTypeArray;
    class UParryPropertyDB* m_ParryPropertyDB;

};

struct FPatrolControlPoint
{
    FVector m_vLocalPosition;
    bool m_bOverrideActivityAnimation;
    FName m_ActivityName;
    FAnimContainer m_ActivityAnimContainer;
    bool m_bOverrideActivityDuration;
    float m_fOverridenActivityDuration;
    ESpeedState m_eSpeedStateToUse;

};

class APathPatrol : public AActor
{
    TArray<FPatrolControlPoint> m_patrolControlPoints;
    EPatrolType m_ePatrolType;
    class AActor* m_lookAtTarget;

};

class UPatrolBTTask : public UBTTaskNode
{
    FGameplayTag m_MovingAIActionTag;

};

class UPauseScoringOrderService : public UOrderService
{
    bool m_bPauseEfficiency;
    bool m_bRestartEfficiencyTimers;
    bool m_bPauseBonusMalus;
    bool m_bRestartBonusMalusTimers;

};

class UPelvisDirectionComputationParamsNotifyState : public UAnimNotifyState
{
    FPelvisDirectionComputationParams m_Params;

};

class UPelvisDirectionComputationParamsOrderService : public UOrderService
{
    bool m_bUseLastFrameLocation;
    FPelvisDirectionComputationParams m_Params;

};

struct FPendingAttackXP
{
};

class UFOpponentAttackXPHelper : public UBlueprintFunctionLibrary
{

    int32 BPF_GetXPValueByType(const FPendingAttackXP& _XP, EPendingttackXPType _eType);
};

class UPerPlatformCanvaPanelSlot : public UCanvasPanelSlot
{
    FAnchorData NormalLayoutData;
    FAnchorData SmallScreenLayoutData;

};

class UPerPlatformCanvasPanel : public UCanvasPanel
{
};

class UPerPlatformComboBox : public UComboBoxString
{
    int32 NormalSize;
    int32 SmallScreenSize;
    FPerPlatformComboBoxOnCultureChanged OnCultureChanged;
    void OnCultureChanged();

};

class UPerPlatformEditableTextBox : public UEditableTextBox
{
    int32 NormalSize;
    int32 SmallScreenSize;

};

class UPerPlatformImage : public UImage
{
    FVector2D NormalSize;
    FVector2D SmallScreenSize;

    void RefreshGUIs();
};

class UPerPlatformMultiLineEditableTextBox : public UMultiLineEditableText
{
    int32 NormalSize;
    int32 SmallScreenSize;

};

class UPerPlatformRichTextBlock : public URichTextBlock
{
    class UDataTable* NormalTextStyleSet;
    class UDataTable* SmallScreenTextStyleSet;

};

class UPerPlatformScaleBox : public UScaleBox
{
    TEnumAsByte<EStretch::Type> NormalStretch;
    TEnumAsByte<EStretch::Type> SmallScreenStretch;
    TEnumAsByte<EStretchDirection::Type> NormalStretchDirection;
    TEnumAsByte<EStretchDirection::Type> SmallScreenStretchDirection;
    float NormalUserSpecifiedScale;
    float SmallScreenUserSpecifiedScale;
    bool NormalIgnoreInheritedScale;
    bool SmallScreenIgnoreInheritedScale;

};

class UPerPlatformScaleBoxSlot : public UScaleBoxSlot
{
    FMargin NormalPadding;
    FMargin SmallScreenPadding;
    TEnumAsByte<EHorizontalAlignment> NormalHorizontalAlignment;
    TEnumAsByte<EHorizontalAlignment> SmallScreenHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> NormalVerticalAlignment;
    TEnumAsByte<EVerticalAlignment> SmallScreenVerticalAlignment;

};

class UPerPlatformSizeBox : public USizeBox
{
    float NormalWidthOverride;
    float SmallScreenWidthOverride;
    float NormalHeightOverride;
    float SmallScreenHeightOverride;

};

class UPerPlatformTextBlock : public UTextBlock
{
    int32 NormalSize;
    int32 SmallScreenSize;
    float NormalWrapTextAt;
    float SmallScreenWrapTextAt;
    int32 NormalLetterSpacing;
    int32 SmallScreenLetterSpacing;

};

class UPerPlatformWidgetLoader : public UPanelWidget
{
};

class UPerPlatformWidgetLoaderSlot : public UWidgetSwitcherSlot
{
    EWidgetPlatform Platform;

};

class IPerPlatformWidget : public IInterface
{
};

class UPhysicAnimOrderService : public UOrderService
{
    bool m_bEnabled;
    FCollisionProfileName m_CollisionProfileName;
    FName m_PhysicAnimProfile;
    TArray<FBoneReference> m_BaseBones;
    bool m_bRequireCurve;
    FName m_CurveName;
    float m_fBlendOutDuration;

};

class UPickUpMenu : public UHUDUserWidget
{
    class UResourcesTexturesData* m_RessourcesDataAsset;

    void LoadPictoCallback();
    void BPE_OnClose();
};

class UPickUpMenuItem : public UUserWidget
{
};

class UPickupObjectBTTask : public UBTTaskNode
{
};

class UPickupObjectNotify : public USCAnimNotify
{
};

class UPivotFootData : public UDataAsset
{
    class UCurveFloat* m_MinSpeedCurve;
    class UCurveFloat* m_DurationCurve;
    class UCurveFloat* m_DecelAccelRatioCurve;
    class UCurveFloat* m_AccelCurve;
    class UCurveFloat* m_DecelCurve;
    class UCurveFloat* m_OrientationCurve;
    FFloatRange m_TurnAllowanceOnAccelRange;
    FFloatRange m_TransitionAllowanceOnAccelRange;

};

class USpeedPivotFootData : public UDataAsset
{
    class UPivotFootData* m_MoveData;
    class UPivotFootData* m_StartData;
    class UPivotFootData* m_StopData;

};

class UPlayAnimSubAnimInstance : public USCAnimInstance
{
    uint8 m_uiSubStateId;
    EOrderType m_eOrderType;
    FAnimContainer m_AnimContainerToPlay;
    FName m_IKSubInstanceTag;
    int32 m_iSubStateID;
    uint8 m_uiOrderID;
    float m_fGlobalAlpha;
    bool m_bIKEnabled;

    void BPE_SetTargetVerticalOffset(float _fVerticalOffet);
};

struct FAnimStructAttack : public FAnimStructBase
{
    bool m_bStartBlendOut1;
    bool m_bStartBlendOut2;

};

struct FAnimStructOverride : public FAnimStructBase
{
    int32 m_iAnimIndex;

};

struct FVariableWeightInfo
{
    TArray<FVariableWeightLayerToBoneMask> m_layers;
    TArray<FVariableWeightLayerToBoneMask> m_pendingDelete;

};

struct FAnimStruct4
{
    bool m_bInProgress1;
    bool m_bInProgress2;
    bool m_bInProgress3;
    bool m_bInProgress4;
    bool m_bInProgress1Or2Or3Or4;
    FVariableWeightInfo m_variableWeightLayers1;
    FVariableWeightInfo m_variableWeightLayers2;
    FVariableWeightInfo m_variableWeightLayers3;
    FVariableWeightInfo m_variableWeightLayers4;

};

struct FAnimStructVariableWeight : public FAnimStructBase
{
};

struct FAnimStructHandPose : public FAnimStructBase
{
    EHandPoseBlendInTypes m_eHandPoseBlendInType1;
    EHandPoseBlendInTypes m_eHandPoseBlendInType2;
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType1;
    EHandPoseBlendOutTypes m_eHandPoseBlendOutType2;

};

struct FAnimStructEmote : public FAnimStructBase
{
};

struct FSpeedDescriptionStruct
{
    float m_fBaseSpeed;
    float m_fOverrAll;
    float m_fPlayRate;

};

struct FMovementMode
{
    bool m_bNone;
    bool m_bWalking;
    bool m_bNavWalking;
    bool m_bFalling;
    bool m_bSwimming;
    bool m_bFlying;
    bool m_bCustom;
    uint8 m_replicatedMvtMode;

};

struct FBlendSpaceStructBase : public FSwapperStructBase
{
    class UBlendSpaceBase* m_BlendSpace1;
    float m_fPlayRate1;
    FVector m_Coordinates1;
    class UBlendSpaceBase* m_BlendSpace2;
    float m_fPlayRate2;
    FVector m_Coordinates2;

};

struct FLookAtAnimHandler
{
    FAimOffsetStruct m_aimOffset0;
    FAimOffsetStruct m_aimOffset1;
    int32 m_iAimOffsetIndex;
    bool m_bLookAtEnabled;
    FVector2D m_vRawBlendSpaceParams;
    FVector2D m_vBlendSpaceParams;
    FVector2D m_vEyeBlendSpaceParams;
    FRotator m_BoneModifierRot;
    FRotator m_CompensationRot;
    bool m_bIsTargetLocationValid;
    FVector m_vTargetLocation;
    bool m_bEnableAnimationCompensation;
    float m_fMaxHeadDiffYaw;
    float m_fMaxHeadDiffPitch;
    FName m_headInWorldSpaceSaveBoneName;
    FName m_headComparaisonInWorldSpaceSaveBoneName;
    FName m_headInWorldSpacePostLookAtSaveBoneName;
    bool m_bEyesLookAtSpecificBone;
    FName m_EyesLookAtSpecificBoneName;
    ELookAtApplyMode m_eApplyMode;
    ELookAtRefDirMode m_eRefDirMode;
    float m_fAngleThreshold;
    float m_fMaxFrontAngle;
    bool m_bLookInCameraDir;
    TSubclassOf<class ULookAtAnimRequest2> m_animRequest;
    FLookAtConfig m_lookAtConfigs;
    TArray<ELookAtTargetType> m_targetPriorities;
    FLookAtModifierParams m_defaultModifierParams;
    FLookAtLimits m_boneModifierLimits;
    bool m_bInverseValuesOnBoneModifier;
    FVector2D m_vBoneModifierOffset;
    FVector2D m_vBoneModifierMultiplier;
    FLookAtLimits m_defaultLimits;
    TArray<FLookAtLocomotionLimits> m_locomotionLimits;
    TMap<class ETransitionGlobalType, class FLookAtLimits> m_transitionLimits;
    FLookAtModifierParams m_friendlyModifierParams;
    FLookAtModifierParams m_hostileInIdleModifierParams;
    uint32 m_uiFirstLocalPlayerAIBehavior;
    float m_fMaxDistFromFirstLocalPlayer;

};

struct FMoveStatus
{
    bool m_bExploration;
    bool m_bCombat;
    bool m_bNone;
    EMoveStatus m_eMoveStatus;

};

struct FSpeedState
{
    bool m_bV0;
    bool m_bV1;
    bool m_bV2;
    bool m_bV3;
    ESpeedState m_eSpeedState;

};

struct FLocomotionTransitionsResultCache
{
    bool m_bToV0;
    bool m_bToV1;
    bool m_bToV2;
    bool m_bTransitionToV0;
    bool m_bTransitionToV1;
    bool m_bTransitionToV1_MoveStatusCombat;
    bool m_bTransitionToV1_AIHack;
    bool m_bTransitionToV2;
    bool m_bTransitionToV3;
    bool m_bIsInTransition;

};

struct FAddVariableWeightInfo
{
    FName m_Name;
    bool m_bMirror;

};

struct FSetVariableWeightInfo
{
    FName m_Name;
    bool m_bBlendOut;
    bool m_bOverride;
    float m_fOverrideDuration;

};

struct FOverridenVariableWeightInfo
{
    FName m_Name;
    float m_fOverridenAlpha;

};

class UPlayerAnim : public USCAnimInstance
{
    TArray<float> m_StateWeightArray;
    TArray<float> m_VariableWeightLayerWeight;
    FAnimStructMoveTransition m_StartAnimStruct;
    FAnimStructMoveTransition m_StopAnimStruct;
    FAnimStructMoveTransition m_UTurnAnimStruct;
    FAnimStructMoveTransition m_LandingAnimStruct;
    FAnimStructMoveTransition m_TurnInPlaceAnimStruct;
    EQuadrantTypes m_eAnimQuadrant;
    float m_fFreeMoveV1V2ThresholdSpeed;
    FAnimStructAttack m_AttackStruct;
    FAnimQuadrantStruct m_QuadrantStruct;
    FAnimContainer m_IdleAnimContainerFL;
    FAnimContainer m_IdleAnimContainerFR;
    FAnimContainer m_IdleAnimContainerBR;
    FAnimContainer m_IdleAnimContainerBL;
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFL;
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFR;
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBR;
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBL;
    FBlendSpaceDirectionContainer m_LockMoveBlendSpace;
    FBlendSpaceDirectionContainer m_LockMoveUpperBodyBlendSpace;
    FAnimStructBase m_DodgeStruct;
    FAnimStructOverride m_V0OverrideStruct;
    TArray<class UAnimSequence*> m_GuardAnim;
    bool m_bGuardMirrorFrontRightBackLeft;
    TArray<class UAnimSequence*> m_GuardAnimWeapon;
    TArray<class UAnimSequence*> m_GuardPrepAnim;
    TArray<class UAnimSequence*> m_GuardPrepAnimWeapon;
    bool m_bGuardInProgress;
    float m_fGuardPrepRatio;
    FAnimStruct4 m_PlayAnimStruct;
    EOrderType m_ePlayAnimOrder;
    uint8 m_uiPlayAnimState;
    FAnimStructVariableWeight m_WeaponActionAnimStruct;
    class UAnimSequence* m_LastActionAnim;
    bool m_bLastActionAnimInMirror;
    float m_fLastActionAnimCursor;
    float m_fLastActionAnimIdealCursor;
    FAnimStructHandPose m_HandPoseAnimStruct;
    class UHandPoseDB* m_HandPoseDB;
    FAnimStructEmote m_EmoteAnimStruct;
    FVector m_vOwnerVelocity;
    float m_fOwnerVelocityLength;
    float m_fOwnerVelocityMaxForV0Anim;
    float m_fOwnerVelocityMaxForV1Anim;
    float m_fOwnerVelocityMaxForV2Anim;
    bool m_bIsBlendSpaceAngleValid;
    float m_fBlendSpaceAngle;
    float m_fBlendspaceAngleMirror;
    FSpeedDescriptionStruct m_LockMoveSpeedDescription;
    FSpeedDescriptionStruct m_FreeMoveV1SpeedDescription;
    FSpeedDescriptionStruct m_FreeMoveV2SpeedDescription;
    FSpeedDescriptionStruct m_FreeMoveV3SpeedDescription;
    float m_fProceduralLeanDeactivationDamping;
    float m_fProceduralLeanDamping;
    float m_fProceduralLeanRatio;
    float m_fProceduralLeanMaxAngle;
    float m_ProceduralLeanLerpTarget;
    FRotator m_ProceduralLeanAngleRotator;
    FMovementMode m_MovementMode;
    bool m_bCheatFlying;
    EFallLevel m_eFallLevel;
    FBlendSpaceStructBase m_PlayBlendSpaceStruct;
    FAnimStructVariableWeight m_FidgetAnimStruct;
    FAnimStructVariableWeight m_WeaponIdleAnimStruct;
    FSCUserDefinedEnumHandler m_WeaponIdleVariableWeightLayer;
    FAnimStructVariableWeight m_OpeningDoorAnimStruct;
    FAnimContainer m_PickUpAnim;
    FSCUserDefinedEnumHandler m_PickUpAnimVariableWeightLayer;
    FAnimContainer m_DropWeaponAnim;
    FSCUserDefinedEnumHandler m_DropWeaponAnimVariableWeightLayer;
    FAnimContainer m_HandSwapWeaponAnim;
    FSCUserDefinedEnumHandler m_HandSwapWeaponAnimVariableWeightLayer;
    FName m_TraversalIKAnimInstanceName;
    bool m_bProceduralLandingActive;
    bool m_bCascadeIsInSlope;
    bool m_bCascadeIsLethal;
    bool m_bRagdollInProgress;
    FName m_RagdollInProgressSnapshotName;
    float m_fWantedSpeed;
    FAnimContainer m_optimizationFrameAnimContainer;
    FAnimContainer m_FreeMoveAnimContainer;
    FAnimContainer m_FreeMoveMirroredAnimContainer;
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV1;
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV2;
    FBlendSpaceDirectionContainer m_FreeMoveBlendSpaceV3;
    FLookAtAnimHandler m_LookAtAnimHandler;
    bool m_bEyesLookAtEnabled;
    bool m_bLookAtEnabled;
    bool m_bOverridePoseWithSnapshot;
    FPoseSnapshot m_PoseSnapshotOverride;
    float m_fPoseSnapshotOverrideBlend;
    FAnimStructTraversal m_TraversalAnimStruct;
    EQuadrantTypes m_eForcedQuadrant;
    float m_fSpine1AlphaMax;
    float m_fSpine2AlphaMax;
    float m_fSpine3AlphaMax;
    float m_fSpine1Alpha;
    float m_fSpine2Alpha;
    float m_fSpine3Alpha;
    float m_fSpineModifsWeight;
    FVector m_vProceduralShakePelvisOffset;
    float m_fProceduralShakePelvisWeight;
    float m_fProceduralLandingPelvisHeight;
    bool m_bFallInProgress1;
    bool m_bFallInProgress2;
    float m_fProceduralLandingWeight;
    EMoveDirections m_eVerticalMovementDirection;
    EMoveDirections m_eHorizontalMovementDirection;
    bool m_bUseUpperBodySyncLayer;
    float m_fHandPoseBlendWeight;
    bool m_bHandPoseBlendWeightIsNullOrNegative;
    FMoveStatus m_MoveStatus;
    FSpeedState m_SpeedState;
    bool m_bOptimizationFrame;
    class UBaseMovementDB* m_BaseMovementDB;
    bool m_bCarryAnimatedWeapon;
    bool m_bCarryWeapon;
    float m_fSpeedStateAlphaV0;
    float m_fSpeedStateAlphaV1;
    float m_fSpeedStateAlphaV2;
    float m_fSpeedStateAlphaV3;
    float m_fBodyPartDesynchronizationWeight;
    FLocomotionTransitionsResultCache m_LocomotionTransitionsCache;
    float m_fSpineModifWeaponBlendDuration;
    class UCurveVector* m_ProceduralShakeCurve;
    float m_fProceduralShakePlayRate;
    float m_fProceduralShakeStrength;
    class UCurveFloat* m_ProceduralLandingCurve;
    float m_fProceduralLandingDuration;
    float m_fProceduralLandingBlendOutSpeed;
    float m_fProceduralMediumLandingAmplitudeCoef;
    float m_fProceduralMediumLandingDurationCoef;
    class UCurveFloat* m_AnimLayerByStunCurve;
    float m_fAlphaSpine1MaxNoDrunken;
    float m_fAlphaSpine2MaxNoDrunken;
    float m_fAlphaSpine3MaxNoDrunken;
    float m_fBlendSwitchWeaponFamilyDuration;
    TArray<FAddVariableWeightInfo> m_VariableWeightAlphaByLayersReplication;
    TArray<FName> m_RemoveVariableWeightAlphaByLayersReplication;
    TArray<FSetVariableWeightInfo> m_SetVariableWeightAlphaByLayersReplication;
    TArray<FOverridenVariableWeightInfo> m_VariableWeightOverridenAlphaByLayers;
    float m_fVariableWeightIntoBlendTime;
    float m_fVariableWeightOutOfBlendTime;
    TSet<FName> m_SetOfStateToIgnoreInVariableWeight;
    FName m_VariableWeightMasterStateName;
    FName m_PlayAnimSubAnimInstanceTags;
    FName m_AttackSubAnimInstanceTags;
    FName m_LookAtSubAnimInstanceTag;
    float m_fSpeedInterpolationForSpeedState;
    FSCUserDefinedEnumHandler m_LayerEnumForVariableWeight;

    void OnRep_VariableWeightAlphaByLayers();
    void OnRep_SpeedState();
    void OnRep_SetVariableWeightAlphaByLayers();
    void OnRep_RemoveVariableWeightAlphaByLayers();
    void OnRep_OverridenAlpha();
    void OnRep_MoveStatus();
    void OnRep_MovementMode();
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    bool IsV3Type(EMoveTransitionType _enumValue);
    bool IsV2Type(EMoveTransitionType _enumValue);
    bool IsV1Type(EMoveTransitionType _enumValue);
    bool IsUTurnV3Type(EMoveTransitionType _enumValue);
    bool IsUTurnV2Type(EMoveTransitionType _enumValue);
    bool IsUTurnV1Type(EMoveTransitionType _enumValue);
    bool IsUTurnType(EMoveTransitionType _enumValue);
    bool IsTurnInPlaceType(EMoveTransitionType _enumValue);
    bool IsStrafeV2Type(EMoveTransitionType _enumValue);
    bool IsStrafeV1Type(EMoveTransitionType _enumValue);
    bool IsStrafeType(EMoveTransitionType _enumValue);
    bool IsStopV3Type(EMoveTransitionType _enumValue);
    bool IsStopV2Type(EMoveTransitionType _enumValue);
    bool IsStopV1Type(EMoveTransitionType _enumValue);
    bool IsStopType(EMoveTransitionType _enumValue);
    bool IsStartV3Type(EMoveTransitionType _enumValue);
    bool IsStartV2Type(EMoveTransitionType _enumValue);
    bool IsStartV1Type(EMoveTransitionType _enumValue);
    bool IsStartType(EMoveTransitionType _enumValue);
    bool IsOrientedStartV3Type(EMoveTransitionType _enumValue);
    bool IsOrientedStartV2Type(EMoveTransitionType _enumValue);
    bool IsOrientedStartV1Type(EMoveTransitionType _enumValue);
    bool IsNorthStartV3Type(EMoveTransitionType _enumValue);
    bool IsNorthStartV2Type(EMoveTransitionType _enumValue);
    bool IsNorthStartV1Type(EMoveTransitionType _enumValue);
    bool IsNorthStartType(EMoveTransitionType _enumValue);
    bool IsLandingType(EMoveTransitionType _enumValue);
    EMoveTransitionType GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState);
    ESpeedState GetTransitionSpeedState(EMoveTransitionType _enumValue, bool _bSafe);
    ETransitionGlobalType GetTransitionGlobalType(EMoveTransitionType _eTransition);
    FVector GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    float GetStateWeight(int32 _iStateID);
    FTransform GetSavedTransformFromSaveBone(ESaveBone _eSaveBone);
    FName GetSaveBoneAsName(ESaveBone _eSaveBone);
    EMoveTransitionType GetLastUTurnTransitionType();
    EMoveTransitionType GetLastStartTransitionType();
    FVector GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    float GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID);
    void BPF_SetVariableWeightBlendDurationOverride(const FSCUserDefinedEnumHandler& _userEnum, bool _bBlendOut, bool _bOverride, float _fOverrideDuration);
    void BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha);
    void BPF_SetSpeedState(ESpeedState _eSpeedState);
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    void BPF_ResetVariableWeightInfo();
    void BPF_RemoveVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum);
    bool BPF_IsIntransition();
    float BPF_GetVariableWeightMirrorCoeff(const FSCUserDefinedEnumHandler& _userEnum);
    float BPF_GetVariableWeightAlpha(const FSCUserDefinedEnumHandler& _userEnum);
    void BPF_AddVariableWeightActivation(const FSCUserDefinedEnumHandler& _userEnum, bool _bMirror);
    void BPE_OnMoveStatusChanged();
};

struct FOutfitData
{
    TSoftObjectPtr<USkeletalMesh> m_Mesh;
    TMap<int32, TSoftObjectPtr<UMaterialInstance>> m_OverrideMaterial;
    FDataTableRowHandle m_props;

};

struct FPlayerGenderSpecificData
{
    TArray<FOutfitData> m_Outfits;
    TSoftObjectPtr<UBaseMovementDB> m_BaseMovementDB;
    TSoftClassPtr<USCCharacterPoseData> m_PoseData;

};

class UPlayerFightingComponent : public UActorComponent
{
    bool m_bIsInDialog;
    FPlayerFightingComponentOnDialogStatusChanged OnDialogStatusChanged;
    void DialogStatusChanged();
    FPlayerFightingComponentOnPropAttached OnPropAttached;
    void OnPropAttached(class AActor* _spawnedProp);
    FPlayerFightingComponentOnMeshChanged OnMeshChanged;
    void OnMeshChanged(ECharacterGender _eNewGender, bool _bMustHandlePropSpawn);
    class UEquipmentSelectionData* m_DefaultEquipmentSelection;
    float m_fLockMoveFadeDuration;
    float m_fEnemyBehindDist;
    float m_fEnemyBehindCosAngle;
    FPlayerGenderSpecificData m_ByGenderData;
    TSoftObjectPtr<USkeletalMesh> m_ManSkeletalMeshPath;
    TSoftObjectPtr<USkeletalMesh> m_WomanSkeletalMeshPath;
    TSoftObjectPtr<UBaseMovementDB> m_ManBaseMovementDBPath;
    TSoftObjectPtr<UBaseMovementDB> m_WomanBaseMovementDBPath;
    ECharacterGender m_eForcedGender;
    bool m_bFakePlayer;
    FName m_PlayerPositionMPCParameterName;
    class AActor* m_AttachedProp;
    int32 m_iOutfitIndex;

    void SetPropHidden(bool _bHidden);
    void OnTargetChangedCallback(class AActor* _oldTarget, class AActor* _newTarget);
    void OnStatsUpdated();
    void OnRep_OutfitIndex();
    void OnRep_Dialog();
    void OnPropAttached__DelegateSignature(class AActor* _spawnedProp);
    void OnMeshChanged__DelegateSignature(ECharacterGender _eNewGender, bool _bMustHandlePropSpawn);
    void OnLanded();
    void DialogStatusChanged__DelegateSignature();
    void BPF_SwapOutfit(int32 _iNewOutfitIndex, class UMaterialInterface* _forcedMaterial, bool _bSpawnProps);
    void BPF_SwapMesh(const FOutfitData& _outfitData, class UMaterialInterface* _forcedMaterial);
    void BPF_SpawnPropFromCurrentOutfit();
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);
    void BPF_ServerSetIsInDialog(bool _bInDialog);
    void BPF_RemoveProp();
    FPlayerGenderSpecificData BPF_GetCurrentGenderData();
};

class UPlayerInputCondition : public UBaseActorCondition
{
    InputAction m_eInput;
    bool m_bCheckAvailabilityLayers;
    EPlayerInputConditionTestMethod m_eTestMethod;
    FFloatRange m_AllowedVectorProjectedOnForward;

};

struct FVitalPointDataDefinition
{
    FName m_BoneToAttachBillboard;
    bool m_bOnWeapon;
    class UVitalPointData* m_VitalPointData;

};

class UPlayerScoringComponent : public UActorComponent
{

    void OnOwnerTakedownStarted(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnOwnerKilledSomething(class AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, const FDamageInfos& _damage);
    void OnOwnerAttackTaunt();
    void OnOwnerAttackFocus(class AVitalPointActor* _vitalPointSelected);
    void OnAvoidedAttackEnds(uint8 _iOrderID, class UOrderComponent* _OrderComponent);
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    void BPF_SetScoringActive(bool _bActivate);
    void BPF_SetGlobalMultiplier(float _GlobalMultiplier);
    void BPF_ResetScoringValues();
    void BPF_ResetDiminishingQueue();
    void BPF_OnKnockdownAttackStarted(uint8 _orderID, class UOrderComponent* _OrderComponent);
    float BPF_GetCurrentScore();
    float BPF_GetCurrentEfficiency();
    void BPF_ComputeHighScore(bool _bUpdateSave, float& _fCurrentSavedHighScore, float& _fCurrentLevelScore, bool& _bHighscoreIsNew);
    void BPE_ToggleFloorScore(bool _Freeze);
    bool BPE_ShouldDecrementFloorWhenFloorScoreIsZero();
    void BPE_OnUpdateFloorScore(float _FloorScore, float _MaxFloorScore);
    void BPE_OnUnbindCallbacks(class AFightingCharacter* _owner);
    void BPE_OnNewFloorReached(int32 _NewFloor, int32 _OldFloor);
    void BPE_OnNewEfficiency(float _fOld, float _fNew);
    void BPE_OnInitializeScoring();
    void BPE_OnFinalFloorReached();
    void BPE_OnBindCallbacks(class AFightingCharacter* _owner);
    bool BPE_IsSyncAttackKnockdown(const FSCUserDefinedEnumHandler& _BlueprintID);
    float BPE_GetScoreOnAIFriendlyHit();
    void BPE_GetScoreFromKill(EScoringKillType _KillType, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, class UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    void BPE_GetScoreFromHitboxRowHandle(const FDataTableRowHandle& _hitboxRawHanlde, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, class UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    void BPE_GetScoreFromAttackDB(const class UAttackDB* _AttackDB, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, class UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    void BPE_GetScoreFromAction(InputAction _action, bool& _ActionFound, float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, class UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat, bool& _ApplyMultiplierBonus);
    float BPE_GetScoreFocus(const FVitalPointDataDefinition& _VitalPointDef, class AFightingCharacter* _character);
    void BPE_GetScoreDefense(float& _ScoreValue, bool& _NeedsDiminishing, bool& _AddToQueue, class UCurveFloat*& _DiminishingReturnCurve, float& _MaxDiminishingReturn, bool& _ImpactScoreStat);
    int32 BPE_GetScoreArchetype(class UArchetypeAsset* _archetype);
    void BPE_GetMultiplierFloorValue(float _Floor, float& _FloorScoreForNextFloor, float& _FloorScoreRatioWhenEnteringFromLower, float& _FloorScoreRatioWhenEnteringFromUpper, FFloatRange& _BaseDecrementRateRange, FFloatRange& _CooldownBeforeDecrementRange);
    int32 BPE_GetMaxMultiplierFloor();
    float BPE_GetMalusOnHitStructureBrokenAI();
    float BPE_GetInactionTimeDuringInactivity();
    float BPE_GetInactionTime();
    int32 BPE_GetGlobalQueueSize();
    float BPE_GetFloorScoreGlobalMalusRatioOnMCHit();
    int32 BPE_GetEfficiencyQueueSize();
    void BPE_GetEfficiencyMalusOnMCHit(float& _EfficiencyValue, int32& _NbOfOccurences);
    float BPE_GetEfficiencyCoeffInactiveAction();
    void BPE_GetEfficiencyBoundsFromActionType(EScoringActionType _ScoringActionType, float& _MinEfficiency, float& _MaxEfficiency);
    class UCurveFloat* BPE_GetCurveForEfficiencyWeightByPlaceInQueue();
    float BPE_GetBonusOnWeaponHit(const class ABaseWeapon* _weapon);
    float BPE_GetBonusOnPunish();
    float BPE_GetBonusOnEnvironmentalKill();
    float BPE_GetBonusMCLifeMultiplier(class AFightingCharacter* _MCCharacter);
    void BPE_GetBonusKillStreak(int32 _KillCount, float& _BonusValue, float& _DurationBetweenKills);
    float BPE_GetAILifeBonus(class AFightingCharacter* _AICharacter);
    bool BPE_CanTargetGenerateScoring(class AFightingCharacter* _OpponentCharacter);
};

class UPlayerTargetCondition : public UBaseActorCondition
{
    EActionType m_eAction;
    bool m_bUpdateTarget;
    FBaseActorTargetConditionInstance m_OptionalSubConditionOnTarget;

};

class UPlayOrderTask : public USCBTTaskNode
{
};

class UPlayOrderRagingBullTask : public UPlayOrderTask
{
    class URagingBullDB* m_ragingBullDB;

};

class UPlayOrderThrowObjectTask : public UPlayOrderTask
{
    EThrowObjectActionType m_ThrowObjectActionType;

};

class UPopCurrentOrderFightingStateNotify : public USCAnimNotify
{
};

class UPopupWidget : public USCUserWidget
{
    InputAction m_eValidateAction;
    InputAction m_eCancelAction;

    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    void BPF_OnChoseB();
    void BPF_OnChoseA(int32 _playerID);
    void BPE_SetContent(const FText& _title, const FText& _message, const FText& _choiceA, const FText& _choiceB);
    bool BPE_IsUsingChoiceB();
    bool BPE_IsUsingChoiceA();
};

class UPoseAssetNotifyState : public USCAnimNotifyState
{
    FSCPoseAssetSelection m_PoseAsset;
    bool m_bOverridePoseAsset;
    bool m_bUseCustomEaseIn;
    float m_fEaseInDuration;
    bool m_bUseCustomEaseOut;
    float m_fEaseOutDuration;
    int32 m_iSerializeVersion;

};

class UPredictionComponent : public UActorComponent
{
    bool m_bLocalPredictionOnly;

};

class UPredictionManager : public UObject
{
};

class UPreviewData : public UDataAsset
{
    FSlateColor m_RatingBonusTint;
    FSlateColor m_RatingPenaltyTint;
    FSlateColor m_RatingNormalTint;
    FSlateColor m_PreviewBonusTint;
    FSlateColor m_PreviewPenaltyTint;
    FSlateColor m_NormalTint;
    FSlateColor m_ScaleTint;

    FSlateColor BPF_GetColorForScaleComparison(float _fBase, float _fPreview);
    FSlateColor BPF_GetColorForRatingComparison(float _fBase, float _fPreview);
    FSlateColor BPF_GetColorForComparison(float _fBase, float _fPreview);
};

class UProgressionDoorData : public UDataAsset
{
    FText m_ItemName;
    FText m_Description;
    TSoftObjectPtr<UTexture2D> m_DisplayTexture;
    TSubclassOf<class USCUserWidget> m_NotificationWidget;

};

class UProgressionDoorNotification : public UBaseNotification
{
    class UQuestItemData* m_LastFulfilledQuest;
    FProgressionDoorStruct m_ProgressionDoorStruct;

    class UProgressionDoorNotification* BPF_Init(const FProgressionDoorStruct& _progressionDoorStruct, class UQuestItemData* _lastFulfilledQuest);
};

class UProgressionRewardNotification : public UBaseNotification
{
    ECharacterProgressionRewardTypes m_eRewardType;
    FCharacterProgressionReward m_Reward;
    class UCharacterProgressionUnlockDB* m_Unlock;

    class UProgressionRewardNotification* BPF_Init(ECharacterProgressionRewardTypes _eRewardType, FCharacterProgressionReward _reward, class UCharacterProgressionUnlockDB* _unlock);
};

class UProxyActorsContainerComponent : public UActorComponent
{
    FProxyActorsContainerComponentOnTriggerProxyActor OnTriggerProxyActor;
    void OnTriggerProxy(class AActor* _proxyActor);

    void UnregisterProxyActor(class AActor* _proxyActor);
    void RegisterProxyActor(class AActor* _proxyActor);
    void OnTriggerProxy__DelegateSignature(class AActor* _proxyActor);
};

class APushableActor : public AInteractiveMovable
{
    float m_fFallingVelocityReduc;
    FVector m_vFallingVelocityOffset;
    FVector2D m_vViewMargin;
    FPushableActorOnStateUpdated OnStateUpdated;
    void StateUpdated(EPushableState _eNewState);
    class UStaticMeshComponent* m_StaticMeshComponent;
    class UPushObjMovementComponent* m_MovementComponent;
    class UBoxComponent* m_InteractionBox;
    class USceneComponent* m_PivotLoc;
    FSCCollisionResponsePreset m_fColProfileAtRest;
    FSCCollisionResponsePreset m_fColProfilePushed;
    float m_fUsabilityAngleRestriction;

    void StateUpdated__DelegateSignature(EPushableState _eNewState);
    void BPF_SetPushableState(EPushableState _eNewState);
    void BPF_Push(const class AFightingCharacter* _character);
    class AActor* BPF_GetTarget(const class AFightingCharacter* _character);
    EPushableState BPF_GetPushableState();
    FVector2D BPF_GetLeftStickValues(class ASCPlayerController* _playerController);
    float BPF_AngleBetweenMoveInputAndObject(const class AFightingCharacter* _character);
    void BPE_OnPushed();
    void BPE_HasHitWall();
    FBox BPE_GetMovementBox(const class AFightingCharacter* _player);
};

struct FTraversalAnimContainer
{
    FAnimContainer m_AnimEntry;
    FAnimContainer m_AnimLoop;
    FAnimContainer m_AnimPreExit;
    FAnimContainer m_AnimExitLoop;
    FAnimContainer m_AnimLanding;
    bool m_bHandleDamageOnAnimLanding;

};

struct FPushTraversalAnimContainer : public FTraversalAnimContainer
{
    FAnimContainer m_InstigatorAnim;

};

struct FPushAnims
{
    TMap<class ESCCardinalPoints, class FAnimContainer> m_GrabberAnims;
    TMap<class ESCCardinalPoints, class FAnimContainer> m_GrabbedAnims;
    bool m_bSouthMirrorPositiveAngle;
    bool m_bNorthMirrorPositiveAngle;

};

class UPushConfiguration : public UObject
{
    float m_fPushEnvRedirectionLimitAngle;
    float m_fExpectedSnapDistance;
    float m_fLandingDistanceFromFloorToConsidereFall;
    float m_fDistanceFromEdgeToTestFloorHeight;
    float m_fFloorSearchDistance;
    float m_fHeightSearchDistanceOnNormal;

    void BPE_GetPushCloseTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushTraversalAnimContainer& _outOnVoidResult);
    bool BPE_GetPushCloseAnimOnTraversal(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, const FTraversalInfo& _traversalInfo, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    bool BPE_GetPushCloseAnimOnImpactHeight(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, float _fHeight, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushCloseAnimOnEnv(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, class UBaseEnvironmentalInteractionComponent* _env, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit);
    void BPE_GetPushAnims(class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, FPushAnims& _outAnims, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap);
};

class UPushedObstacleComponent : public UActorComponent
{
    bool m_bActive;
    EPushObstacleReaction m_ePushReaction;
    FHitBox m_HitBox;
    FPushedObstacleComponent_OnPushDetected m_OnPushDetected;
    void PushSignature(class UPushedObstacleComponent* _component, class AFightingCharacter* _pushedPlayer);

    void PushSignature__DelegateSignature(class UPushedObstacleComponent* _component, class AFightingCharacter* _pushedPlayer);
    void BPE_OnPushInterruption(class AFightingCharacter* _interruptedCharacter);
    EPushObstacleReaction BPE_GetPushReaction(class AFightingCharacter* _pushedPlayer);
    bool BPE_GetPushInterruptionHit(class AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult);
};

class UPushHitActionLauncher : public UHitActionLauncher
{
    class UPushConfiguration* m_PushConfiguration;
    class UHitActionLauncher* m_fallbackHitAction;
    float m_fMaxAIWallDistance;
    TSubclassOf<class UNavigationQueryFilter> m_filterClass;
    bool m_bForceAIPushDirection;
    float m_fForcedAILocalDirectionAngle;

};

class UPushInstigatorAbility : public USCGameplayAbility
{
    class UPushConfiguration* m_PushConfiguration;

    void BPF_HandleDefaultPush(const FSCGameplayAbilityActivationInfo& _activationInfo);
};

class UPushObjectAnimRequest : public UObject
{

    class UAnimSequence* BPE_GetPushAnimation(const class AActor* _Instigator, const FVector& _vTargetDir, const class APushableActor* _pushable, bool& _bOutMirror);
};

class UPushObjectNotify : public USCAnimNotify
{
};

class UPushObjMovementComponent : public UInterpToMovementComponent
{
    int32 m_iNumPoints;
    float m_fDist;
    float m_fGroundTraceOffset;
    class UCurveFloat* m_SpeedCurve;
    TArray<float> m_SpeedSteps;
    float m_fMaxRotationSpeed;
    float m_fOnRailSpeedReduc;
    float m_fOnRailGravScale;
    float m_fAngleTransitionTime;
    float m_fShortenedDistThreshold;
    float m_fSpeedOnRail;
    float m_fTimeToReachSpeedOnRail;

    void BPF_SetObjectState(EPushableState _eState, bool _bResetIgnoreWhenMoving);
    float BPF_GetCurrentTime();
    int32 BPF_GetCurrentSpeedStep();
    void BPF_GenerateAndStartMovement(const FVector& _vDir, float _fStartStep);
    void BPF_CalculateMovementBox(const FVector& _vLastControlPoint, FBox& _OutBox);
    FVector BPF_CalculateLastPointLocation(const FVector& _vDir);
};

class UQuadrantHelper : public UBlueprintFunctionLibrary
{

    EQuadrantTypes BPF_Mirror(EQuadrantTypes _eQuadrant, bool _bMirror);
    EQuadrantTypes BPF_MakeQuadrant(bool _bIsFront, bool _bIsLeft);
    bool BPF_IsLeft(EQuadrantTypes _eQuadrant);
    bool BPF_IsFront(EQuadrantTypes _eQuadrant);
};

class UQuestItemData : public UBaseItemData
{
    FText m_Description;
    class UProgressionDoorData* m_ProgressionDoor;
    FName m_ScalarParameterName;

};

class URagdollNotify : public UAnimNotify
{
    bool m_bRagdollEnabled;
    bool m_bCollisionEnabled;

};

class URagdollOrderService : public UOrderService
{
};

struct FRagingBullAnimContainer
{
    class UAnimSequence* m_animation;
    float m_fAnimSpeed;
    bool m_bUseRootMotion;
    float m_fAnimPlayRate;

};

class URagingBullDB : public UDataAsset
{
    float m_fMaxAngularSpeed;
    float m_fWantedSpeed;
    float m_fWantedTravelDistance;
    bool m_bStopOnTargetMissed;
    float m_fMissedTravelDistance;
    FHitBox m_HitBox;
    FAnimContainer m_wallSplashFrontAnim;
    FRagingBullAnimContainer m_entryAnimContainer;
    int32 m_iAnimBuildUpFrames;
    int32 m_iWantedBuildupFrames;
    FRagingBullAnimContainer m_loopAnimContainer;
    float m_fDistanceToSwitchAnimation;
    FRagingBullAnimContainer m_secondLoopAnimContainer;
    FRagingBullAnimContainer m_exitAnimContainer;

};

class ARailForMovable : public AActor
{
    class USplineComponent* m_Rail;
    class UBoxComponent* m_EntryBox;
    float m_fSpeedThreshold;

};

struct FSCConditionnalAnimContainer
{
    FAnimContainer m_animContainer;
    TArray<FBaseActorConditionInstance> m_Conditions;

};

class URandomAnimDB : public UDataAsset
{
    TArray<FSCConditionnalAnimContainer> m_Anims;

    FAnimContainer BPF_PickRandomAnim(class AActor* _requester);
};

class URangeFeedbackUserWidget : public USCUserWidget
{
    class UCurveFloat* m_RemappingCurve;
    float m_fMinDefaultValue;
    float m_fMaxDefaultValue;
    float m_fDefaultAlpha;

    void BPE_OnDefaultValuesSet();
    void BPE_DisplayRangeValueFeedback(float _fValueAlpha);
};

struct FRarityData
{
    FText m_Name;
    FLinearColor m_color;
    class UMaterial* m_Material;

};

class URarityDB : public UDataAsset
{
    FRarityData m_RaritiesData;
    FRarityData m_DirtRarityData;

    void BPF_GetRarityData(EGearRarity _rarity, FRarityData& _outRarityData);
};

class URatingProgressBar : public UProgressBar
{
    int32 m_iImageCount;
    int32 m_iSteps;

};

class UReattachStabbedWeapon_Notify : public USCAnimNotify
{
    FName m_BoneToAttachWeaponTo;

};

class URedirectOrderServiceNotifyState : public UOrderServiceNotifyState
{
    bool m_bUseAnimRootMotion;
    ESCRotationWay m_eRootMotionRotWay;

};

class URelationshipTypeCondition : public UBaseActorTargetCondition
{
    TArray<ERelationshipTypes> m_AllowedRelationshipTypes;

};

struct FReplicatedDamageEvent
{
    FVector m_vHurtOrigin;
    float m_fDemoTimeS;
    float m_fBaseDamage;
    float m_fDamageRadius;
    float m_fImpulseStrength;
    bool m_bFullDamage;

};

struct FReplicatedDestructibleChunks
{
    TArray<FTransform> m_ChunkTransforms;

};

struct FReplicatedBoxSphereBounds
{
    bool m_bIsValid;
    FBoxSphereBounds m_Bounds;

};

class UReplayableDestructibleComponent : public UDestructibleComponent
{
    bool m_bCreatePhysicsStateAtStart;
    FReplayableDestructibleComponentOnReCreatedPhysicsState OnReCreatedPhysicsState;
    void DynamicMulticast();
    FReplayableDestructibleComponentOnRepDestructibleStateChange OnRepDestructibleStateChange;
    void ReplayableDestructibleStateChangeDelegate(EReplayableDestructibleState _eState);
    float m_fDelayNotifyHitEvent;
    bool m_bOnFirstDestructionEnableChunksCollision;
    bool m_bReplayUpdateChunksOnTick;
    class UReplayableStaticObjectComponent* m_ReplayableStaticObjectComponent;
    TArray<FReplicatedDamageEvent> m_DamageEvents;
    bool m_bCreatePhysicsState;
    FReplicatedDestructibleChunks m_ChunksState;
    FReplicatedBoxSphereBounds m_ReplicatedBounds;
    EReplayableDestructibleState m_eReplayableDestructibleState;

    void OnReplayTimeDilationChanged(float _fDilation);
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    void OnRep_ReplayUpdateChunksOnTick();
    void OnRep_ReplayableDestructibleState();
    void OnRep_DamageEvents();
    void OnRep_ChunksState();
    void OnRep_Bounds();
    void EnableNotifyHitEvent();
    void BPF_SetApexActorEnabled(bool _bValue);
    bool BPF_IsDamaged();
    void BPE_OnPreFirstDamageReceived(float _fBaseDamage, bool _bFullDamage);
};

class UReplayableDestructionComponent : public UActorComponent
{
    bool m_bBroken;
    FReplayableDestructionComponentOnRepBrokenState OnRepBrokenState;
    void OnRepBrokenState(bool bBroken);

    void OnRep_BrokenStateUpdate();
};

class UReplayablePhysicsComponent : public UActorComponent
{
    FCompressedPoseSnapshot m_LastPoseSnapshot;
    class USkeletalMeshComponent* m_SkeletalMeshComp;
    bool m_bActive;

    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    void OnRep_LastPoseSnapshot();
    void OnRep_Active();
};

class UReplayableStaticObjectComponent : public UActorComponent
{
    class UPrimitiveComponent* m_RootPrimComp;

};

class UReplayablePhysObjectComponent : public UReplayableStaticObjectComponent
{
    bool m_bIsReplicatingMovement;
    bool m_bDebugDisabled;
    bool m_bForceNetUpdateOnBodyAwake;
    class AActor* m_AttachedActor;

    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    void OnRep_IsReplicatingMovement();
    void OnRep_AttachmentChanged();
    void OnComponentWake(class UPrimitiveComponent* _wakingComponent, FName _boneName);
    void OnComponentSleep(class UPrimitiveComponent* _wakingComponent, FName _boneName);
};

class UReplayActorSelectorComponent : public UActorComponent
{
    FReplayActorSelectorComponent_OnReceiveTraceResult m_OnReceiveTraceResult;
    void OnReceivedTraceResultSignature(bool _bHasHit, float _fDistance);

    void BPF_RequestTrace();
};

class AReplayCineCameraActor : public ACineCameraActor
{

    class UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent();
};

struct FReplayKeyDataWorldTarget
{
    FString m_ID;

};

struct FReplayKeyDataFocusSettings
{
    EReplayKeyCameraFocus m_eFocusMode;
    float m_fAperture;
    float m_fFocusDistance;
    FReplayKeyDataWorldTarget m_Target;

};

struct FReplayKeyDataLensSettings
{
    float m_fFocalLength;

};

struct FReplayKeyDataCameraSettings
{
    FReplayKeyDataFocusSettings m_FocusSettings;
    FReplayKeyDataLensSettings m_LensSettings;

};

class UReplayCineCameraComponent : public UCineCameraComponent
{
    float m_fZoomSpeed;
    class UCurveFloat* m_ZoomSpeedCurve;

    FReplayKeyDataCameraSettings BPF_GetCameraSettings();
    void BPF_ApplyCameraSettings(FReplayKeyDataCameraSettings _settings);
};

struct FReplayCameraMeshFadingData
{
    bool m_bEnabledByDefault;
    class UMaterialParameterCollection* m_Collection;
    FName m_ParameterName;

};

struct FReplayTimelineControllerData
{
    FReplayCameraMeshFadingData m_CameraMeshFadingData;
    float m_fCameraFollowDampingValue;
    float m_fCameraFollowMaxDistanceLerp;
    float m_fSavekeyModelFrequency;

};

struct FReplayCameraSettings
{
    FCameraLensSettings m_Lens;
    FCameraFilmbackSettings m_Filmback;

};

struct FReplayOverrideMPCParameter
{
    class UMaterialParameterCollection* m_MPC;
    FName m_ParameterName;
    float m_fValue;

};

class AReplayController : public ABaseReplayController
{
    FReplayTimelineControllerData m_TimelineControllerData;
    class UReplayTimelineController* m_TimelineController;
    FReplayCameraSettings m_DefaultCameraSettings;
    FReplayCameraSettings m_SequenceCameraSettings;
    FReplayController_OnGoToTimeCompleted m_OnGoToTimeCompleted;
    void DynamicMulticast();
    float m_fGoToTimeCompletedTimeS;
    bool m_bTimeDilationZeroedOnGoToTime;
    FReplayController_OnCameraModeChanged m_OnCameraModeChanged;
    void OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    FReplayController_OnGoToTimeInitiated m_OnGoToTimeInitiated;
    void OnReplayGoToTime(bool _bUnselectKey);
    bool m_bDebugEnabled;
    TMap<class EReplayKeyTransition, class UCurveFloat*> m_TransitionProfiles;
    EReplayCameraMode m_eCurrentCameraMode;
    TSubclassOf<class AActor> m_VirtualCameraClass;
    TSubclassOf<class UReplayLoadingScreenWidget> m_LoadingScreenWidgetClass;
    TArray<FReplayOverrideMPCParameter> m_MPCParametersOverride;
    class UReplayMainUserWidget* m_MainUserWidget;
    class UReplayLoadingScreenWidget* m_LoadingScreenWidgetInstance;
    class AActor* m_VirtualCamera;
    TSubclassOf<class AReplayVideoRecorder> m_VideoRecorderClass;
    class AReplayVideoRecorder* m_VideoRecorder;

    void OnKeysLoaded();
    void OnKeyMoved(class UReplayKey* _key);
    void OnGoToTimeCompleted();
    bool IsReplaying();
    bool IsRecording();
    void GotoTimeInSeconds(float _fTime, bool _bUnselectKey);
    void DebugReplayFillReplayTimeline(int32 _iStringsLength);
    void BPF_StopVideoRecording();
    void BPF_StartVideoRecording(FBPF_StartVideoRecordingOnVideoRecorderCreated _onVideoRecorderCreated);
    void BPF_StartSkipTimeToNextKeyFrameTask();
    void BPF_SetDemoPlayTimeDilation(float _fValue);
    void BPF_SetCameraMode(EReplayCameraMode _eCameraMode);
    void BPF_ResetPreviousTimeDilation();
    void BPF_RequestTimelineControllerCameraMeshFadingUpdate();
    void BPF_PausePlayAndSnapFrame();
    void BPF_LeaveReplay();
    bool BPF_IsRecordingVideo();
    bool BPF_IsCameraEditable();
    void BPF_GoToLastKeyTime();
    class UCurveFloat* BPF_GetTransitionProfile(EReplayKeyTransition _eTransitionType);
    class UReplayTimelineModel* BPF_GetTimelineModel();
    float BPF_GetReplayTimeFromOffsetS(float _fOffset);
    float BPF_GetReplayTimeFromOffsetMS(float _fOffset);
    class UReplaySystem* BPF_GetReplaySystem();
    class UReplayFightingCharacterComponent* BPF_GetReplayFightingCharacterComponent(const class UObject* _worldContextObject);
    class AReplayingCamera* BPF_GetReplayFightingCharacterCameraDummy(const class UObject* _worldContextObject);
    class UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent(EReplayCameraMode _eCameraMode);
    class UReplayCineCameraComponent* BPF_GetCurrentCineCameraComponent();
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    void BPE_OnPlayingBeginPlay();
    void BPE_OnKeyRemoved(class UReplayKey* _key);
    void BPE_OnGoToTimeCompleted();
};

class UReplayCutManagement : public UObject
{
    class UReplayTimelineModel* m_Model;

    void BPF_RemoveCut(class UReplayKey* _key);
    bool BPF_CanAddCut(float _fDemoTime);
};

struct FReplayVoiceReplication
{
    ECharacterGender m_eGender;
    FName m_VoiceArchetypeSwitchName;
    FName m_VoiceVariationSwitchName;

};

struct FReplayCameraTransform
{
    FVector m_vLocation;
    FQuat m_qRotation;
    FVector m_vSensorSettings;
    bool m_bInterpolate;
    bool m_bCanEdit;

};

class UReplayFightingCharacterComponent : public UActorComponent
{
    FReplayVoiceReplication m_VoiceInfos;
    FReplayCameraTransform m_CameraTransform;
    class AReplayingCamera* m_CameraDummy;

    void OnRep_VoiceInfos();
    void OnRep_CameraTransform();
};

class UReplayGameplayCameraRecordEventProxy : public UObject
{

    void BPF_DeserializeGameplayCameraEvent(const class UObject* _worldContextObject, FBPF_DeserializeGameplayCameraEventCallback _callback);
};

class UReplayGameWorldFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool BPF_IsPhotomodeActivated(const class UObject* _worldContextObject);
    FString BPF_GetReplayActorUniqueID(const class AActor* _actor);
    class AFightingCharacter* BPF_GetMainCharacter(const class UObject* _worldContextObject);
    bool BPF_GetFinalLevelPostProcessSettings(class ASCPlayerController* _playerController, FPostProcessSettings& outPostProcessSettings);
    class UExponentialHeightFogComponent* BPF_GetExponentialHeightFog(const class UObject* _worldContextObject);
    float BPF_GetApplicationDeltaTime();
    TArray<class ASCCharacterImpostor*> BPF_GetActiveImpostors(const class UObject* _worldContextObject);
    TArray<class AFightingCharacter*> BPF_GetActiveAIs(const class UObject* _worldContextObject);
    TArray<class AActor*> BPF_GetActiveAIAndImpostors(const class UObject* _worldContextObject);
};

struct FFilterProperties
{
    bool m_bUserConfigured;
    FText m_FilterText;
    float m_fExposure;
    float m_fVignette;
    float m_fGrain;
    float m_fFilterWeight;
    float m_fFogDensity;
    uint8 m_uiAspectRatioIndex;
    uint8 m_uiLogoIndex;
    EScreenLocation m_eLogoScreenLocation;

};

struct FInputHandleContainer
{
    FInputHandleContainer_Delegate m_Delegate;
    bool BPInputHandleSignature();
    InputAction m_eAction;

};

class UReplayHelperLibrary : public UBlueprintFunctionLibrary
{

    void BPF_SetScreenMessagesEnabled(bool _bEnabled);
    void BPF_SaveFilterPreset(int32 _iSlot, const FFilterProperties& _inProperties, class ABaseReplayController* _controller);
    FFilterProperties BPF_LoadFilterPreset(int32 _iSlot, bool& _bIsValid);
    bool BPF_IsAvailabilityLayerPushed(const FAvailabilityLayerCache& _inALCache);
    bool BPF_HandleInput(const class ABaseReplayController* _controller, const FInputHandleContainer& _inputHandleContainer, bool _bIgnoreAvailability);
    void BPF_GetAnimSequences(TArray<FAnimSequenceDBEntry>& _outSequencesDB, const FAnimSequenceDBCache& _sequencesCache, const class ABaseWeapon* _weapon);
    bool BPF_FilterPresetComparison(const FFilterProperties& _first, const FFilterProperties& _second);
    void BPF_CancelAnyViewportFade(const class UObject* _worldContextObject);
    bool BPF_AreScreenMessagesEnabled();
    bool BPF_AreAvailabilityLayersPushed(const FAvailabilityLayerCaches& _inALCaches);
};

struct FScreenTextureData
{
    TSoftObjectPtr<UTexture2D> m_Texture;
    FText m_DisplayText;
    FVector2D m_vSize;
    FVector2D m_vMargin;
    FVector2D m_vUV;
    FVector2D m_vUVSize;
    FLinearColor m_TintColor;
    TEnumAsByte<EBlendMode> m_eBlendMode;
    float m_fScale;
    bool m_bScalePosition;
    float m_fRotation;
    FVector2D m_vRotationPivot;

};

class AReplayHUD : public AHUD
{
    FScreenTextureData m_TextureToDraw;
    class UTexture2D* m_CurrentTexture;
    TArray<TSoftObjectPtr<UTexture2D>> m_LoadingTextures;

    void OnAssetsLoaded(const TArray<TSoftObjectPtr<UObject>>& _items);
    void BPF_SetTextureToDraw(const FScreenTextureData& _screenTexture);
    void BPF_SetTextureLocation(EScreenLocation _eTextureLocation);
    void BPF_SetDrawTextureEnabled(bool _bEnabled);
};

class AReplayingCamera : public AActor
{
};

struct FReplayKeyDataCameraTarget
{
    FReplayKeyDataWorldTarget m_Target;
    FVector m_vInitialTargetLocation;

};

struct FReplayKeyDataCameraTransitionOverrideSettings
{
    FReplayKeyDataCameraTarget m_FollowSettings;
    FReplayKeyDataCameraTarget m_LookAtSettings;

};

struct FReplayKeyCutData
{
    EReplayKeyCutType m_eCutType;

};

struct FReplayKeyScreenFading
{
    EReplayKeyFadeType m_bFadingType;
    float m_fFadingTime;

};

struct FReplayKeyData
{
    int32 m_iKeyIndex;
    int32 m_iKeyFrameIndex;
    float m_fTime;
    float m_fDilatedTime;
    float m_fTimeDilation;
    int32 m_eTypeFlags;
    EReplayKeyTransition m_eTransition;
    EReplayKeyCameraMode m_eCameraMode;
    EReplayKeyCameraMeshFading m_eCameraMeshFading;
    FVector m_vCameraLocation;
    FQuat m_qCameraRotation;
    FReplayKeyDataCameraTransitionOverrideSettings m_CameraTransformSettings;
    FReplayKeyDataCameraSettings m_CameraSettings;
    FReplayKeyCutData m_CutData;
    FReplayKeyScreenFading m_ScreenFading;

};

class UReplayKey : public UObject
{
    FReplayKeyData m_Data;
    FReplayKey_OnDelete m_OnDelete;
    void OnReplayKeyEvent(class UReplayKey* _key);
    FReplayKey_OnPostDelete m_OnPostDelete;
    void OnReplayKeyEvent(class UReplayKey* _key);
    FReplayKey_OnIndexUpdate m_OnIndexUpdate;
    void OnReplayKeyIndexUpdate(class UReplayKey* _key, int32 _previousIndex, EReplayKeyIndexUpdateReason _eReason);
    FReplayKey_OnDataUpdate m_OnDataUpdate;
    void OnReplayKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    FReplayKey_OnTransitionUpdate m_OnTransitionUpdate;
    void OnReplayKeyTransitionUpdate(class UReplayKey* _key, bool _bIsOnTransition);
    FReplayKey_OnSelectionUpdate m_OnSelectionUpdate;
    void OnReplayKeySelectionUpdate(class UReplayKey* _key, bool _bIsSelected);
    FReplayKey_OnHoveredUpdate m_OnHoveredUpdate;
    void OnReplayKeyHoveredUpdate(class UReplayKey* _key, bool _bIsHovered);
    FReplayKey_OnTimeUpdate m_OnTimeUpdate;
    void OnReplayKeyTimeUpdate(class UReplayKey* _key, float _fTime);

    bool BPF_HasReplayKeyType(int32 _iKeyTypeFlags, int32 _iContainsKeyTypeFlags);
    bool BPF_HasActiveBlend();
};

struct FReplayKeyWidgetVisualKey
{
    EReplayKeyCameraMode m_eCameraMode;
    EReplayKeyCutType m_eCutType;
    int32 m_iKeyTypeFlag;

};

struct FReplayKeyWidgetVisualData
{
    class UTexture2D* m_Texture;
    float m_fAngle;
    FVector2D m_vSize;

};

class UReplayKeyWidget : public UButtonUserWidget
{
    bool m_bIsKeySelected;
    bool m_bIsKeyHovered;
    FVector2D m_vSize;
    class UReplayKeyWidgetVisualsDB* m_VisualsDB;
    class UReplayKey* m_Key;
    FVector2D m_vCachedTimelinePositionWithMargin;
    FVector2D m_vCachedTimelinePosition;
    bool m_bCachedTimelineIsOutOfBounds;
    FReplayKeyWidget_OnKeyMoved m_OnKeyMoved;
    void ReplayKeyWidgetStateChanged(const class UReplayKeyWidget* _widget);

    void BPE_OnSelectionUpdate(class UReplayKey* _key, bool _bIsSelected);
    void BPE_OnHoveringStateUpdate(class UReplayKey* _key, bool _bIsHovered);
    bool BPE_ApplyVisualsOverride(const FReplayKeyWidgetVisualKey& _key, FVector2D& _vSize);
    void BPE_ApplyVisuals(const FReplayKeyWidgetVisualData& _visuals);
};

class UReplayKeyWidgetVisualsDB : public UDataAsset
{
    TMap<class FReplayKeyWidgetVisualKey, class FReplayKeyWidgetVisualData> m_Visuals;
    FReplayKeyWidgetVisualData m_DefaultVisual;

};

class UReplayLevelStreamingReplication : public UObject
{
    FSCReplayLevelStreamingData m_StreamingState;

};

class UReplayLoadingScreenWidget : public USCUserWidget
{
    int32 m_iZIndex;
    bool m_bIsHidding;

    void BPF_NotifyHideCompleted();
    void BPE_OnHideRequested();
    void BPE_OnHideCancelled();
};

class UReplayMenuWidget : public USCUserWidget
{
    TSubclassOf<class UReplayScreenshotUserWidget> m_ScreenshotWidgetClass;
    TSubclassOf<class UReplayUIModeUserWidget> m_HideUIModeClass;
    class UReplayScreenshotUserWidget* m_ScreenshotWidget;
    class UReplayUIModeDB* m_UIModeDB;
    TArray<class UReplayUIModeUserWidget*> m_UIModes;
    TArray<class UReplayUIModeUserWidget*> m_UIOverlays;
    FReplayMenuWidget_OnOverlayChange m_OnOverlayChange;
    void OnOverlayChangedSignature(const class UReplayUIModeUserWidget* _currentOverlay, const class UReplayUIModeUserWidget* _nextOverlay);
    class ABaseReplayController* m_Controller;
    TArray<class UReplaySubMenuWidget*> m_SubMenus;
    bool m_bUpdateUIModeOnMenuPushed;

    void BPF_RestoreOverlay();
    bool BPF_PushSubMenu(class UReplaySubMenuWidget* _subMenu, class UReplaySubMenuWidget* _parentSubMenu);
    bool BPF_PopSubMenuIfTop(const class UReplaySubMenuWidget* _subMenu);
    class UReplaySubMenuWidget* BPF_PopSubMenu();
    bool BPF_PopMenuAndAllChildren(const class UReplaySubMenuWidget* _subMenu);
    class UReplaySubMenuWidget* BPF_PeekSubMenu();
    void BPF_LeaveCurrentUIMode();
    bool BPF_IsSubMenuOnTop(const class UReplaySubMenuWidget* _subMenu);
    bool BPF_IsSubMenuOnStack(const class UReplaySubMenuWidget* _subMenu);
    class UReplayUIModeUserWidget* BPF_GetNextOverlay();
    class UReplayUIModeUserWidget* BPF_GetCurrentUIMode();
    void BPF_EnterUIMode(TSubclassOf<class UReplayUIModeUserWidget> _UIModeClass);
    void BPF_CycleUIOverlay();
    void BPF_CloseAllSubMenu(const class UReplaySubMenuWidget* _parent);
    bool BPE_OnTakeScreenshotPressed();
    void BPE_OnRemovedFromParent();
    bool BPE_OnMenuRightPressed();
    bool BPE_OnMenuOptionsPressed();
    bool BPE_OnMenuLeftPressed();
    bool BPE_OnMenuInputPressed(InputAction _eAction);
    bool BPE_OnMenuBackKeyPressed();
    bool BPE_OnMenuActionPressed();
    bool BPE_OnLeaveModePressed();
    bool BPE_OnHideUIPressed();
    bool BPE_OnExportPressed();
    bool BPE_OnCycleUIModePressed();
    bool BPE_OnCharacterSettingsPressed();
    bool BPE_OnCameraSettingsPressed();
    bool BPE_OnApplyFocusPressed();
    void BPE_OnAnyInputConsumed();
};

struct FReplayTimelineControl
{
    float m_fMinInputTimeS;
    float m_fCursorMaxSpeed;
    float m_fCursorBaseSpeed;
    class UCurveFloat* m_Curve;
    float m_fCursorMaxSpeedReachedTimeS;

};

struct FReplayAvailabilityLayerCache
{
    FAvailabilityLayerCaches m_TimeControl;
    FAvailabilityLayerCaches m_KeyEdition;
    FAvailabilityLayerCaches m_FreeFly;
    FAvailabilityLayerCaches m_KeySelected;
    FAvailabilityLayerCaches m_HoveringKey;
    FAvailabilityLayerCaches m_Scrubbing;
    FAvailabilityLayerCaches m_GoToTime;
    FAvailabilityLayerCaches m_MovingKey;
    FAvailabilityLayerCaches m_MoveKey;
    FAvailabilityLayerCaches m_ReplayPreview;
    FAvailabilityLayerCaches m_ReplayEdit;
    FAvailabilityLayerCaches m_KeyCopied;

};

struct FTimelineChangeState
{
    int32 m_iKeyCountChange;

};

class UReplayMainUserWidget : public UReplayMenuWidget
{
    FReplayTimelineControl m_TimelineControl;
    bool m_bUIInitialized;
    bool m_bAutoSelectKeyOnAdd;
    bool m_bOnlyApplyPersistentSettingsOnCustomCameraKeys;
    bool m_bOnApplyCameraSettingsSetCameraModeToCustom;
    bool m_bSelectKeyOnGoToTimeCompleted;
    bool m_bOnSelectFailDefaultToSelectedKey;
    class UReplayTimelineWidget* m_TimelineWidget;
    FReplayAvailabilityLayerCache m_AvailabilityLayers;

    bool OnTimelineModePressed();
    void OnKeyRemoved(class UReplayKey* _key);
    void OnKeyAdded(class UReplayKey* _key, bool _bCanSelectKey);
    void BPF_ToggleTimelineMode();
    void BPF_SetSelectedKeyLookAtTarget(const class AActor* _actor);
    void BPF_SetSelectedKeyFollowTarget(const class AActor* _actor);
    void BPF_SetInPreviewMode(bool _bInPreview);
    void BPF_SetInMoveKeyState(const bool _bMovingKey);
    bool BPF_SelectPreviousKey();
    bool BPF_SelectNextKey();
    bool BPF_SelectKeyAndGoToTime(class UReplayKey* _key);
    bool BPF_SelectKey(class UReplayKey* _key);
    void BPF_ResetTimelineControlAndScrub();
    void BPF_ResetSavedCameraTransform();
    bool BPF_RemoveSelectedKeyCut();
    bool BPF_RemoveSelectedKey();
    void BPF_PasteKey();
    void BPF_NotifySelectedKeyTimeDilationUpdate();
    void BPF_NotifySelectedKeyCameraModeUpdated();
    void BPF_MoveTimelineCursor(ECycleDirection _eDirection, EReplayTimelineControlType _eControlType);
    void BPF_LeavePasteKeyMode();
    bool BPF_IsInMoveKeyState();
    bool BPF_IsInKeyPastingMode();
    bool BPF_HasSelectedOrHoveredKey();
    bool BPF_HasKeySelected();
    void BPF_GoToTime(class UReplayKey* _key);
    class UReplayKey* BPF_GetSelectedKey();
    class AReplayController* BPF_GetReplayController();
    class UReplayKey* BPF_GetKeyFromCurrentDemoTime(ECycleDirection _eDirection);
    bool BPF_GetIsMovingTimelineCursor();
    bool BPF_GetIsInPreviewMode();
    void BPF_CreateKeyWidgets();
    void BPF_CopySelectedKey();
    bool BPF_CanApplyCurrentCineCameraSettingsAndPositionToKey(const class UReplayKey* _key);
    bool BPF_CanApplyCurrentCineCameraSettingsAndPositionToCurrentTime();
    void BPF_ApplyCurrentCineCameraSettingsAndPositionToKey(class UReplayKey* _key, bool _bApplyPosition, bool _bApplyLensSettings, bool _bApplyFocusSettings);
    class UReplayKey* BPF_AddKeyAtCurrentTime(int32 _iTypeFlags, const FReplayKeyData _presetData, int32 _iPresetOverride, bool& _bOutKeyAlreadyExists);
    void BPF_AddCutAtCurrentTime(const FReplayKeyData _presetData, int32 _iPresetOverride);
    bool BPE_OnVideoRecordingStop();
    void BPE_OnUndoOrRedoPressed(const ETimelineStateAction _eAction, const FTimelineChangeState& _changeState);
    bool BPE_OnTimelineZoom(float _fActionValue);
    bool BPE_OnTimelineMoveForwardPressed();
    bool BPE_OnTimelineMoveBackwardPressed();
    void BPE_OnTimelineModeToggled();
    bool BPE_OnSpecialMenuPressed();
    bool BPE_OnSelectRightKeyPressed();
    bool BPE_OnSelectLeftKeyPressed();
    void BPE_OnSelectedKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    bool BPE_OnSelectCurrentKeyPressed();
    bool BPE_OnScrubReleased();
    bool BPE_OnResumePressed();
    bool BPE_OnReplayQuitPressed();
    bool BPE_OnReplayJumpStart();
    bool BPE_OnReplayJumpEnd();
    bool BPE_OnRemoveKeyPressed();
    bool BPE_OnRemoveCutPressed();
    void BPE_OnPreviewModeChanged(bool _bInPreview);
    bool BPE_OnPasteKeyPressed();
    bool BPE_OnNavigationModePressed();
    bool BPE_OnMoveKeyRightPressed();
    bool BPE_OnMoveKeyReleased();
    bool BPE_OnMoveKeyLeftPressed();
    void BPE_OnKeySelectionUpdate(class UReplayKey* _key, bool _bSelected);
    void BPE_OnKeySelected(class UReplayKey* _key);
    void BPE_OnKeyRemoved(class UReplayKey* _key);
    void BPE_OnKeyPastedOn(class UReplayKey* _key, bool _bIsNew);
    void BPE_OnKeyAdded(class UReplayKey* _key);
    void BPE_OnGoToTimeInitiated(bool _bUnselectKey);
    void BPE_OnGoToTimeCompleted();
    bool BPE_OnEditReplayPressed();
    bool BPE_OnEditCameraPressed();
    void BPE_OnCutCreated();
    bool BPE_OnCopyKeyPressed();
    void BPE_OnCameraModeChanged(EReplayCameraMode _eCameraMode);
    bool BPE_OnApplySettingsPressed();
    bool BPE_OnAddSpeedKeyPressed();
    bool BPE_OnAddKeyPressed();
    bool BPE_OnAddCutPressed();
};

struct FReplaySizeManagement
{
    int64 m_iTotalSpaceOccupied;
    int64 m_iTotalSpaceAvailable;
    int64 m_iTotalMaxSpace;
    int64 m_iMaxReplaySize;
    int32 m_iCurrentReplaySlotCount;
    int32 m_iMaxReplaySlotCount;

};

class UReplayManagement : public UObject
{
    class UReplaySaveGame* m_ReplaySaveGame;
    FReplayManagement_OnTaskStateChanged m_OnTaskStateChanged;
    void OnTaskStateChangedSignature(bool _bIsTaskRunning, FString _taskName);

    void OnStreamingCompleteQuitReplayManagement();
    void OnQuitReplayManagementMenu(bool _bIsPlayingReplay);
    void BPF_SetReplayOpenState(const EReplayOpenState _eOpenState);
    void BPF_ResetReplayEditorMetaData(FString _replayID);
    bool BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList);
    bool BPF_IsCurrentReplay(FString _replayID);
    bool BPF_HasSpaceForNewReplay(const FReplaySizeManagement& _inSizeManagement);
};

struct FReplayInfo
{
    FString m_ReplayName;
    FString m_ReplayFriendlyNameLocalized;
    FString m_ReplayFriendlyName;
    FDateTime m_Date;
    int32 m_iChangeList;
    int32 m_iReplayVersion;
    int32 m_iLength;
    int64 m_iSizeInBytes;
    bool m_bIsCorrupted;

};

struct FReplayListInfo
{
    FReplaySizeManagement m_ReplaySizeManagement;
    TArray<FReplayInfo> m_ReplayInfos;

};

class UReplayManagementMenuWidget : public UMenuWidget
{
    FReplayManagementMenuWidget_OnQuitReplayManagementMenu m_OnQuitReplayManagementMenu;
    void OnQuitReplayManagementMenu(bool _bHasLaunchedReplay);

    void BPF_PlayReplay(const FReplayInfo& _info);
    void BPF_EnumerateStreams();
    void BPF_EditReplay(const FReplayInfo& _info);
    void BPF_DeleteReplays(const FReplayListInfo& _infos);
    void BPF_DeleteReplay(const FReplayInfo& _info);
    void BPE_OnStreamsEnumerated(bool _bError, const FReplayListInfo& _replayInfos);
    void BPE_OnStreamsDeletedProgress(bool _bError, const FReplayListInfo& _initialState, const FReplayListInfo& _currentState);
    void BPE_OnStreamsDeleted(bool _bError);
    void BPE_OnStreamDeleted(bool _bError);
};

class UReplayMenuAbility : public USCGameplayAbility
{
};

class AReplayReplicationProxy : public AReplayReplicationProxyBase
{
};

class UReplaySaveGame : public UObject
{
    int64 m_iReplayMaxSizeStopRecordingTolerance;
    int64 m_iReplayTotalMaxSize;
    int64 m_iTotalSaveGameSpaceAvailableForReplays;
    int64 m_iReplayEditorMedataDataSize;
    int64 m_iReplayFileMetaDataSize;

    FString BPE_GetTitleInfoForSaveFile(FString _fileName, bool _bIsMetaData);
    FString BPE_GetSubtitlesInfoForSaveFile(bool _bIsMetaData);
    class UTexture2D* BPE_GetIconForSaveFile();
    FString BPE_GetDetailsInfoForSaveFile(bool _bIsMetaData);
};

class UReplayScreenshotUserWidget : public USCUserWidget
{
    bool m_bTakeScreenshotOnCooldown;
    FAvailabilityLayerCaches m_AvailabilityLayers;

    void BPF_RequestScreenshot(int32 _iResolutionX, int32 _iResolutionY);
    class ABaseReplayController* BPF_GetReplayController();
    void BPE_OnScreenshotRequestProcessed();
    void BPE_OnScreenshotRequested();
};

struct FSoundReplicationData
{
};

class UReplaySoundReplication : public UObject
{
    FSoundReplicationData m_SoundReplicationData;

    void SetRTPCValue(uint32 _rtpc, FString _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, class AActor* _actor);
};

class ASCSpectatorPawnBase : public ASpectatorPawn
{
    class UCurveFloat* m_VerticalStrifeSpeedCurve;
    float m_fVerticalStrifeSpeed;
    float m_fLookSpeed;

    void BPE_OnAnyInputConsumed();
};

class AReplaySpectatorPawn : public ASCSpectatorPawnBase
{
    class UReplayCineCameraComponent* m_CineCameraComponent;
    float m_fDefaultRollCooldownOnReset;

    void BPE_OnPossess(class AController* _controller);
};

class UReplaySpectatorPawnMovement : public USpectatorPawnMovement
{

    void BPF_SetDirectionConstraintDelegate(FBPF_SetDirectionConstraintDelegateDelegate _delegate);
    FVector BPF_GetConstrainedDirection(const FVector& _vLeashOrigin, const FVector& _vLeashSize, const FVector& _vCurrentLocation, const FVector& _vDirection, bool& _bOutConstrained);
};

class UReplaySubMenuWidget : public USCUserWidget
{
    TSubclassOf<class UCustomWidgetNavigation> m_CustomWidgetNavigationClass;
    class UCustomWidgetNavigation* m_CustomWidgetNavigation;
    class UReplaySubMenuWidget* m_ParentSubMenu;

    bool BPF_IsSubMenuAvailable(const class UReplaySubMenuWidget* _menu);
    void BPF_BindIsSubMenuAvailableDelegate(const FBPF_BindIsSubMenuAvailableDelegateDelegate& _delegate);
    void BPE_OnRemovedFromParent();
    bool BPE_OnMenuPushRequest(class UReplayMenuWidget* _parent, class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    bool BPE_OnMenuPopRequest(class UReplayMenuWidget* _parent);
    void BPE_OnMenuPopped();
};

struct FReplayInitialStateToggleEvent
{
    FReplayInitialStateToggleEvent_Event m_Event;
    void ReplayInitialStateToggleEventDelegate(bool _bToggle);
    FReplayInitialStateToggleEvent_GetValueDelegate m_GetValueDelegate;
    bool ReplayInitialStateToggleGetValueEventDelegate();
    class AActor* m_Actor;

};

struct FReplayCurrentRecordingData
{
    int64 m_iRecordingArchiveSize;
    int32 m_iRecordingDuration;
    FReplaySizeManagement m_SizeManagementData;
    float m_fBytesPerSeconds;
    float m_fTimeleftInSecondsAvg;

};

class UReplaySystem : public UObject
{
    FReplaySystemOnTimeDilationChanged OnTimeDilationChanged;
    void ReplayTimeDilationChangeDelegate(float _fTimeDilation);
    FReplaySystem_OnRecordingStreamingCompleted m_OnRecordingStreamingCompleted;
    void OnRecordingComplete();
    FReplaySystem_OnRecordingChanged m_OnRecordingChanged;
    void OnReplayRecordingChanged(bool _bRecording);
    FReplaySystem_OnReplayFeedbackEvent m_OnReplayFeedbackEvent;
    void ReplayFeedbackEventSignature(EReplayFeedbackEvent _eEvent);
    FReplaySystem_OnDemoFinishPlayback m_OnDemoFinishPlayback;
    void DynamicMulticast();
    bool m_bTimeDilationReplicated;
    bool m_bPauserPlayerStateReplicated;
    class UThePlainesGameInstance* m_GameInstance;
    class UReplayLevelStreamingReplication* m_ReplayStreaming;
    class UReplaySoundReplication* m_ReplaySound;
    class UReplayManagement* m_ReplayManagement;
    float m_fReplayStartVislogTimeS;
    TArray<FReplayInitialStateToggleEvent> m_InitialStateToggleEvents;

    void ReplaySpaceStatusDelegate__DelegateSignature(const FReplaySizeManagement& _sizeManagement, bool _bHasSpaceForNewReplay);
    void BPF_StopRecordingAndContinueWith(class APlayerController* _controller, FBPF_StopRecordingAndContinueWithOnContinue _onContinue, const EReplayStopRecordingReason _eReason);
    void BPF_StopRecording(const EReplayStopRecordingReason _eReason);
    void BPF_StartReplay(FString _replayID);
    void BPF_StartRecording();
    void BPF_SetPlayingPlayerCharacter(class AFightingCharacter* _character, const class UObject* _worldContextObject);
    void BPF_SetDemoPlayTimeDilation(const class UObject* _worldContextObject, float _fDilation);
    void BPF_ReplayStopRecording(const class UObject* _worldContextObject, const EReplayStopRecordingReason _eReason);
    void BPF_ReplayStartRecording(const class UObject* _worldContextObject);
    void BPF_ReplayStartPlaying(const class UObject* _worldContextObject);
    void BPF_RegisterInitialStateEvent(FBPF_RegisterInitialStateEventEvent _event, class AActor* _Instigator, FBPF_RegisterInitialStateEventGetValueEvent _getValueEvent);
    void BPF_QueryReplaySpaceStatus(const class UObject* _worldContextObject, FBPF_QueryReplaySpaceStatusCallback _callback);
    void BPF_PushPopPauseRecording(int32& _iInOutTag, FString _context, const bool _bPush, const class UObject* _worldContextObject);
    void BPF_PushPopDisableRecording(int32& _iInOutTag, FString _context, const bool _bPush, const class UObject* _worldContextObject, const EReplayStopRecordingReason _eReason);
    bool BPF_MustUpdateMaxFPS();
    bool BPF_IsRecordingDisabled(const class UObject* _worldContextObject);
    bool BPF_IsRecording(const class UObject* _worldContextObject);
    bool BPF_IsReadyForPlaying(const class UObject* _worldContextObject);
    bool BPF_IsPlaying(const class UObject* _worldContextObject);
    bool BPF_IsKeepingReplay();
    bool BPF_IsDemoPlayPaused(const class UObject* _worldContextObject);
    bool BPF_IsCurrentDemoTimeSnapped(const class UObject* _worldContextObject);
    float BPF_GetVislogGameplayTimeS();
    EReplayStopRecordingReason BPF_GetStopRecordingReason(const class UObject* _worldContextObject, bool& _bOutIsRecording);
    float BPF_GetSnappedDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    class UReplaySystem* BPF_GetReplaySystem(const class UObject* _worldContextObject);
    class UReplayManagement* BPF_GetReplayManagement(const class UObject* _worldContextObject);
    class AReplayController* BPF_GetReplayController(const class UObject* _worldContextObject);
    class AFightingCharacter* BPF_GetPlayingPlayerCharacter(const class UObject* _worldContextObject);
    int32 BPF_GetKeyFrameIndexFromDemoTime(float _fDemoTimeS, bool _bCheckClosestFrame);
    float BPF_GetDemoTimeFromKeyFrameIndex(int32 _iKeyFrameIndex);
    float BPF_GetDemoPlayTimeDilation(const class UObject* _worldContextObject);
    class USCDemoNetDriver* BPF_GetDemoNetDriver(const class UObject* _worldContextObject);
    bool BPF_GetCurrentReplayRecordingData(FReplayCurrentRecordingData& _inoutData);
    float BPF_GetCurrentReplayLengthS(const class UObject* _worldContextObject);
    float BPF_GetCurrentReplayLengthMS(const class UObject* _worldContextObject);
    float BPF_GetCurrentDemoTimeS(const class UObject* _worldContextObject);
    float BPF_GetActorLastReplicationTime(class AActor* _actor);
    bool BPF_CanStartRecording(const class UObject* _worldContextObject);
};

class UReplayTimelineContainerBase : public UUserWidget
{

    TScriptInterface<class IReplayWidgetHandler> BPF_GetWidgetHandler();
};

class UReplayTimelineController : public UObject
{
    class UReplayCutManagement* m_CutManagement;
    class UReplayTimelineModel* m_Model;
    FReplayTimelineController_OnTimeDilationChanged m_OnTimeDilationChanged;
    void OnTimeDilationChangedSignature(float _fPreviousTimeDilation, float _fCurrentTimeDilation);

    void BPF_SaveKeys();
    void BPF_ResetTransitionContext();
    void BPF_ResetModel();
    void BPF_ResetFocusTargetTransitionContext();
    class UReplayKey* BPF_GetCurrentKeyWithCameraTransition();
    class UReplayKey* BPF_GetCurrentKeyOfType(EReplayKeyTypeFlag _eTypeFlag);
};

class UReplayTimelineModel : public UObject
{
    FReplayTimelineModel_OnKeyAdded m_OnKeyAdded;
    void OnKeyAddedSignature(class UReplayKey* _key, bool _bCanSelectKey);
    FReplayTimelineModel_OnKeyRemoved m_OnKeyRemoved;
    void OnReplayKeyEvent(class UReplayKey* _key);
    FReplayTimelineModel_OnRecalcDilatedTime m_OnRecalcDilatedTime;
    void OnTimelineRecalcDilatedTimeSignature(int32 iRecalcStartIndex);
    FName m_ChosenMusicForExport;
    TArray<class UReplayKey*> m_Keys;

    void OnTimelineRecalcDilatedTimeSignature__DelegateSignature(int32 iRecalcStartIndex);
    void OnKeyAddedSignature__DelegateSignature(class UReplayKey* _key, bool _bCanSelectKey);
    void BPF_UpdateKeyLocationData(class UReplayKey* _key, const FVector& _vLocation, const FQuat& _qRotation);
    void BPF_UpdateKeyData(class UReplayKey* _key, const FReplayKeyData& _data);
    void BPF_SetMusicForExport(FName _wantedMusic);
    void BPF_SaveState();
    void BPF_RecalcDilatedTimes(int32 _iStartingIndex);
    bool BPF_IsLastKey(const class UReplayKey* _key);
    bool BPF_IsFirstKey(const class UReplayKey* _key);
    bool BPF_IsBoundaryKey(int32 _iIndex);
    bool BPF_HasUndoStateAvailable();
    bool BPF_HasRedoStateAvailable();
    bool BPF_HasKey(int32 _iKeyIndex);
    class UReplayKey* BPF_GetPreviousKeyWithCameraTransition(const class UReplayKey* _key);
    class UReplayKey* BPF_GetPreviousKeyOfType(const class UReplayKey* _key, const EReplayKeyTypeFlag _eType);
    class UReplayKey* BPF_GetPreviousKey(const class UReplayKey* _key);
    class UReplayKey* BPF_GetNextKeyWithCameraTransition(const class UReplayKey* _key);
    class UReplayKey* BPF_GetNextKeyOfType(const class UReplayKey* _key, const EReplayKeyTypeFlag _eType);
    class UReplayKey* BPF_GetNextKey(const class UReplayKey* _key);
    TArray<class UReplayKey*> BPF_GetKeys();
    class UReplayKey* BPF_GetKeyAtKeyFrameIndex(int32 _iKeyFrameIndex);
    class UReplayKey* BPF_GetKey(int32 _iIndex);
    FName BPF_GetCurrentMusicForExport();
};

struct FReplayTimelineIndicatorDisplayProperties
{
    class UCurveFloat* m_TimeDilationIndicatorPositionRemappingCurve;
    float m_fIndicatorsAlignment;
    float m_fIndicatorsHeight;
    float m_fIndicatorsFrequency;
    bool m_bAntiAlias;
    float m_fIndicatorsThickness;
    float m_fTransitionThickness;

};

struct FReplayTimelineTimeDilationData
{
    FVector2D m_vStartPosition;
    FVector2D m_vEndPosition;
    bool m_bTransitionVisible;
    TArray<float> m_IndicatorDilatedTimes;
    float m_fTimeDilation;

};

struct FReplayTimelineTimeDilationContext
{
    TArray<FReplayTimelineTimeDilationData> m_Transitions;

};

struct FReplayTimelineCurrentTransitionContext
{
    FVector2D m_vStartPosition;
    FVector2D m_vEndPosition;
    bool m_bHighlighted;

};

class UReplayTimelineTransition : public UReplayTimelineContainerBase
{
    TArray<EReplayTransitionElement> m_DrawOrder;
    FLinearColor m_DefaultTint;
    FLinearColor m_HighlightTint;
    bool m_bCurrentTransitionAntiAlias;
    float m_fCurrentTransitionThickness;
    FReplayTimelineIndicatorDisplayProperties m_TimeDilationDisplayProperties;
    FReplayTimelineTimeDilationContext m_TimeDilationTransitionsContext;
    FReplayTimelineCurrentTransitionContext m_CurrentTransitionContext;

    void OnKeyHoverOrSelectStateChanged(const class UReplayKeyWidget* _widget);
    void OnDelayedUpdateTransitionForKey(const class UReplayKeyWidget* _widget);
    bool BPE_OverrideGenerateTimeDilationIndicatorDilatedTimes(FReplayTimelineTimeDilationData& _data);
    void BPE_DrawTimeDilationTransitions();
};

class UReplayTimelineWidget : public UUserWidget
{
    float m_fZoom;
    float m_fPreviewCursorAlphaTriggerUnzoom;
    float m_fAdaptZoomViewPercentage;
    class UReplayTimelineContainerBase* m_BackgroundWidget;
    class UReplayTimelineTransition* m_TransitionWidget;
    class UCanvasPanel* m_KeysPanel;
    FMargin m_TimelineMargin;
    TSubclassOf<class UReplayKeyWidget> m_KeyWidgetClass;
    TMap<class UReplayKey*, class UReplayKeyWidget*> m_KeyWidgetsMap;
    TArray<class UReplayKeyWidget*> m_KeyWidgets;
    class AReplayController* m_ReplayController;

    void OnTimelineControllerTransitionContextInitialized();
    void OnKeyDataUpdated(class UReplayKey* _key, const FReplayKeyData& _previousData);
    void OnKeyDataIndexUpdate(class UReplayKey* _key, int32 _iPreviousIndex, EReplayKeyIndexUpdateReason _eReason);
    void OnGoToTimeCompleted();
    void BPF_SetZoom(float _fZoom);
    void BPF_KeyPropertyChanged(class UReplayKey* _key);
    void BPF_Initialize(class AReplayController* _controller);
    class UReplayKeyWidget* BPF_GetWidget(const class UReplayKey* _key);
    float BPF_GetTimelinePosition(float _fDilatedDemoTime);
    FFloatRange BPF_GetRemappedZoomView(const FFloatRange& _zoomRescaleRange);
    void BPF_GetKeyPositionOffsetOverrides(const class UReplayKeyWidget* _keyWidget, float& _fOutTimeOffset, float& _fTimelinePositionOffset);
    FVector2D BPF_GetKeyPosition(const class UReplayKeyWidget* _keyWidget, bool _bOffsetKeySize, bool _bAddContainerPadding, bool& _bOutIsOutOfBounds, bool _bPreventKeyTypePositionOverride);
    float BPF_GetCurrentTimelinePosition();
    float BPF_GetCurrentDilatedTime();
    class UReplayKeyWidget* BPF_AddKey(class UReplayKey* _key);
    void BPE_RequestKeysDisplayUpdate();
    void BPE_OnUpdateKeySelectedDisplay(class UReplayKey* _key);
    void BPE_OnTimelineControllerTransitionContextInitialized(const class UReplayKey* _currentCameraKey);
    void BPE_OnPaintTimelineBounds(const FFloatRange& _zoomRescaleRange, const FFloatRange& _timelineRange, FPaintContext& _context);
    void BPE_OnPaintCursorPreview(FVector2D _vStartPosition, FVector2D _vEndPosition, FPaintContext& _context);
    void BPE_OnKeyWidgetHoverOrSelectChange(const class UReplayKeyWidget* _widget);
    void BPE_OnKeySelectionUpdate(class UReplayKey* _key, bool _bSelected);
    void BPE_OnKeyPostDelete(class UReplayKey* _key);
    void BPE_OnKeyDilatedTimeRecalc(int32 _iStartingIndex);
    void BPE_OnKeyAdded(class UReplayKeyWidget* _widget);
    void BPE_OnDebugPaintCursor(FVector2D _vStartPosition, FVector2D _vEndPosition, EReplayTimelineDebugType _eDebugType, FPaintContext& _context);
};

class UReplayUIModeDB : public UDataAsset
{
    TArray<class TSubclassOf<UReplayUIModeUserWidget>> m_UIModeUserWidgets;

};

class UReplayUIModeUserWidget : public USCUserWidget
{
    bool m_bAddToViewport;
    int32 m_iZOrder;
    bool m_bIsActive;
    bool m_bHandleInputWhenUINotVisible;
    bool m_bIsOverlay;
    FText m_DisplayName;

    void BPE_OnLeaveMode();
    void BPE_OnEnterMode();
};

class AReplayVideoRecorder : public AActor
{
    FReplayVideoRecorder_OnVideoRecordingComplete m_OnVideoRecordingComplete;
    void VideoRecordEvent(bool bSuccess);
    FReplayVideoRecorder_OnVideoRecordingStarted m_OnVideoRecordingStarted;
    void VideoRecordEvent(bool bSuccess);
    FAvailabilityLayerCache m_AvailabilityLayerCache;

    void BPF_StopVideoRecording();
    void BPF_RemoveReplaySystemListeners();
    void BPF_GoToStart();
    void BPF_GoToEnd();
    void BPE_StartRecordingVideo();
    void BPE_OnPlayBackCompleted(class UWorld* _world);
    void BPE_OnGoToTimeCompleted();
};

class IReplayWidgetHandler : public IInterface
{

    class UReplayTimelineModel* BPF_GetTimelineModel();
    void BPF_GetTimelineDilatedTimeBounds(float& _fLowerBound, float& _fUpperBound);
    float BPF_GetTimelineDilatedDemoTimeAlpha(float _fDilatedDemoTime);
    FVector2D BPF_GetContainerLocalSize();
};

class UResilienceOrderService : public UOrderService
{
    int32 m_iBonus;

};

class UResourceItemData : public UBaseItemData
{
    int32 m_iFragmentsNb;
    EGearRarity m_eRarity;

};

class UResourcesTexturesData : public UDataAsset
{
    FText m_FragmentText;
    TSoftObjectPtr<UTexture2D> m_FragmentTexture;

};

class IControllerButtonInterface : public IInterface
{

    void BPE_SetInputAction(InputAction _eAction, class UWidget* _owner, EControllerIconStyles _eIconStyle, EControllerIconAxisTypes _eAxisType, const FSCUserDefinedEnumHandler& _drawingStyle);
};

class URichTextBlockControllerDecorator : public URichTextBlockDecorator
{
    EControllerIconStyles m_eDefaultIconStyle;
    EControllerIconAxisTypes m_eDefaultAxisType;
    FSCUserDefinedEnumHandler m_DefaultDrawingStyle;
    TSubclassOf<class UUserWidget> m_WidgetClass;
    int32 m_iBaselineOffset;
    FString m_MetaData;

};

class URichTextBlockControllerDecoratorHelper : public UBlueprintFunctionLibrary
{

    FString BPF_GetInputActionValueName(InputAction _eAction);
    FString BPF_GetControllerIconStylesValueName(EControllerIconStyles _eStyle);
    FString BPF_GetControllerIconAxisTypesValueName(EControllerIconAxisTypes _eAxis);
};

class URunReactionBTTaskNode : public UBTTaskNode
{
    EGlobalBehaviors m_NextBehavior;
    EGlobalBehaviors m_BehaviorToTest;
    EFightingActionState m_eActionState;

};

class URushAbility : public USCGameplayAbility
{
    ESpeedState eMinNeededSpeedState;
    bool m_bResetGuard;

};

class URushAttackDB : public UDataAsset
{
    float m_fRushAttackMinTime;
    bool m_bFailedAttackRushFalseTracking;
    float m_fRushAttackTrackingAngle;

};

class USafeZoneEvaluationRange : public USCAnimNotifyState
{
};

class USafeZoneOrderService : public UOrderService
{
    int32 m_iMaxIterations;
    bool m_bUseTargetSnapToBlend;
    float m_fBlendDuration;
    FFloatRange m_ClampZone;
    FFloatRange m_ZoneAnimFrameRange;
    float m_fMaxSpeed;
    FVector m_vNavMeshExtraZone;
    FVector m_vAdditionnalSpaceToTakeFromAnim;
    FName m_TargetBone;

};

struct FSafeZoneBonePair
{
    FName m_bone1;
    FName m_bone2;

};

class UBoneToBoneSafeZoneOrderService : public USafeZoneOrderService
{
    TArray<FSafeZoneBonePair> m_bonePairList;
    float m_fForcedRatio;

};

struct FAbilityDelegateHandler
{
    TArray<FAbilityDelegateHandler_OnActivated> m_OnActivated;
    TArray<FAbilityDelegateHandler_OnDeactivated> m_OnDeactivated;

};

class USCAbilitySystemComponent : public UAbilitySystemComponent
{
    TArray<class TSubclassOf<UGameplayEffect>> m_StartEffects;
    FSCAbilitySystemComponent_OnSkillConsolidated m_OnSkillConsolidated;
    void OnSkillConsolidated();
    TMap<class TSubclassOf<UGameplayAbility>, class FAbilityDelegateHandler> m_OrderDelegateHandler;

    void BPF_UnlockSkill(TSubclassOf<class USkillGameplayEffect> _effect, bool _bForce);
    void BPF_UnlockPermanentSkills(const TMap<TSubclassOf<USkillGameplayEffect>, int32>& _unlockedSkillOccurences);
    void BPF_UnlockAllSkills(FString _path);
    void BPF_ResetShrineEffects();
    void BPF_RemoveAndSaveGameplayTag(const FGameplayTagContainer& _tag);
    void BPF_OnAbilityDeactived_Unbind(TSubclassOf<class UGameplayAbility> _abilityClass, FBPF_OnAbilityDeactived_UnbindDelegate _delegate);
    void BPF_OnAbilityDeactived_Bind(TSubclassOf<class UGameplayAbility> _abilityClass, FBPF_OnAbilityDeactived_BindDelegate _delegate);
    void BPF_OnAbilityActived_Unbind(TSubclassOf<class UGameplayAbility> _abilityClass, FBPF_OnAbilityActived_UnbindDelegate _delegate);
    void BPF_OnAbilityActived_Bind(TSubclassOf<class UGameplayAbility> _abilityClass, FBPF_OnAbilityActived_BindDelegate _delegate);
    void BPF_LockAllSkills(bool _bResetSave);
    bool BPF_IsSkillUnlocked(TSubclassOf<class USkillGameplayEffect> _effect);
    bool BPF_IsInStartEffects(TSubclassOf<class USkillGameplayEffect> _effect);
    bool BPF_IsAbilityActive(TSubclassOf<class UGameplayAbility> _abilityClass);
    TArray<class TSubclassOf<USkillGameplayEffect>> BPF_GetUnlockedSkills();
    bool BPF_GetNotificationsEnabled();
    void BPF_GetCooldownRemainingForTag(FGameplayTagContainer _inCooldownTags, float& _fTimeRemaining, float& _fCooldownDuration);
    void BPF_ConsolidateSkill(TSubclassOf<class USkillGameplayEffect> _effect);
    void BPF_ClearAndSaveGameplayTag();
    bool BPF_CanUnlockSkill(TSubclassOf<class USkillGameplayEffect> _effect);
    bool BPF_CanConsolidatekSkill(TSubclassOf<class USkillGameplayEffect> _effect);
    void BPF_AddShrineEffect(TSubclassOf<class UGameplayEffect> _effect);
    void BPF_AddAndSaveGameplayTag(const FGameplayTagContainer& _tag, bool _bNeedSaveGame);
};

class USCAbilitySystemComponentHelper : public UBlueprintFunctionLibrary
{

    void BPF_AssignOnPlayerTagsChangedDelegate(const FGameplayTag& _matching, const FBPF_AssignOnPlayerTagsChangedDelegateDelegate& _delegate);
};

class USCAbilitySystemGlobals : public UAbilitySystemGlobals
{
};

class USCActorManager : public UObject
{

    void OnActorDestroyed(class AActor* _actorDestroyed);
};

class USCAkAudioRTPCNotifyState : public USCAnimNotifyState
{
    class UAkRtpc* m_RTCPObject;
    FName m_RTPCName;
    float m_fValueAtStart;
    float m_fValueAtEnd;
    bool m_bCallRTPCOnSelf;

};

struct FSCAnimOrderServiceSettings
{
    TSubclassOf<class UOrderService> m_OrderService;
    bool m_bDisable;

};

class USCAnimMetaData : public UAnimMetaData
{
    TArray<FSCAnimOrderServiceSettings> m_CustomOrderServiceSettings;
    bool m_bUseWeaponAnimInfos;
    FWeaponAnimInfo m_WeaponAnimInfos;
    TMap<class TSubclassOf<ABaseWeapon>, class FWeaponAnimInfo> m_WeaponAnimInfosPerClass;
    FName m_SlopeCurveName;
    bool m_bShowSyncedAnimDebug;
    bool m_bRotateTargetBoneLocationOnFloorOrientation;
    bool m_bLockSpineXAxisRotation;
    bool m_bLockSpineYAxisRotation;
    float m_fFloorSpineRepartitionBlendInOut;
    FFloatRange m_FloorSpineRepartitionFrameRange;
    bool m_bOverrideSlopeBoneRepartition;
    TArray<FPropertyFloorBoneRepartition> m_OverrideSlopeBoneRepartition;

    void BPE_OnPlay(uint8 _uiOrderId, class ABaseCharacter* _character);
};

class USCBlueprintNotify : public UAnimNotify
{

    void BPE_ReceivedNotifyFromActiveOrder(class USkeletalMeshComponent* _meshComp, class UAnimSequenceBase* _animation);
};

class USCCloseAISense_Sight : public UAISense_Sight
{
};

class USCComboBoxButton : public UButtonUserWidget
{
    int32 m_iSelectedItem;
    TArray<FString> m_Items;
    TSubclassOf<class USCComboScrollList> m_ScrolllistClass;

    void OnRightClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnListClosed();
    void OnItemSelected(int32 _iIndex);
    void Onclick(class UButtonUserWidget* _button, bool _bWithMouse);
    bool BPF_IsOpened();
    void BPF_InitList(TArray<FString> _items);
    void BPE_SelectionChanged();
};

class USCComboScrollList : public USCUserWidget
{
    FSCComboScrollListOnItemSelected OnItemSelected;
    void ItemSelected(int32 SelectedIndex);

    void ItemSelected__DelegateSignature(int32 SelectedIndex);
    void BPE_InitFromStrings(const TArray<FString>& _list, int32 _iSelectedItem);
};

class USCCrowdFollowingComponent : public UCrowdFollowingComponent
{

    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
};

class USCCustomDPIScaling : public UDPICustomScalingRule
{
    float m_fBaseRatio;
    class UCurveFloat* m_CurveBelowRatio;
    class UCurveFloat* m_CurveAboveRatio;

};

class USCCustomNavLink : public UNavLinkCustomComponent
{
    bool m_bOverrideSpeedState;
    ESpeedState m_eForcedSpeedState;

};

class USCDebugSettings : public UDeveloperSettings
{
    EGameDifficulty m_eForcedDifficulty;

};

class USCDemoNetDriver : public USCBaseDemoNetDriver
{
};

class USCDialogAsyncActionBase : public UBlueprintAsyncActionBase
{
    FSCDialogAsyncActionBaseOnDialogCompleted OnDialogCompleted;
    void DialogAsyncOutputPin(int32 DialogNodeId);
    FSCDialogAsyncActionBaseOnDialogCut OnDialogCut;
    void DialogAsyncOutputPin(int32 DialogNodeId);
    FSCDialogAsyncActionBaseOnLineEnded OnLineEnded;
    void DialogAsyncOutputPin(int32 DialogNodeId);
    FSCDialogAsyncActionBaseOnInteractiveChoiceSelected OnInteractiveChoiceSelected;
    void DialogAsyncOutputPin(int32 DialogNodeId);

    class USCDialogAsyncActionBase* BPF_StartConversationExtended(class ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, class ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled);
};

class USCDialogWidget : public USCUserWidget
{
    bool m_bHandleShowSubtitleOption;

    void BPF_RemoveAllDelegates();
    bool BPF_IsRuleFulfilled(const FSCConversationRule& _rule);
    void BPF_InteractiveDialogTimerExpired();
    void BPF_DialogSelected(int32 _iIndex);
    bool BPF_AreRulesFulfilled(const TArray<FSCConversationRule>& _rules);
    void BPF_AddAllDelegates();
    void BPE_ShowBlackBarsRequested();
    void BPE_OnNextSegmentHasChoices();
    void BPE_OnDialogSegmentCompleted(class USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
    void BPE_OnDialogCompleted(class USCDialogComponent* _dialogLauncher);
    void BPE_InteractiveSequenceStarted(const FSCConversationInteractiveChoice& _choice);
    void BPE_InteractiveDialogInterrupted();
    void BPE_DialogLaunched(class USCDialogComponent* _dialogLauncher, const FSCDialogData& _dialogData, const bool _bGenericSubtitles);
    void BPE_DialogCanceled(class USCDialogComponent* _dialogLauncher, const bool _bGenericSubtitles);
};

class USCGameplayAbilityLibrary : public UBlueprintFunctionLibrary
{

    void BPF_SetFloatAttribute(const class AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
    float BPF_GetFloatAttribute(const class AActor* _actor, FGameplayAttribute _attribute, float _fDefaultValue);
};

class UCSCGameplayAbilityTargetDataLibrary : public UBlueprintFunctionLibrary
{

    FGameplayAbilityTargetDataHandle BP_AbilityTargetDataWithTarget(class AActor* _target);
};

class UTargetActionTypeRequest : public UObject
{

    EActionType BPE_GetTargetActionType(const class AActor* _owner);
};

class UTargetActionTypePerCondition : public UTargetActionTypeRequest
{
    TMap<class EActionType, class FBaseActorConditionInstance> m_ActionTypePerCondition;
    EActionType m_eDefaultValue;

};

class UAbilityPayload : public UObject
{
};

class USCGameplayAbilityActorInfoHelper : public UBlueprintFunctionLibrary
{

    class USCAbilitySystemComponent* BPF_GetSCAbilitySystem(const FSCGameplayAbilityActorInfo& _info);
    class AFightingPlayerController* BPF_GetFightingPlayerController(const FSCGameplayAbilityActorInfo& _info);
    class AFightingCharacter* BPF_GetFightingCharacter(const FSCGameplayAbilityActorInfo& _info);
};

class ASCGameSession : public AGameSession
{
};

struct FSCWuguanUserEnumSetting
{
    FSoftObjectPath m_Enum;
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;

};

class USCGameSettings : public USCBaseGameSettings
{
    TSoftObjectPtr<UMirrorAnimDB> m_DefaulMirrorAnimDB;
    bool m_bFilterByOrderServiceOnTeleport;
    TArray<TSoftClassPtr<UOrderService>> m_FilteringOrderServicesOnTeleport;
    FSoftObjectPath m_DefaultAttackTable;
    FSCWuguanUserEnumSetting m_UserEnums;
    FDataTableRowHandle m_DefaultHitbox;
    FSoftObjectPath m_PoseAssetForFacial;
    float m_DefaultPoseAssetNotifyStateEaseIn;
    float m_DefaultPoseAssetNotifyStateEaseOut;
    float m_fPredictionTime;
    int32 m_iHitBoxSamplingInFPS;
    uint8 m_uiPredictionStep;
    bool m_bAllowPredictionOnMovement;
    bool m_bDetachAvoidCapsuleWhenNoAvoidWindow;
    TSoftClassPtr<UArenaSettings> m_ArenaSettings;

};

class USCGameViewportClient : public UGameViewportClient
{
};

class ASCGauntletPerfTestActor : public AActor
{
    TArray<class ASCTestingLocationsBase*> m_TestingLocations;

};

struct FAlwaysCollidingActions
{
    TArray<InputAction> m_Actions;

};

struct FMappingProfileInfos
{
    EKeyboardLayout m_eKeyboardLayout;
    TSoftObjectPtr<UInputMappingProfileDB> m_Profile;

};

struct FMappingProfileList
{
    TArray<FMappingProfileInfos> m_MappingProfiles;

};

struct FRemappingIncompatibilityGroup
{
    bool m_bDetectChildCollisions;
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;

};

struct FInputMappingCompatibilityRule
{
    EInputMappingCompatibilityRuleType m_eRule;
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;

};

struct FActionMappingCompatibilityRule
{
    EInputMappingCompatibilityRuleType m_eRule;
    TSet<InputAction> m_Actions;

};

struct FRemappingClasses
{
    TArray<TSoftObjectPtr<UGenericInputData>> m_Classes;

};

class USCInputSettings : public UDeveloperSettings
{
    InputAction m_eInputAction;
    InputAction m_eAltInputAction;
    bool m_bVirtualCursorAcceleration;
    float m_fVirtualCursorAcceleration;
    float m_fVirtualCursorMaxSpeed;
    float m_fVirtualCursorStickySlowdown;
    float m_fVirtualCursorDeadZone;
    bool m_bSnapEnabled;
    float m_fSnapSpeed;
    TSoftObjectPtr<UMenuDB> m_MenuDB;
    bool m_bActivateRemapping;
    TArray<FInputPriorityGroup> m_InputPriority;
    TArray<FAlwaysCollidingActions> m_AlwaysCollidingActions;
    TArray<InputAction> m_ActionPriority;
    TMap<class FInputPresetsEnumHandler, class FInputMappingData> m_Mapping;
    TMap<class FInputMappingProfileEnumHandler, class FMappingProfileList> m_MappingProfileList;
    TSet<InputAction> m_UnremappableActions;
    TArray<FRemappingIncompatibilityGroup> m_IncompatibilityGroups;
    TMap<class TSoftObjectPtr<UGenericInputData>, class FInputMappingCompatibilityRule> m_InputCustomCompatibilityRules;
    TArray<FActionMappingCompatibilityRule> m_ActionCompatibilityRules;
    TSoftObjectPtr<UGenericInputData> m_EmptyInputData;
    FRemappingClasses m_BaseRemapClasses;
    TMap<class InputAction, class FRemappingClasses> m_CustomActionRemapping;
    TMap<class FInputPresetsEnumHandler, class FRemappingClasses> m_CustomPresetRemapping;
    class UMenuDB* m_CachedMenuDB;
    TArray<class UInputMappingProfileDB*> m_CachedProfiles;
    TArray<class UGenericInputData*> m_CachedInputDatas;

};

struct FSequenceBinding
{
    FName m_RoleName;
    TSoftObjectPtr<AActor> m_Actor;

};

class ASCLevelSequenceActor : public ALevelSequenceActor
{
    TArray<FSequenceBinding> m_SequenceBindings;

    void BPF_Play();
    class ULevelSequence* BPF_GetOverridingLevelSequence(class ACharacter* _characterOwner);
};

class USCLocalPlayer : public ULocalPlayer
{
};

class ASCNavLinkProxy : public AActor
{
    FSCNavLinkProxyOnNavLinkReached OnNavLinkReached;
    void CustomNavLinkReached(class AActor* MovingActor, const FVector& DestinationPoint);
    TArray<class USCCustomNavLink*> m_CustomNavLinks;
    class USceneComponent* m_PositionComponent;
    float m_fDistance;
    float m_fLeftOffset;
    float m_fRightOffset;

    void SetNavLinksEnabled(bool _bEnabled);
    bool AreAllNavLinksEnabled();
};

class USCNavModifierComponent : public UNavModifierComponent
{

    void BPF_CalcAndCacheBounds();
};

class ASCPlayerCameraManager : public APlayerCameraManager
{
    TArray<FTViewTarget> m_ForcedViewTargetToUpdateUnderneath;

};

class UScreenTextureDB : public UDataAsset
{
    TArray<FScreenTextureData> m_ScreenTextures;

};

class USCReplaySettings : public UDeveloperSettings
{
    TSoftClassPtr<ABaseReplayController> m_PhotoModeGameplayControllerClass;
    FString m_ScreenShotFileName;
    FString m_ScreenShotDateFormat;
    TArray<FString> m_StatesToSaveWhenStartRecording;
    TArray<FString> m_RTPCToSaveWhenStartRecording;
    FString m_EventToResetRTPCWhenStartRecording;
    TSoftClassPtr<UReplaySaveGame> m_ReplaySaveGameClass;
    FReplayKeyDataCameraSettings m_DefaultCameraSettings;
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    TArray<TEnumAsByte<ECollisionChannel>> m_MeshCollisionsChannels;
    FGameplayTag m_ReplayEditorAllowedContentTag;
    bool m_bReplayEditorBuildEnabled;
    bool m_bPhotomodeBuildEnabled;
    bool m_bIsReplayEditorAllowedForPlatform;
    TMap<class FString, class FText> m_LocalizedMapName;
    int32 m_iReplaySkipTimeNoLoadingScreenMaxFrames;
    FFloatRange m_ReplayRecordingTimeRange;

    bool BPF_LocalizeMapName(FString& _inOutMapName);
    bool BPF_IsReplayEditorEnabled(const class UObject* _worldContextObject);
    bool BPF_IsPhotomodeEnabled();
    FFloatRange BPF_GetReplayRecordingTimeRangeMS();
    FReplayKeyDataCameraSettings BPF_GetDefaultCameraSettings();
};

class USCSessionManager : public UObject
{
    class USCTrackingAuthentication* m_TrackingAuthenticationComponent;

};

class USCSignificanceManager : public USignificanceManager
{
};

class USCSignificanceSettings : public UObject
{
    float m_fRecentlyRenderedLimit;
    float m_fHighBucketDist;
    float m_fMediumBucketDist;

};

class ASCSpectatorPawn : public ASCSpectatorPawnBase
{
    float m_fSpeedFactorModifier;
    float m_fFOVModifier;

};

class ASCTeleporter : public AActor
{
    class USceneComponent* m_RootComponent;
    class UBoxComponent* m_EntryBoxComponent;
    class UBoxComponent* m_ExitBoxComponent;

    void BPF_RemoveActorToTeleport(class AActor* _leavingActor);
    void BPF_LaunchTeleport();
    void BPF_AddActorToTeleport(class AActor* _actorToTeleport);
};

class ASCTestingLocationsBase : public AActor
{
};

class USCTools : public USCCoreTools
{

    EQuadrantTypes GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror);
    void BPF_ModifyObject(class UObject* _object);
    bool BPF_IsDesktopPlatform();
    bool BPF_HasEntitlement(const class UObject* _worldContextObject, const FName& _entitlement);
    FString BPF_GetMapPath(TSoftObjectPtr<UWorld> _map);
    class UGameInstance* BPF_GetGameInstanceNoWarning(const class UObject* _worldContextObject);
    class UObject* BPF_GetDefaultObject(UClass* _ObjectClass);
    EPlatform BPF_GetCurrentSubsystemPlatform(const class UObject* _worldContextObject);
    void BPF_FadeWithoutWait(class UObject* WorldContextObject, const float _fDuration, const bool _bToBlack);
    void BPF_Fade(class UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo);
};

class USCTrackingAuthentication : public UObject
{
};

class USCTrackingAuthenticationEOS : public USCTrackingAuthentication
{
};

class USCTrackingAuthenticationNSA : public USCTrackingAuthentication
{
};

class USCTrackingAuthenticationPSN : public USCTrackingAuthentication
{
};

class USCTrackingAuthenticationSTEAM : public USCTrackingAuthentication
{
};

class USCTriggerableActionsComboEvent : public UComboEvent
{
    TArray<class USCAITriggerableActions*> m_ActionsToTrigger;

};

class USelfCondition : public UBaseActorTargetCondition
{
    FBaseActorConditionInstance m_condition;

};

class USessionTimeManager : public UObject
{
    float m_fDelayBetweenSync;
    float m_fTimeSinceLastSync;
    float m_fScaleTime;

};

class USetCameraBlackboardBoolNotify : public UAnimNotify
{
    FName m_blackboardKeyName;
    bool m_bValueToApply;

};

class USetGameplayTagDialogAction : public UDialogActionBase
{
    bool m_bAdd;
    FName m_Owner;
    FGameplayTag m_GameplayTag;

};

struct FItemEffects
{
    EEffectTarget m_eEffectTarget;
    class UEffectData* m_EffectData;
    int32 m_iAOEWantedRelations;

};

class AUsableItem : public AActor
{
    class UShapeComponent* m_ShapeComponent;
    FName m_ItemAttackName;
    TArray<FItemEffects> m_Effects;
    int32 m_iMatchesWithAvoid;

    EItemUseState BPF_GetItemUseState();
    float BPF_ComputeAttackKnockbackCoeff(class AActor* _Instigator, class AActor* Target, const FHitResult& _hitResult);
    void BPE_InterruptItemUseAction();
    void BPE_InstantUse();
    void BPE_EndUsePhase();
    void BPE_EndItemUseAction();
    void BPE_BeginUsePhase();
    void BPE_BeginItemUseAction();
};

class AShockWaveDamageItem : public AUsableItem
{
    class UCurveFloat* m_KnockbackCoefOverDistToInstig;

};

struct FBoneHitDBInfo
{
    FBoneReference m_boneRef;
    EHitShapeType m_eShapeType;
    float m_fHalfHeight;
    int32 m_iNumLines;
    bool m_bOneSided;
    FVector m_Extent;
    float m_fRadius;
    float m_fCapsuleHalfHeight;
    FRotator m_RotationOffset;
    FVector m_vPositionOffset;
    float m_fChainHitBoxSpacing;
    float m_fChainValidDistance;
    TArray<FBoneReference> m_bonesInChain;

};

class USkeletalMeshHitDetectionDB : public UBaseHitDetectionDB
{
    TArray<FBoneHitDBInfo> m_bonesToWatch;

};

struct FSkillTreeNode
{
    FName m_Socket;
    TSubclassOf<class USkillGameplayEffect> m_Skill;
    class USkillsChilds* m_Childs;

};

class USkillButton : public UButtonUserWidget
{
    bool m_bUdateParallax;
    FName m_SocketName;
    TArray<class USkillButton*> m_ChildButtons;
    TSubclassOf<class USkillGameplayEffect> m_GameplayEffect;
    class USkillsDB* m_DB;

    void BPF_UpdateButtonLocation(class ASkillTree* SkillTree);
    void BPF_SetSkillTreeNode(const FSkillTreeNode& _node);
    void BPF_GetSkillTreeNode(FSkillTreeNode& _node);
};

class USkillButtonHelper : public UBlueprintFunctionLibrary
{

    void BPF_RebuildDBFromButtons(class USkillsDB* _db, class USkillButton* _root);
};

class USkillGameplayEffect : public USCGameplayEffect
{
    int32 m_iSkillPointCost;
    TArray<int32> m_ConsolidationSkillPointCosts;
    ECharacterStat m_eStatUsedToUnlockSkill;

};

struct FSkillFilter
{
    ENullableCondition m_eAcquired;

};

class USkillsChilds : public UObject
{
    TArray<FSkillTreeNode> m_Skills;

    void EnumerateChildsDelegate__DelegateSignature();
    bool BPF_GetParent(const FSkillTreeNode& _node, FSkillTreeNode& _parent);
    bool BPF_FindSkillBySocket(FName _socketName, FSkillTreeNode& _node);
    void BPF_FindChilds(class USCAbilitySystemComponent* _component, const FSkillFilter& _filter, TArray<FSkillTreeNode>& _result, const class USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed);
    void BPF_FindChild(class USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FSkillTreeNode& _result, const class USkillsChilds* _rootToEnumerateVirtualChilds);
    void BPF_EnumerateChilds(class USCAbilitySystemComponent* _component, const FSkillFilter& _filter, FBPF_EnumerateChildsEnumerator _enumerator, const class USkillsChilds* _rootToEnumerateVirtualChilds, bool _bStopOnFilterFailed);
    int32 BPF_CountChilds(class USCAbilitySystemComponent* _component, const FSkillFilter& _filter, bool _bStopOnFilterFailed);
};

class USkillsDB : public UDataAsset
{
    class USkillsChilds* m_Root;

};

class ASkillTree : public AActor
{
    class USkillsDB* m_SkillsDB;

    void BPF_UpdateTreeOverTime(const TArray<class TSubclassOf<USkillGameplayEffect>>& _prevUnlockedSkills, const TArray<class TSubclassOf<USkillGameplayEffect>>& _newUnlockedSkills, float _fDuration, class UCurveFloat* _floatCurve, FBPF_UpdateTreeOverTimeOnFinished _onFinished);
    void BPF_SetTreeState(const TArray<class TSubclassOf<USkillGameplayEffect>>& _unlockedSkills);
    void BPF_BlendTreeState(const TArray<class TSubclassOf<USkillGameplayEffect>>& _prevSkills, const TArray<class TSubclassOf<USkillGameplayEffect>>& _newSkills, float _fAlpha);
    void BPE_SetNodeState(FName _boneName, float _fState, float _fAge);
};

class ISkillTreeMenuInterface : public IInterface
{

    void BPE_DebugSkillButtonUpdated();
};

struct FSkinToneGender
{
    class UMaterialInterface* m_SkinTones;

};

class USkinTonesDB : public UDataAsset
{
    TArray<FSkinToneGender> m_SkinTones;
    class UMaterialInterface* m_BaseFXMaterials;

};

class ASkySphere : public AActor
{
    class UMaterialInstance* BaseMaterial;

};

class USnapObjectNotify : public USCAnimNotify
{
};

class USnapOrderService : public UOrderService
{
    bool m_bNeedTargetActor;
    bool m_bTickBeforeTargetActor;
    bool m_bMimicTargetFloorDist;
    FName m_SelfBoneName;
    FName m_TranslationCurve;
    FName m_RotationCurve;
    bool m_bUseSelfBoneRatio;
    float m_fSelfBoneRatio;
    float m_fTargetRotationOffset;
    bool m_bSnapSelfBoneToGround;
    FName m_TargetBoneName;
    class UCurveFloat* m_Dynamic;
    bool m_bUseTransitionFrames;
    float m_fTransitionFrames;
    TSubclassOf<class UOrderService> m_TransitionUntilOrderService;
    bool m_bStopWhenTransitionOrderServiceStarted;
    TSubclassOf<class UOrderService> m_StartSnappingAfterTargetService;
    bool m_bDisableCollisions;
    bool m_bDisableCollisionsWithStaticMesh;
    bool m_bPredictTargetRedirection;
    bool m_bPredictTargetSnap;
    bool m_bSnapTranslationFollowDynamicCurve;
    class UCurveFloat* m_SnapTranslationDynamic;
    bool m_bForceLinearSnap;
    float m_fMaxSnapSpeed;
    float m_fMaxCumulatedDistance;
    float m_fMaxCumulatedAngularDistance;
    float m_fMaxAngularSpeed;
    float m_fMaxDistanceToNavmesh;
    FVector m_vWorldOffsetOnTargetPos;

    void BPF_SetCustomSnapOrderServiceTransform(const FTransform& _transform, TSubclassOf<class USnapOrderService> _serviceClass, const class AFightingCharacter* _character, uint8 _uiOrderId);
    void BPF_BindTargetTransformDelegate(const FBPOrderServiceInstance& _self, const FBPOrderServiceInstance& _targetServiceInstance, const FBPF_BindTargetTransformDelegateDelegate& _delegate);
    FTransform BPE_GetTargetTransform(const FBPOrderServiceInstance& _instance, float _fDt, bool& _bOutTargetReady);
};

class USnapOrderServiceNotifyState : public UOrderServiceNotifyState
{
};

struct FNameArray
{
    TArray<FName> m_Array;

};

struct FInFightPlayersInfo
{
    TWeakObjectPtr<class AActor> m_EnemyActor;

};

class USocialComponent : public UActorComponent
{
    FSocialComponentOnEquippedEmoteChanged OnEquippedEmoteChanged;
    void OnEquippedEmoteChanged(const FName& _emoteName, const uint8 _uiEmoteSlotIndex);
    class UDataTable* m_EmoteDataTable;
    float m_fReceivedRequestTimeout;
    float m_fRequestBroadcastRange;
    FNameArray m_FixedEmoteWheelContent;
    FNameArray m_DefaultCustomEmotesContent;
    FNameArray m_FixedRequestReponseContent;
    uint8 m_uiHitCountThresholdForWarning;
    float m_fHealthPercentThresholdForWarning;
    uint8 m_uiHitCountThresholdForFight;
    float m_fHealthPercentThresholdForFight;
    float m_fFightDetectionTimeOut;
    float m_fFightTimeOut;
    float m_fFightRange;
    float m_fCoopResolutionTimeOut;
    TMap<class TWeakObjectPtr<AActor>, class ERelationshipTypes> m_Relationships;
    TArray<TWeakObjectPtr<AActor>> m_CoopGroup;
    TArray<FInFightPlayersInfo> m_InFightPlayers;

    void ServerStopCoop();
    void ServerReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    void ServerPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    void ServerPerformEmoteActionWithGameMode(EEmoteAction _eEmoteAction, class AActor* _targetActor, EGameModeTypes _eGameModeType);
    void ServerPerformEmoteAction(EEmoteAction _eEmoteAction, class AActor* _targetActor);
    void ServerPerformBroadcastEmoteActionWithGameMode(EEmoteAction _eEmoteAction, const TArray<class AActor*>& _targetActors, EGameModeTypes _eGameModeType);
    void ServerPerformBroadcastEmoteAction(EEmoteAction _eEmoteAction, const TArray<class AActor*>& _targetActors);
    void ServerCoopPvPValidateAnswer(bool _bAccept, EGameModeTypes _eGameModeType);
    void ServerCancelRequest(ESocialRequest _eRequest);
    void ServerCancelCoopGameMode(EGameModeTypes _eGameModeType);
    void ServerApplyCoop(class AActor* _actor);
    void OnRep_CoopGroup();
    void OnEquippedEmoteChanged__DelegateSignature(const FName& _emoteName, const uint8 _uiEmoteSlotIndex);
    void OnCoopGroupRemoved(const FCoopGroup& _group);
    void OnCoopGroupMemberRemoved(const FUniqueNetIdRepl& _netId, class AActor* _actor);
    void OnActorRelationshipEndPlayCallBack(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    void MulticastStopCoop();
    void MulticastRemoveGroupMember(FUniqueNetIdRepl _groupMemberUniqueId, EGameModeTypes _eGameModeType);
    void MulticastPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    void MulticastCoopPvPUpdateAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameModeType);
    void MulticastCoopBondResolution(class AActor* _coopGroupMember, const TArray<TWeakObjectPtr<AActor>>& _coopGroup);
    void MulticastChangeRelationship(class AActor* _actor, ERelationshipTypes _eRelation);
    void MulticastCancelRequest(ESocialRequest _eRequestType);
    void MulticastCancelCoopGameMode(EGameModeTypes _eGameModeType);
    void CoopDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    void ClientSendRequestWithGameMode(class AActor* _requestInstigator, ESocialRequest _eSocialRequest, EGameModeTypes _eGameModeType);
    void ClientSendRequest(class AActor* _requestInstigator, ESocialRequest _eSocialRequest);
    void ClientReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    void ClientApplyCoop(class AActor* _actor);
    void ClientAnswerRequest(class AActor* _requestAnswerer, bool _bAccept);
    void BPF_SetEmoteLock(bool _bLock, const FName& _name);
    void BPF_SetEmoteAsSeen(const FName& _name);
    void BPF_SetEmoteAsNew(const FName& _name);
    void BPF_ServerChangeRelationship(class AActor* _actor, ERelationshipTypes _eRelation);
    void BPF_LeaveCoopGroup();
    bool BPF_IsInCoopGroup();
    bool BPF_IsInCoopGameMode();
    bool BPF_IsEmoteUnlocked(const FName& _name);
    bool BPF_IsEmoteNew(const FName& _name);
    bool BPF_IsEmoteEquipped(const FName& _emoteName);
    bool BPF_HasCoopGroupReturningToPvE();
    ERelationshipTypes BPF_GetRelationship(class AActor* _actor);
    int32 BPF_GetNewEmotesCount();
    int32 BPF_GetCoopPlayerCount();
    int32 BPF_CountPlayerWithAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameMode);
    void BPF_CancelPendingCoopMatchMaking();
    void BPF_CancelPendingCoopGameModes(bool _bQuitTheGroup);
};

class USocialManager : public UObject
{
    float m_fCoopResolutionTimeOut;
    float m_fCoopResolutionReturningPvETimeOut;
    int32 m_NbNeededPlayersPerGameMode;
    int32 m_NbMaxPlayersPerGameMode;

};

struct FSortMethodData
{
    FText m_Name;

};

class USortMethodDB : public UDataAsset
{
    FSortMethodData m_SortMethodData;

    void BPF_GetSortMethodData(EInventorySearchOrder _sortMethod, FSortMethodData& _outSortMethodData);
};

class USoundGroundAnimNotify : public UAnimNotify
{

    void BPE_NotifyGround(class USkeletalMeshComponent* _meshComp, uint8 _surface);
};

struct FSoundStateInfo
{
    uint32 m_uiStateValue;
    bool m_bReplicates;

};

class AThePlainesLevel : public ASCLevelScriptActor
{
    class ASCBlenderManager* m_BlenderManager;
    class ULevelSequence* m_StartupSequence;
    bool m_bInChargeOfSoundSave;
    TArray<class UAkAudioBank*> m_AudioBanksToLoad;
    TMap<uint32, FSoundStateInfo> m_AKStateGroupValues;
    TArray<class UAkAudioBank*> m_SavedSoundBanksToLoad;

    void UnregisterFromSignificanceOnActorEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    bool BPF_IsSoundStateContainedInSaved(FString _SoundState);
    void BPF_InitSoundState(FString _StateGroup, FString _state, bool _bReplicates, bool _bSaveGame);
    void BPE_OnStartAIPhaseChanged(class AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    void BPE_OnLevelTransition(int32 _iTransitionIndex);
    void BPE_OnEndAIPhaseChanged(class AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex);
    void BPE_OnAppliedSoundStateFromSave();
    void BPE_AllSoundBanksLoaded();
};

struct FSoundMoodMeleeState
{
    int32 m_iMeleeDifficultyLevel;
    bool m_bIsFightActive;
    TWeakObjectPtr<class AAISituationActor> m_AiSituation;
    TWeakObjectPtr<class AAISituationActor> m_LastEncounteredSituation;

};

struct FSoundMoodState
{
    ESoundMoodGameplayState m_eGameplayState;
    int32 m_iLevel;
    FSoundMoodMeleeState m_meleeState;

};

class ASoundLevel : public AThePlainesLevel
{
    TArray<uint8> m_SoundManagerSaveData;

    void BPE_OnMoodChanged(FSoundMoodState _previousState, FSoundMoodState _newState);
    void BPE_OnAIGlobalBehaviorChanged(const class ABaseCharacter* _AICharacter, EGlobalBehaviors _ePreviousBehavior, EGlobalBehaviors _eNewBehavior);
};

struct FAudioOutput
{
    FText m_DisplayText;
    AkChannelConfiguration m_eChannelConfig;
    bool m_bUse3DOutput;

};

class USoundSettings : public UDeveloperSettings
{
    bool m_bEnableSoundMoods;
    FName m_MasterVolume;
    FName m_MusicVolume;
    FName m_SFXVolume;
    FName m_GameplaySFXState;
    FName m_GameplaySFXStateOn;
    FName m_GameplaySFXStateOff;
    FName m_DialogVolume;
    FName m_AdvancedVibrationStrengthRTPC;
    FName m_AdvancedVibrationState;
    FName m_AdvancedVibrationStateON;
    FName m_AdvancedVibrationStateOFF;
    AkChannelConfiguration m_eDefaultChannelConfig;
    FAudioOutput m_AudioOutputList;
    FName m_Audio3DRTPC;
    TArray<FString> m_HandlingMonoBusList;
    FName m_VoiceArchetypeSwitchGroup;
    FName m_VoiceVariationSwitchGroup;
    FName m_VoiceGenderSwitchGroup;
    FName m_VoiceGenderSwitchValues;

};

class USoundSettingsHelper : public UBlueprintFunctionLibrary
{

    FAudioOutput BPF_GetAudioOuputFromType(EAudioOutputType _eType, bool& _bOutFound);
};

struct FSoundTensionThreat
{
    TArray<class AAISituationActor*> m_AiSituations;
    int32 m_iBehaviorsMask;

};

class ASoundTensionVolume : public ASCPlayerVolume
{
    int32 m_iTensionLevel;
    FSoundTensionThreat m_Threat;

};

class ASoundTensionPortal : public ASoundTensionVolume
{
    int32 m_iTensionLevelBackward;

};

class USoundTensionPortalVisualizerComponent : public UActorComponent
{
};

class ASoundTransitionVolume : public ASCPlayerVolume
{
    class USplineComponent* m_SplineComponent;
    FName m_RTPC;

};

struct FSpawnerGroupLayer
{
    int32 m_iLevelMin;
    int32 m_iLevelMax;
    bool m_bFixedSituation;
    TArray<class AAISpawner*> m_Spawners;

};

class ASpawnerGroup : public AActor
{
    FSpawnerGroup_SituationChangeDelegateDyn m_SituationChangeDelegateDyn;
    void SpawnerGroupDelegateDynamic(class ASpawnerGroup* _spawnerGroup);
    TArray<class AAISpawner*> m_Spawners;
    TArray<FSpawnerGroupLayer> m_SpawningLayers;
    TArray<class ASpawnerGroup*> m_groupsToAlert;
    TArray<TWeakObjectPtr<AAISpawner>> m_SpawnersUsed;
    FDataTableRowHandle m_AlertedStateDialogSequenceRowHandle;
    bool m_bAssignRolesDynamically;
    bool m_bUseDefaultReal;
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    TSubclassOf<class UNavigationQueryFilter> m_dialogNavigationQueryFilter;
    bool m_bLookAtEnabledDuringDialog;
    bool m_bSkipSuspiciousOnDetection;
    bool m_bOverrideThreateningActions;
    uint32 m_uiThreateningActionsMask;
    EEnemyPresenceKnownType m_eMCPresenceKnownType;

    void SpawnerGroupDelegateDynamic__DelegateSignature(class ASpawnerGroup* _spawnerGroup);
    void BPF_TriggerBehaviorChange(class AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, bool _bSkipBark);
    void BPF_SpawnActors(int32 _iLevel, int32 _index, bool _bForce);
    int32 BPF_GetRemainingAICount(bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs);
    int32 BPF_GetRemainingAI(TArray<class UAIFightingComponent*>& _outAiComponents, bool _bAppendToArray, bool _bIncludeLinkedSpawner, bool _bIncludeAbandonningAIs);
};

class USpawnerGroupVisualizerComponent : public UActorComponent
{
};

class USpawnerVisualizerComponent : public UActorComponent
{
};

class USpawnExternalActorNotify : public USCAnimNotify
{
    TSubclassOf<class AActor> m_ActorClassToSpawn;
    FName m_CharacterBoneName;
    FName m_WeaponBoneName;
    FVector m_SpawnOffset;

};

class ASpawningVolume : public AActor
{
    class UShapeComponent* m_ShapeComponent;
    bool m_bAllowSpawnIfCharacterOverlaps;
    bool m_bSpawnIfNothingUnder;
    float m_fSecurityMargin;

};

class USpecialAttackData : public UDataAsset
{
    class UTexture2D* m_AvoidPictos;
    class UTexture2D* m_ParryPictos;
    class UTexture2D* m_GuardBreakPicto;
    class UTexture2D* m_InterruptPicto;
    class UTexture2D* m_AbsorbPicto;

    class UTexture2D* GetParryPicto(EParrySide _eParryType);
    class UTexture2D* GetAvoidPicto(EAvoidType _eAvoidType);
};

class ASpectatorController : public ASCPlayerController
{

    void BPF_ExitSpectatorMode();
};

class USpeedCondition : public UBaseActorCondition
{
    ESpeedState m_eSpeedState;
    bool m_bAcceptMoveTransitions;
    EOperationType m_eOperation;

};

class USphereHitDetectionDB : public UBaseShapeHitDetectionDB
{
    float m_fRadius;

};

class USpringCameraMixerBlender : public UCameraMixerBlender
{
    float m_fSpeedFactor;

    float BPE_GetTargetRatio(class UCameraComponentThird* _camera);
    float BPE_GetSpeedFactor(class UCameraComponentThird* _camera, float _fTargetRatio, float _fOldRatio);
};

class UStaminaOrderService : public UOrderService
{
    EStaminaImpactType m_eImpactOnStart;
    float m_fImpactCostOnStart;
    EStaminaImpactType m_eImpactOnStop;
    float m_fImpactCostOnStop;

};

class UStartStaminaRecoveryNotify : public UStaminaNotify
{
};

class UStartTraversalNotify : public USCAnimNotify
{
};

class UStartUpComboDB : public UDataAsset
{
    TArray<FName> m_ComboSlotNames;

};

class UStartupMenu : public UBaseStartMenu
{
    EStartupMenuState m_eCurrentState;
    EMenuEnum m_eEnumType;
    int32 m_iShowPopupOnLoadResultMask;

    void OnSequenceFinished();
    void OnContinueWithoutSavingConfirm();
    void OnConfirmGeneric();
    void OnConfirmCancel();
    void BPF_SetCanLaunchDirectly(bool _bLaunchDirectly);
    void BPF_NewGame();
    bool BPF_IsCameraShakeNeeded();
    bool BPF_HasSaveGames();
    class AActor* BPF_GetStartSpot();
    EPlayerScreenSide BPF_GetPlayerScreenSide();
    void BPF_ContinueGame();
    bool BPF_CanLaunchDirectly(bool _bLaunchDirectly);
    bool BPF_AreAllImpostorsStable();
    void BPE_UserNameChanged(FString _name);
    void BPE_ShowState(EStartupMenuState _eState);
    void BPE_OnUserPressedStart(int32 UserIndex);
    void BPE_OnSaveLoaded();
    void BPE_OnSaveCreated();
    void BPE_OnAllImpostorsStabilized();
    bool BPE_HandleNavigationBack();
};

class UStatModifiersAttributeSet : public USCAttributeSet
{
    FGameplayAttributeData FocusGainMultiplier;
    FGameplayAttributeData AvoidFocusGainBonus;
    FGameplayAttributeData DeflectFocusGainBonus;
    FGameplayAttributeData ParryImpactOnStructureBonus;
    FGameplayAttributeData ParryImpactOnWeaponBonus;
    FGameplayAttributeData StructureGainOnAvoidBonus;
    FGameplayAttributeData StructureImpactWithBluntBonus;
    FGameplayAttributeData WeaponHealthMultiplier;
    FGameplayAttributeData WeaponDamageMultiplier;
    FGameplayAttributeData WeaponStructureImpactMultiplier;
    FGameplayAttributeData BarehandsDamageMultiplier;
    FGameplayAttributeData BarehandsStructureImpactMultiplier;
    FGameplayAttributeData TakedownHealthGainMultiplier;
    FGameplayAttributeData DamageReceivedMultiplier;

};

struct FFocusPointsGainStruct
{
    FSCUserDefinedEnumHandler m_FocusGainEnum;
    float m_fGainValue;

};

class UStatsComponent : public UActorComponent
{
    FStatsComponentOnGlobalXPGain OnGlobalXPGain;
    void XPGain(float _fXP);
    FStatsComponentOnStatsChanged OnStatsChanged;
    void StatsChanged();
    FStatsComponentOnStatChanged OnStatChanged;
    void CharacterStatChangedDelegate(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    FStatsComponentOnNotifyLevelUp OnNotifyLevelUp;
    void LevelUp();
    FStatsComponentOnNotifyProgressionRewardUnlocked OnNotifyProgressionRewardUnlocked;
    void ProgressionRewardUnlocked(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, class UCharacterProgressionUnlockDB* _unlock);
    FStatsComponentOnProgressionUpdated OnProgressionUpdated;
    void ProgressionUpdated();
    FStatsComponentOnAttackDiscovered OnAttackDiscovered;
    void AttackDiscovered(const FAttackDataRow& _attack, class AFightingCharacter* _opponent);
    FStatsComponentOnAttackUnlockProgress OnAttackUnlockProgress;
    void AttackProgressionUpdated(const FAttackDataRow& _attack, int32 _iAmount);
    FStatsComponentOnAttackProgressionLost OnAttackProgressionLost;
    void AttackProgressionLost(class AFightingCharacter* _opponent);
    FStatsComponentOnAttackPendingProgressionUpdated OnAttackPendingProgressionUpdated;
    void AttackPendingProgressionUpdated(class AFightingCharacter* _opponent, FName _attack, int32 _XP, EPendingttackXPType _eXPType, bool _bDiscovered);
    FStatsComponentOnAttackPendingProgressionValidated OnAttackPendingProgressionValidated;
    void AttackPendingProgressionValidated(class AFightingCharacter* _opponent);
    FStatsComponentOnAttackUnlocked OnAttackUnlocked;
    void AttackUnlocked(const FAttackDataRow& _attack);
    FStatsComponentOnSpecialAbilityUnlockProgress OnSpecialAbilityUnlockProgress;
    void FightingStyleUnlockProgress(int32 _iSpecialAbility, float _fPrevProgress, float _fIncrement, bool _bValidated);
    FStatsComponentOnResourceAmountChanged OnResourceAmountChanged;
    void OnResourceAmountChanged(int32 _iNewAmount);
    FStatsComponent_OnPendantIncremented m_OnPendantIncremented;
    void PendantIncrement(EPendantUpdate _ePendantUpdate, class AActor* _actorGivingCharge);
    FStatsComponent_OnDeathCounterDecrement m_OnDeathCounterDecrement;
    void DeathCounterDecrement(int32 _iCount, class AActor* _actor, bool _bAllowDecrement);
    class UStatsDB* m_StatsDB;
    EWeightCategory m_eWeightCategory;
    int32 m_iMaxAge;
    bool m_bUsePendant;
    bool m_bAllowDeathCounterDecrement;
    float m_fAIPendingAttackXCancelDelay;
    class UCharacterProgressionDB* m_CharacterProgressionDB;
    TArray<int32> m_agingPerPendantCharge;
    class UBaseWeaponData* m_weaponData;
    TArray<FFocusPointsGainStruct> m_FocusPointsGainDefinition;
    class UAbilitySystemComponent* m_AbilitySystem;

    void XPGain__DelegateSignature(float _fXP);
    void StatsChanged__DelegateSignature();
    void ProgressionUpdated__DelegateSignature();
    void ProgressionRewardUnlocked__DelegateSignature(ECharacterProgressionRewardTypes _eRewardType, const FCharacterProgressionReward& _reward, class UCharacterProgressionUnlockDB* _unlock);
    void PendantIncrement__DelegateSignature(EPendantUpdate _ePendantUpdate, class AActor* _actorGivingCharge);
    void OnStatsChangedCallback();
    void OnResourceAmountChanged__DelegateSignature(int32 _iNewAmount);
    void OnPendingAttackXPOpponentEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    void OnPendingAttackXPOpponentAITimeOut(class AFightingCharacter* _ai);
    void OnOwnerKilledSomething(class AActor* _victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, const FDamageInfos& _damage);
    void OnMatchStarted();
    void OnEffectAddedOrRemovedCallback(bool _bAdded, class UEffectData* _effectData);
    void LevelUp__DelegateSignature();
    int32 GetXPBonusOnKill(const class AActor* _victim);
    void FightingStyleUnlockProgress__DelegateSignature(int32 _iSpecialAbility, float _fPrevProgress, float _fIncrement, bool _bValidated);
    void DeathCounterDecrement__DelegateSignature(int32 _iCount, class AActor* _actor, bool _bAllowDecrement);
    void BPF_UpdateChargeLimit();
    void BPF_UnlockReward(ECharacterProgressionRewardTypes _eReward, bool _bNotify);
    void BPF_UnlockProgressionRewards(int32 _iPrevLevel, int32 _iNewLevel, TArray<ECharacterProgressionRewardTypes>& _rewards, bool _bNotify, ECharacterProgressionRewardConditions _eLevelType);
    void BPF_SetStat_Float(ECharacterStat _eStat, float _fValue);
    void BPF_SetStat(ECharacterStat _eStat, int32 _iValue);
    void BPF_SetCharacterAge(int32 _iAge);
    void BPF_ResetStat(ECharacterStat _eStat);
    void BPF_ResetDeathCounter(class AActor* _actorGivingCharge);
    void BPF_ResetCharacterStats();
    void BPF_LockReward(ECharacterProgressionRewardTypes _eReward);
    bool BPF_IsProgressionRewardUnlocked(const ECharacterProgressionRewardTypes _eReward);
    void BPF_IncrementPendantCharge(int32 _iChargesToAdd, class AActor* _actorGivingCharge);
    float BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects);
    EWeightCategory BPF_GetWeightCategory();
    int32 BPF_GetTotalPendingAttackXP(class AFightingCharacter* _attacker);
    float BPF_GetStat_Float(ECharacterStat _eStat);
    int32 BPF_GetStat(ECharacterStat _eStat);
    int32 BPF_GetSparePoints();
    FText BPF_GetRewardNotificationText(ECharacterProgressionRewardTypes _eReward, class UCharacterProgressionUnlockDB* _unlock);
    TSoftObjectPtr<UTexture2D> BPF_GetRewardNotificationIcon(ECharacterProgressionRewardTypes _eReward, class UCharacterProgressionUnlockDB* _unlock);
    int32 BPF_GetRequiredXPForLevel(const int32 _iNewWantedLevel);
    int32 BPF_GetPendingAttackXP(class AFightingCharacter* _attacker, const FName& _attackName, EPendingttackXPType _eXPType);
    void BPF_GetPendingAttacks(class AFightingCharacter* _attacker, TArray<FName>& _outAttacks);
    int32 BPF_GetGlobalXP();
    int32 BPF_GetGlobalLevel();
    float BPF_GetFocusPointsRefillBonus(FSCUserDefinedEnumHandler _focusGainEnum);
    ECharacterStat BPF_GetCharacterStatFromAttribute(const FGameplayAttribute& _attribute);
    class UCharacterProgressionDB* BPF_GetCharacterProgressionDB();
    int32 BPF_GetCharacterAge();
    EAttackLearningState BPF_GetAttackLearningState(const FName& _attackName);
    int32 BPF_GetAgeIncrement(int32 _iPendantChargeIdx);
    void BPF_GenerateDeckDetailsForAttack(FCombatDeckDetails& _deckDetails, FName _attack, bool _bIsMirror, EStatsWeaponComputingMethod _eComputingMethod);
    void BPF_DecrementDeathCounter(int32 _iCount, class AActor* _actor);
    EWeightCategory BPF_ComputeWeightCategory(EStatsWeaponComputingMethod _eStatsComputingMethod, bool _bWithItemEffects);
    float BPF_ComputeDamageOnBlockingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken);
    float BPF_ComputeDamageOnAttackingSword(float _fAttackDamage, float _fAttackingWeaponWeight, float _fBlockingWeaponWeight, bool _bGuardBroken, bool _bGuarding, float _fHittedCharNormalDefense, float _fHittedCharSpecialDefense);
    float BPF_ComputeDamage(float _fAttackDamage, float _fEquipmentDefense, bool _bSpecialDamage);
    bool BPF_CanResetStatPoints();
    void BPF_AddStat_Float(ECharacterStat _eStat, float _fAddedValue);
    void BPF_AddStat(ECharacterStat _eStat, int32 _iAddedValue);
    void BPF_AddPendingAttackXP(class AFightingCharacter* _attacker, const FName& _attackName, int32 _iXP, EPendingttackXPType _eXPType);
    void BPF_AddGlobalXP(EEarnXPInstigator _eXPInstigator, int32 _iXP, bool _bNotify);
    void BPF_AddAttackXP(const FName& _attackName, int32 _iXP, bool& _bLearnt);
    void BPE_WeightCategoryChanged(EWeightCategory _eWeightCategory);
    void BPE_StatChanged(ECharacterStat _eStat, int32 _previousValue, int32 _currentValue);
    void BPE_SparePointsWin(int32 _iNbSparePointsWin);
    void BPE_GetXPGain(class AActor* _victim, int32 VictimLevel, int32& XPLevel);
    void AttackUnlocked__DelegateSignature(const FAttackDataRow& _attack);
    void AttackProgressionUpdated__DelegateSignature(const FAttackDataRow& _attack, int32 _iAmount);
    void AttackProgressionLost__DelegateSignature(class AFightingCharacter* _opponent);
    void AttackPendingProgressionValidated__DelegateSignature(class AFightingCharacter* _opponent);
    void AttackPendingProgressionUpdated__DelegateSignature(class AFightingCharacter* _opponent, FName _attack, int32 _XP, EPendingttackXPType _eXPType, bool _bDiscovered);
    void AttackDiscovered__DelegateSignature(const FAttackDataRow& _attack, class AFightingCharacter* _opponent);
};

class UStatsCondition : public UBaseActorCondition
{
    ECharacterStat m_eStat;
    FSCMathExpressionInteger m_MathExpression;

};

struct FSCInt32Range
{
    int32 m_iMin;
    int32 m_iMax;

};

struct FSCFloatRange
{
    float m_fMin;
    float m_fMax;

};

class UStatsDB : public UDataAsset
{
    int32 m_iRestatCost;
    int32 m_iChangeSchoolCost;
    float m_fFightingStyleStatScaleCoef;
    class UCurveFloat* m_FightingStyleStatScaleBonusCurves;
    class UCurveFloat* m_StatScaleBonusCurves;
    class UCurveFloat* m_MaxStatDamageCurve;
    class UCurveFloat* m_WRScaleBonusCurves;
    class UCurveFloat* m_MaxWRDamageCurve;
    float m_fMaxDamage;
    float m_fMaxRange;
    float m_fMinSpeed;
    float m_fMaxSpeed;
    float m_fMaxDamageBonus;
    FSCInt32Range m_MaxWeightStatLevelRange;
    FSCFloatRange m_MaxWeightAtLevelRange;
    int32 m_iMaxLevel;
    int32 m_iStatBonusMaxLevel;
    float m_WeightCategoryThresholds;
    float m_fXPGainRatioForAssist;
    float m_fXPGainRatioForKillingBlow;
    int32 m_iXPGainThresholdForKillingBlow;
    class UCurveFloat* m_StrengthAverageCurve;
    class UCurveFloat* m_AgilityAverageCurve;
    class UCurveFloat* m_WeightRatioAverageCurve;
    class UCurveFloat* m_WeaponDamageAverageCurve;
    class UCurveFloat* m_AttackBonusCurve;
    class UCurveFloat* m_GearAttackBonusScaleCurves;
    int32 m_iBonusXPWhenPendantIsFull;

};

class UStatsTools : public UBlueprintFunctionLibrary
{

    EAttributeScales ConvertFloatToAttributeScale(float _fValue);
    float ConvertAttributeScaleToFloat(EAttributeScales _eAttributeScale);
    FText BPF_GetTextFromFloatAttributeScale(float _scale);
    FText BPF_GetTextFromAttributeScale(EAttributeScales _eScale);
};

class UStealTargetWeapon_Notify : public USCAnimNotify
{
    bool m_bMirrorPickup;

};

class UStopLowStructureOnPrefightAction : public UDialogActionBase
{
    FName m_ActorKey;

    TArray<FName> GetActorOptions();
};

class UStructureInfluenceTest : public UFloatInfluenceTest
{
};

class USuspiciousBTService : public UBTService
{
};

class USwapWeaponHandNotify : public USCAnimNotify
{
};

class USwitchableOrderComponent : public UFightingOrderComponent
{
    TMap<class EOrderType, class TSubclassOf<UOrderDB>> m_ExtraOrderInfos;

};

class USwitchPhaseDialogAction : public UDialogActionBase
{
    FName m_NewPhase;

};

struct FOverridingHitBox
{
    FHitBox m_HitBox;
    class UAttackPropertiesResistanceDB* m_ResistanceDB;
    FAnimContainer m_FightingStateLoopAnimToPlay;
    FAnimContainer m_FightingStateRecoveryAnimToPlay;
    FHittedAnimContainer m_LethalHittedAnimToPlay;
    bool m_bIsLethalHittedAnimPlayerOnly;

};

class USynchronizedAttackHitActionLauncher : public UHitActionLauncher
{
    bool m_bMirrorByQuadrant;
    EOrderType m_eInstigatorOrderType;
    EOrderType m_eVictimOrderType;
    bool m_bIsInstigatorSnaper;
    bool m_bIsVictimSnaper;
    TArray<EFightingState> m_InstigatorRemoveFightingStates;
    TArray<EFightingState> m_VictimRemoveFightingStates;
    FEditableOrderType m_OrderTypeInstigator;
    FEditableOrderType m_OrderTypeVictim;
    bool m_bCanCounterGrab;
    bool m_bUseVictimForQuadrantComputation;
    EQuadrantTypes m_eStartQuadrant;
    bool m_bMirrorOnBackFrontQuadrant;

    bool BPF_AreHitLethal(class AFightingCharacter* _victimChar, const TArray<FOverridingHitBox>& _hitsToApply);
    void BPE_OnLaunch(const FHitDescription& _hitDescription, class AActor* _Instigator, uint8 _uiInstigatorOrder, class AActor* _victim, uint8 _uiVictimOrder);
    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
};

class USynchronizedAttackLoopHitActionLauncher : public USynchronizedAttackHitActionLauncher
{
    FEditableOrderType m_grabOrderTypeInstigator;
    FEditableOrderType m_grabOrderTypeVictim;
    float m_fLoopDistance;
    float m_fFinalDistanceFromFengjie;

    void BPE_GetSynchronizedAttackLoopAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, bool& _bOutIsLethal, FAnimSyncContainer& _outAnimsEntry, FAnimSyncContainer& _outAnimsLoop, FAnimSyncContainer& _outAnimsExit, FWeaponAnimInfo& _outAttackerWeaponAnimEntry, FWeaponAnimInfo& _outAttackerWeaponAnimLoop, FWeaponAnimInfo& _outAttackerWeaponAnimExit, TArray<FOverridingHitBox>& _outHitsToApply);
};

class UTableWidget : public UVerticalBox
{
    bool m_bUseCustomLayout;
    FMargin m_LeftItemPadding;
    FMargin m_RightItemPadding;
    FMargin m_CenterItemsPadding;
    FSlateChildSize m_ItemSize;
    TEnumAsByte<EHorizontalAlignment> m_ItemHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> m_ItemVerticalAlignment;
    FMargin m_RowPadding;
    FSlateChildSize m_RowSize;
    TEnumAsByte<EHorizontalAlignment> m_RowHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> m_RowVerticalAlignment;
    FTableWidget_OnItemClicked m_OnItemClicked;
    void ItemClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FTableWidget_OnItemRightClicked m_OnItemRightClicked;
    void ItemRightClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FTableWidget_OnItemFocused m_OnItemFocused;
    void ItemDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FTableWidget_OnItemLostFocus m_OnItemLostFocus;
    void ItemDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FTableWidget_OnItemSelected m_OnItemSelected;
    void ItemSelectedDelegate(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    FTableWidget_OnItemNavigation m_OnItemNavigation;
    void ItemNavigationDelegate(class UButtonUserWidget* _button, EUINavigation _eNavigation, int32 _iItemIndex);
    FTableWidget_OnItemClicked_Bindable m_OnItemClicked_Bindable;
    void BindableButtonUserWidgetClickDelegate(class UButtonUserWidget* _button, bool _bWithMouse);
    FTableWidget_OnItemFocused_Bindable m_OnItemFocused_Bindable;
    void BindableButtonUserWidgetDelegate(class UButtonUserWidget* _button, EFocusCause _eCause);
    FTableWidget_OnItemLostFocus_Bindable m_OnItemLostFocus_Bindable;
    void ItemDelegate_Bindable(class UButtonUserWidget* _button, EFocusCause _eCause);
    bool m_bUseCustomNavigation;
    int32 m_iItemsPerRow;
    TSubclassOf<class UHorizontalBox> m_RowWidgetClass;

    void OnItemSelected(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    void OnItemRightClicked(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnItemNavigation(class UButtonUserWidget* _button, EUINavigation _eNavigation);
    void OnItemLostFocus(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnItemFocused(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnItemClicked(class UButtonUserWidget* _button, bool _bWithMouse);
    void ItemSelectedDelegate__DelegateSignature(class UButtonUserWidget* _button, class UButtonUserWidget* _prevButton);
    void ItemRightClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void ItemNavigationDelegate__DelegateSignature(class UButtonUserWidget* _button, EUINavigation _eNavigation, int32 _iItemIndex);
    void ItemDelegate_Bindable__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ItemDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ItemClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    class UButtonUserWidget* BPF_GetSelectedButton();
    class UWidget* BPF_GetNextItem(class UWidget* currentButton, ECycleDirection _eDirection, bool _bSkipDisabled);
    class UWidget* BPF_GetLastVisibleItem();
    int32 BPF_GetItemIndex(class UWidget* _item);
    class UUserWidget* BPF_GetItemAtIndex(int32 _iIndex);
    int32 BPF_GetChildrenCount();
    void BPF_AddItem(class UUserWidget* _widget);
};

class UTabWidget : public UUserWidget
{
    uint8 m_uiEnumValue;

    uint8 BPF_GetEnumValue();
};

struct FNetOrderStructGrab : public FNetOrderStructSnapAnim
{
    bool m_bFromParry;
    FHitResult m_Hit;
    FImpactResult m_Impact;
    FHitRequest m_HitRequest;
    FDefenseAnimInfos m_GrabAnimInfos;

};

class UTakedownAnimRequest : public UObject
{

    void BPE_GetPushFromGrabAnimation(const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, ESCCardinalPoints _eCardinalDirection, const FNetOrderStructGrab& _grabInfos, const FNetOrderStructGrab& _grabbedInfos, const class UActorComponent* _environment, FAnimContainer& _instigatorAnims, FAnimContainer& _victimAnim);
    void BPE_GetAnimation(InputAction _eAction, const FTargetResult& _targetInfos, const class AFightingCharacter* _Instigator, const class AFightingCharacter* _victim, float _fAngleFromVictimToInstigator, const FNetOrderStructTakedown& _takedownInfos, const class UActorComponent* _environment, TArray<FAnimSyncContainer>& _anims, bool& _mirror, bool _bForceOnTraversal);
};

class UTakedownInstigatorAbility : public USCGameplayAbility
{
    float m_fSearchWallRadius;
    float m_fSearchMarginFromWallEdge;
    float m_fSnapMarginFromWallEdge;
    float m_fMaxDistFromWall;
    float m_fMaxSnapDistance;
    FHitBox m_WallEnvHit;
    FName m_WallEnvHitBoneName;
    float m_fMaxAngleWithNavMeshDeg;
    bool m_bHandleEnvironmentalInteractionComponents;

};

class UTakedownVictimAbility : public USCGameplayAbility
{
};

class UTakendownImpactNotify : public UAnimNotify
{
};

class ITargetableActor : public IInterface
{

    bool IsValidTarget(const class AActor* _targeter);
    EFactionsEnums GetFaction();
};

struct FTargetableConditions
{
    TMap<class ETargetingPrio, class FFloatRange> m_Ranges;
    TArray<class UEvaluateTargetCondition*> m_Conditions;
    TArray<class TSubclassOf<UEvaluateTargetCondition>> m_ClassConditions;

};

class UTargetableActorComponent : public USceneComponent
{
    bool m_bShouldDisplayBP;
    bool m_bAlwaysShowHUD;
    EFactionsEnums m_eFaction;
    class UCurveFloat* m_CustomMaxZDiff;
    bool m_bIsValidTarget;
    float m_fMaxRange;
    TMap<class EActionType, class FTargetableConditions> m_ActionTypeConditions;
    TMap<class ETargetingPrio, class bool> m_mAllowedTargetingType;
    TMap<class EActionType, class bool> m_mAllowedActionType;
    bool m_bCanBeTargetedByLockMove;

    void BPF_SetShouldDisplay(bool _bSHould);
};

class UTargetableActorHelper : public UBlueprintFunctionLibrary
{

    FVector BPF_GetTargetableLocation(const class AActor* _actor);
};

class UTargetableComponent : public UActorComponent
{
    bool m_bShouldDisplayBP;

    void BPF_SetShouldDisplay(bool _bSHould);
};

class UTargetableWidget : public UHUDUserWidget
{
    bool m_bSetVisibleWhenRelatedActorSet;

    void BPF_SetRelatedActor(class AActor* _actor);
    void BPF_RemoveAttachedWidget(class UWidget* _widget);
    class AActor* BPF_GetRelatedActor();
    void BPF_AddAttachedWidget(class UWidget* _widget, FVector _vOffset3D, FVector2D _vOffset2D, class USceneComponent* _sceneComponent, FName _socket);
    void BPE_RelatedActorRelationshipChanged(ERelationshipTypes _eRelation);
    void BPE_RelatedActorChanged(class AActor* _actor);
    void BPE_OnAIPhaseChanged(int32 _iPreviousPhase, int32 _iPhase, FName _archetypeName);
    void BPE_FightDetectionWarning();
};

class UTargetableWidgetUpdaterComponent : public UActorComponent
{
    TSubclassOf<class UTargetableWidget> m_TargetWidgetToUse;
    float m_fMaxDisplayDist;
    TArray<class UTargetableWidget*> m_WidgetPool;

    void UnRegisterTargetActor(class AActor* _actor);
    void RegisterTargetActor(class AActor* _actor);
    void OnLeavingMap();
    void BPF_UpdateWidgetVisibility();
    class UTargetableWidget* BPF_GetAssociatedWidget(class AActor* _actor);
};

class ATargetAOEItem : public AUsableItem
{
    int32 m_iTracksAvoidFakeTarget;
    class UCurveFloat* m_KnockbackCoefOverDistToInstig;

};

class UTargetCondition : public UBaseActorTargetCondition
{
    FBaseActorConditionInstance m_condition;

};

struct FTargetEvaluationDBInstance
{
    TSubclassOf<class UBaseTargetEvaluation> m_DefaultClassObject;
    class UBaseTargetEvaluation* m_Instance;

};

struct FTargetEvaluationSettings
{
    FTargetEvaluationDBInstance m_TargetEvaluationInstance;
    float m_fRange;
    bool m_bMute;

};

struct FTargetSettings
{
    float m_fUpdateFrequency;
    TArray<class UEvaluateTargetCondition*> m_Conditions;
    TArray<FTargetEvaluationSettings> m_Evaluations;
    FString m_DebugConsoleVariable;
    ETargetingPrio m_eDebugConsoleVariableMinTargettingPrio;
    FColor m_DebugActionColor;

};

class UTargetSettingsDB : public UObject
{
    FTargetSettings m_Settings;

};

class UTargetDB : public UDataAsset
{
    TEnumAsByte<ECollisionChannel> m_eTargetVisibleCollisionChannel;
    uint32 m_uiFightingAiBehaviorMask;
    float m_fTargetVisibleTraceVerticalDelta;
    FCollisionResponseContainer m_TargetVisibleCollisionContainer;
    TArray<EActionType> m_PriorityWithoutTarget;
    TArray<EActionType> m_PriorityWithSameTarget;
    TArray<EActionType> m_PriorityWithDifferentTarget;
    uint8 m_aUseTargetingReaction;
    EMoveStatus m_MoveStatusOutOfFightRange;
    EMoveStatus m_MoveStatusInFightRange;
    class UCurveFloat* m_MaxZDiff;
    float m_fTargetMaxRange;
    TMap<class EActionType, class TSubclassOf<UTargetSettingsDB>> m_Settings;

};

class UTargettingHelper : public UBlueprintFunctionLibrary
{

    FString GetEditorTitle(const FTargetEvaluationSettings& _settings);
    FString GetEditorDesc(const FTargetEvaluationSettings& _settings);
};

class UTargetReachableCondition : public UBaseActorTargetCondition
{
    float m_fNavigationCostHeuristicScale;
    float m_fMaxPathCost;
    float m_fMaxDistance;
    bool m_bOutOfNavmeshResult;
    TSubclassOf<class UNavigationQueryFilter> m_QueryFilter;
    FRuntimeFloatCurve m_AutorizedAngleWithTargetPerDistance;
    float m_fMaxVerticalDistanceFromProjection;
    FVector m_vNavQueryExtent;

};

class UTauntAbility : public USCGameplayAbility
{
    class URandomAnimDB* m_randomAnimDB;

};

class UTC_ConditionGroup : public UEvaluateTargetCondition
{
    EConditionGroupOperators m_eOperator;
    TArray<class UEvaluateTargetCondition*> m_Conditions;

};

class UTC_ConditionOnTargettingType : public UEvaluateTargetCondition
{
    ETargetingPrio m_eTargettingType;
    bool m_bDefaultValue;
    class UEvaluateTargetCondition* m_condition;

};

class UTC_Distance : public UEvaluateTargetCondition
{
    ESCMathCondition m_eCondition;
    float m_fDistance;

};

class UTC_FromClass : public UEvaluateTargetCondition
{
    TSubclassOf<class UEvaluateTargetCondition> m_Class;

};

class UTC_GenericCondition : public UEvaluateTargetCondition
{
    FBaseActorTargetConditionInstance m_condition;

};

class UTC_Inverse : public UEvaluateTargetCondition
{
    class UEvaluateTargetCondition* m_condition;

};

class UTextBlockScroll : public USCUserWidget
{
    float m_fRestartDelay;
    float m_fPixelPerSeconds;
    class UMaterialInstanceDynamic* m_MaterialInstance;
    class UMaterialInterface* m_Material;
    float m_fMargin;

    void BPF_SetOpacity(const float& _fOpacity);
    void BPF_ScrollTextIfNeeded(class UTextBlock* _textBlock, class URetainerBox* _retainerBox);
    void BPF_RestartScroll();
    void BPE_OnScrollingStarted();
    void BPE_OnScrollingReset(bool _bScrollingNeeded);
    void BPE_OnScrollingEnded();
};

class UThePlainesGameInstance : public USCGameInstance
{
    FThePlainesGameInstanceBPE_OnErrorRaised BPE_OnErrorRaised;
    void OnErrorRaised();
    FThePlainesGameInstanceOnFadeOver OnFadeOver;
    void FadeOverDelegate();
    FThePlainesGameInstanceOnCinematicCompleted OnCinematicCompleted;
    void CinematicCompleted();
    TSubclassOf<class UUserWidget> m_loadingScreenClass;
    class UUserWidget* m_loadingScreen;
    class UAkAudioEvent* m_MuteEvent;
    TArray<FAkExternalSourceInfo> m_MuteExternalSourceInfos;
    class UAkAudioEvent* m_UnmuteEvent;
    TArray<FAkExternalSourceInfo> m_UnmuteExternalSourceInfos;
    class UWGGameFlow* m_GameFlow;
    FName m_AntiCheatMapTagName;
    class UItemsDB* m_ItemsDB;
    class UInputManager* m_InputManager;
    class UFactionsManager* m_FactionsManager;
    TSubclassOf<class UPredictionManager> m_PredictionManagerClass;
    class UCinematicManager* m_CinematicManager;
    TSubclassOf<class UCinematicManager> m_CinematicManagerClass;
    class UMessageManager* m_MessageManager;
    class USCSessionManager* m_sessionManager;
    class USessionTimeManager* m_SessionTimeManager;
    class UReplaySystem* m_ReplaySystem;

    void TriggerTakeKinectResources(bool _bTake);
    void TriggerResetGameFlowTags();
    void TriggerReloadConfig();
    void TriggerRaiseGameFlowTag(FName _gameplayTag);
    void TriggerCrashAfterDelay(int32 _iDelay);
    void TriggerAchievementProgress(FString _achievementId, float _fCompletionPercent);
    void TravelToNextMap();
    void TravelToLoadedMap(FString _sMapToTravelTo);
    void Replay_Stop();
    void Replay_Start();
    void Replay_Play();
    void Replay_PauseRecording();
    void OnErrorRaised__DelegateSignature();
    void Logout(int32 _index);
    void LoadMapAsync(FString _sPackageName);
    void GoToNextMap();
    void GoToMapInGameFlow(FString _sMapToTravelTo);
    class USCLocalPlayer* GetLocalPlayer();
    void FadeOverDelegate__DelegateSignature();
    void DumpWorlds();
    void DumpLoadedLevels();
    void CinematicCompleted__DelegateSignature();
    void BPF_StopSequence(class ALevelSequenceActor* _levelSequenceActor);
    void BPF_SetLoadingScreenTickTime(float _fNewTime);
    void BPF_SetDebugFlow(bool _bDebugFlow);
    void BPF_ResetNextMapTags();
    void BPF_RaiseNextMapTags(FGameplayTag _tagToRaise);
    void BPF_RaiseError(const FSCError& _error);
    void BPF_PlaySequence(class ALevelSequenceActor* _levelSequenceActor, bool _bHideLoadingScreen);
    bool BPF_IsDebugFlow();
    bool BPF_IsCultureHasBeenSet();
    void BPF_HideLoadingScreen(bool _bFade, float _fFadeDuration);
    class UReplaySystem* BPF_GetReplaySystem();
    class ASCPlayerStart* BPF_GetPlayerStartUsedAtSpawn();
    FString BPF_GetPlayerId(class ULocalPlayer* _player);
    float BPF_GetLoadingScreenTickTime();
    class UWGGameFlow* BPF_GetGameFlow();
    bool BPF_ConsumeNextError(FSCError& _error);
    bool BPF_CanTargetFaction(EFactionsEnums _eMyFaction, EFactionsEnums _eTargetFaction);
    void BPF_BeginLoadingScreen();
    bool BPE_OnGameActivityActivationRequestComplete(FString _activityID, bool _bStartedGameFromActivity);
    void BPE_OnAchievementObjectUnlocked(FGameplayTag ObjectUnlockedTag);
};

struct FWeaponSituationDescription
{
    int32 m_iLevelMin;
    int32 m_iLevelMax;
    TArray<class UVisibleWeaponData*> m_WeaponsData;
    uint32 m_uiAppearanceProbabilities;

};

class AThePlainesLDLevel : public AThePlainesLevel
{
    class UDataTable* m_dynamicPropsDataTable;
    uint8 m_uiEncouterZone;
    int32 m_iLastManGaugeThresold;
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    class UArchetypeSituationDB* m_ArchetypesInSituationDB;
    TArray<FWeaponSituationDescription> m_WeaponsInSituation;
    int32 m_iMinMaxGenericWeapons;
    int32 m_iMaxMaxGenericWeapons;

};

class UThrowableData : public UObject
{
    int32 m_iHitByCharaDamage;
    int32 m_iHitByObjectDamage;
    FHitBox m_DefaultHitInfos;
    FHitBox m_HitOnMCInfos;
    float m_fDistToThrow;
    float m_fFallingSpeedThreshold;
    float m_fColScaleDuration;
    float m_fOnTargetHitSpeedReduction;
    float m_fMissingSpeedReduc;
    float m_fMissedDistance;
    bool m_bApplyGravityWhenFlyingFreely;
    class UCurveFloat* m_BounceBackAngle;
    FFloatRange m_BounceBackRange;
    float m_fSoundNoiseRadius;
    EHeight m_eTargettedHeight;
    EHeight m_eAltTargettedHeight;
    bool m_bUseAlternateHeightForFreeThrow;
    TSubclassOf<class UTargetSettingsDB> m_throwTargetSettingsDB;
    float m_fHeightLimitForFootAnimation;
    float m_fOffsetDistTrace;
    float m_fDistToCheckCollOnPathFreely;
    bool m_bStayVisibleAfterBeingDestroyed;
    float m_fThrowFreelyZForceHands;
    float m_fThrowFreelyZForceFeet;
    float m_fThrowFreelyZForceFeetAlt;
    float m_fTargetDistMaxToSwitchToFreely;
    class UCurveFloat* m_SpeedCurve;
    float m_fInitialSpeedOnThrow;
    float m_fProjectileGravityScale;
    float m_fBounciness;
    float m_fFrictionOnBounce;
    EBounceType m_eBounceType;

};

class UThrowableInfoForAIDataAsset : public UDataAsset
{
    TArray<class TSubclassOf<AThrowableActor>> m_ThrowableInfo;

};

class UThrowableObjMovementComponent : public UProjectileMovementComponent
{
    float m_fThrowFreelyZForceHands;
    float m_fThrowFreelyZForceFeet;
    float m_fThrowFreelyZForceFeetAlt;
    class UCurveFloat* m_SpeedCurve;
    float m_fFrictionForce;

};

class UThrowAttackInfluenceTest : public UAIInfluenceTest
{
    TSubclassOf<class AThrowableActor> m_ThrowableTypeToTest;
    TSubclassOf<class UBaseWeaponData> m_WeaponDataTypeToTest;

};

class UThrowObjectNotify : public USCAnimNotify
{
    FVector m_vRotationAxisWhileFlying;
    float m_fRotationSpeed;
    float m_fRandomRangeForRotationSpeed;
    bool m_bUseRandomRotationAxisWhileFlying;
    bool m_bInvertAxisOnMirror;
    bool m_bUseThrowPivot;
    bool m_bForceThrowableOrientationAtStart;
    FRotator m_RotationOffsetAtStart;

};

class UThrowMultipleObjectsNotify : public UThrowObjectNotify
{
    float m_fHorizontalAngleRange;
    uint8 m_uiNbThrowables;
    TSubclassOf<class AThrowableActor> m_ThrowableClass;
    bool m_bBreakThrowableAfterThrow;
    float m_fVerticalOffsetSpawnPosition;
    float m_fVerticalOffsetTargetDirection;

};

class UThrowObjectAnimRequest : public UObject
{

    class UAttackDB* BPE_GetThrowComboAttack(const class AActor* _Instigator, const FVector& _vTargetDir, const class AThrowableActor* _throwable, const class AActor* _target, bool& _bOutMirror);
};

struct FAIAttackJokerSituationConfig
{
    bool m_bEnabled;
    float m_fJokerDuration;
    float m_fCooldown;
    bool m_bShouldBeDeactivatedByTargetAttack;
    EAIJokerBehaviorAgainstAttacks m_eJokerBehaviorOnAIAttacks;
    FSCAITicketEnum m_FallbackTicket;

};

struct FAIAttackJokerSituationConfigsPerDominationStep
{
    FAIAttackJokerSituationConfig m_Configs;

};

class UTicketSettings : public UObject
{
    int32 m_iSerializeVersion;
    TMap<EAIWuguanTicketEvaluation, float> m_AttackTicketScoreFactors;
    TMap<EAIWuguanTicketEvaluation, float> m_PositionTicketScoreFactors;
    TMap<EAIWuguanTicketEvaluation, float> m_WeaponTicketScoreFactors;
    TMap<class EAIAttackTicketJokerSituation, class FAIAttackJokerSituationConfigsPerDominationStep> m_AttackTicketJokerSituationsConfigs;
    TMap<class TSoftClassPtr<UOrderDB>, class EAIAttackTicketJokerSituation> m_OrderDBToJokerSituationMap;
    bool m_bActivateWeaponTicketManager;
    float m_fDefaultWeaponTicketCooldown;
    float m_fWeaponTicketCooldownIncreaseValue;
    float m_fWeaponTicketCooldownDecreaseValue;
    float m_fDefaultMaxDistanceToWeapon;
    float m_fMinDistanceForCandidateAttackCancel;
    float m_fMinDistanceForAttackTicketTimeOut;
    TMap<class FSCAITicketEnum, class TSoftObjectPtr<UAIAttackTicketData>> m_AttackTicketsMap;

};

class UTimeHelper : public UBlueprintFunctionLibrary
{

    float GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB);
    FDateTime GetCurrentSynchedTimeInDateTime(const class UWorld* _world);
    float BPF_GetDeltaTimeSlowMotionIndependant(class UObject* _worldContextObject, float _fCurrentDt, float _fSlowMotionFactor);
    FDateTime AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds);
};

class UTimeParticleEffectNotifyStateExtended : public UAnimNotifyState_TimedParticleEffect
{
};

struct FTintData
{
    FText m_Name;
    FLinearColor m_inventoryIconColor;
    FLinearColor m_dyeIconColor;

};

class UTintDB : public UDataAsset
{
    TMap<class ETintEnum, class FTintData> m_TintsData;

};

class UToolTipWidget : public USCUserWidget
{
    TWeakObjectPtr<class UButtonUserWidget> m_Button;

};

class UTrackingBlueprintHelper : public UBlueprintFunctionLibrary
{

    void BPF_SendTrackingEvent_UnlockAllSkillsPermanently(int64 _iTimePlayed);
    void BPF_SendTrackingEvent_OutfitUnlocked(const FGameplayTag& _outfitTag);
    void BPF_SendTrackingEvent_ModifierUnlocked(const FGameplayTag& _tag);
    void BPF_SendTrackingEvent_HideoutStarted(FString _mapName);
    void BPF_SendTrackingEvent_HideoutCompleted(FString _mapName);
    void BPF_SendTrackingEvent_GoalUnlocked(const FGameplayTag& _goalTag);
    void BPF_SendTrackingEvent_GoalsAvailable();
    void BPF_SendTrackingEvent_Ending(bool _bIsWudeEnding);
    FString BPF_OpenTrackingContext_GeographicalLocation(FString _text);
    FString BPF_OpenTrackingContext_AISituation(FString _text);
    void BPF_CloseTrackingContext(FString _GuidString);
};

class UTrailNotifyStateExtended : public UAnimNotifyState_Trail
{
    bool m_bCheckInPerfectLink;
    bool m_bCheckNotInPerfectLink;
    FString m_BaseName;

};

class UTransitionAnimMetadata : public UAnimMetaData
{
    int32 m_iLastPrevDirectionMarkerIndex;

};

struct FSpeedTransitionsAnimContainer
{
    FCardinalChangementAnimContainer m_Start_FL;
    FCardinalAnimContainer m_Stop_FL;
    FOrientedRotationAnimContainer m_UTurn;
    FCardinalAnimContainer m_Strafe;

};

struct FCombatSpeedTransitionsAnimContainer : public FSpeedTransitionsAnimContainer
{
    FCardinalChangementAnimContainer m_Start_FR;

};

struct FLocomotionTransitionsAnimContainer
{
    FCombatSpeedTransitionsAnimContainer m_V1;
    FSpeedTransitionsAnimContainer m_V2;
    FSpeedTransitionsAnimContainer m_V3;
    FOrientedRotationAnimContainer m_TurnInPlace;

};

class UTransitionAnimRequest : public UObject
{
    bool m_bMirrorAllowed;
    FLocomotionTransitionsAnimContainer m_Transitions;
    FLocomotionTransitionsAnimContainer m_WeaponTransitions;
    FAnimContainer m_MediumLanding;
    FAnimContainer m_OnPlaceMediumLanding;

};

class UTransitionCanInterruptNotifyState : public USCAnimNotifyState
{
    FBool m_TransitionAllowance;
    FName m_BaseName;

    void InvertUTurn();
    void InvertTurnInPlace();
    void InvertStrafe();
    void InvertStop();
    void InvertStart();
    void InvertAll();
    void AllowNone();
    void AllowAll();
};

class UTransitionCanTurnNotifyState : public USCAnimNotifyState
{
};

class UTransitionChangeSystemAxisToDirNotifyState : public USCAnimNotifyState
{
};

class UTransitionTeleportRestraintNotifyState : public USCAnimNotifyState
{
};

class UTranslateToTargetOrderService : public UOrderService
{
    bool m_bUseAnimRootMotion;

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

class UTranslationOSNotifyState : public UOrderServiceNotifyState
{
    bool m_bUseAnimRootMotion;

};

class UTraversalAbility : public USCGameplayAbility
{
    uint8 m_uiEntryTypes;

};

class ATraversalActor : public ASCActor
{
    bool m_bTraversalActive;
    bool m_bOverrideTraversalEntryAngle;
    float m_fTraversalEntryAngle;
    bool m_bOverrideTraversalExitAngle;
    float m_fTraversalExitAngle;
    FVector m_vBoxExtentAllowed;
    FVector m_vBoxExtentForbidden;
    bool m_bHasForbiddenTraversalPart;
    ESimpleAxis m_eForbiddenAxis;
    bool m_bUseEntryMaxDistFromTraversalCenter;
    float m_fEntryMaxDistFromTraversalCenter;
    float m_fLengthBetweenTwoNavLinks;
    float m_fNavLinkOffsetFromBoxExtents;
    uint8 m_AllowedEntryTypes;

    void BPE_GetTraversalAnimation(FAnimContainer& _outResult);
};

class UTraversalActorCondition : public UBaseActorCondition
{
    ETraversalPhase m_ePhase;

};

class UTraversalAnimRequest : public UObject
{

    void BPE_GetTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FTraversalAnimContainer& _outResult);
    void BPE_GetCustomTraversalLandingAnimation(class AActor* _requester, const FTraversalInfo& _request, const float _fFallHeight, const FAnimContainer& _defaultLandAnimContainer, ESCCardinalPoints _eCardinalPoint, ESpeedState _eSpeedState, FAnimContainer& _outLandAnimContainer);
};

class UTraversalBTTask : public UBTTaskNode
{
    InputAction m_CancelOnActionAvailable;

};

class UTraversalCameraTransitionInfo : public UCameraTransitionInfo
{
    bool m_bApplyCurveToDynamicRatio;

};

struct FTraversalAxisConstraint
{
    ESimpleAxis m_eAxis;
    ESimpleAxisSide m_eForbiddenAxisSide;

};

struct FTraversalComponentMargin
{
    float m_fNegAxisMargin;
    float m_fPosAxisMargin;

};

class UTraversalComponent : public UBoxComponent
{
    FTraversalComponent_OnStartBeingUsed m_OnStartBeingUsed;
    void TraversalUsageDelegate(class UTraversalComponent* _traversalComponent);
    FTraversalComponent_OnStopBeingUsed m_OnStopBeingUsed;
    void TraversalUsageDelegate(class UTraversalComponent* _traversalComponent);
    FTraversalComponentOnGetCinematicEndPoint OnGetCinematicEndPoint;
    FVector TraversalPointDelegate();
    bool m_bTraversalActive;
    bool m_bOverrideTraversalEntryAngle;
    float m_fTraversalEntryAngle;
    bool m_bOverrideTraversalExitAngle;
    float m_fTraversalExitAngle;
    TArray<FTraversalAxisConstraint> m_traversalAxisConstraint;
    ESimpleAxis m_eForbiddenAxis;
    ESimpleAxisSide m_eAuthorizedAxisSide;
    bool m_bUseEntryMaxDistFromTraversalCenter;
    float m_fEntryMaxDistFromTraversalCenter;
    FTraversalComponentMargin m_EntryMargin_X;
    FTraversalComponentMargin m_EntryMargin_Y;
    float m_fLengthBetweenTwoNavLinks;
    uint8 m_AllowedEntryTypes;
    bool m_bIsLethal;
    TSubclassOf<class UNavArea> m_cinematicNavAreaClass;
    bool m_bUseMeshAsTraversalCollider;
    bool m_bUseRushInput;
    bool m_bForceUseAnimDrivenCamera;
    bool m_bCustomNavLinkCooldownDuration;
    float m_fNavLinkCooldownDuration;
    TArray<TSoftObjectPtr<AActor>> m_ActorsWithReferencedInNavLinkComponent;

    void TraversalUsageDelegate__DelegateSignature(class UTraversalComponent* _traversalComponent);
    FVector TraversalPointDelegate__DelegateSignature();
    void ComputeTraversalAIInfo();
    void BPF_SetTraversalActive(bool _bActive, bool _bForce);
    bool BPF_IsTraversalActive();
    bool BPF_IsEntryTypeAllowed(ETraversalEntryType _eEntryType);
    bool BPF_IsAnimDrivenCameraForced();
    void BPE_StartBeingUsed();
    void BPE_EndBeingUsed();
};

struct FTraversalInputBehavior
{
    bool m_bUseCharacterVelocityInsteadOfDirOnStick;
    float m_fMaxAngleBetweenVelocityAndStickDir;

};

struct FTraversalTypeSettings
{
    float m_fEntryAngleAllowance;
    float m_fExitAngleClampValue;
    float m_fMinTraversalDist;

};

class UTraversalDB : public UObject
{
    TSubclassOf<class UTraversalAnimRequest> m_TraversalAnimRequestBlueprint;
    int32 m_iNbOfFrameToUseAtEndOfPreExitForMeanFallingVelocity;
    float m_fMaxTrackingAngleFromStartDegree;
    float m_RaycastLengthBySpeedState;
    float m_fPreExitPhaseSnapRaycastOffsetAbove;
    float m_fPreExitPhaseSnapRaycastOffsetBelow;
    FVector m_vBoxExtentsToSnapToNavmesh;
    float m_fMaxTraversalDepth;
    float m_fMaxTraversalHeight;
    float m_fMaxTraversalHeightClimb;
    float m_fMaxDepthToConsideredAsFenceWhenClimbingUp;
    float m_fMinDurationBeforeEndOfEntrySnap;
    float m_fMaximumSpeedStretchUp;
    FTraversalInputBehavior m_InputBehaviorBySpeed;
    uint8 m_uiAllowedEntryTypes;
    FHitBox m_HitBox;
    float m_fEvasionMaxDistBetweenInstigatorAndTarget;
    float m_fEvasionDetectionDistance;
    FTraversalTypeSettings m_DefaultSettings;
    TMap<class ETraversalEntryType, class FTraversalTypeSettings> m_CustomSettings;

};

class UTraversalEvadeBTTask : public UTraversalBTTask
{
};

class UTraversalEvasionInfluenceTest : public UAIInfluenceTest
{
    bool m_bOverrideTraversalEntryType;
    ETraversalEntryType m_eTraversalEntry;

};

class UTraversalNavLinkCustomComponent : public UNavLinkCustomComponent
{
    FTraversalInfo m_TraversalInfo;
    uint8 m_uiCurrentTraversalVersion;
    TSoftObjectPtr<AActor> m_ExternalLinkedTraversalActor;
    ELinkWithExternalBehavior m_eExternalLinkBehavior;

};

class UTraversalOrderServiceCondition : public UOrderServiceActivationConditions
{
    ETraversalPhase m_ePhase;

};

class UTriangleStatsWidget : public UWidget
{
    FSlateBrush m_Brush;
    float DownLeftStat;
    FTriangleStatsWidgetDownLeftStatDelegate DownLeftStatDelegate;
    float GetFloat();
    float UpStat;
    FTriangleStatsWidgetUpStatDelegate UpStatDelegate;
    float GetFloat();
    float DownRightStat;
    FTriangleStatsWidgetDownRightStatDelegate DownRightStatDelegate;
    float GetFloat();
    FColor m_color;
    FColor m_TriangleColor;
    FColor m_CrossColor;
    float m_fTriangleLineWidth;
    float m_fCrossLineWidth;

    void BPF_SetUpValue(float _fValue);
    void BPF_SetDownRightValue(float _fValue);
    void BPF_SetDownLeftValue(float _fValue);
};

class UTriggerAbandonDialogAction : public UDialogActionBase
{
};

class UTriggerBlackBarsDialogAction : public UDialogActionBase
{
};

class UTriggerBossKillSpareDialogAction : public UDialogActionBase
{
    EBossKillingWay m_eBossKillingWay;

};

class UTriggerFightDialogAction : public UDialogActionBase
{
    FName m_ActorSentToFight;

    TArray<FName> GetActorOptions();
};

class UTriggerFriendlyDialogAction : public UDialogActionBase
{
};

class UTriggerGenericEventDialogAction : public UDialogActionBase
{
    FName m_EventName;

};

class UTriggerTauntEffectsNotify : public UAnimNotify
{
};

class UTrumpetSkewData : public UDataAsset
{
    float m_fSkewZoneAngleDeg;
    float m_fSkewZoneRadius;
    class UCurveFloat* m_Curve;
    ETrumpetSkewType m_eTrumpetSkewType;

};

class UUIHelper : public UBlueprintFunctionLibrary
{

    void UpdateXPProgressBar(int32 _iCurrentLevelXP, int32 _iNextLevelXP, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fDuration, float _fDelta, float& _fNewProgress, float& _fLevelProgress, int32& _iCurrentXP);
    void LerpXPProgressBar(int32 _iCurrentLevelXP, int32 _iNextLevelXP, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fProgressDelta, float& _fLevelProgress, int32& _iCurrentXP, bool& _bLevelUp, int32 _iLoopXP);
    void FocusWidget(class UWidget* _widget);
    void FocusFirstFocusableWidget(TArray<class UWidget*> _widgets);
    void BPF_StopAllAnimations(class UUserWidget* _widget);
    void BPF_SetVirtualCursorWidget(class ULocalPlayer* _player, TEnumAsByte<EMouseCursor::Type> Cursor, class UUserWidget* Widget);
    void BPF_SetLastFocusedButton(class UWidget* _lastFocusedButton);
    void BPF_SetCursorPosition(const FVector2D& _vCursor);
    void BPF_SetAutoWrapTextBlock(class UTextBlock* _textBlock, bool _bAutoWrap);
    void BPF_RefreshButtonFocus();
    class UWidget* BPF_GetNextWidgetInArray(const TArray<class UWidget*>& _widgets, class UWidget* _currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled);
    uint8 BPF_GetNextIndex(uint8 _uiCurrentIndex, ECycleDirection _eDirection, uint8 _uiLimitValue, bool _bLoopAtLimit, bool _bIncludeLimit);
    class UWidget* BPF_GetNextChildWidget(class UPanelWidget* container, class UWidget* currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled);
    EUIInputModes BPF_GetLastNavigationMode();
    bool BPF_GetIsPIE();
    bool BPF_GetIsEditor();
    class UWidget* BPF_GetFocusedButton();
    FVector2D BPF_GetCursorPosition();
    class UButtonUserWidget* BPF_FindSelectedChildButton(class UPanelWidget* _panel);
    class UButtonUserWidget* BPF_FindSelectedButtonInArray(const TArray<class UWidget*>& _widgets);
    void BPF_EndAnimation(class UUserWidget* _widget, class UWidgetAnimation* _animation);
    void BPF_EndAllAnimations(class UUserWidget* _widget);
    void BPF_DeselectAllChildButtons(class UPanelWidget* _panel);
    class UWidget* BPF_CycleChildren(class UPanelWidget* _panel, class UWidget* _currentChild, ECycleDirection _eDirection, bool _bSkipDisabled);
    void BPF_ClearUserFocus();
};

class UUILibrary : public UWidgetBlueprintLibrary
{

    void BPF_ShowPopup(const class APlayerController* _playerController, FText _txtMessage, FText _txtConfirm, FText _txtCancel, FBPF_ShowPopupOnConfirm _onConfirm, FBPF_ShowPopupOnCancel _onCancel);
    void BPF_SetAllSCButtonsTintsInUserWidget(class UUserWidget* _userWidget, FLinearColor _focusedColor, FLinearColor _noFocusColor);
    void BPF_ProjectWorldLocationToScreen(class APlayerController* _playerController, const FVector& _vInPosition, bool _bUseViewportBounds, float _fViewportBoundsOffset, FVector2D& _vOutScreenPosition, float& _fOutAngle, bool& _bOutIsOfScreen);
    bool BPF_Intersect2DPositionWithViewportBounds(class APlayerController* _playerController, const FVector2D& _vInPosition, FVector2D& _vOutIntersection, EIntersectDirection& _eOutIntersectDirection);
    void BPF_GetWidget2DPosFrom3D(class UWidget* _widget, FVector _location, FVector _3DOffset, FVector2D _2DOffset, float _f2DMinY, FVector2D& _2DPos, bool& _2DProjSuccess);
    void BPF_Get2DPosFrom3DBehindCam(const class UObject* WorldContextObject, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _LocationInFrontOfCamera);
    void BPF_Get2DPosFrom3D(class APlayerController* _playerController, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _2DProjSuccess);
    void BPF_ClosePopup(const class APlayerController* _playerController);
};

struct FLootBoxTypeCountStruct
{
    ELootBoxType m_Type;
    int32 m_iCount;

};

class UUnlockNotification : public USCUserWidget
{

    void BPE_InitWithProgressionDoorStruct(const FProgressionDoorStruct& _progressionDoorStruct, const class UQuestItemData* _lastFulfilledQuest);
    void BPE_InitWithLootBox(const FLootBoxTypeCountStruct& _LootBoxes);
    void BPE_InitWithLoot(const FLootBaseItemStruct& _loot);
    void BPE_InitWithCharacterProgression(ECharacterProgressionRewardTypes _reward, class UCharacterProgressionUnlockDB* _unlock);
};

class UUntargettableByCameraOrderService : public UOrderService
{
};

struct FDisabledTargetInfos
{
    EActionType m_eActionType;
    bool m_bTargettableWhenAlone;

};

class UUntargettableOrderService : public UOrderService
{
    bool m_bInverse;
    TArray<FDisabledTargetInfos> m_DisabledTargets;

};

struct FPlayerStatesStatus
{
    bool m_bWasActive;
    bool m_bIsActive;
    float m_fActiveSince;

};

class UUpdateCameraBlackboardBTService : public UBTService_BlueprintBase
{

    void BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey);
    void BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey);
    void BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey);
    FPlayerStatesStatus BPF_GetPlayerStateStatus(EFightingActionState _eFightingState);
    class UPlayerFightingComponent* BPF_GetPlayerFightingComponent();
    class AFightingCharacter* BPF_GetFightingCharOwner();
    EDirections BPF_GetCharacterSideOnScreen();
    class UCameraComponentThird* BPF_GetCameraComponent();
    class UAttackComponent* BPF_GetAttackComponent();
    class UASMComponent* BPF_GetASMComponent();
    void BPE_OnOrderStarting(EOrderType _eOrderType, uint8 _orderID);
    void BPE_OnOrderEnding(EOrderType _eOrderType, uint8 _orderID);
    void BPE_ExitState(EFightingActionState _eStateEntered);
    void BPE_EnterState(EFightingActionState _eStateEntered);
};

class UUpdateMovementMode : public UBTService
{
};

class UUsableItemData : public UBaseItemData
{
    float m_fCooldown;
    FAnimContainer m_Anims;
    TSubclassOf<class AUsableItem> m_UsableItemClass;
    FText m_Description;
    FName m_DBItemRowName;
    int32 m_iTargetRecquirements;

};

class UUseFrameRangeFromOrderService : public UOrderServiceFrameRangeRequest
{
    bool m_bOnTarget;
    FFloatRange m_DefaultRange;
    bool m_bKeepDefaultLowerRange;
    bool m_bKeepDefaultUpperRange;
    TSubclassOf<class UOrderService> m_OrderSerice;

};

class UUseInteractiveObjectAbility : public USCGameplayAbility
{
    TArray<InputAction> m_eCarriedMovableInputs;
    TArray<InputAction> m_eMovableInputs;

};

class UV2BlockerComponent : public UActorComponent
{

    void OnActorEndOverlap(class AActor* _overlappedActor, class AActor* _otherActor);
    void OnActorBeginOverlap(class AActor* _overlappedActor, class AActor* _otherActor);
};

class UVelocityCondition : public UBaseActorCondition
{
    EOperationType m_eOperation;
    float m_fVelocity;

};

class UVersionWidget : public USCUserWidget
{
    FString m_displayedText;

};

struct FWeaponVisuals
{
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    TArray<TSoftObjectPtr<UMaterialInterface>> m_Materials;

};

class UVisibleWeaponData : public UBaseWeaponData
{
    TArray<FWeaponVisuals> m_WeaponVisuals;

};

class AVitalPointActor : public ASCActor
{
    FVitalPointActorOnSelectionChangedDyn OnSelectionChangedDyn;
    void OnVitalSelectionChangedDyn(bool _bSelected, class AVitalPointActor* vitalPoint);
    FVitalPointActorOnVitalPointValidated OnVitalPointValidated;
    void OnVitalPointValidated(class AVitalPointActor* vitalPoint);

    void OnVitalSelectionChangedDyn__DelegateSignature(bool _bSelected, class AVitalPointActor* vitalPoint);
    void OnVitalPointValidated__DelegateSignature(class AVitalPointActor* vitalPoint);
    void OnBillBoardSelectionChanged(bool _bSelected, class AAimingBillboardActor* _billboard);
    FVitalPointDataDefinition BPF_GetDefinition();
    class AActor* BPF_GetActorOwner();
};

class UVitalPointAttachComponent : public USceneComponent
{
    class UVitalPointData* m_VitalPointData;

};

class UVitalPointCheckCondition : public UObject
{
    FGameplayTagContainer m_attackerRequiredTags;
    FGameplayTagContainer m_defenderRequiredTags;
    FGameplayTagContainer m_defenderForbiddenTags;

    bool BPE_CanActivate(const class AFightingCharacter* _attacker, const class AFightingCharacter* _defender);
};

class UVitalPointEvents : public UObject
{

    void BPE_OnWillExecute(const class UVitalPointData* _vitalPoint, class AFightingCharacter* _Instigator, class AFightingCharacter* _victim, bool& _bOutShouldDismiss);
};

class UVitalPointData : public UInheritedDataAsset
{
    FText m_Name;
    class UTexture* m_Texture;
    FSCUserDefinedEnumHandler m_Slot;
    TSubclassOf<class UVitalPointEvents> m_events;
    TSubclassOf<class AAimingBillboardActor> m_ClassOfBillBoardToSpawn;
    FAnimSyncContainer m_SyncAnimToPlay;
    int32 m_iFocusPointsCost;
    FOverridingHitBox m_FocusAttackEffect;
    bool m_bUseCustomOrder;
    FEditableOrderType m_CustomInstigatorOrderType;
    FEditableOrderType m_CustomVictimOrderType;
    TSubclassOf<class UVitalPointCheckCondition> m_CheckConditionBlueprint;

};

class UVitalPointDB : public UInheritedDataAsset
{
    class UVitalPointDB* m_BaseVitalPoints;
    TArray<FVitalPointDataDefinition> m_VitalPointDefinitionArray;

};

class UVitalPointWidget : public USCUserWidget
{

    class AVitalPointActor* BPF_GetVitalPointActor();
    void BPE_OnVitalPointActorSet(class AVitalPointActor* _vitalPointOwner);
    void BPE_OnVitalPointActorRemove(class AVitalPointActor* _vitalPointPreviousOwner);
};

struct FVoiceOver
{
    TSoftObjectPtr<ULevelSequence> m_AudioSequence;
    TArray<FText> m_Lines;

};

class AVoiceOverActor : public ALevelSequenceActor
{
    FVoiceOver m_CurrentVoiceOver;
    float m_fDelayBetweenVoiceOvers;

    void OnLoadingCompleted();
    void OnDelayAfterSequenceExpired();
    void OnCurrentSequenceFinished();
    void BPF_PlayVoiceOver(const FVoiceOver& _voiceOver);
    void BPE_OnSequenceFinished();
};

class AVortexDamageItem : public AUsableItem
{
    float m_fMaxDistanceToTarget;

};

class UWaitForActorConditionTask : public UBTTaskNode
{
    float m_fMaxWaitDuration;
    FBaseActorConditionInstance m_condition;

};

class UWaitOrderTask : public UBTTaskNode
{
    TArray<EOrderType> m_Orders;

};

class UWallEnvironmentalAttackSettings : public UObject
{
    FHitBox m_HitOnWall;
    FSCUserDefinedEnumHandler m_EnvironementImpactType;
    TEnumAsByte<ECollisionChannel> m_eRayCastCollisionChannel;
    float m_fMaxRefCharSnapDistance;
    float m_fSplineMargin;
    float m_fMaxRaycastAngleWithSnap;
    float m_fMaxRaycastAngleWithoutSnap;
    float m_fMaxDistToProjection;
    FName m_ImpactBoneName;
    float m_fImpactBoneYawRotation;
    bool m_bUseInstigatorAsRef;
    bool m_bMirrorAnimOnRightSide;
    TSubclassOf<class UTakedownAnimRequest> m_animRequest;

};

struct FGeneratedWallInfos
{
    class UCustomBoundingBoxComponent* m_Component;

};

class UWallJumpGeneratorComponent : public UActorComponent
{
    float m_fMinWallLength;
    float m_fDetectionDistance;
    float m_fMaxSegmentVerticalAngle;
    float m_fLeanHeight;
    float m_fMaxWallAngleDegree;
    int32 m_iWallActorCount;
    TSubclassOf<class AActor> m_ActorClass;
    TArray<FGeneratedWallInfos> m_Walls;

};

class UWCollisionSettings : public UDeveloperSettings
{
    float m_fFindMovePreventingCompsEpsilon;
    TEnumAsByte<ECollisionChannel> m_eThrowableCheckCollisionChannel;
    FSCCollisionResponseBuilder m_ThrowableCheckCollisionResponseBuilder;
    bool m_bForceCCDOnThrowables;
    FCollisionProfileName m_WakeBreakableProximityProfile;
    FCollisionProfileName m_TraversalProfileName;
    TEnumAsByte<ECollisionChannel> m_eTraversalCheckCollisionChannel;
    FSCCollisionResponseBuilder m_TraversalCheckCollisionResponseBuilder;
    TEnumAsByte<ECollisionChannel> m_eEnvironmentalInteractionZoneChannel;
    TEnumAsByte<ECollisionChannel> m_eTraversalCollisionChannel;
    TEnumAsByte<ECollisionChannel> m_eWallJumpChannel;
    TEnumAsByte<ECollisionChannel> m_eSpectatorCollisionChannel;

};

class UWeaponDB : public UDataAsset
{
    float m_fWeaponDurabilityRegenRate;
    float m_fDurabilityDamageRateOnAbsorb;
    float m_fDurabilityDamageRateOnParried;

};

struct FDamagedWeaponInfo
{
    TSubclassOf<class UBaseWeaponData> m_WeaponDataToApplyOnBrokenWeapon;
    TSubclassOf<class UWeaponGameplayData> m_WeaponGameplayDataToApplyOnBrokenWeapon;
    float m_fDamagedWeaponHealth;
    class USkeletalMesh* m_StateSkeletalMesh;

};

class UWeaponDestructionComponent : public UInteractiveDestructionComponent
{
    FWeaponDestructionComponent_OnDamagedWeaponSwitch m_OnDamagedWeaponSwitch;
    void OnDamagedWeaponSwitch(int32 _iWeaponIdx);
    TArray<FDamagedWeaponInfo> m_DamagedWeaponInfos;
    float m_fDelayForCurrentOrderStop;

    void OnDamagedWeaponSwitch__DelegateSignature(int32 _iWeaponIdx);
    int32 BPF_GetNumDamagedWeaponIndex();
    int32 BPF_GetDamagedWeaponIndex();
};

struct FMainCharWeaponOverrideInfo : public FBaseWeaponOverrideInfo
{
    class UCombo* m_MainCharCombo;

};

class UWeaponGameplayData : public UObject
{
    TSubclassOf<class UTargetSettingsDB> m_throwFromPickUpTargetSettingsDB;
    float m_afDamageReceiveFromAttackPower;
    class UCurveFloat* m_SlowMotionCurve;
    float m_fSlowMotionScale;
    FMainCharWeaponOverrideInfo m_MainCharOverrides;

    void BPE_WeaponDataRef();
    void BPE_OnChangeCombo(class AFightingCharacter* _owner, bool _bDroppingWeapon);
};

struct FUsableWeaponInfo
{
    TSubclassOf<class UWeaponGameplayData> m_weaponGameplayData;
    TMap<class TSubclassOf<ABaseWeapon>, class TSubclassOf<UBaseWeaponData>> m_WeaponAnimInfos;

};

class UWeaponInfoForAIDataAsset : public UDataAsset
{
    TMap<class TSubclassOf<ABaseWeapon>, class TSubclassOf<UBaseWeaponData>> m_WeaponsInfo;
    TMap<class TSubclassOf<ABaseWeapon>, class FUsableWeaponInfo> m_WeaponsGameplayInfo;

};

class UWeaponTrailsNotifyState : public UTrailNotifyStateExtended
{
    EWeaponSlot m_eWeaponSlot;

};

class UWGDialogRealOverrideDb : public USCDialogRealOverrideDb
{
    EJoinDialogActors m_eJoinDialogActorsOnStart;

};

class UWGGameFlowNextMap : public UGameFlowNextMap
{
    EMenuEnum m_eMenuToShow;

};

class UWGGameFlowNodeMap : public UGameFlowNodeMap
{
    EMenuEnum m_eMenuToShow;
    ESCGameInstanceState m_eGameState;

};

class UWGGameFlowController : public UGameFlowController
{

    bool BPF_FindMapOptionInTags(const FGameplayTagContainer& _tagsToSearch, EWGGameFlowMapOption _eMapOption);
    FGameplayTag BPE_GetMapOptionTag(EWGGameFlowMapOption _eMapOption);
    int32 BPE_GetHideoutIndexFromTag(FName _hideoutTag);
};

class UWGGameFlow : public UGameFlow
{
    FWGGameFlowOnNextMapPreloadOver OnNextMapPreloadOver;
    void DynamicMulticast();
    TArray<class ULevelStreaming*> m_pendingLoadingLevels;

    void TravelToPendingMapInternal(EWorldTravelLoadSaveStrategy _eLoadSaveStrategy, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    void SCOnSessionStateChanged__DelegateSignature(ESCGameInstanceState _previous, ESCGameInstanceState _current);
    void OnControllerReconnectConfirm();
    void BPF_TravelToPendingMap(bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, float _fFadeDuration, bool _bKeepCheats);
    void BPF_RestartCurrentMap();
    void BPF_ResetTags();
    void BPF_RaiseTag(FGameplayTag _tagToRaise);
    void BPF_LoadNextMap(bool _bForceClassicTravel);
    void BPF_LoadMap(FName _mapTag, EGameFlowTravelType _eTravelTypeWanted, EMenuEnum _eMenuToShow, FGameplayTagContainer _mapOptions);
    bool BPF_IsPendingTravel();
    void BPF_GoToNextMap(bool _bSaveBefore, bool _bReloadSaveBefore);
    bool BPF_GotoMap(FName _mapTag, FGameplayTagContainer _specificMapOptions, bool _bSaveBefore, int32 _iSnapshotToOverrideFrom, bool _bDeleteWorldStateSave, EMenuEnum _eMenuToShow, bool _bReloadFirstSaveBefore, int32 _iPartOfSaveToResetMask, bool _bKeepCheats);
    FName BPF_GetFirstPlayableMapTagName();
    FName BPF_GetCurrentMapTag();
    int32 BPF_GetCurrentHideoutIndex();
    bool BPF_CurrentMapHasMapOption(EWGGameFlowMapOption _eMapOption);
};

class UWGGameplayStatics : public UBlueprintFunctionLibrary
{

    FName BPF_StartConversation(class ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, class ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled, bool _bIgnoreCharacterCanSpeak);
    void BPF_SetGameDifficulty(EGameDifficulty _eDifficulty);
    EGameDifficulty BPF_GetGameDifficulty(bool _bNeedSaveGame);
    void BPF_CutDialog();
    bool BPF_CorsairSetState(FString _event);
    bool BPF_CorsairSetGame(FString _gameName);
    bool BPF_CorsairSetEvent(FString _event);
    bool BPF_CorsairRequestControl();
    void BPF_CorsairPerformProtocolHandshake();
    bool BPF_CorsairClearState(FString _event);
    bool BPF_CorsairClearAllStates();
};

class UWGGameUserSettings : public UGameUserSettings
{
    UDLSSMode DLSSQuality;

};

class UWGLevelSequenceDirectorData : public USCLevelSequenceDirectorData
{
    InputContext m_InputContext;
    EPlayerCameraForcedSide m_eForcedPlayerCameraSide;
    bool m_bHideOwnerCarriedWeaponOnPlay;
    bool m_bShowOwnerCarriedWeaponOnFinished;
    bool m_bForceOutOfIdle;
    TArray<class UAkAudioEvent*> m_AudioEventsOnStart;
    TArray<class UAkAudioEvent*> m_AudioEventsOnFinish;

};

class UWGLevelSequenceRoleData : public USCLevelSequenceRoleData
{
    EQuadrantTypes m_ForcedQuadrant;
    ELevelSequenceAIBehavior m_ForcedAIBehavior;

};

class UWGRetargetingOverrideData : public UDataAsset
{
    class USkeleton* m_Skeleton;
    TMap<FBoneReference, TEnumAsByte<EBoneTranslationRetargetingMode::Type>> m_BoneRetargetingOverrideMap;

};

struct FDuplicatedSaveData
{
    ECharacterGender m_eGender;
    TArray<class TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    TArray<class TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    TMap<ECharacterStat, float> m_DefaultStats;
    FGameplayTagContainer m_PlayerTags;
    FGameplayTagContainer m_GameplayTagContainer;
    float m_fMCDominationGauge;
    int32 m_iLastManGauge;
    TArray<uint8> m_duplicatedSaveEntries;

};

class UWGSaveManagerBlueprintHelper : public USaveManagerBlueprintHelper
{

    void BPF_SnapshotPartOfSave(int32 _iSaveTypeBitmask);
    void BPF_SetNeedSaveGame(int32 _iSaveTypeBitmask);
    void BPF_ResetSnapshotWithMask(int32 _iSaveTypeBitmask);
    void BPF_ResetPartOfSave(int32 _iSaveTypeBitmask);
    void BPF_ResetForbiddenSaveMask();
    int32 BPF_PushForbiddenSaveMask(int32 _iSaveTypeBitmask, const FString _contextString);
    void BPF_PushBlockWorldStateSave(FString _contextString);
    void BPF_PopForbiddenSaveMask(int32 _iHandle);
    void BPF_PopBlockWorldStateSave();
    void BPF_OverrideSaveWithSnapshot(int32 _iSaveTypeBitmask);
    bool BPF_HasSnapshotOfMask(int32 _iSaveTypeBitmask);
    void BPF_GetSnapshotSavedData(int32 _iSaveTypeBitmask, FDuplicatedSaveData& _snapshotSavedData);
    int32 BPF_GetForbiddenMask();
};

struct FCheckPointStruct
{
    FName m_SpawnPoint;
    TArray<FName> m_LevelToStreams;

};

struct FGameSaveData
{
    ECharacterGender m_eGender;
    int32 m_iOutfitIndex;
    TArray<class TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    TArray<class TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    TMap<ECharacterStat, float> m_DefaultStats;
    TMap<class FName, class FCheckPointStruct> m_CheckPointPerLevel;
    FGameplayTagContainer m_PlayerTags;
    FGameplayTagContainer m_GameplayTagContainer;
    float m_fMCDominationGauge;
    int32 m_iLastManGauge;
    FName m_CurrentMapTagName;
    float m_fMCHealth;
    float m_fMCFocusGauge;
    FGameplayTagContainer m_CurrentMapOptions;
    TMap<int32, FDuplicatedSaveData> m_duplicatedSaveData;
    TMap<FName, float> m_iHighscorePerLevel;
    TArray<float> m_EfficiencyQueue;
    float m_fFloorScore;
    bool m_bLevelScoringComplete;
    TMap<FName, int32> m_iArenaHighscorePerChallenge;

};

class UWGSaveObjectGameData : public USCSaveObjectGameData
{
    FGameSaveData m_SavedData;

    void ReloadDefaultStatsFromDataTable();
    void BPF_RemoveGameplayTag(FGameplayTag _gameplayTagToAdd);
    bool BPF_HasGameplayTag(FGameplayTag _gameplayTagToAdd);
    float BPF_GetDefaultStatValue(ECharacterStat _eStat, bool& _bFound);
    void BPF_AddOrUpdateMaskSnapshot(int32 _iMask, const FDuplicatedSaveData& _duplicatedData);
    void BPF_AddGameplayTag(FGameplayTag _gameplayTagToAdd);
    bool BPE_SynchronizeAchievementProgress(const TMap<FString, float>& _achievementProgress);
    FString BPE_SnapshotSaveMask(int32 _iSaveMaskToBackup);
    bool BPE_ShouldLoadAntiCheatMap();
    FString BPE_OverrideSaveMaskWithSnapshot(int32 _iSnapshotIdx);
    int32 BPE_GenerateGlobalAllowedSaveMask();
    void BPE_CopyToSaveWithMask(class USCSaveObjectGameData* _inSaveTo, int32 _iTestMask);
};

struct FSaveAdditionalInfos
{
    int32 m_iAge;
    ECharacterGender m_eGender;
    FName m_MapTag;
    EGameDifficulty m_eDifficulty;

};

struct FProfileData
{
    TArray<FFilterProperties> m_FilterPresets;
    float m_GameOptions;
    TMap<class FString, class FSaveAdditionalInfos> m_SaveAdditionalInfoMap;
    FInputMappingProfileEnumHandler m_GamepadProfile;
    FInputMappingProfileEnumHandler m_KeyboardProfile;
    FInputMappingProfileData m_GamepadCustomMapping;
    FInputMappingProfileData m_KeyboardCustomMapping;
    bool m_bInputHoldToggleActivated;
    FGameplayTagContainer m_UnlockedCheats;
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    int32 m_iCheatUnlockPoints;

};

class UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile
{
    FProfileData m_WGProfileData;

    void BPF_AddUnlockedCheat(FGameplayTag _tagToAdd);
};

struct FGameOptionMappingRange
{
    FFloatRange m_Range;
    float m_fDefaultValue;

};

class UWGSaveSettings : public USaveSettings
{
    TSoftObjectPtr<UCharacterBuildDB> m_DefaultBuild;
    FGameOptionMappingRange m_GameOptionValue;

};

struct FWidgetPoolEntryTemplate
{
    FSCUserDefinedEnumHandler m_LayerEnum;
    TSubclassOf<class USCUserWidget> m_WidgetClass;
    int32 m_iNumberOfInstances;

};

struct FWidgetPoolElement
{
    class USCUserWidget* m_Widget;

};

struct FWidgetPoolElementArray
{
    TArray<FWidgetPoolElement> m_Array;

};

class UWidgetPoolComponent : public UActorComponent
{
    TArray<FWidgetPoolEntryTemplate> m_WidgetPoolTemplate;
    TMap<class FName, class FWidgetPoolElementArray> m_WidgetPool;

    void BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, class USCUserWidget* _userWidget);
    class USCUserWidget* BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum);
};

class AWuguanPerfTestingLocations : public ASCTestingLocationsBase
{
    TArray<TSoftObjectPtr<AAISituationActor>> m_situationsToSpawn;

};

class UWuguanTestControllerBase : public UGauntletTestController
{
    TArray<class ASCTestingLocationsBase*> m_TestingLocations;

    void StopProfiling();
    void StartProfiling();
    void OnTestLevelVisible();
};

class UWuguanTestControllerMapLaunch : public UWuguanTestControllerBase
{
};

class UWuguanTestControllerMemoryTest : public UWuguanTestControllerBase
{
};

class UWuguanTestControllerPerfTest : public UWuguanTestControllerBase
{
};

struct FReplaySerializedEvent
{
};

struct FReplayGameplayCameraRecordEvent : public FReplaySerializedEvent
{
    FReplayCameraTransform m_FirstFrameCameraTransform;
    FReplayCameraTransform m_LastFrameCameraTransform;

};

struct FHitActionLauncherContext : public FGameplayEffectContext
{
    FHitDescription m_hitDescription;

};

struct FContainedCameraDataModifierWithBehavior
{
};

struct FContainedCameraTransitionInfoPairStruct
{
};

struct FContainedCameraTransitionInfoStruct
{
};

struct FAIActionTraversalMemory : public FSCAIActionMemoryEntry
{
};

struct FAIActionWallJumpAttackMemory : public FSCAIActionMemoryEntry
{
};

struct FAIArchetypeBankRow : public FTableRowBase
{
    EAIArchetype m_eAIArchetype;
    TArray<FAICharacterSpawnParams> m_SpawnParams;

};

struct FAIInfo
{
};

struct FAbandoningAnimations
{
    FAnimContainer m_GoingDown;
    FAnimContainer m_Loop;

};

struct FAISpawnedDescription
{
    uint8 m_uiSpawnerGroupIndex;
    int32 m_iSpawnerIndexInLayer;
    bool m_bKilled;

};

struct FIdleAnimPerSex
{
    FAnimContainer m_AnimsPerSex;

};

struct FAIWaveParamsRow : public FTableRowBase
{
    TMap<class EAIArchetype, class FAIWaveBucketDescription> m_ArchetypesBuckets;
    int32 m_iMaxAIInCombatDuringWave;

};

struct FReplayCachedStateMachine
{
};

struct FReplayCachedAnimInstanceAssetPlayers
{
    int32 m_iAnimInstanceIndex;

};

struct FReplayAnimGraphCachedContext
{
};

struct FReplayAnimGraphPlayerAssetVersioning
{
    int32 m_iAnimInstanceIndex;
    int32 m_iStateMachineIndex;
    int32 m_iStateMachineStateIndex;
    int32 m_iPlayerAssetIndex;
    FString m_UniqueID;

};

struct FReplayAnimGraphVersioning
{
    TArray<FName> m_StateMachineNames;
    TArray<FReplayAnimGraphPlayerAssetVersioning> m_AssetPlayers;

};

struct FAnimStructDeath : public FAnimStructBase
{
    bool m_bCancelled;

};

struct FAnimStructItemUse : public FAnimStructBase
{
};

struct FAnimStructSpawn : public FAnimStructBase
{
    float m_fPlayRate;

};

struct FAnimStructWeaponAction : public FAnimStructBase
{
};

struct FApplyImpactStruct
{
    FHitDescription m_hitDescription;
    bool m_bUseForcedHittedAnim;
    FHittedAnimContainer m_ForcedAnim;
    bool m_bPlayOrderHitted;
    bool m_bEnterRagdoll;
    bool m_bDropWeaponOnDeath;
    bool m_bPlayOrderFightingState;
    uint8 m_uiPlayFightingStateOrderAfter;
    class UAttackPropertiesResistanceDB* m_specialResistanceDB;
    uint8 m_uiSpecificOrderIDToPlayBeforeFightingStateOrder;
    bool m_bUseForcedFightingStateAnim;
    FAnimContainer m_ForcedFightingStateAnim;
    bool m_bInstantPlayStructureBrokenOrder;
    bool m_bUseForcedFightingStateRecoveryAnim;
    FAnimContainer m_ForcedFightingStateAnimRecovery;
    bool m_bUseForceMirrorFightingState;
    bool m_bForceMirrorFightingState;
    bool m_bNotifyInstigator;

};

struct FAILocalizedConditionedAction : public FAIConditionedAction
{
    FSCMathExpressionFloat m_DistanceTestExpression;

};

struct FOnHitDelayed
{
    FHitDescription m_Hit;

};

struct FAttackFilter
{
    EQuadrantTypes m_eStartQuadrant;
    EQuadrantTypes m_eEndQuadrant;
    bool m_bIsAlternativeAttack;
    bool m_bExcludeUsedAttacks;
    FName m_AllowedAttack;
    bool m_bIgnoreUknownAttacks;
    bool m_bIgnoreLearningAttacks;
    bool m_bIgnoreUnlockedAttacks;
    bool m_bExcludeOtherWeaponFamilies;
    bool m_bNewAttacksOnly;
    int32 m_iAttackStyle;
    int32 m_iSpecialAbilityMask;
    bool m_bIgnoreMirrored;
    EAttackLearningState m_eLearningState;

};

struct FAttackMemoryData
{
    TWeakObjectPtr<class AActor> m_Instigator;
    uint8 m_uiOderId;
    EGuardType m_eGuardType;
    TSoftClassPtr<AThrowableActor> m_ThrowableActorClass;
    FGameplayTagContainer m_AttackProperties;
    int32 m_iComboID;
    bool m_bHasHit;
    bool m_bDodged;
    bool m_bAvoided;

};

struct FHittedAnimCardinalOnlyArray
{
    FAnimContainer m_Array;

};

struct FMainAttackComboRealNamesDB
{
    TArray<FText> m_ComboQuadrantsFrontLeftXls;
    TArray<FText> m_ComboQuadrantsFrontRightXls;
    TArray<FText> m_ComboQuadrantsBackRightXls;
    TArray<FText> m_ComboQuadrantsBackLeftXls;

};

struct FAlternativeAttackComboRealNamesDB
{
    FText m_Attacks;

};

struct FAttackComboRealNamesDB
{
    FMainAttackComboRealNamesDB m_MainAttacksComboNamesDB;
    FAlternativeAttackComboRealNamesDB m_AlternativeAttacksComboNamesDB;

};

struct FAttackUnlockProgress
{
    int32 m_iXP;

};

struct FOrderOverAttackInfo
{
    TWeakObjectPtr<class AActor> m_Instigator;
    FHitDefenseResult m_DefenseResult;
    FHitRequest m_HitRequest;
    EOrderType m_eOrderType;
    uint8 m_uiOrderID;

};

struct FBoneIK
{
    FBoneReference m_Bone;
    float m_fWeight;

};

struct FCameraCollisionSideRaycast
{
    FVector m_vStartLocal;
    FVector m_vEndLocal;

};

struct FCameraCollisionSideRaycastList
{
    TArray<FCameraCollisionSideRaycast> m_ListOfRayCast;

};

struct FCameraNodeStructInherited
{
};

struct FCaptureInputResult
{
    TArray<FInputMappingKeySlot> m_Slots;

};

struct FCarriedPropDataRow : public FTableRowBase
{
    FName m_LocatorName;
    TSubclassOf<class AActor> m_ClassToSpawn;

};

struct FEquipmentStruct
{
    class ABaseWeapon* m_EquipmentActor;
    class UBaseItemData* m_EquipmentDataAsset;
    int32 m_iMaterialIndex;
    ESchoolItemType m_eSchoolItemType;
    class UMaterialInterface* m_BaseFXMaterials;
    TArray<class UMaterialInterface*> m_VariationChosenMaterials;

};

struct FInventoryItem
{
    FEquipmentStruct m_Item;
    int32 m_iItemCount;
    bool m_bIsEquipped;
    int8 m_iEquippedItemSlot;
    float m_fDurability;
    bool m_bBroken;
    bool m_bIsNew;

};

struct FInventoryItemArray
{
    TArray<FInventoryItem> m_ItemList;

};

struct FChosenAttackProperties
{
};

struct FChargedOverridingHitBox
{
    uint8 m_uiHitBoxToOverride;
    FDataTableRowHandle m_HitRow;

};

struct FChargedCap
{
    FFrameRange m_FrameRange;
    float m_fDuration;
    TArray<FChargedOverridingHitBox> m_HitBoxes;

};

struct FDeathAnimAttackCardinalArray
{
    class UAnimSequence* m_Array;

};

struct FDeathAnimAttackHeightArray
{
    FDeathAnimAttackCardinalArray m_Array;

};

struct FDeathAnimAttackPowerArray
{
    FDeathAnimAttackHeightArray m_Array;

};

struct FDeathAnimQuadrantArray
{
    FDeathAnimAttackPowerArray m_Array;

};

struct FDLCContent
{
    TArray<FName> m_entitlements;
    TArray<FInventoryItem> m_Gears;
    TArray<FName> m_Emotes;

};

struct FEmoteDataRow : public FTableRowBase
{
    FName m_Name;
    FText m_RealName;
    FText m_Description;
    TSoftObjectPtr<UTexture2D> m_Icon;
    class UAnimSequence* m_Anim;
    class UAnimSequence* m_AnimWoman;
    EEmoteAction m_eEmoteAction;

};

struct FEmoteShopDataRow : public FTableRowBase
{
    FName m_RowName;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    int32 m_iFragmentPrice;
    int32 m_iPrestigePointPrice;

};

struct FEquipmentPreset
{
    FEquipmentStruct m_Items;
    uint8 m_IsEmpty;
    bool m_Init;

};

struct FEquipmentShopDataRow : public FTableRowBase
{
    class UBaseItemData* m_Equipment;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    bool m_bAbsolverRequired;
    int32 m_iFragmentPrice;
    int32 m_iPrestigePointPrice;
    int32 m_iMaterialIndex;

};

struct FBlendProfileBySpeedStateTableRow : public FTableRowBase
{
    class UBlendProfile* m_BlendProfileBySpeedState;

};

struct FGearUpdateStruct
{
    TArray<FEquipmentStruct> m_Outfits;
    class UBaseWeaponData* m_weaponData;
    ECharacterGender m_eGender;
    uint8 m_uiSkinTone;

};

struct FCustomUIInfosPerSlot
{
    int32 m_iSlotIndex;
    EControllerIconAxisTypes m_AxisTypes;

};

struct FHitRequestAdditionalInfo
{
};

struct FBlendSpaceHitRequestAdditionalInfo : public FHitRequestAdditionalInfo
{
};

struct FInheritedStruct
{
    bool m_bOverrideParentValue;
    bool m_bIsEditable;

};

struct FInheritedBoolStruct : public FInheritedStruct
{
    bool m_bParentBool;
    bool m_bFinalBool;
    EInheritanceChoice m_eInheritanceChoice;

};

struct FInheritedCurveFloatStruct : public FInheritedStruct
{
    class UCurveFloat* m_parentCurveFloat;
    class UCurveFloat* m_finalCurveFloat;
    EInheritanceChoice m_eInheritanceChoice;

};

struct FInheritedFloatStruct : public FInheritedStruct
{
    float m_fParentValue;
    float m_fFinalValue;
    float m_fFactorValue;
    float m_fOffsetValue;

};

struct FInheritedVec3Struct
{
    FInheritedFloatStruct m_X;
    FInheritedFloatStruct m_Y;
    FInheritedFloatStruct m_Z;

};

struct FInputMappingTree
{
    TMap<class InputAction, class FInputMappingNode> m_NodePerAction;

};

struct FIntroShopDataRow : public FTableRowBase
{
    FName m_RowName;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    int32 m_iFragmentPrice;
    int32 m_iPrestigePointPrice;

};

struct FLootBoxDataRow : public FTableRowBase
{
    class UBaseItemData* m_Item;
    TArray<int32> m_Materials;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    int32 m_iWeight;

};

struct FLootBoxRewardStruct
{
    TArray<FLootBoxTypeCountStruct> m_LootBoxes;

};

struct FMatchmakingZoneStatus
{
    uint8 m_uiZoneID;
    uint8 m_uiSubZoneID;
    uint8 m_uiOpenedGates;
    uint8 m_uiOpenedGhostGates;

};

struct FMenuOptionData
{
    float m_fMin;
    float m_fMax;
    float m_fDefaultValue;
    bool m_bApplyOnSet;

};

struct FMovieSceneRetargetingOverrideTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneRetargetingOverrideSection* Section;

};

struct FMovieSceneSubtitlesTemplate : public FMovieSceneAkAudioEventTemplate
{
    class UMovieSceneSubtitlesSection* SubtitleSection;

};

struct FNetOrderStructAvoided : public FNetOrderStruct
{
    FOrderOverAttackInfo m_AvoidInfo;

};

struct FNetOrderStructCancel : public FNetOrderStruct
{
};

struct FNetOrderStructDeflected : public FNetOrderStruct
{
};

struct FNetOrderStructFightingState : public FNetOrderStructPlayAnim
{
    TWeakObjectPtr<class AActor> m_Instigator;
    FHitRequest m_Hit;

};

struct FNetOrderStructFreezeFrame : public FNetOrderStruct
{
};

struct FNetOrderStructGuard : public FNetOrderStruct
{
};

struct FNetOrderStructHitted : public FNetOrderStructPlayAnim
{
    FHitRequest m_Request;
    FImpactResult m_ImpactResult;
    FHitResult m_HitResult;
    FHittedAnimContainer m_HittedAnimContainer;

};

struct FNetOrderStructPlayBlendSpace : public FNetOrderStruct
{
    class UBlendSpaceBase* m_BlendSpace;
    FVector m_vDefaultCoordinates;
    float m_fDuration;
    float m_fPlayRate;
    bool m_bIsInfinite;

};

struct FNetOrderStructRagingBull : public FNetOrderStructPlayAnim
{
    ERagingBullPhase m_ePhase;
    FHitBox m_HitBox;
    float m_fMaxAngularSpeed;
    FAnimContainer m_wallSplashFrontAnim;
    bool m_bHasMissedTarget;

};

struct FNetOrderStructSpawn : public FNetOrderStruct
{
};

struct FNetOrderStructUseMovable : public FNetOrderStructAttack
{
};

struct FNetOrderStructAvoid : public FNetOrderStructPlayAnim
{
    uint8 m_uiAvoidType;

};

struct FNetOrderStructChargeBuildUp : public FNetOrderStructPlayAnim
{
    uint8 m_uiCapLevel;
    EQuadrantTypes m_eAttackQuadrant;

};

struct FNetOrderDropObject : public FNetOrderStructPlayAnimVariableWeight
{
    EDropReason m_eDropReason;

};

struct FNetOrderStructFallFromPush : public FNetOrderStructPlayAnim
{
    FVector m_vDirection;
    bool m_bLethal;
    bool m_bFromSlope;
    FVector m_vSlopeNormal;

};

struct FFallOnSlopeSetup
{
    TArray<class AActor*> m_IgnoredActors;

};

struct FNetOrderStructFallOnSlope : public FNetOrderStruct
{
    FFallOnSlopeSetup m_Setup;

};

struct FNetOrderStructFallOnSlopeEntry : public FNetOrderStructPlayAnim
{
    FFallOnSlopeSetup m_Setup;
    FVector m_vSlopeDir;
    FHitRequest m_HitRequest;

};

struct FNetOrderStructFidget : public FNetOrderStructPlayAnimVariableWeight
{
    FBlendProfileBySpeedStateStruct m_BlendProfiles;
    EFidgetMirroringTypes m_eMirrorHandling;

};

struct FNetOrderStructFightingStateRecovery : public FNetOrderStructPlayAnim
{
    EFightingState m_eFightingState;

};

struct FNetStructMoveToWithPhysWalking : public FNetOrderStruct
{
    class UNavLinkCustomComponent* m_NavLinkComponent;

};

struct FNetOrderStructParried : public FNetOrderStructAttackEnv
{
    FHitDescription m_AttackHitDescription;

};

struct FNetOrderStructDefenseSuccess : public FNetOrderStructPlayAnim
{
    FHitResult m_Hit;
    FImpactResult m_Impact;
    FHitRequest m_Request;
    bool m_OpponentGoingStructureBroken;
    bool m_bReorientToAttacker;

};

struct FNetOrderStructPushFromGrab : public FNetOrderStructSnapAnim
{
    TWeakObjectPtr<class AActor> m_ThrowTarget;
    FVector m_ThrowTargetDir;

};

struct FNetOrderStructSynchronizedAttackVictim : public FNetOrderStructSnapAnim
{
    TArray<FOverridingHitBox> m_Hits;
    bool m_bCanCounterGrab;

};

struct FNetOrderStructTraversalCine : public FNetOrderStructPlayAnim
{
    FTraversalInfo m_TraversalInfo;

};

struct FPendingOrderStruct
{
    EOrderType OrderType;
    class UOrderComponent* OrderComponent;

};

struct FVariableWeightActivation
{
};

struct FPlayerKill
{
    class AFightingPlayerState* m_PlayerState;
    uint32 m_uiNbKills;

};

struct FPowerShopDataRow : public FTableRowBase
{
    class UBaseItemData* m_Power;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    int32 m_iFragmentPrice;
    int32 m_iPrestigePointPrice;

};

struct FEnvPushInfos
{
};

struct FGenericPushActorInfo
{
};

struct FReplayCutInfo
{
    class UReplayKey* m_FirstKey;
    class UReplayKey* m_SecondKey;
    class UReplayKey* m_CurrentKey;

};

struct FReplaySoundEvent : public FReplaySerializedEvent
{
};

struct FReplayStreamingEvent : public FReplaySerializedEvent
{
};

struct FReplayKeyTransitionContext
{
};

struct FReplayKeyCameraTransitionContextCameraTarget
{
};

struct FSCAnimNode_AimIK : public FAnimNode_SkeletalControlBase
{
    TArray<FBoneIK> mIKBoneChain;
    FName mSocketNameToTransform;
    FVector mvTargetPosition;
    float mfMinDistanceRatio;
    float mfMaxDistanceRatio;
    FBoneReference mBoneAnimTargetted;
    bool mbUseDirectWorldPositionForHitTarget;
    FVector mvHitTargetPosition;
    uint8 muiNbIterations;
    float mfAbsoluteAngleTolerance;
    bool mbDebugActivated;
    EAimIKSolverType meIKSolverType;

};

struct FSCAnimNode_CCDIK : public FAnimNode_CCDIK
{
    FName mSaveBone;
    FVector mvEffectorComponentSpaceOffset;
    bool mbMirror;
    class UMirrorAnimDB* mMirrorAnimDB;

};

struct FSCAnimNode_ComputeVariableWeight : public FAnimNode_Base
{
    FPoseLink mBasePose;

};

struct FSCAnimNode_MirrorPose : public FAnimNode_Base
{
    FPoseLink mBasePose;
    bool mbMirrorAnimation;
    class UMirrorAnimDB* mMirrorAnimDB;

};

struct FSCAnimNode_MultiVariableWeightBlender : public FAnimNode_Base
{
    TArray<FPoseLink> VariableWeightPoses;
    TArray<FVariableWeightEnumHandler> Layers;
    bool bFullOverrideAlpha;
    bool bFullOverrideMirrorAlpha;
    float fMirrorOverrideAlpha;
    bool bMute;

};

struct FSCAnimNode_PlayAnim : public FAnimNode_SequencePlayer
{
    bool mbMirrorAnimation;
    int32 miAnimSubStateID;
    uint8 muiTransitionGlobalType;
    uint8 muiOrderID;
    bool mbIgnoreOrderID;
    bool mbUseStartCursor;
    float mfStartCursor;
    bool mbIgnoreTimeAccumulator;
    class UMirrorAnimDB* mMirrorAnimDB;
    bool mbRecordedForReplay;

};

struct FSCAnimNode_PlayBlendSpace : public FAnimNode_BlendSpacePlayer
{
    bool mbMirrorAnimation;
    int32 miAnimSubStateID;
    uint8 muiTransitionGlobalType;
    uint8 muiOrderID;
    bool mbIgnoreOrderID;
    class UMirrorAnimDB* mMirrorAnimDB;

};

struct FSCAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    float Alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
    bool mbMirrorAnimation;
    class UMirrorAnimDB* mMirrorAnimDB;

};

struct FSCAnimNode_SaveBoneTransform : public FAnimNode_Base
{
    FPoseLink mBasePose;
    FBoneReference mBone;
    ECoordinateSystem meTransformSpace;
    bool mbMirror;
    class UMirrorAnimDB* mMirrorAnimDB;

};

struct FSCAnimNode_SaveBoneTransformByEnum : public FSCAnimNode_SaveBoneTransform
{
    ESaveBone meSaveBone;

};

struct FSCAnimNode_SaveBoneTransformByName : public FSCAnimNode_SaveBoneTransform
{
    FName mSaveBone;

};

struct FSCAnimNode_SetVariableWeightLayers : public FAnimNode_Base
{
    FPoseLink mBasePose;
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMaskRuntime;
    FVariableWeightInfo mVariableWeightLayerToBoneMaskFromOrderDB;
    TArray<FVariableWeightLayerToBoneMask> mFillerLayers;
    TArray<FVariableWeightLayerToBoneMask> mVariableWeightLayerToBoneMask;
    float mBlendTimeWhenSwitchingProfile;
    ESCBlendType mBlendModeWhenSwitchingProfile;
    TArray<FVariableWeightLayerToBoneMask> m_PrevVariableWeightLayerToBoneMaskRuntime;

};

struct FSCAnimNode_VariableWeightBlender : public FAnimNode_Base
{
    FPoseLink mMasterPose;
    FPoseLink mVariableWeightPose;
    FSCUserDefinedEnumHandler mLayer;
    bool mbMeshSpaceBlend;
    bool mbFullOverrideAlpha;
    float mfLayerOverrideAlpha;
    bool mbFullOverrideMirrorAlpha;
    float mfMirrorOverrideAlpha;
    bool mbMute;

};

struct FSCBoneMask
{
};

struct FSCGameplayAbilityTargetData : public FGameplayAbilityTargetData
{
    TWeakObjectPtr<class AActor> m_Target;

};

struct FSocialRequestInfo
{
};

struct FSocketIK : public FBoneIK
{
};

struct FTensionVolumesContainer
{
    TArray<TWeakObjectPtr<ASoundTensionVolume>> m_overlappedTensionVolumes;
    TMap<class TWeakObjectPtr<ASoundTensionPortal>, class bool> m_TensionPortalsCrossed;

};

struct FTrackingPayloadEmpty
{
};

struct FTrackingPayloadStopTimedMetric
{
    int64 offsetPlaytime;
    FString Type;

};

struct FTrackingPayloadActivateTimedMetric
{
    int64 offsetPlaytime;

};

struct FTrackingPayloadOptions
{
    FString Theme;
    int32 HighCont;
    FString HUDDisplay;
    int32 HUDSize;
    int32 sub;
    int32 subOpacity;
    FString GameInput;
    FString remapProfile;
    FString InputPress;
    int32 HideVFX;
    int32 CameraShake;
    int32 HudFraming;
    int32 BlinkingEffect;
    FString AudioOut;

};

struct FTrackingPayloadStartPlaying
{
    FString m_AudioLanguage;
    FString m_TextLanguage;
    FString m_Platform;
    FString ver;
    FString difficulty;

};

struct FTrackingPayloadWithInt
{
    int64 m_Int;

};

struct FTrackingPayloadWithText
{
    FString m_Text;

};

struct FTransitionRequest
{
    ESpeedState m_eInSpeedState;
    ESCCardinalPoints m_eInCardinalPoint;
    ESpeedState m_eOutSpeedState;
    ESCCardinalPoints m_eOutCardinalPoint;
    ETransitionRotation m_eVelocityRotation;
    float m_fAbsVelocityAngle;
    bool m_bIsRotationLeft;

};

struct FInputDataTutorialStruct
{
    FText m_PrefixText;
    InputAction m_eInputAction;
    class UGenericInputData* m_InputDataPad;
    class UGenericInputData* m_InputDataMouse;
    EControllerIconAxisTypes m_eAxisType;
    FText m_SuffixText;
    EInputDataTutorialDisplayConstraints m_InputDataTutorialDisplayConstraint;

};

struct FInputTutorialStruct
{
    TArray<FInputDataTutorialStruct> m_InputSequence;

};

struct FTutorialDataRow : public FTableRowBase
{
    FName m_Name;
    FText m_Title;
    FText m_Subtitle;
    TArray<FInputTutorialStruct> m_Inputs;
    FText m_Description;
    FText m_Details;
    bool m_bIsUnlockedByDefault;
    bool m_bIsUnlockable;

};

struct FTutorialUnlockStruct
{
    ETutorialUnlockState m_eUnlockState;

};

struct FWeaponShopDataRow : public FTableRowBase
{
    class UBaseItemData* m_Weapon;
    int32 m_iGMLevelRequired;
    int32 m_iGleamLevelRequired;
    int32 m_iFragmentPrice;
    int32 m_iPrestigePointPrice;

};

class UDefault__MappingEditorHelpers
{
};

#endif
