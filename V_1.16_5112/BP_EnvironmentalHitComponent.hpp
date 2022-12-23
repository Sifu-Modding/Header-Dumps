#ifndef UE4SS_SDK_BP_EnvironmentalHitComponent_HPP
#define UE4SS_SDK_BP_EnvironmentalHitComponent_HPP

class UBP_EnvironmentalHitComponent_C : public UHitComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<AKE_EnvironmentalImpactSoundType> ImpactSoundType;
    bool bEnableShake;
    bool bIsDebugMaterial;
    float isActorOrMeshPivot;
    bool bEnableTranslationShake;
    FVector TranslationAxis;
    bool bEnableRotationShake;
    FVector RotationAxis;
    float ShakeDuration;
    float Weight[0,1];
    bool bEnableTag;
    float StartTime;
    bool bIsAnyValidTagMesh;
    FName ShakeTag;
    FVector HitDirection;
    FVector HitLocation;
    class UMaterial* TestMaterial;
    TArray<class UMaterialInstanceDynamic*> MIDs;
    TEnumAsByte<AKE_Shakable_Switch> AKE_Shakable_Switch;
    bool AcceptHits;
    bool AcceptPushedHits;

    bool BPE_ValidateHit(const FHitResult& _hitResult, const FHitRequest& _inHitRequest);
    void SetupMeshComponentMaterial(class UMeshComponent* Mesh Component);
    void PlaySound();
    void SendStartToMaterials(TArray<class UMaterialInstanceDynamic*>& Materials Dynamic Instances);
    void SetupMaterials();
    void StartShake(FHitResult Hit, class AActor* Instigator);
    void Test ActivateShake();
    void ReceiveBeginPlay();
    void BPE_OnHit(const FHitDescription& _description);
    void ExecuteUbergraph_BP_EnvironmentalHitComponent(int32 EntryPoint);
};

#endif
