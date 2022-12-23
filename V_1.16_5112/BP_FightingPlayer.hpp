#ifndef UE4SS_SDK_BP_FightingPlayer_HPP
#define UE4SS_SDK_BP_FightingPlayer_HPP

class ABP_FightingPlayer_C : public ABP_TPSCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PlayerScoringComponent_C* ScoringComponent;
    class UOptionListenerComponent* OptionListener;
    class UBPStatsComponent_MainChar_C* BPStatsComponent;
    class UNiagaraComponent* RainDrops;
    class USCDialogComponent* MCDialogComponent;
    class UPostProcessComponent* PostProcessComponent;
    class UASMPlayerComponent* ASMPlayer;
    class UInteractionDetectionComponent* InteractionDetection;
    class UCameraComponentThird* CameraComponentThird1;
    class UPlayerFightingComponent* PlayerFighting;
    float XRayTimeline_2_AlphaValue_B99E789F4B750E1312AB4DB6E056F422;
    TEnumAsByte<ETimelineDirection::Type> XRayTimeline_2__Direction_B99E789F4B750E1312AB4DB6E056F422;
    class UTimelineComponent* XRayTimeline_2;
    float XRayTimeline_AlphaValue_C27522E24AFDF504DF184D94796D8722;
    TEnumAsByte<ETimelineDirection::Type> XRayTimeline__Direction_C27522E24AFDF504DF184D94796D8722;
    class UTimelineComponent* XRayTimeline;
    float Timeline_0_NewTrack_0_28FEE0E141BC71288C77969330A5A359;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_28FEE0E141BC71288C77969330A5A359;
    class UTimelineComponent* Timeline_0;
    TEnumAsByte<ETimelineDirection::Type> TransitionReal_ExposureTimeline__Direction_EC9658C94CFB8EC3D7E940A54DEE458A;
    class UTimelineComponent* TransitionReal_ExposureTimeline;
    TSubclassOf<class UMatineeCameraShake> Hitted_Light;
    TSubclassOf<class UMatineeCameraShake> Hitted_Medium;
    TSubclassOf<class UMatineeCameraShake> Hitted_Strong;
    TSubclassOf<class UMatineeCameraShake> Hit_Light;
    TSubclassOf<class UMatineeCameraShake> Hit_Medium;
    TSubclassOf<class UMatineeCameraShake> Hit_Strong;
    TSubclassOf<class UMatineeCameraShake> Absorb;
    TSubclassOf<class UMatineeCameraShake> Guardbreak;
    TSubclassOf<class UMatineeCameraShake> Guard;
    TSubclassOf<class UMatineeCameraShake> ParrySuccess;
    TSubclassOf<class UMatineeCameraShake> Parried;
    bool activate_material_alpha;
    class UMaterialInstanceDynamic* skinMaterialInstance;
    float minDistToOcclude;
    bool stopHealthBarBelowUpdate;
    FBP_FightingPlayer_CEventHit EventHit;
    void EventHit();
    float HasHit;
    float WasHitted;
    float Score;
    FBP_FightingPlayer_CBP_FP_Pressed BP_FP_Pressed;
    void BP_FP_Pressed(class ABP_FightingPlayer_C* PressingPlayer);
    FBP_FightingPlayer_CBP_FP_Released BP_FP_Released;
    void BP_FP_Released(class ABP_FightingPlayer_C* ReleasingPlayer);
    float Hit_ShakeScreen_Coef;
    FName CurrentAttack;
    bool IsTeleporting;
    TArray<FVector> PendingTeleportLocation;
    TArray<FRotator> PendingTeleportRotation;
    bool DeadWithDelay;
    uint8 PendingTeleportIndex;
    FRotator TargetRotation;
    FRotator CharacterRotation;
    float Target/CharacterRotationDifference;
    float RotationRateMultiplier;
    bool TakedownModeInput;
    bool TakedownMode;
    class AActor* KillerActor;
    float BasePendantLightIntensity;
    float PendantLightShineFactor;
    TArray<int32> AgeSwitchVoice;
    class UMaterialInstanceDynamic* FocusModeMID;
    int32 ID_FocusModeMID;
    class AActor* FocusCurrentActorSelected;
    class ABP_FocusVitalPointsFX_C* VitalPointsFX_PO;
    class AVitalPointActor* VitalPointSelected;
    FTimerHandle FocusFadeOutTimerHandle;
    float HealthBonusByCharge;
    float HealthBonusByKill;
    bool CanUpdateVisualAging;
    bool ForceHideHealth;
    float MotionBlur_InitAmount;
    int32 MotionBlur_InitTgtFPS;
    class UMaterialInstanceDynamic* PPDizzyMID;
    int32 IDDizzyMID;
    float DizzyReductionEffectDuration;
    float LastDizzyReduction;
    int32 RealTransitionPP_ID;
    bool bWasUsingCustomExposure;
    class UAkAudioEvent* RealTransition_AkEvent;
    float ExposureMutliplier;
    FTimerHandle FadeIn_TimerHandle;
    class UAkComponent* Real Transition AkComponent;
    float HealthBonusByTakedown;
    uint8 onGoingOrderAttackID;
    TArray<class AActor*> hittedAIs;
    class ACharacter* Pending XRayTarget;
    class AFightingCharacter* BindedLockMoveTarget;
    class ACharacter* CurrentXRayTarget;
    bool FadeOutSwap;
    bool FadeOut Target Lost;
    float StructureBonusOnAvoid;
    float CharegGainCurve_DistanceMultiplier;
    FCameraLookAtServiceBehavior FocusLookAt;
    int32 FocusLookatHandle;
    int32 DeathPP_ID;
    class UMaterial* DeathPP_Material;
    int32 AvailabilityLayerID;
    bool b_InputsAreDisabled;
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_Temp;
    class UCameraModifier* HighlightCameraModifier;
    FTimerHandle TauntDelay;
    ECameraTransitionState CameraAnimDrivenState;
    FTimerHandle XRayAlertedTimer;
    FName Row Name;
    TMap<class FString, class FLinearColor> XRay_Color;
    class AActor* AttachedProp;

    bool CanUseAdvancedVibration();
    void GetVitalPointFXPO(class ABP_FocusVitalPointsFX_C*& BP_VitalPoint_FX);
    void GetKillerActor(class AActor*& Actor);
    void IsCarryingProp(bool& bCarryingProp);
    void EjectProp(FVector AddImpulse);
    bool ShouldShowXRay();
    void UpdateXRayPP();
    void UpdateFocusActorSelectedStencil(bool bSelected);
    void GetXRayTarget(class ACharacter*& AsCharacter);
    bool ShouldPlayAdvancedVibration();
    void UpdateCharacterHighlight();
    void OnTauntStart();
    void EnableInputs();
    void DisableInputs();
    void OnDetectiveTagUpdated(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void PlayAdvancedHapticFeedback(EHeight HitHeight, EAttackPowers HitAttackPower, bool IsHit, ESCCardinalPoints HitCardinalPoint, ELimbs AttackLimb, EGuardType GuardType, class AFightingCharacter* Character, bool IsAvoid, EAvoidType AvoidType);
    void Check Score Trophy();
    void Audio Pendant Charges Update();
    void OnThrowAI_Order(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnThrowItemOrder(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAnyTraversalOrder(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnKillSomeone(class AActor* Victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, FDamageInfos& _damage);
    void VisualPendantUpdate();
    void ReduceDizzyFeedback(float BaseDizzyDuration, float TimeReduced);
    void Disable Dizzy PP();
    void SetupDizzyMaterial();
    void EnableDizzyPP(float DizzyDuration);
    void UpdateVoiceAge(int32 Age);
    void DisableCharacterHighlightPP();
    void EnableCharacterHighlightPP();
    void SetDeselectedVitalPointAndUpdateFX(class UObject* DeselectedVitalPoint);
    void SetupFadeInVitalPointFX(class AVitalPointActor* VitalPointSelected);
    void UpdatePointTargetLocationVitalPointsFX();
    void TurnOfVitalPointsFX_PO();
    void SetupVitalPointsFX_PO();
    void UpdatePoseVitalPointsFX_PO();
    void SetFocusBackgroundSFX();
    void StartFocusPPFadeOut();
    void OnTakeDownStart(uint8 ID, class UOrderComponent* OrderComponent);
    void DisableFocusModePP();
    void Enable Focus Mode PP();
    void SetupFocusModeMaterial();
    void TriggerFXChargeWearerDeath(class AActor* ChargePossessorLocation);
    void TriggerFXChargeGain(uint8 E Pendant Update);
    void TeleportWithRetry(TArray<FVector>& Locations, uint8 Index, TArray<FRotator>& Rotations, uint8& ResultIndex);
    void PlayShakeCam(TSubclassOf<class UMatineeCameraShake> Camera Shake, float ExtraMultiplier);
    void VitalPointConsumable?(class AVitalPointActor* vitalPoint, bool& Consumable);
    void UserConstructionScript();
    void TransitionReal_ExposureTimeline__FinishedFunc();
    void TransitionReal_ExposureTimeline__UpdateFunc();
    void XRayTimeline__FinishedFunc();
    void XRayTimeline__UpdateFunc();
    void XRayTimeline_2__FinishedFunc();
    void XRayTimeline_2__UpdateFunc();
    void InpActEvt_Multiply_K2Node_InputKeyEvent_0(FKey Key);
    void OnFail_36640EFC47AAACF45658319CFA13B1EB();
    void OnSuccess_36640EFC47AAACF45658319CFA13B1EB();
    void BPE_Hit(const FHitDescription& _hit);
    void BPE_SetCharacterHidden(bool _bHidden);
    void GuardbrokenFeedbacks();
    void GuardingFeedbacks();
    void BPE_Avoided(EAvoidType _eAvoid, const class UAvoidPropertyDB* _AvoidPropertyDB);
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);
    void Hitted(const FHitDescription& _hit);
    void StopRumble();
    void GrabSuccess(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnGrabStart(bool FromParry);
    void CEvent Hitted();
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    void On Stat Changed(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void OnMatchStarted();
    void ReceiveBeginPlay();
    void CE_Parry(bool LowStructure);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_1_OnFocusMechanicStart__DelegateSignature();
    void BndEvt__Attack_K2Node_ComponentBoundEvent_2_OnFocusMechanicStop__DelegateSignature(bool _bCancel);
    void StartTakeDown(uint8 _ID, class UOrderComponent* _OrderComponent);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_3_OnFocusMechanicUpdate__DelegateSignature(float _fDeltaTime, float _fRealTimeDeltaTime);
    void BPE_EndBeingRevived(bool _bSuccess);
    void EventDisableFocusPP();
    void StatHasChanged(ECharacterStat Selection, int32 CurrentValue, int32 PrevValue);
    void InitAge();
    void CE_PendantUpdate(uint8 PendantUpdate, class AActor* ActorGivingCharge);
    void TPSChar_RevivedSuccess_Event_0();
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_OnFocusMechanicNewPointSelected__DelegateSignature(class AVitalPointActor* _previousVitalPointSelected, class AVitalPointActor* _vitalPointSelected);
    void TakedownOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void OnTeleportExit();
    void BndEvt__Attack_K2Node_ComponentBoundEvent_9_OnAttackChargedCapStart__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDuration);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_10_OnAttackChargedCapUpdate__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDt, float _fCurrentRatioInChargingPhase);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_11_OnAttackChargedCapEnd__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, EChargeCapEndReason _eEndReason);
    void Event_SetRainOnCharacter(bool Activate);
    void EnableCharacterHighlight();
    void DisableCharacterHighlight();
    void SetCanUpdateVisualAging(bool canUpdate);
    void SetKillerActor(class AActor* Actor);
    void SetFocusCurrentActorSelected(class AActor* Actor);
    void OnDizzyReduced(float TimeLeft, float TimeReduced);
    void OnDizzyStarted(float DizzyDuration);
    void OnDizzyEnded();
    void DizzyStart(EFightingState _eFightingState, bool _bPush);
    void Event_SetSnowOnCharacter(bool Activate);
    void Event_SetAshesOnCharacter(bool Activate);
    void BPE_ThrowableHit(const FHitDescription& _hit);
    void AnyHit(FHitDescription HitDescription);
    void SetupRealTransitionMID(class UMaterialInstanceDynamic* Mid, bool KeepWeight);
    void DisableRealTransitionPostProcess();
    void SetPostProcessEnable(bool bIsEnabled);
    void StartFadeIn(float Duration, float EnableInputTimeRatio);
    void SetExposure(float NewExposure);
    void DisableExposure();
    void SetupCustomExposure(bool NewValue, float ExposureMultiplier);
    void SetAKEvent(class UAkAudioEvent* Event, class UAkComponent* Ak);
    void Server Teleport(const TArray<FVector>& Location, const TArray<FRotator>& Rotation, uint8 Index);
    void BindAchievementsOrders();
    void Play Advanced Rumble(FHitDescription Hit, bool bIsHit, bool IsAvoid, EAvoidType AvoidType);
    void OnTeleportEnter(const TArray<FVector>& Location, const TArray<FRotator>& Rotation);
    void OnParrySucces(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAlterLevelChanged(EAlertLevel EAlertLevel);
    void BPE_OnDeath();
    void CE_DeathCounterUpdated(class AActor* ActorGivingCharge, int32 Count);
    void DisablePostProcess();
    void EnablePostProcess();
    void m_OnDeathCounterDecrement_Event_0(int32 _iCount, class AActor* _actor, bool _bAllowDecrement);
    void BlueprintEventParried(FVector _vImpactPosition, class AFightingCharacter* _ParryInstigator);
    void CharacterDied(bool PlaySounds);
    void SetEnableDeathEventPP(bool Enable);
    void Setup Death Event PP();
    void TriggerChargeGainFX();
    void EnableInputsBack();
    void StartTaunt(uint8 _ID, class UOrderComponent* _OrderComponent);
    void SetCharacterHighlightEnabled(bool bEnabled);
    void BndEvt__BP_FightingPlayer_OptionListener_K2Node_ComponentBoundEvent_6_OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
    void OnCharacterRevived(uint8 _ID, class UOrderComponent* _OrderComponent);
    void RequestLoadLevelSelectTextures();
    void OnFocusValidated(class AVitalPointActor* _vitalPointSelected);
    void PlayRumble(float InIntensity, int32 InFrames, bool AffectsLeftLarge, bool AffectsLeftSmall, bool AffectsRightLarge, bool AffectsRightSmall);
    void BndEvt__BP_FightingPlayer_Attack_K2Node_ComponentBoundEvent_4_OnTargetChange__DelegateSignature(EActionType _eAction);
    void UpdateXRayTarget(bool bInstant);
    void OnTargetComboChanged_Event();
    void ReceivePossessed(class AController* NewController);
    void OnGlobalAlertLevelChanged(EAlertLevel EAlertLevel);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_FightingPlayer_BPStatsComponent_K2Node_ComponentBoundEvent_8_OnIsInBossFightChanged__DelegateSignature();
    void Endtaunt(uint8 _ID, class UOrderComponent* _OrderComponent);
    void BndEvt__BP_FightingPlayer_CameraComponentThird1_K2Node_ComponentBoundEvent_12_OnCameraAnimDrivenStateChanged__DelegateSignature(ECameraTransitionState _eNewState);
    void OnXRayPPWeightChanged(bool bEnabled);
    void UpdateXRayMPCValue();
    void BndEvt__BP_FightingPlayer_PlayerFighting_K2Node_ComponentBoundEvent_13_OnMeshChanged__DelegateSignature(ECharacterGender _eNewGender, bool _bMustHandlePropSpawn);
    void BPE_SetGender(ECharacterGender _eGender);
    void BndEvt__BP_FightingPlayer_PlayerFighting_K2Node_ComponentBoundEvent_0_OnPropAttached__DelegateSignature(class AActor* _spawnedProp);
    void ExecuteUbergraph_BP_FightingPlayer(int32 EntryPoint);
    void BP_FP_Released__DelegateSignature(class ABP_FightingPlayer_C* ReleasingPlayer);
    void BP_FP_Pressed__DelegateSignature(class ABP_FightingPlayer_C* PressingPlayer);
    void EventHit__DelegateSignature();
};

#endif
