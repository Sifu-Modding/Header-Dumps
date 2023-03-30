#ifndef UE4SS_SDK_BP_AICharacter_Base_HPP
#define UE4SS_SDK_BP_AICharacter_Base_HPP

class ABP_AICharacter_Base_C : public ABP_TPSCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1DA8 (size: 0x8)
    class UDespawnComponent* DespawnComponent;                                        // 0x1DB0 (size: 0x8)
    class UBPStatsComponent_C* BPStatsComponent;                                      // 0x1DB8 (size: 0x8)
    class UOptionListenerComponent* OptionListener;                                   // 0x1DC0 (size: 0x8)
    class UFightingAIDialogComponent* FightingAIDialog;                               // 0x1DC8 (size: 0x8)
    class UASMAIComponent* ASMAI;                                                     // 0x1DD0 (size: 0x8)
    class UAIFightingCameraWeightComponent* AIFightingCameraWeight;                   // 0x1DD8 (size: 0x8)
    class UAIFightingComponent* AIFighting;                                           // 0x1DE0 (size: 0x8)
    FString FoleySwitch;                                                              // 0x1DE8 (size: 0x10)
    bool PlayFightDialogLine;                                                         // 0x1DF8 (size: 0x1)
    bool WasSurprised?;                                                               // 0x1DF9 (size: 0x1)
    FBP_AICharacter_Base_CPlayerDetected PlayerDetected;                              // 0x1E00 (size: 0x10)
    void PlayerDetected();
    FString Character Voice;                                                          // 0x1E10 (size: 0x10)
    class UParticleSystemComponent* PS_ChargeOwner_Instance;                          // 0x1E20 (size: 0x8)
    class UStaticMeshComponent* Accesory;                                             // 0x1E28 (size: 0x8)
    FDataTableRowHandle Accessory;                                                    // 0x1E30 (size: 0x10)
    class UMaterialInstanceDynamic* HideScalpMaterial;                                // 0x1E40 (size: 0x8)
    class ABP_DynamicAccessory_Master_C* Ejecting Prop;                               // 0x1E48 (size: 0x8)
    int32 Ejected Prop Index;                                                         // 0x1E50 (size: 0x4)
    float TargetLocationZOffsetInDown;                                                // 0x1E54 (size: 0x4)
    FGameplayTag OnDeathDetectiveTag;                                                 // 0x1E58 (size: 0x8)
    FText OnDeathDetectiveText;                                                       // 0x1E60 (size: 0x18)
    class UParticleSystemComponent* LastManAuraEmitter;                               // 0x1E78 (size: 0x8)
    FName BossDialogKey;                                                              // 0x1E80 (size: 0x8)
    TArray<class UParticleSystemComponent*> NewVar_0;                                 // 0x1E88 (size: 0x10)
    class UParticleSystemComponent* PS Charge Aura Owner Instance;                    // 0x1E98 (size: 0x8)
    TArray<FName> MPCStencilNameToResetOnDeath;                                       // 0x1EA0 (size: 0x10)
    int32 XRayWantedCount;                                                            // 0x1EB0 (size: 0x4)
    bool IsEnemyFirstPlayerPawn;                                                      // 0x1EB4 (size: 0x1)
    int32 XRayBlockerCount;                                                           // 0x1EB8 (size: 0x4)
    bool bIsCaptainEnabled;                                                           // 0x1EBC (size: 0x1)
    int32 StructureBrokenOccurences;                                                  // 0x1EC0 (size: 0x4)
    FBP_AICharacter_Base_COnSlapstickFightDeactivate OnSlapstickFightDeactivate;      // 0x1EC8 (size: 0x10)
    void OnSlapstickFightDeactivate();

    void Deactivate Slapstick Fight();
    void OnHitSlapstickFight(FHitDescription HitDescription);
    void SetCaptainAiMaterialParameters(class UMaterialInstanceDynamic* Mid, float EnableCaptainAI, bool ParamsOverride, float IntensityOverride, FLinearColor ColorOverride);
    void SetXRayWantedCount(int32 InNewCount, bool bForce);
    void UpdateRenderDepthByBehavior(EGlobalBehaviors InBehavior);
    void ResetStencilIndexesOnDeath();
    void BackObstacleCheck(float BackDistance, bool LineTrace, TEnumAsByte<EDrawDebugTrace::Type> Debug, bool& Results);
    void ComputeHitForEjection(FHitDescription Hit, bool& First_Hit_Ejection, bool& On_Hit_Ejection, bool& Lethal);
    void Props Ejection(class ABP_DynamicAccessory_Master_C* EjectingProp, FVector Add Impulse);
    void TryDisplayCharge(bool LocalVisibility);
    void ReceiveBeginPlay();
    void Hitted(const FHitDescription& _hit);
    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void EjectAccessory(bool Exit Activity, FVector Add Impulse);
    void BndEvt__AIFighting_K2Node_ComponentBoundEvent_3_AIGlobalBehaviorChangedDynamic__DelegateSignature(EGlobalBehaviors NewBehavior, const bool FromDialog);
    void BndEvt__OptionListener_K2Node_ComponentBoundEvent_5_OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
    void EjectCharge();
    void BndEvt__m_DefenseComponent_K2Node_ComponentBoundEvent_7_FightingStateChanged__DelegateSignature(EFightingState _eFightingState, bool _bPush);
    void ToggleVisibilityAccessory();
    void SetLockOffset(FVector Offset);
    void ResetLockOffset();
    void BndEvt__BP_AICharacter_Base_AIFighting_K2Node_ComponentBoundEvent_8_OnAIPhaseChangedDynamic__DelegateSignature(int32 _iPreviousPhase, int32 _iCurrentPhase, FName _PhaseName);
    void BPE_OnDeath();
    void BndEvt__BP_AICharacter_Base_AIFighting_K2Node_ComponentBoundEvent_0_DynamicMulticast__DelegateSignature();
    void BndEvt__BP_AICharacter_Base_AIFighting_K2Node_ComponentBoundEvent_1_DynamicMulticast__DelegateSignature();
    void PushXRayWanted();
    void PopXRayWanted();
    void PopXRayBlocker();
    void PushXRayBlocker();
    void BndEvt__BP_AICharacter_Base_AIFighting_K2Node_ComponentBoundEvent_2_SpawnedDelegate__DelegateSignature(class AAISpawner* Spawner);
    void SetEnableCaptainAI(bool bNewEnable, bool bParamsOverride, float IntensityOverride, FLinearColor ColorOverride);
    void OnCaptainAIDeath();
    void PropsEjection_Rep(int32 iEjectingPropIndex, class ABP_DynamicAccessory_Master_C* EjectingProp, FVector AddImpulse);
    void ExecuteUbergraph_BP_AICharacter_Base(int32 EntryPoint);
    void OnSlapstickFightDeactivate__DelegateSignature();
    void PlayerDetected__DelegateSignature();
}; // Size: 0x1ED8

#endif
