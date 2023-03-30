#ifndef UE4SS_SDK_BP_AvoidGhost_01_HPP
#define UE4SS_SDK_BP_AvoidGhost_01_HPP

class ABP_AvoidGhost_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* P_AvoidSuccesfull;                                // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* AvoidedMesh;                                        // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x02C8 (size: 0x8)
    float AvoidGhost_Timeline_Contrast_050D027B45BD2A9DA6AE06BEEAF7C134;              // 0x02D0 (size: 0x4)
    float AvoidGhost_Timeline_Alpha_050D027B45BD2A9DA6AE06BEEAF7C134;                 // 0x02D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AvoidGhost_Timeline__Direction_050D027B45BD2A9DA6AE06BEEAF7C134; // 0x02D8 (size: 0x1)
    class UTimelineComponent* AvoidGhost_Timeline;                                    // 0x02E0 (size: 0x8)
    class UMaterialInstanceDynamic* GhostMaterial;                                    // 0x02E8 (size: 0x8)
    float Alpha;                                                                      // 0x02F0 (size: 0x4)
    FLinearColor StaminaColor;                                                        // 0x02F4 (size: 0x10)
    FLinearColor NonStaminaColor;                                                     // 0x0304 (size: 0x10)
    bool UseStamina;                                                                  // 0x0314 (size: 0x1)
    float AlphaContrast;                                                              // 0x0318 (size: 0x4)
    class UGhostAnimBP_C* ReferenceAnimBP;                                            // 0x0320 (size: 0x8)
    bool AvoidPlayRate;                                                               // 0x0328 (size: 0x1)
    class UPlayerAnim* ReferencePlayerAnim;                                           // 0x0330 (size: 0x8)
    float PlayRate;                                                                   // 0x0338 (size: 0x4)
    float GhostDuration;                                                              // 0x033C (size: 0x4)
    float PositionInterpolation;                                                      // 0x0340 (size: 0x4)
    float StartingCursorMin;                                                          // 0x0344 (size: 0x4)
    float RewindCursor;                                                               // 0x0348 (size: 0x4)

    void StartPlayrate();
    void AvoidGhost_Timeline__FinishedFunc();
    void AvoidGhost_Timeline__UpdateFunc();
    void ReceiveBeginPlay();
    void PlayVFXAnim(FVector Avoid Position, FVector Avoid Direction);
    void ExecuteUbergraph_BP_AvoidGhost_01(int32 EntryPoint);
}; // Size: 0x34C

#endif
