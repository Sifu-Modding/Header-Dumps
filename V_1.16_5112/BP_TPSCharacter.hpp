#ifndef UE4SS_SDK_BP_TPSCharacter_HPP
#define UE4SS_SDK_BP_TPSCharacter_HPP

class ABP_TPSCharacter_C : public AFightingCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequenceAnimReplicationComponent* LevelSequenceAnimReplication;
    class UParticleSystemComponent* Fx_DiszzyState;
    class UAkComponent* Ak;
    class UPredictionComponent* Prediction;
    class UBPAttackComponent_C* Attack;
    class UHitComponent* Hit;
    float Timeline_Light_NewTrack_0_C675BB2543B43D8D0A43248F878EC08E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Light__Direction_C675BB2543B43D8D0A43248F878EC08E;
    class UTimelineComponent* Timeline_Light;
    float Parry_RightArm_Alpha_92B20BC542C9B1A65E144E90A552562B;
    TEnumAsByte<ETimelineDirection::Type> Parry_RightArm__Direction_92B20BC542C9B1A65E144E90A552562B;
    class UTimelineComponent* Parry_RightArm;
    float Parry_LeftArm_Alpha_62FF55844B8D250702A82CB178D5C428;
    TEnumAsByte<ETimelineDirection::Type> Parry_LeftArm__Direction_62FF55844B8D250702A82CB178D5C428;
    class UTimelineComponent* Parry_LeftArm;
    float Parry_RightLeg_Alpha_A850D2C34FB455862E6445BA7288656E;
    TEnumAsByte<ETimelineDirection::Type> Parry_RightLeg__Direction_A850D2C34FB455862E6445BA7288656E;
    class UTimelineComponent* Parry_RightLeg;
    float Parry_LeftLeg_Alpha_F88C665148748DE78D3EEB8B98176FB3;
    TEnumAsByte<ETimelineDirection::Type> Parry_LeftLeg__Direction_F88C665148748DE78D3EEB8B98176FB3;
    class UTimelineComponent* Parry_LeftLeg;
    float Interrupt_LeftArm_Alpha_BC6648294E8618FCC977059874749923;
    TEnumAsByte<ETimelineDirection::Type> Interrupt_LeftArm__Direction_BC6648294E8618FCC977059874749923;
    class UTimelineComponent* Interrupt_LeftArm;
    float Interrupt_RightArm_Alpha_CA38A5FB4709D80FF95012B47B6E3A71;
    TEnumAsByte<ETimelineDirection::Type> Interrupt_RightArm__Direction_CA38A5FB4709D80FF95012B47B6E3A71;
    class UTimelineComponent* Interrupt_RightArm;
    float Interrupt_RightLeg_Alpha_E05104EB43437DCAB6FF8DAAC6A2F692;
    TEnumAsByte<ETimelineDirection::Type> Interrupt_RightLeg__Direction_E05104EB43437DCAB6FF8DAAC6A2F692;
    class UTimelineComponent* Interrupt_RightLeg;
    float Interrupt_LeftLeg_Alpha_5BF0D0354403BA06334B2D8B2251788E;
    TEnumAsByte<ETimelineDirection::Type> Interrupt_LeftLeg__Direction_5BF0D0354403BA06334B2D8B2251788E;
    class UTimelineComponent* Interrupt_LeftLeg;
    float Timeline_ShadowAvoided_Alpha_02BF697346A8B396585E3B9D15393054;
    TEnumAsByte<ETimelineDirection::Type> Timeline_ShadowAvoided__Direction_02BF697346A8B396585E3B9D15393054;
    class UTimelineComponent* Timeline_ShadowAvoided;
    float Timeline_AbsorbLight_End_Dissolve_C95A74094946B500A3D85F9EA4A7498F;
    float Timeline_AbsorbLight_End_Alpha_C95A74094946B500A3D85F9EA4A7498F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_AbsorbLight_End__Direction_C95A74094946B500A3D85F9EA4A7498F;
    class UTimelineComponent* Timeline_AbsorbLight_End;
    float GuardBreak_RightArm_Alpha_6C6053554B5690EC7EEA569DC05D1C95;
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_RightArm__Direction_6C6053554B5690EC7EEA569DC05D1C95;
    class UTimelineComponent* GuardBreak_RightArm;
    float GuardBreak_LeftArm_Alpha_257AAF54478843A761B47F897F786E67;
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_LeftArm__Direction_257AAF54478843A761B47F897F786E67;
    class UTimelineComponent* GuardBreak_LeftArm;
    float GuardBreak_RightLeg_Alpha_397765A44981B683023FEC8599824104;
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_RightLeg__Direction_397765A44981B683023FEC8599824104;
    class UTimelineComponent* GuardBreak_RightLeg;
    float GuardBreak_LeftLeg_Alpha_A9A5DCEA45B915F1B5E3DFAA2D277379;
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_LeftLeg__Direction_A9A5DCEA45B915F1B5E3DFAA2D277379;
    class UTimelineComponent* GuardBreak_LeftLeg;
    float Timeline_Parried_GlobalOpacity_9D7A75994ACE3E87517DA89516D96FA4;
    float Timeline_Parried_NewTrack_0_9D7A75994ACE3E87517DA89516D96FA4;
    float Timeline_Parried_WaveScale_9D7A75994ACE3E87517DA89516D96FA4;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Parried__Direction_9D7A75994ACE3E87517DA89516D96FA4;
    class UTimelineComponent* Timeline_Parried;
    float Timeline_Absorb_Dissolve_97E790414C8F30B0177ACFAE616E1ADD;
    float Timeline_Absorb_Alpha_97E790414C8F30B0177ACFAE616E1ADD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Absorb__Direction_97E790414C8F30B0177ACFAE616E1ADD;
    class UTimelineComponent* Timeline_Absorb;
    float Timeline_Avoid_Alpha_7A57E72B4AFC72CAE67D8BBCD5C59490;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Avoid__Direction_7A57E72B4AFC72CAE67D8BBCD5C59490;
    class UTimelineComponent* Timeline_Avoid;
    float PL_RightLeg_Alpha_DDF780584FA215E535E72AB855D7D260;
    TEnumAsByte<ETimelineDirection::Type> PL_RightLeg__Direction_DDF780584FA215E535E72AB855D7D260;
    class UTimelineComponent* PL_RightLeg;
    float PL_LeftLeg_Alpha_4E08FC2844E8F4E0BFB5D3BD41E72E29;
    TEnumAsByte<ETimelineDirection::Type> PL_LeftLeg__Direction_4E08FC2844E8F4E0BFB5D3BD41E72E29;
    class UTimelineComponent* PL_LeftLeg;
    float PL_RightArm_Alpha_BC86B30B42F1A423C8A5448C91674400;
    TEnumAsByte<ETimelineDirection::Type> PL_RightArm__Direction_BC86B30B42F1A423C8A5448C91674400;
    class UTimelineComponent* PL_RightArm;
    float PL_LeftArm_Alpha_E63FBEF547EE841E3294F09303B39F33;
    TEnumAsByte<ETimelineDirection::Type> PL_LeftArm__Direction_E63FBEF547EE841E3294F09303B39F33;
    class UTimelineComponent* PL_LeftArm;
    FVector ImpactCapsulePosition;
    FVector ImpactDir;
    float HitStunTime;
    bool StructureJustBroken;
    float AttackDamage;
    float TargetDist;
    FBP_TPSCharacter_CTPSChar_Died TPSChar_Died;
    void TPSChar_Died(class ABP_TPSCharacter_C* Dead TPSCharacter, class AActor* HitInstigator);
    FBP_TPSCharacter_CTPSChar_GuardBroken TPSChar_GuardBroken;
    void TPSChar_GuardBroken();
    bool IsGuarding;
    FBP_TPSCharacter_CTPSChar_Dodge TPSChar_Dodge;
    void TPSChar_Dodge();
    FBP_TPSCharacter_CTPSChar_DoParry TPSChar_DoParry;
    void TPSChar_DoParry(EQuadrantTypes ParryQuadrantRegardingTarget, EQuadrantTypes ParryQuadrant);
    FBP_TPSCharacter_CTPSChar_DoDodge TPSChar_DoDodge;
    void TPSChar_DoDodge(FVector DodgeDirection, EQuadrantTypes StartQuadrant, EQuadrantTypes EndQuadrant);
    EHeight HittedHeight;
    TArray<FName> ValidImpactBoneNameHigh;
    TArray<FName> ValidImpactBoneNameMid;
    TArray<FName> ValidImpactBoneNameLow_L;
    TArray<FName> ValidImpactBoneNameLow_R;
    FVector WidgetOffset;
    class ABP_AvoidGhost_01_C* AvoidGhost;
    FVector2D LocalParriedScreenLocation;
    uint8 AttackStrikeNumber;
    class AActor* HitInstigator;
    FBP_TPSCharacter_CTPSChar_DoAbsorb TPSChar_DoAbsorb;
    void TPSChar_DoAbsorb();
    FBP_TPSCharacter_CTPSChar_DoAvoid TPSChar_DoAvoid;
    void TPSChar_DoAvoid(EAvoidType AvoidType);
    float PercentRevive;
    bool IsAbsorbBroken;
    bool AttackInPL;
    bool IsAttackLethal;
    float AttackSpecialDamageRatio;
    EAttackMovementType AttackMovement;
    EAttackOrigin AttackOrigin;
    EAttackPowers AttackPower;
    bool ShouldDisplayHeadWidget_Lock;
    bool ShouldDisplayHeadWidget_Damage;
    FTimerHandle Timer_HeadWidget;
    float HeadWidgetRemainTimer;
    bool ShouldDisplayHeadWidget_Coop;
    bool ShouldDisplayHeadWidget_Attacking;
    class UBP_HUD_Bars_Coop_C* AttachedHUDCoop;
    FLinearColor Sil_CharColor;
    FLinearColor OW_CharColor;
    FBP_TPSCharacter_CTPSChar_RevivedSuccess TPSChar_RevivedSuccess;
    void TPSChar_RevivedSuccess();
    FBP_TPSCharacter_CTPSChar_Hitted TPSChar_Hitted;
    void TPSChar_Hitted(class AController* ControllerInstigator, bool IsGuarding);
    bool IsAbsorbAbility;
    uint8 E Power Color;
    FLinearColor Exh_Chara;
    FLinearColor Shield_CharColor;
    bool ShouldDisplayHeadWidget_PvP;
    TArray<EFXMaterials> CurrentMaterialsStack;
    EFXMaterials CurrentMaterial;
    EWeaponSlot WeaponSlot;
    TEnumAsByte<EPhysicalSurface> Surface Type For Whoosh;
    class UPointLightComponent* PointLight;
    EImpactType ImpactType;
    bool ResilientHit;
    FBP_TPSCharacter_CTPSChar_DrawToRT TPSChar_DrawToRT;
    void TPSChar_DrawToRT(class UMaterialInterface* Brush Material, FVector Location, float Size, FRotator Rotation);
    bool IsCritical;
    FHitBox LastHitHitBox;
    FTransform T_HitFX;
    FName N_HitFXName;
    TEnumAsByte<HitContexts> HitContext;
    EGuardType GuardType;
    class AActor* InstigatorItem;
    bool ShouldDisplayHeadWidget_Force;
    FBP_TPSCharacter_CTPSChar_AnySuccessParry TPSChar_AnySuccessParry;
    void TPSChar_AnySuccessParry();
    FBP_TPSCharacter_CTPSChar_SuccessGuard TPSChar_SuccessGuard;
    void TPSChar_SuccessGuard();
    bool ShouldDisplayHeadWidget_Dizzy;
    bool ShouldDisplayHeadWidget_StructureBroken;
    bool ShouldDisplayKnockedDown;
    bool IsTakendown;
    UClass* Poolable Decal;
    bool Gore Activated;
    TArray<class UAnimSequence*> HitAnimsHistory;
    bool InAvoidSlowMo;
    bool DisplayHealth;
    class UMaterialInterface* Material Proxy Rain;
    int32 Proxy Rain Index;
    TMap<uint8, FParticleCompArrayStruct> SpawnedParticleCompByOrderIdMap;
    bool HitByItem;
    FBP_TPSCharacter_CED_AvoidSlowmo ED_AvoidSlowmo;
    void ED_AvoidSlowmo(bool InAvoidSlomo);
    TArray<FPoseSnapshot> AvoidPoses;
    TArray<FTransform> AvoidPosesTransforms;
    float AvoidGhostAppearInterval;
    FTimerHandle AvoidGhostsTimer;
    int32 AvoidGhostsCurrentID;
    TArray<TScriptInterface<IHudCarrierListener_C>> Hud Carrier Listener;
    FPoseSnapshot SnapShotForAvoid;
    bool EnterSuperDizzy;
    class USurfacesData_C* SurfacesData;
    int32 SK_Stencil Base Value;
    TArray<class ABP_DecalPoolable_C*> Blood Decal Array;
    bool HitDuringDialog;
    int32 InAvoidSlowMoID;

    void GetFightingCharacter(class AFightingCharacter*& Character);
    void GetSoundSurfaceDataAsset(class USurfacesData_C*& SoundSurfaceDataAsset);
    void IsPlayer(bool& IsPlayer);
    void GetHitAnimHistory(TArray<class UAnimSequence*>& HitAnimHistory);
    void CanCancelAttackOrderServiceCondition(bool& CanCancel);
    void Get Carried Hud Offset(FVector& Widget Offset);
    void ShouldDisplayStamina(bool& DisplayStamina);
    void WidgetLocation(FVector& HUDLocation);
    void ShouldDisplayHealth(bool& DisplayHealth);
    void InitStencilValues();
    void CheckTakedownAnimForAchievement(class UAnimSequence* Animation);
    void OnSuperDizzyFeedback();
    void StopBarDisplayAndClearTimer();
    void SetHittedWWiseSwitches();
    void On Display Health Changed();
    void ClearAvoidGhostData();
    void SpawnNewAvoidGhost(bool& bSuccess);
    void AvoidSuccess(FHitDefenseResult HitDefense);
    void ClearSpawnedParticle();
    void On Particle Order Ending(uint8 _ID, class UOrderComponent* _OrderComponent);
    void RegisterParticleCompByOrderId(uint8 InOrderId, class UParticleSystemComponent* InParticleComp);
    void ParryInstigatorOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void FallFromPushedOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void TakendownOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void GrabOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void TakedownOrderStarted(uint8 ID, class UOrderComponent* NewParam);
    void Get Tangeant From ();
    void InitValues();
    void PlayStructureBrokenSFX();
    void PlaySFXAtLocation(FVector Location, TMap<class UAkAudioEvent*, class AActor*> SFXMapActor);
    void PlayVFXAtLocation(TArray<class UParticleSystem*>& Array, FVector Location, FRotator Rotation, FHitDescription Hit Description);
    void GetImpactSFXToPlay(EImpactType InImpactType, TEnumAsByte<HitContexts> InHitContext, EGuardType InGuardType, FHitDescription& InHit, bool InLowStructure, TMap<class UAkAudioEvent*, class AActor*>& SFXMapActor);
    void GetImpactVFXToPlay(EAttackPowers AttackPower, EGuardType GuardType, EImpactType ImpactType, TEnumAsByte<HitContexts> HitContext, FHitDescription In Hit, TArray<class UParticleSystem*>& ParticleSystems);
    void GetRotatorFacingCamera(FRotator& RotationFacingCamera);
    void ParryFeedbacks(class AActor* Instigator, bool ResilientHit);
    void DeflectFeedbacks(FRotator VFX_Orientation, FVector VFX_Location);
    void SetHittedVariables(const FImpactResult& ImpactResult, const FHitRequest& HitRequest, FHitResult HitResult);
    void GetArchetypeFirstName(FText& Name);
    void CreateDynamicMaterialsFromType(EFXMaterials MaterialType, bool FromLoading);
    void GetImpactOffsetFromBone(FVector& ImpactOffsetFromBone);
    void GetBoneNameForImpactVFX(FName& BoneName);
    void SetVoiceFromCharacterSize();
    void SFXSwitch_Absorb(bool Super);
    void DebugMaterialsStack(bool ServerOnly);
    void ClearMaterialsStack();
    void PopMaterial(EFXMaterials Material);
    void SetMaterial(EFXMaterials NewMaterial);
    void UpdateDisplayWidget(bool ForceHide);
    void Set Limb Selection(FName Parameter Name, TEnumAsByte<ENUM_SelectedLimb> Selected Limb, float Effect Intensity);
    void HideHealth();
    void SpawnFootstepDecal(class UMaterialInterface* DecalMaterial, FVector Size, FVector Location, float Radius, float Duration, FRotator Rotation);
    void SetHittedHeightSFXSwitch();
    void SetGuardingWeaponSFXSwitch(class AFightingCharacter* FightingCharacter);
    void SetHittedMatSFXSwitch();
    void SetAttackingWeaponMatSFXSwitch();
    void SetAttackForceSFXSwitch();
    void GetDamageTypeFromSpecialRatio(float SpecialRatio, bool& IsCut);
    void GuardingFeedbacks();
    void AbsorbBrokenFeedbacks(bool IsAbsorbAbility);
    void GuardbrokenFeedbacks();
    void IsMaterialInstanceFromEquipmentSlot(class UMaterialInstanceDynamic* dynamicMaterial, EEquipmentSlot equipmentSlot, bool& IsMaterialInstanceFromSlot);
    void DrawDebugRange(class AActor* Target);
    void DrawDebugQuadrants(FVector Front, FVector Left, FVector Back, FVector Right, class USkeletalMeshComponent* SkeletalMesh, float DrawDuration);
    void HittedEffect(FHitDescription Hit);
    void CreateDynamicMaterials();
    void CharacterDied(bool PlaySounds);
    void VectorChangeZ(FVector InVec, float Z, FVector& Vec);
    void SpawnAvoidGhost(FTransform SpawnTransform);
    void GuardBreak_LeftLeg__FinishedFunc();
    void GuardBreak_LeftLeg__UpdateFunc();
    void PL_LeftArm__FinishedFunc();
    void PL_LeftArm__UpdateFunc();
    void PL_RightArm__FinishedFunc();
    void PL_RightArm__UpdateFunc();
    void PL_LeftLeg__FinishedFunc();
    void PL_LeftLeg__UpdateFunc();
    void PL_RightLeg__FinishedFunc();
    void PL_RightLeg__UpdateFunc();
    void Timeline_Parried__FinishedFunc();
    void Timeline_Parried__UpdateFunc();
    void Interrupt_LeftLeg__FinishedFunc();
    void Interrupt_LeftLeg__UpdateFunc();
    void Parry_LeftLeg__FinishedFunc();
    void Parry_LeftLeg__UpdateFunc();
    void Timeline_Avoid__FinishedFunc();
    void Timeline_Avoid__UpdateFunc();
    void GuardBreak_RightLeg__FinishedFunc();
    void GuardBreak_RightLeg__UpdateFunc();
    void GuardBreak_LeftArm__FinishedFunc();
    void GuardBreak_LeftArm__UpdateFunc();
    void GuardBreak_RightArm__FinishedFunc();
    void GuardBreak_RightArm__UpdateFunc();
    void Interrupt_RightLeg__FinishedFunc();
    void Interrupt_RightLeg__UpdateFunc();
    void Interrupt_LeftArm__FinishedFunc();
    void Interrupt_LeftArm__UpdateFunc();
    void Interrupt_RightArm__FinishedFunc();
    void Interrupt_RightArm__UpdateFunc();
    void Parry_RightLeg__FinishedFunc();
    void Parry_RightLeg__UpdateFunc();
    void Parry_LeftArm__FinishedFunc();
    void Parry_LeftArm__UpdateFunc();
    void Parry_RightArm__FinishedFunc();
    void Parry_RightArm__UpdateFunc();
    void Timeline_Absorb__FinishedFunc();
    void Timeline_Absorb__UpdateFunc();
    void Timeline_AbsorbLight_End__FinishedFunc();
    void Timeline_AbsorbLight_End__UpdateFunc();
    void Timeline_Light__FinishedFunc();
    void Timeline_Light__UpdateFunc();
    void Timeline_ShadowAvoided__FinishedFunc();
    void Timeline_ShadowAvoided__UpdateFunc();
    void BPE_Absorb(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    void BPE_DoParry(EQuadrantTypes _eParryQuadrantRegardingTarget, EQuadrantTypes _eParryQuadrant);
    void BPE_DoDodge(FVector _vDodgeDirection);
    void CEvent Hitted();
    void PlayAbsorb(bool Light);
    void StartGuardBreak_VFX(EWeaponSlot Weapon);
    void StartPL_LeftArm();
    void StartPL_RightArm();
    void StartPL_LeftLeg();
    void StartPL_RightLeg();
    void BPE_Spawn(bool m_bRespawn);
    void StartInterrupt_VFX(EWeaponSlot Weapon);
    void StartParry_VFX(EWeaponSlot Weapon);
    void BPE_OnAvoidCapsuleHit(const FHitResult& _hitResult, const FHitRequest& _hitRequest, const FHitDefenseResult& _defenseResult);
    void BPE_OnAvoidSuccessful(const FHitRequest& _inDamageData, const FHitDefenseResult& _defenseResult);
    void BlueprintEventParried(FVector _vImpactPosition, class AFightingCharacter* _ParryInstigator);
    void BPE_Avoided(EAvoidType _eAvoid, const class UAvoidPropertyDB* _AvoidPropertyDB);
    void Hitted(const FHitDescription& _hit);
    void BndEvt__m_DefenseComponent_K2Node_ComponentBoundEvent_0_GuardChanged__DelegateSignature(EGuardType _eGuardType);
    void BPE_DoAvoid(EAvoidType _eAvoidType);
    void BPE_DoAbsorb();
    void BPE_ReviveInProgressPercent(float _fPercent);
    void BPE_ReviveCancelPercent(float _fPercent);
    void BPE_EndRevive(bool _bSuccess);
    void CAbsorbBroken();
    void BPF_SpawnFootStepDecal(class UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    void BPE_EndBeingRevived(bool _bSuccess);
    void BPE_ReviveStart();
    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);
    void BlackVeil(bool ShadowAvoid);
    void CLast Hitted(bool Client Replica Fast Death);
    void BPE_TargetChanged(class AActor* _old);
    void BPE_AttackStarted();
    void BPE_OnRelationshipChanged(class AActor* _shifter, class AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _eNewRelation);
    void BPE_JustBeenHitted(const FHitDescription& _HittedDescription);
    void BPE_OnDeath();
    void BPE_BeingRevivedStart();
    void StopAbsorb();
    void ClearPerfectLink(bool Stop Previous);
    void StopPL_LeftArm();
    void StopPL_RightArm();
    void StopPL_LeftLeg();
    void StopPL_RightLeg();
    void Spawn Light(FLinearColor Light Color, float Max Intensity, class USceneComponent* Attach Component, FName Attach Point);
    void BPE_MoveStatusChanged(EMoveStatus _MoveStatus);
    void BPE_DropWeaponStart(class UVisibleWeaponData* _handledWeaponData);
    void BPE_PickUpWeaponStart(class UVisibleWeaponData* _handledWeaponData);
    void OnPoolablePostInitializeComponents();
    void CE_Parry(bool LowStructure);
    void CE_Guard();
    void ReceiveBeginPlay();
    void BPE_FightingStateChanged_Event_0(EFightingState _eFightingState, bool _bPush);
    void OnParticleCollide_SpawnDecal(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat);
    void BPE_Hit(const FHitDescription& _hit);
    void OnAvoidSlowMoFinished();
    void Event_SetRainOnCharacter(bool Activate);
    void BPF_DrawDecalToRenderTarget(class UMaterialInterface* _decalMaterial, float _fSize, FVector _vLocation, float _fRadius, float _fDuration, FRotator _rotation);
    void OnPoolablePreUninitializeComponents();
    void OnParticleCompPlayed(uint8 InOrderId, class UParticleSystemComponent* InParticleComp);
    void SetHitAnimHistory(const TArray<class UAnimSequence*>& NewAnimHistory);
    void SavePoseAtID(int32 PoseID);
    void TriggerAvoidGhostDisplay();
    void DisplayAvoidGhost();
    void Register Hud Listener(const TScriptInterface<class IHudCarrierListener_C>& Listener);
    void Unregister Hud Listener(const TScriptInterface<class IHudCarrierListener_C>& Listener);
    void BndEvt__BP_TPSCharacter_m_DefenseComponent_K2Node_ComponentBoundEvent_1_AvoidWindowOpened__DelegateSignature();
    void BndEvt__BP_TPSCharacter_Hit_K2Node_ComponentBoundEvent_2_HittedDynamicDelegate__DelegateSignature(const FHitDescription& HitDescription);
    void ReceivePossessed(class AController* NewController);
    void ExecuteUbergraph_BP_TPSCharacter(int32 EntryPoint);
    void ED_AvoidSlowmo__DelegateSignature(bool InAvoidSlomo);
    void TPSChar_SuccessGuard__DelegateSignature();
    void TPSChar_AnySuccessParry__DelegateSignature();
    void TPSChar_DrawToRT__DelegateSignature(class UMaterialInterface* Brush Material, FVector Location, float Size, FRotator Rotation);
    void TPSChar_Hitted__DelegateSignature(class AController* ControllerInstigator, bool IsGuarding);
    void TPSChar_RevivedSuccess__DelegateSignature();
    void TPSChar_DoAvoid__DelegateSignature(EAvoidType AvoidType);
    void TPSChar_DoAbsorb__DelegateSignature();
    void TPSChar_DoDodge__DelegateSignature(FVector DodgeDirection, EQuadrantTypes StartQuadrant, EQuadrantTypes EndQuadrant);
    void TPSChar_DoParry__DelegateSignature(EQuadrantTypes ParryQuadrantRegardingTarget, EQuadrantTypes ParryQuadrant);
    void TPSChar_Dodge__DelegateSignature();
    void TPSChar_GuardBroken__DelegateSignature();
    void TPSChar_Died__DelegateSignature(class ABP_TPSCharacter_C* Dead TPSCharacter, class AActor* HitInstigator);
};

#endif
