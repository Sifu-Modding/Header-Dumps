#ifndef UE4SS_SDK_BP_EnvironmentalHitComponent_HPP
#define UE4SS_SDK_BP_EnvironmentalHitComponent_HPP

class UBP_EnvironmentalHitComponent_C : public UHitComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    TEnumAsByte<AKE_EnvironmentalImpactSoundType> ImpactSoundType;                    // 0x0260 (size: 0x1)
    bool bEnableShake;                                                                // 0x0261 (size: 0x1)
    bool bIsDebugMaterial;                                                            // 0x0262 (size: 0x1)
    float isActorOrMeshPivot;                                                         // 0x0264 (size: 0x4)
    bool bEnableTranslationShake;                                                     // 0x0268 (size: 0x1)
    FVector TranslationAxis;                                                          // 0x026C (size: 0xC)
    bool bEnableRotationShake;                                                        // 0x0278 (size: 0x1)
    FVector RotationAxis;                                                             // 0x027C (size: 0xC)
    float ShakeDuration;                                                              // 0x0288 (size: 0x4)
    float Weight[0,1];                                                                // 0x028C (size: 0x4)
    bool bEnableTag;                                                                  // 0x0290 (size: 0x1)
    float StartTime;                                                                  // 0x0294 (size: 0x4)
    bool bIsAnyValidTagMesh;                                                          // 0x0298 (size: 0x1)
    FName ShakeTag;                                                                   // 0x029C (size: 0x8)
    FVector HitDirection;                                                             // 0x02A4 (size: 0xC)
    FVector HitLocation;                                                              // 0x02B0 (size: 0xC)
    class UMaterial* TestMaterial;                                                    // 0x02C0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MIDs;                                     // 0x02C8 (size: 0x10)
    TEnumAsByte<AKE_Shakable_Switch> AKE_Shakable_Switch;                             // 0x02D8 (size: 0x1)
    bool AcceptHits;                                                                  // 0x02D9 (size: 0x1)
    bool AcceptPushedHits;                                                            // 0x02DA (size: 0x1)

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
}; // Size: 0x2DB

#endif
