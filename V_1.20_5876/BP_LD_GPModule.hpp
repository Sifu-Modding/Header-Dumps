#ifndef UE4SS_SDK_BP_LD_GPModule_HPP
#define UE4SS_SDK_BP_LD_GPModule_HPP

class ABP_LD_GPModule_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UTraversalComponent* Traversal;                                             // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class USceneComponent* ScaledComponent;                                           // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    class USceneComponent* SplinesOffset;                                             // 0x02D8 (size: 0x8)
    class UBoxComponent* TakeDownBox;                                                 // 0x02E0 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x02E8 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x02F0 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x02F8 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0300 (size: 0x8)
    class UBP_EnvironmentalHitComponent_C* BP_EnvironmentalHitComponent;              // 0x0308 (size: 0x8)
    class UBP_EnvironmentalInteractionComponent_C* BP_WallEnvironementTakedown;       // 0x0310 (size: 0x8)
    float SplineZOffsetPercent;                                                       // 0x0318 (size: 0x4)
    TEnumAsByte<EnvironmentalImpactReceiverType> SizeType;                            // 0x031C (size: 0x1)
    TEnumAsByte<AKE_EnvironmentalImpactSoundType> ImpactSoundType;                    // 0x031D (size: 0x1)
    bool EnableTraversal;                                                             // 0x031E (size: 0x1)
    bool UseCustomSize;                                                               // 0x031F (size: 0x1)
    FVector CustomSize;                                                               // 0x0320 (size: 0xC)
    class UStaticMesh* Mesh;                                                          // 0x0330 (size: 0x8)
    class UStaticMesh* CubeMesh;                                                      // 0x0338 (size: 0x8)

    void InitTraversal();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LD_GPModule(int32 EntryPoint);
}; // Size: 0x340

#endif
