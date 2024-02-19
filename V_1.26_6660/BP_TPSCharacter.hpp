#ifndef UE4SS_SDK_BP_TPSCharacter_HPP
#define UE4SS_SDK_BP_TPSCharacter_HPP

class ABP_TPSCharacter_C : public AFightingCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1610 (size: 0x8)
    class ULevelSequenceAnimReplicationComponent* LevelSequenceAnimReplication;       // 0x1618 (size: 0x8)
    class UParticleSystemComponent* Fx_DiszzyState;                                   // 0x1620 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x1628 (size: 0x8)
    class UPredictionComponent* Prediction;                                           // 0x1630 (size: 0x8)
    class UBPAttackComponent_C* Attack;                                               // 0x1638 (size: 0x8)
    class UHitComponent* Hit;                                                         // 0x1640 (size: 0x8)
    float Timeline_Light_NewTrack_0_C675BB2543B43D8D0A43248F878EC08E;                 // 0x1648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Light__Direction_C675BB2543B43D8D0A43248F878EC08E; // 0x164C (size: 0x1)
    class UTimelineComponent* Timeline_Light;                                         // 0x1650 (size: 0x8)
    float Parry_RightArm_Alpha_92B20BC542C9B1A65E144E90A552562B;                      // 0x1658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Parry_RightArm__Direction_92B20BC542C9B1A65E144E90A552562B; // 0x165C (size: 0x1)
    class UTimelineComponent* Parry_RightArm;                                         // 0x1660 (size: 0x8)
    float Parry_LeftArm_Alpha_62FF55844B8D250702A82CB178D5C428;                       // 0x1668 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Parry_LeftArm__Direction_62FF55844B8D250702A82CB178D5C428; // 0x166C (size: 0x1)
    class UTimelineComponent* Parry_LeftArm;                                          // 0x1670 (size: 0x8)
    float Parry_RightLeg_Alpha_A850D2C34FB455862E6445BA7288656E;                      // 0x1678 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Parry_RightLeg__Direction_A850D2C34FB455862E6445BA7288656E; // 0x167C (size: 0x1)
    class UTimelineComponent* Parry_RightLeg;                                         // 0x1680 (size: 0x8)
    float Parry_LeftLeg_Alpha_F88C665148748DE78D3EEB8B98176FB3;                       // 0x1688 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Parry_LeftLeg__Direction_F88C665148748DE78D3EEB8B98176FB3; // 0x168C (size: 0x1)
    class UTimelineComponent* Parry_LeftLeg;                                          // 0x1690 (size: 0x8)
    float Interrupt_LeftArm_Alpha_BC6648294E8618FCC977059874749923;                   // 0x1698 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Interrupt_LeftArm__Direction_BC6648294E8618FCC977059874749923; // 0x169C (size: 0x1)
    class UTimelineComponent* Interrupt_LeftArm;                                      // 0x16A0 (size: 0x8)
    float Interrupt_RightArm_Alpha_CA38A5FB4709D80FF95012B47B6E3A71;                  // 0x16A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Interrupt_RightArm__Direction_CA38A5FB4709D80FF95012B47B6E3A71; // 0x16AC (size: 0x1)
    class UTimelineComponent* Interrupt_RightArm;                                     // 0x16B0 (size: 0x8)
    float Interrupt_RightLeg_Alpha_E05104EB43437DCAB6FF8DAAC6A2F692;                  // 0x16B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Interrupt_RightLeg__Direction_E05104EB43437DCAB6FF8DAAC6A2F692; // 0x16BC (size: 0x1)
    class UTimelineComponent* Interrupt_RightLeg;                                     // 0x16C0 (size: 0x8)
    float Interrupt_LeftLeg_Alpha_5BF0D0354403BA06334B2D8B2251788E;                   // 0x16C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Interrupt_LeftLeg__Direction_5BF0D0354403BA06334B2D8B2251788E; // 0x16CC (size: 0x1)
    class UTimelineComponent* Interrupt_LeftLeg;                                      // 0x16D0 (size: 0x8)
    float Timeline_ShadowAvoided_Alpha_02BF697346A8B396585E3B9D15393054;              // 0x16D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_ShadowAvoided__Direction_02BF697346A8B396585E3B9D15393054; // 0x16DC (size: 0x1)
    class UTimelineComponent* Timeline_ShadowAvoided;                                 // 0x16E0 (size: 0x8)
    float Timeline_AbsorbLight_End_Dissolve_C95A74094946B500A3D85F9EA4A7498F;         // 0x16E8 (size: 0x4)
    float Timeline_AbsorbLight_End_Alpha_C95A74094946B500A3D85F9EA4A7498F;            // 0x16EC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_AbsorbLight_End__Direction_C95A74094946B500A3D85F9EA4A7498F; // 0x16F0 (size: 0x1)
    class UTimelineComponent* Timeline_AbsorbLight_End;                               // 0x16F8 (size: 0x8)
    float GuardBreak_RightArm_Alpha_6C6053554B5690EC7EEA569DC05D1C95;                 // 0x1700 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_RightArm__Direction_6C6053554B5690EC7EEA569DC05D1C95; // 0x1704 (size: 0x1)
    class UTimelineComponent* GuardBreak_RightArm;                                    // 0x1708 (size: 0x8)
    float GuardBreak_LeftArm_Alpha_257AAF54478843A761B47F897F786E67;                  // 0x1710 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_LeftArm__Direction_257AAF54478843A761B47F897F786E67; // 0x1714 (size: 0x1)
    class UTimelineComponent* GuardBreak_LeftArm;                                     // 0x1718 (size: 0x8)
    float GuardBreak_RightLeg_Alpha_397765A44981B683023FEC8599824104;                 // 0x1720 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_RightLeg__Direction_397765A44981B683023FEC8599824104; // 0x1724 (size: 0x1)
    class UTimelineComponent* GuardBreak_RightLeg;                                    // 0x1728 (size: 0x8)
    float GuardBreak_LeftLeg_Alpha_A9A5DCEA45B915F1B5E3DFAA2D277379;                  // 0x1730 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GuardBreak_LeftLeg__Direction_A9A5DCEA45B915F1B5E3DFAA2D277379; // 0x1734 (size: 0x1)
    class UTimelineComponent* GuardBreak_LeftLeg;                                     // 0x1738 (size: 0x8)
    float Timeline_Parried_GlobalOpacity_9D7A75994ACE3E87517DA89516D96FA4;            // 0x1740 (size: 0x4)
    float Timeline_Parried_NewTrack_0_9D7A75994ACE3E87517DA89516D96FA4;               // 0x1744 (size: 0x4)
    float Timeline_Parried_WaveScale_9D7A75994ACE3E87517DA89516D96FA4;                // 0x1748 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Parried__Direction_9D7A75994ACE3E87517DA89516D96FA4; // 0x174C (size: 0x1)
    class UTimelineComponent* Timeline_Parried;                                       // 0x1750 (size: 0x8)
    float Timeline_Absorb_Dissolve_97E790414C8F30B0177ACFAE616E1ADD;                  // 0x1758 (size: 0x4)
    float Timeline_Absorb_Alpha_97E790414C8F30B0177ACFAE616E1ADD;                     // 0x175C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Absorb__Direction_97E790414C8F30B0177ACFAE616E1ADD; // 0x1760 (size: 0x1)
    class UTimelineComponent* Timeline_Absorb;                                        // 0x1768 (size: 0x8)
    float Timeline_Avoid_Alpha_7A57E72B4AFC72CAE67D8BBCD5C59490;                      // 0x1770 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Avoid__Direction_7A57E72B4AFC72CAE67D8BBCD5C59490; // 0x1774 (size: 0x1)
    class UTimelineComponent* Timeline_Avoid;                                         // 0x1778 (size: 0x8)
    float PL_RightLeg_Alpha_DDF780584FA215E535E72AB855D7D260;                         // 0x1780 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PL_RightLeg__Direction_DDF780584FA215E535E72AB855D7D260; // 0x1784 (size: 0x1)
    class UTimelineComponent* PL_RightLeg;                                            // 0x1788 (size: 0x8)
    float PL_LeftLeg_Alpha_4E08FC2844E8F4E0BFB5D3BD41E72E29;                          // 0x1790 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PL_LeftLeg__Direction_4E08FC2844E8F4E0BFB5D3BD41E72E29; // 0x1794 (size: 0x1)
    class UTimelineComponent* PL_LeftLeg;                                             // 0x1798 (size: 0x8)
    float PL_RightArm_Alpha_BC86B30B42F1A423C8A5448C91674400;                         // 0x17A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PL_RightArm__Direction_BC86B30B42F1A423C8A5448C91674400; // 0x17A4 (size: 0x1)
    class UTimelineComponent* PL_RightArm;                                            // 0x17A8 (size: 0x8)
    float PL_LeftArm_Alpha_E63FBEF547EE841E3294F09303B39F33;                          // 0x17B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PL_LeftArm__Direction_E63FBEF547EE841E3294F09303B39F33; // 0x17B4 (size: 0x1)
    class UTimelineComponent* PL_LeftArm;                                             // 0x17B8 (size: 0x8)
    FVector ImpactCapsulePosition;                                                    // 0x17C0 (size: 0xC)
    FVector ImpactDir;                                                                // 0x17CC (size: 0xC)
    float HitStunTime;                                                                // 0x17D8 (size: 0x4)
    bool StructureJustBroken;                                                         // 0x17DC (size: 0x1)
    float AttackDamage;                                                               // 0x17E0 (size: 0x4)
    float TargetDist;                                                                 // 0x17E4 (size: 0x4)
    FBP_TPSCharacter_CTPSChar_Died TPSChar_Died;                                      // 0x17E8 (size: 0x10)
    void TPSChar_Died(class ABP_TPSCharacter_C* Dead TPSCharacter, class AActor* HitInstigator);
    FBP_TPSCharacter_CTPSChar_GuardBroken TPSChar_GuardBroken;                        // 0x17F8 (size: 0x10)
    void TPSChar_GuardBroken();
    bool IsGuarding;                                                                  // 0x1808 (size: 0x1)
    FBP_TPSCharacter_CTPSChar_Dodge TPSChar_Dodge;                                    // 0x1810 (size: 0x10)
    void TPSChar_Dodge();
    FBP_TPSCharacter_CTPSChar_DoParry TPSChar_DoParry;                                // 0x1820 (size: 0x10)
    void TPSChar_DoParry(EQuadrantTypes ParryQuadrantRegardingTarget, EQuadrantTypes ParryQuadrant);
    FBP_TPSCharacter_CTPSChar_DoDodge TPSChar_DoDodge;                                // 0x1830 (size: 0x10)
    void TPSChar_DoDodge(FVector DodgeDirection, EQuadrantTypes StartQuadrant, EQuadrantTypes EndQuadrant);
    EHeight HittedHeight;                                                             // 0x1840 (size: 0x1)
    TArray<FName> ValidImpactBoneNameHigh;                                            // 0x1848 (size: 0x10)
    TArray<FName> ValidImpactBoneNameMid;                                             // 0x1858 (size: 0x10)
    TArray<FName> ValidImpactBoneNameLow_L;                                           // 0x1868 (size: 0x10)
    TArray<FName> ValidImpactBoneNameLow_R;                                           // 0x1878 (size: 0x10)
    FVector WidgetOffset;                                                             // 0x1888 (size: 0xC)
    class ABP_AvoidGhost_01_C* AvoidGhost;                                            // 0x1898 (size: 0x8)
    FVector2D LocalParriedScreenLocation;                                             // 0x18A0 (size: 0x8)
    uint8 AttackStrikeNumber;                                                         // 0x18A8 (size: 0x1)
    class AActor* HitInstigator;                                                      // 0x18B0 (size: 0x8)
    FBP_TPSCharacter_CTPSChar_DoAbsorb TPSChar_DoAbsorb;                              // 0x18B8 (size: 0x10)
    void TPSChar_DoAbsorb();
    FBP_TPSCharacter_CTPSChar_DoAvoid TPSChar_DoAvoid;                                // 0x18C8 (size: 0x10)
    void TPSChar_DoAvoid(EAvoidType AvoidType);
    float PercentRevive;                                                              // 0x18D8 (size: 0x4)
    bool IsAbsorbBroken;                                                              // 0x18DC (size: 0x1)
    bool AttackInPL;                                                                  // 0x18DD (size: 0x1)
    bool IsAttackLethal;                                                              // 0x18DE (size: 0x1)
    float AttackSpecialDamageRatio;                                                   // 0x18E0 (size: 0x4)
    EAttackMovementType AttackMovement;                                               // 0x18E4 (size: 0x1)
    EAttackOrigin AttackOrigin;                                                       // 0x18E5 (size: 0x1)
    EAttackPowers AttackPower;                                                        // 0x18E6 (size: 0x1)
    bool ShouldDisplayHeadWidget_Lock;                                                // 0x18E7 (size: 0x1)
    bool ShouldDisplayHeadWidget_Damage;                                              // 0x18E8 (size: 0x1)
    FTimerHandle Timer_HeadWidget;                                                    // 0x18F0 (size: 0x8)
    float HeadWidgetRemainTimer;                                                      // 0x18F8 (size: 0x4)
    bool ShouldDisplayHeadWidget_Coop;                                                // 0x18FC (size: 0x1)
    bool ShouldDisplayHeadWidget_Attacking;                                           // 0x18FD (size: 0x1)
    class UBP_HUD_Bars_Coop_C* AttachedHUDCoop;                                       // 0x1900 (size: 0x8)
    FLinearColor Sil_CharColor;                                                       // 0x1908 (size: 0x10)
    FLinearColor OW_CharColor;                                                        // 0x1918 (size: 0x10)
    FBP_TPSCharacter_CTPSChar_RevivedSuccess TPSChar_RevivedSuccess;                  // 0x1928 (size: 0x10)
    void TPSChar_RevivedSuccess();
    FBP_TPSCharacter_CTPSChar_Hitted TPSChar_Hitted;                                  // 0x1938 (size: 0x10)
    void TPSChar_Hitted(class AController* ControllerInstigator, bool IsGuarding);
    bool IsAbsorbAbility;                                                             // 0x1948 (size: 0x1)
    uint8 E Power Color;                                                              // 0x1949 (size: 0x1)
    FLinearColor Exh_Chara;                                                           // 0x194C (size: 0x10)
    FLinearColor Shield_CharColor;                                                    // 0x195C (size: 0x10)
    bool ShouldDisplayHeadWidget_PvP;                                                 // 0x196C (size: 0x1)
    TArray<EFXMaterials> CurrentMaterialsStack;                                       // 0x1970 (size: 0x10)
    EFXMaterials CurrentMaterial;                                                     // 0x1980 (size: 0x1)
    EWeaponSlot WeaponSlot;                                                           // 0x1981 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> Surface Type For Whoosh;                            // 0x1982 (size: 0x1)
    class UPointLightComponent* PointLight;                                           // 0x1988 (size: 0x8)
    EImpactType ImpactType;                                                           // 0x1990 (size: 0x1)
    bool ResilientHit;                                                                // 0x1991 (size: 0x1)
    FBP_TPSCharacter_CTPSChar_DrawToRT TPSChar_DrawToRT;                              // 0x1998 (size: 0x10)
    void TPSChar_DrawToRT(class UMaterialInterface* Brush Material, FVector Location, float Size, FRotator Rotation);
    bool IsCritical;                                                                  // 0x19A8 (size: 0x1)
    FHitBox LastHitHitBox;                                                            // 0x19B0 (size: 0x298)
    FTransform T_HitFX;                                                               // 0x1C50 (size: 0x30)
    FName N_HitFXName;                                                                // 0x1C80 (size: 0x8)
    TEnumAsByte<HitContexts> HitContext;                                              // 0x1C88 (size: 0x1)
    EGuardType GuardType;                                                             // 0x1C89 (size: 0x1)
    class AActor* InstigatorItem;                                                     // 0x1C90 (size: 0x8)
    bool ShouldDisplayHeadWidget_Force;                                               // 0x1C98 (size: 0x1)
    FBP_TPSCharacter_CTPSChar_AnySuccessParry TPSChar_AnySuccessParry;                // 0x1CA0 (size: 0x10)
    void TPSChar_AnySuccessParry();
    FBP_TPSCharacter_CTPSChar_SuccessGuard TPSChar_SuccessGuard;                      // 0x1CB0 (size: 0x10)
    void TPSChar_SuccessGuard();
    bool ShouldDisplayHeadWidget_Dizzy;                                               // 0x1CC0 (size: 0x1)
    bool ShouldDisplayHeadWidget_StructureBroken;                                     // 0x1CC1 (size: 0x1)
    bool ShouldDisplayKnockedDown;                                                    // 0x1CC2 (size: 0x1)
    bool IsTakendown;                                                                 // 0x1CC3 (size: 0x1)
    UClass* Poolable Decal;                                                           // 0x1CC8 (size: 0x8)
    bool Gore Activated;                                                              // 0x1CD0 (size: 0x1)
    TArray<class UAnimSequence*> HitAnimsHistory;                                     // 0x1CD8 (size: 0x10)
    bool InAvoidSlowMo;                                                               // 0x1CE8 (size: 0x1)
    bool DisplayHealth;                                                               // 0x1CE9 (size: 0x1)
    class UMaterialInterface* Material Proxy Rain;                                    // 0x1CF0 (size: 0x8)
    int32 Proxy Rain Index;                                                           // 0x1CF8 (size: 0x4)
    TMap<uint8, FParticleCompArrayStruct> SpawnedParticleCompByOrderIdMap;            // 0x1D00 (size: 0x50)
    bool HitByItem;                                                                   // 0x1D50 (size: 0x1)
    FBP_TPSCharacter_CED_AvoidSlowmo ED_AvoidSlowmo;                                  // 0x1D58 (size: 0x10)
    void ED_AvoidSlowmo(bool InAvoidSlomo);
    TArray<FPoseSnapshot> AvoidPoses;                                                 // 0x1D68 (size: 0x10)
    TArray<FTransform> AvoidPosesTransforms;                                          // 0x1D78 (size: 0x10)
    float AvoidGhostAppearInterval;                                                   // 0x1D88 (size: 0x4)
    FTimerHandle AvoidGhostsTimer;                                                    // 0x1D90 (size: 0x8)
    int32 AvoidGhostsCurrentID;                                                       // 0x1D98 (size: 0x4)
    TArray<TScriptInterface<IHudCarrierListener_C>> Hud Carrier Listener;             // 0x1DA0 (size: 0x10)
    FPoseSnapshot SnapShotForAvoid;                                                   // 0x1DB0 (size: 0x38)
    bool EnterSuperDizzy;                                                             // 0x1DE8 (size: 0x1)
    class USurfacesData_C* SurfacesData;                                              // 0x1DF0 (size: 0x8)
    int32 SK_Stencil Base Value;                                                      // 0x1DF8 (size: 0x4)
    TArray<class ABP_DecalPoolable_C*> Blood Decal Array;                             // 0x1E00 (size: 0x10)
    bool HitDuringDialog;                                                             // 0x1E10 (size: 0x1)
    int32 InAvoidSlowMoID;                                                            // 0x1E14 (size: 0x4)

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
    void GetImpactSFXToPlay(EImpactType InImpactType, TEnumAsByte<HitContexts> InHitContext, EGuardType InGuardType, FHitDescription& InHit, bool InLowStructure, bool IsResilientHit, TMap<class UAkAudioEvent*, class AActor*>& SFXMapActor);
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
}; // Size: 0x1E18

#endif
