#ifndef UE4SS_SDK_BP_AICharacter_Base_HPP
#define UE4SS_SDK_BP_AICharacter_Base_HPP

class ABP_AICharacter_Base_C : public ABP_TPSCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPStatsComponent_C* BPStatsComponent;
    class UOptionListenerComponent* OptionListener;
    class UFightingAIDialogComponent* FightingAIDialog;
    class UASMAIComponent* ASMAI;
    class UAIFightingCameraWeightComponent* AIFightingCameraWeight;
    class UAIFightingComponent* AIFighting;
    FString FoleySwitch;
    bool PlayFightDialogLine;
    bool WasSurprised?;
    FBP_AICharacter_Base_CPlayerDetected PlayerDetected;
    void PlayerDetected();
    FString Character Voice;
    class UParticleSystemComponent* PS_ChargeOwner_Instance;
    class UStaticMeshComponent* Accesory;
    FDataTableRowHandle Accessory;
    class UMaterialInstanceDynamic* HideScalpMaterial;
    class ABP_DynamicAccessory_Master_C* Ejecting Prop;
    int32 Ejected Prop Index;
    float TargetLocationZOffsetInDown;
    FGameplayTag OnDeathDetectiveTag;
    FText OnDeathDetectiveText;
    class UParticleSystemComponent* LastManAuraEmitter;
    FName BossDialogKey;
    TArray<class UParticleSystemComponent*> NewVar_0;
    class UParticleSystemComponent* PS Charge Aura Owner Instance;
    TArray<FName> MPCStencilNameToResetOnDeath;
    int32 XRayWantedCount;
    bool IsEnemyFirstPlayerPawn;
    int32 XRayBlockerCount;
    bool bIsCaptainEnabled;
    int32 StructureBrokenOccurences;

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
    void ExecuteUbergraph_BP_AICharacter_Base(int32 EntryPoint);
    void PlayerDetected__DelegateSignature();
};

#endif
