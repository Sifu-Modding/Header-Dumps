#ifndef UE4SS_SDK_BPWeapon_HPP
#define UE4SS_SDK_BPWeapon_HPP

class ABPWeapon_C : public ABaseWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UReplayableDestructibleComponent* Destroyed Mesh;
    class UParticleSystemComponent* FX_Throw;
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;
    class UStaticMeshComponent* SM_Outline_Mesh;
    class UFakePhysicComponent* FakePhysic;
    class USkeletalMesh* SwapMesh_LowHp;
    TEnumAsByte<AKE_WeaponName_Switch> AKE_WeaponName_Switch;
    FVector PrevVelocityDirection;
    FVector PrevPosition;
    FVector HeadLocalPos;
    class UTexture2D* InteractionIcon;
    bool IsForcedDestroyed;
    float HeavyBounceTreshold;
    float MediumBounceTreshold;
    float LightBounceTreshold;
    int32 LowHpThreshold;
    TArray<FDataTableRowHandle> DamagedWeaponsProfile;
    TArray<FTransform> DamagedWeaponRelativeTransform;
    TArray<FDamagedWeaponDestructibleInfo> DamagedWeaponDestructibleStateInfos;
    bool PlaySpecialPickupSound;
    TArray<FDamagedWeaponInfoStruct> DamagedWeaponsExtraInfos;
    EControllerNature CharacterNature;

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
};

#endif
