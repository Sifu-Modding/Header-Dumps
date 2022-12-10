#ifndef UE4SS_SDK_BP_Throwable_HPP
#define UE4SS_SDK_BP_Throwable_HPP

class ABP_Throwable_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;
    class UParticleSystemComponent* FX_Throw;
    class UParticleSystemComponent* FX_Grab;
    class USceneComponent* FXs;
    class UStaticMeshComponent* OutlineMesh;
    class UStaticMeshComponent* Mesh;
    FString Switch_ObjectType;
    EWeightCategory ThrowableWeight;
    TArray<class UStaticMeshComponent*> ChunksSim;
    class UMaterialInterface* ActiveMaterial;
    class UMaterialInterface* InactiveMaterial;
    bool LastStateVisible;
    class UStaticMesh* LastStateVisible_Mesh;
    TEnumAsByte<AKE_Throwable_Switch> AKE_Throwable_Switch;
    class UTexture2D* InteractionIcon;
    class UWidgetComponent* DebugThrowTargetWidgetComp;
    class UWidgetComponent* DebugMovableState;
    bool DeactivateBoxCollAfterBeingDestroyed;
    float DelayBeforeBoxCollDeactivation;
    FGameplayTag NeededGameplayTag;
    bool bIsHighContrastSettings;

    void GetAkWeaponNameSwitch(TEnumAsByte<AKE_WeaponName_Switch>& Name);
    void GetWeaponType(TEnumAsByte<EWeaponType>& WeaponType);
    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void GetSoundSwitchObjectType(FString& SWITCH);
    void GetInteractionIcon(class UTexture2D*& Icon);
    void GetWeight(EWeightCategory& Weight);
    void Get_Hit_VFX(EGuardType GuardingType, TArray<class UParticleSystem*>& ParticleSystems);
    void UpdateUsabilityVFX(bool bUsable);
    void DeactivateCollision();
    FText BPE_GetHUDActionText(bool& _bUsable);
    void CreateDebugWidgetComponents();
    void SetActivate(bool bActivated);
    void Chunks_Spread();
    void HandleDebug();
    void PlayBounceSFX();
    void ApplyDamageToChar(class AFightingCharacter* CharHit);
    void UserConstructionScript();
    void UpdateDurabilityRTPC();
    void BndEvt__m_BoxColl_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__m_InteractionComponent_K2Node_ComponentBoundEvent_3_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void Play_Hit_SFX(EGuardType GuardingType, EHeight HittedHeight, bool TargetHasWeapon, bool IsResilientHit, EAttackPowers AttackPower);
    void BPE_OnThrown();
    void BPE_OnUsabilityUpdated(bool _bUsable);
    void BndEvt__m_DestructibleComponent_K2Node_ComponentBoundEvent_0_DeathComponentDelegate__DelegateSignature();
    void BPE_OnObjectBreak(bool _bIsSilent);
    void ReceiveBeginPlay();
    void OnNeededGameplaytagChanged(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void SendOptionValueAndTriggerUpdate(bool bIsHighContrast);
    void OnPawnInitializedEvent(class AFightingCharacter* _pawn);
    void ExecuteUbergraph_BP_Throwable(int32 EntryPoint);
};

#endif
