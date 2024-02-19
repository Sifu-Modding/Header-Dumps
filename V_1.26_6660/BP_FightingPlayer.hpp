#ifndef UE4SS_SDK_BP_FightingPlayer_HPP
#define UE4SS_SDK_BP_FightingPlayer_HPP

class ABP_FightingPlayer_C : public ABP_TPSCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1E18 (size: 0x8)
    class USphereComponent* CameraCollisionSphere;                                    // 0x1E20 (size: 0x8)
    class UBP_PlayerScoringComponent_C* ScoringComponent;                             // 0x1E28 (size: 0x8)
    class UOptionListenerComponent* OptionListener;                                   // 0x1E30 (size: 0x8)
    class UBPStatsComponent_MainChar_C* BPStatsComponent;                             // 0x1E38 (size: 0x8)
    class UNiagaraComponent* RainDrops;                                               // 0x1E40 (size: 0x8)
    class USCDialogComponent* MCDialogComponent;                                      // 0x1E48 (size: 0x8)
    class UPostProcessComponent* PostProcessComponent;                                // 0x1E50 (size: 0x8)
    class UASMPlayerComponent* ASMPlayer;                                             // 0x1E58 (size: 0x8)
    class UInteractionDetectionComponent* InteractionDetection;                       // 0x1E60 (size: 0x8)
    class UCameraComponentThird* CameraComponentThird1;                               // 0x1E68 (size: 0x8)
    class UPlayerFightingComponent* PlayerFighting;                                   // 0x1E70 (size: 0x8)
    float XRayTimeline_2_AlphaValue_B99E789F4B750E1312AB4DB6E056F422;                 // 0x1E78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> XRayTimeline_2__Direction_B99E789F4B750E1312AB4DB6E056F422; // 0x1E7C (size: 0x1)
    class UTimelineComponent* XRayTimeline_2;                                         // 0x1E80 (size: 0x8)
    float XRayTimeline_AlphaValue_C27522E24AFDF504DF184D94796D8722;                   // 0x1E88 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> XRayTimeline__Direction_C27522E24AFDF504DF184D94796D8722; // 0x1E8C (size: 0x1)
    class UTimelineComponent* XRayTimeline;                                           // 0x1E90 (size: 0x8)
    float Timeline_0_NewTrack_0_28FEE0E141BC71288C77969330A5A359;                     // 0x1E98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_28FEE0E141BC71288C77969330A5A359; // 0x1E9C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x1EA0 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> TransitionReal_ExposureTimeline__Direction_EC9658C94CFB8EC3D7E940A54DEE458A; // 0x1EA8 (size: 0x1)
    class UTimelineComponent* TransitionReal_ExposureTimeline;                        // 0x1EB0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hitted_Light;                              // 0x1EB8 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hitted_Medium;                             // 0x1EC0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hitted_Strong;                             // 0x1EC8 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hit_Light;                                 // 0x1ED0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hit_Medium;                                // 0x1ED8 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Hit_Strong;                                // 0x1EE0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Absorb;                                    // 0x1EE8 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Guardbreak;                                // 0x1EF0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Guard;                                     // 0x1EF8 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> ParrySuccess;                              // 0x1F00 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Parried;                                   // 0x1F08 (size: 0x8)
    bool activate_material_alpha;                                                     // 0x1F10 (size: 0x1)
    class UMaterialInstanceDynamic* skinMaterialInstance;                             // 0x1F18 (size: 0x8)
    float minDistToOcclude;                                                           // 0x1F20 (size: 0x4)
    bool stopHealthBarBelowUpdate;                                                    // 0x1F24 (size: 0x1)
    FBP_FightingPlayer_CEventHit EventHit;                                            // 0x1F28 (size: 0x10)
    void EventHit();
    float HasHit;                                                                     // 0x1F38 (size: 0x4)
    float WasHitted;                                                                  // 0x1F3C (size: 0x4)
    float Score;                                                                      // 0x1F40 (size: 0x4)
    FBP_FightingPlayer_CBP_FP_Pressed BP_FP_Pressed;                                  // 0x1F48 (size: 0x10)
    void BP_FP_Pressed(class ABP_FightingPlayer_C* PressingPlayer);
    FBP_FightingPlayer_CBP_FP_Released BP_FP_Released;                                // 0x1F58 (size: 0x10)
    void BP_FP_Released(class ABP_FightingPlayer_C* ReleasingPlayer);
    float Hit_ShakeScreen_Coef;                                                       // 0x1F68 (size: 0x4)
    FName CurrentAttack;                                                              // 0x1F6C (size: 0x8)
    bool IsTeleporting;                                                               // 0x1F74 (size: 0x1)
    TArray<FVector> PendingTeleportLocation;                                          // 0x1F78 (size: 0x10)
    TArray<FRotator> PendingTeleportRotation;                                         // 0x1F88 (size: 0x10)
    bool DeadWithDelay;                                                               // 0x1F98 (size: 0x1)
    uint8 PendingTeleportIndex;                                                       // 0x1F99 (size: 0x1)
    FRotator TargetRotation;                                                          // 0x1F9C (size: 0xC)
    FRotator CharacterRotation;                                                       // 0x1FA8 (size: 0xC)
    float Target/CharacterRotationDifference;                                         // 0x1FB4 (size: 0x4)
    float RotationRateMultiplier;                                                     // 0x1FB8 (size: 0x4)
    bool TakedownModeInput;                                                           // 0x1FBC (size: 0x1)
    bool TakedownMode;                                                                // 0x1FBD (size: 0x1)
    class AActor* KillerActor;                                                        // 0x1FC0 (size: 0x8)
    float BasePendantLightIntensity;                                                  // 0x1FC8 (size: 0x4)
    float PendantLightShineFactor;                                                    // 0x1FCC (size: 0x4)
    TArray<int32> AgeSwitchVoice;                                                     // 0x1FD0 (size: 0x10)
    class UMaterialInstanceDynamic* FocusModeMID;                                     // 0x1FE0 (size: 0x8)
    int32 ID_FocusModeMID;                                                            // 0x1FE8 (size: 0x4)
    class AActor* FocusCurrentActorSelected;                                          // 0x1FF0 (size: 0x8)
    class ABP_FocusVitalPointsFX_C* VitalPointsFX_PO;                                 // 0x1FF8 (size: 0x8)
    class AVitalPointActor* VitalPointSelected;                                       // 0x2000 (size: 0x8)
    FTimerHandle FocusFadeOutTimerHandle;                                             // 0x2008 (size: 0x8)
    float HealthBonusByCharge;                                                        // 0x2010 (size: 0x4)
    float HealthBonusByKill;                                                          // 0x2014 (size: 0x4)
    bool CanUpdateVisualAging;                                                        // 0x2018 (size: 0x1)
    bool ForceHideHealth;                                                             // 0x2019 (size: 0x1)
    float MotionBlur_InitAmount;                                                      // 0x201C (size: 0x4)
    int32 MotionBlur_InitTgtFPS;                                                      // 0x2020 (size: 0x4)
    class UMaterialInstanceDynamic* PPDizzyMID;                                       // 0x2028 (size: 0x8)
    int32 IDDizzyMID;                                                                 // 0x2030 (size: 0x4)
    float DizzyReductionEffectDuration;                                               // 0x2034 (size: 0x4)
    float LastDizzyReduction;                                                         // 0x2038 (size: 0x4)
    int32 RealTransitionPP_ID;                                                        // 0x203C (size: 0x4)
    bool bWasUsingCustomExposure;                                                     // 0x2040 (size: 0x1)
    class UAkAudioEvent* RealTransition_AkEvent;                                      // 0x2048 (size: 0x8)
    float ExposureMutliplier;                                                         // 0x2050 (size: 0x4)
    FTimerHandle FadeIn_TimerHandle;                                                  // 0x2058 (size: 0x8)
    class UAkComponent* Real Transition AkComponent;                                  // 0x2060 (size: 0x8)
    float HealthBonusByTakedown;                                                      // 0x2068 (size: 0x4)
    uint8 onGoingOrderAttackID;                                                       // 0x206C (size: 0x1)
    TArray<class AActor*> hittedAIs;                                                  // 0x2070 (size: 0x10)
    class ACharacter* Pending XRayTarget;                                             // 0x2080 (size: 0x8)
    class AFightingCharacter* BindedLockMoveTarget;                                   // 0x2088 (size: 0x8)
    class ACharacter* CurrentXRayTarget;                                              // 0x2090 (size: 0x8)
    bool FadeOutSwap;                                                                 // 0x2098 (size: 0x1)
    bool FadeOut Target Lost;                                                         // 0x2099 (size: 0x1)
    float StructureBonusOnAvoid;                                                      // 0x209C (size: 0x4)
    float CharegGainCurve_DistanceMultiplier;                                         // 0x20A0 (size: 0x4)
    FCameraLookAtServiceBehavior FocusLookAt;                                         // 0x20A8 (size: 0xE0)
    int32 FocusLookatHandle;                                                          // 0x2188 (size: 0x4)
    int32 DeathPP_ID;                                                                 // 0x218C (size: 0x4)
    class UMaterial* DeathPP_Material;                                                // 0x2190 (size: 0x8)
    int32 AvailabilityLayerID;                                                        // 0x2198 (size: 0x4)
    bool b_InputsAreDisabled;                                                         // 0x219C (size: 0x1)
    TArray<TSoftObjectPtr<UMaterialInterface>> LevelSelectMaterials_Temp;             // 0x21A0 (size: 0x10)
    class UCameraModifier* HighlightCameraModifier;                                   // 0x21B0 (size: 0x8)
    FTimerHandle TauntDelay;                                                          // 0x21B8 (size: 0x8)
    ECameraTransitionState CameraAnimDrivenState;                                     // 0x21C0 (size: 0x1)
    FTimerHandle XRayAlertedTimer;                                                    // 0x21C8 (size: 0x8)
    FName Row Name;                                                                   // 0x21D0 (size: 0x8)
    TMap<class FString, class FLinearColor> XRay_Color;                               // 0x21D8 (size: 0x50)
    class AActor* AttachedProp;                                                       // 0x2228 (size: 0x8)
    bool bSnowOnCharacter;                                                            // 0x2230 (size: 0x1)
    bool bRainOnCharacter;                                                            // 0x2231 (size: 0x1)
    bool bAshesOnCharacter;                                                           // 0x2232 (size: 0x1)
    class UMaterialInterface* DesaturationMaterial;                                   // 0x2238 (size: 0x8)
    TArray<class AActor*> AttachedProps;                                              // 0x2240 (size: 0x10)
    bool IsYangInArena;                                                               // 0x2250 (size: 0x1)
    FHitBox LifeLineHitBox;                                                           // 0x2258 (size: 0x298)
    FHitResult Hit Result;                                                            // 0x24F0 (size: 0x8C)

    bool CanUseAdvancedVibration();
    void GetVitalPointFXPO(class ABP_FocusVitalPointsFX_C*& BP_VitalPoint_FX);
    void GetKillerActor(class AActor*& Actor);
    void OnRep_AttachedProps();
    void ResetFirewalkTimer(bool ActivateTimer, bool ForceStop);
    void OnDamageChangeAge(const bool& DamageChangeAge);
    bool EvaluateGameOverStatus();
    void UpdateAge(int32 iForceIncr, int32& iUpdatedAge);
    void OnRep_bRainOnCharacter();
    void OnRep_bAshesOnCharacter();
    void OnRep_bSnowOnCharacter();
    void PropReady();
    void OnRep_AttachedProp();
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
    void CharacterDied(bool PlaySounds);
    void BlueprintEventParried(FVector _vImpactPosition, class AFightingCharacter* _ParryInstigator);
    void ReceiveBeginPlay();
    void BPE_SetCharacterHidden(bool _bHidden);
    void GuardbrokenFeedbacks();
    void GuardingFeedbacks();
    void BPE_Avoided(EAvoidType _eAvoid, const class UAvoidPropertyDB* _AvoidPropertyDB);
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);
    void Hitted(const FHitDescription& _hit);
    void StopRumble();
    void GrabSuccess(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnGrabStart(bool FromParry);
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    void On Stat Changed(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void OnMatchStarted();
    void CE_Parry(bool LowStructure);
    void BPE_EndBeingRevived(bool _bSuccess);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_1_OnFocusMechanicStart__DelegateSignature();
    void BndEvt__Attack_K2Node_ComponentBoundEvent_2_OnFocusMechanicStop__DelegateSignature(bool _bCancel);
    void StartTakeDown(uint8 _ID, class UOrderComponent* _OrderComponent);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_3_OnFocusMechanicUpdate__DelegateSignature(float _fDeltaTime, float _fRealTimeDeltaTime);
    void TPSChar_RevivedSuccess_Event_0();
    void OnTeleportExit();
    void EventDisableFocusPP();
    void StatHasChanged(ECharacterStat Selection, int32 CurrentValue, int32 PrevValue);
    void InitAge();
    void CE_PendantUpdate(uint8 PendantUpdate, class AActor* ActorGivingCharge);
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_OnFocusMechanicNewPointSelected__DelegateSignature(class AVitalPointActor* _previousVitalPointSelected, class AVitalPointActor* _vitalPointSelected);
    void TakedownOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_9_OnAttackChargedCapStart__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDuration);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_10_OnAttackChargedCapUpdate__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, float _fDt, float _fCurrentRatioInChargingPhase);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_11_OnAttackChargedCapEnd__DelegateSignature(uint8 _attackOrderID, uint8 _uiLevel, EChargeCapEndReason _eEndReason);
    void Event_SetRainOnCharacter(bool Activate);
    void EnableCharacterHighlight();
    void DisableCharacterHighlight();
    void SetCanUpdateVisualAging(bool canUpdate);
    void Server Teleport(const TArray<FVector>& Location, const TArray<FRotator>& Rotation, uint8 Index);
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
    void OnTeleportEnter(const TArray<FVector>& Location, const TArray<FRotator>& Rotation);
    void BindAchievementsOrders();
    void DisablePostProcess();
    void EnablePostProcess();
    void Play Advanced Rumble(FHitDescription Hit, bool bIsHit, bool IsAvoid, EAvoidType AvoidType);
    void OnParrySucces(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAlterLevelChanged(EAlertLevel EAlertLevel);
    void BPE_OnDeath();
    void CE_DeathCounterUpdated(class AActor* ActorGivingCharge, int32 Count);
    void m_OnDeathCounterDecrement_Event_0(int32 _iCount, class AActor* _actor, bool _bAllowDecrement);
    void BPE_Hit(const FHitDescription& _hit);
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
    void CEvent Hitted();
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
    void BndEvt__BP_FightingPlayer_m_HealthComponent_K2Node_ComponentBoundEvent_5_OnDamageDelegate__DelegateSignature(float _fAmount, class UHealthComponent* _healthComponent, bool _bApplied);
    void StartEndArenaEvent(float TimeDilationScale, float DesaturationDuration);
    void StartDesaturation(float Desaturation Duration);
    void OnCharacterReviveEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void EndTakedown(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_FightingPlayer(int32 EntryPoint);
    void BP_FP_Released__DelegateSignature(class ABP_FightingPlayer_C* ReleasingPlayer);
    void BP_FP_Pressed__DelegateSignature(class ABP_FightingPlayer_C* PressingPlayer);
    void EventHit__DelegateSignature();
}; // Size: 0x257C

#endif
