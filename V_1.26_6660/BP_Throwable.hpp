#ifndef UE4SS_SDK_BP_Throwable_HPP
#define UE4SS_SDK_BP_Throwable_HPP

class ABP_Throwable_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0790 (size: 0x8)
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;          // 0x0798 (size: 0x8)
    class UParticleSystemComponent* FX_Throw;                                         // 0x07A0 (size: 0x8)
    class UParticleSystemComponent* FX_Grab;                                          // 0x07A8 (size: 0x8)
    class USceneComponent* FXs;                                                       // 0x07B0 (size: 0x8)
    class UStaticMeshComponent* OutlineMesh;                                          // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x07C0 (size: 0x8)
    FString Switch_ObjectType;                                                        // 0x07C8 (size: 0x10)
    EWeightCategory ThrowableWeight;                                                  // 0x07D8 (size: 0x1)
    TArray<class UStaticMeshComponent*> ChunksSim;                                    // 0x07E0 (size: 0x10)
    class UMaterialInterface* ActiveMaterial;                                         // 0x07F0 (size: 0x8)
    class UMaterialInterface* InactiveMaterial;                                       // 0x07F8 (size: 0x8)
    bool LastStateVisible;                                                            // 0x0800 (size: 0x1)
    class UStaticMesh* LastStateVisible_Mesh;                                         // 0x0808 (size: 0x8)
    TEnumAsByte<AKE_Throwable_Switch> AKE_Throwable_Switch;                           // 0x0810 (size: 0x1)
    class UTexture2D* InteractionIcon;                                                // 0x0818 (size: 0x8)
    class UWidgetComponent* DebugThrowTargetWidgetComp;                               // 0x0820 (size: 0x8)
    class UWidgetComponent* DebugMovableState;                                        // 0x0828 (size: 0x8)
    bool DeactivateBoxCollAfterBeingDestroyed;                                        // 0x0830 (size: 0x1)
    float DelayBeforeBoxCollDeactivation;                                             // 0x0834 (size: 0x4)
    FGameplayTag NeededGameplayTag;                                                   // 0x0838 (size: 0x8)
    bool bIsHighContrastSettings;                                                     // 0x0840 (size: 0x1)

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
}; // Size: 0x841

#endif
