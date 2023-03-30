#ifndef UE4SS_SDK_BPWeapon_HPP
#define UE4SS_SDK_BPWeapon_HPP

class ABPWeapon_C : public ABaseWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UReplayableDestructibleComponent* Destroyed Mesh;                           // 0x0838 (size: 0x8)
    class UParticleSystemComponent* FX_Throw;                                         // 0x0840 (size: 0x8)
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;          // 0x0848 (size: 0x8)
    class UStaticMeshComponent* SM_Outline_Mesh;                                      // 0x0850 (size: 0x8)
    class UFakePhysicComponent* FakePhysic;                                           // 0x0858 (size: 0x8)
    class USkeletalMesh* SwapMesh_LowHp;                                              // 0x0860 (size: 0x8)
    TEnumAsByte<AKE_WeaponName_Switch> AKE_WeaponName_Switch;                         // 0x0868 (size: 0x1)
    FVector PrevVelocityDirection;                                                    // 0x086C (size: 0xC)
    FVector PrevPosition;                                                             // 0x0878 (size: 0xC)
    FVector HeadLocalPos;                                                             // 0x0884 (size: 0xC)
    class UTexture2D* InteractionIcon;                                                // 0x0890 (size: 0x8)
    bool IsForcedDestroyed;                                                           // 0x0898 (size: 0x1)
    float HeavyBounceTreshold;                                                        // 0x089C (size: 0x4)
    float MediumBounceTreshold;                                                       // 0x08A0 (size: 0x4)
    float LightBounceTreshold;                                                        // 0x08A4 (size: 0x4)
    int32 LowHpThreshold;                                                             // 0x08A8 (size: 0x4)
    TArray<FDataTableRowHandle> DamagedWeaponsProfile;                                // 0x08B0 (size: 0x10)
    TArray<FTransform> DamagedWeaponRelativeTransform;                                // 0x08C0 (size: 0x10)
    TArray<FDamagedWeaponDestructibleInfo> DamagedWeaponDestructibleStateInfos;       // 0x08D0 (size: 0x10)
    bool PlaySpecialPickupSound;                                                      // 0x08E0 (size: 0x1)
    TArray<FDamagedWeaponInfoStruct> DamagedWeaponsExtraInfos;                        // 0x08E8 (size: 0x10)
    EControllerNature CharacterNature;                                                // 0x08F8 (size: 0x1)

    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void GetWeaponType(TEnumAsByte<EWeaponType>& WeaponType);
    void GetAkWeaponNameSwitch(TEnumAsByte<AKE_WeaponName_Switch>& Name);
    void Get_Hit_VFX(EGuardType GuardingType, TArray<class UParticleSystem*>& ParticleSystems);
    void GetWeight(EWeightCategory& Weight);
    void GetInteractionIcon(class UTexture2D*& Icon);
    void Update Custom Stencil();
    void PlayPickupSFX();
    void PlayBreakSFX();
    void OverrideSoundSwitchName(int32 Index);
    void DestroyWeapon();
    bool BPE_CanUseDamagedWeapon(int32 _iDamagedWeaponIndex);
    void OverrideInteractionComponent(FDamagedWeaponInteractionOverride NewInteractionCompData);
    void ResetSmear();
    InputAction BPE_FindAppropriateActionFromContext(class AFightingCharacter* _user);
    void Internal Update Durability RTPC();
    FText BPE_GetHUDActionText(bool& _bUsable);
    void PlayBounceSFX();
    void UserConstructionScript();
    void BndEvt__m_InteractionComponent_K2Node_ComponentBoundEvent_3_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnThrowable State Change(EThrowableState _eNewState);
    void Play_Hit_SFX(EGuardType GuardingType, EHeight HittedHeight, bool TargetHasWeapon, bool IsResilientHit, EAttackPowers AttackPower);
    void BPE_OverrideBounceType(const class AActor* _Instigator, const class AActor* _target);
    void BndEvt__m_BoxColl_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BPE_OnThrown();
    void BndEvt__m_DestructibleComponent_K2Node_ComponentBoundEvent_1_OnDamagedWeaponSwitch__DelegateSignature(int32 _iWeaponIdx);
    void BPE_OnObjectBreak(bool _bIsSilent);
    void ReceiveBeginPlay();
    void BPE_OnUsabilityUpdated(bool _bUsable);
    void SendOptionValueAndTriggerUpdate(bool bIsHighContrast);
    void UpdateDurabilityRTPC();
    void OnDrop(EDropReason _eDropReason);
    void OnNoBearer();
    void UpdateOutline();
    void On Rep Broken State(bool bBroken);
    void ExecuteUbergraph_BPWeapon(int32 EntryPoint);
}; // Size: 0x8F9

#endif
