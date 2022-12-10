#ifndef UE4SS_SDK_BP_AvoidGhost_01_HPP
#define UE4SS_SDK_BP_AvoidGhost_01_HPP

class ABP_AvoidGhost_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_AvoidSuccesfull;
    class USkeletalMeshComponent* AvoidedMesh;
    class USceneComponent* DefaultSceneRoot1;
    float AvoidGhost_Timeline_Contrast_050D027B45BD2A9DA6AE06BEEAF7C134;
    float AvoidGhost_Timeline_Alpha_050D027B45BD2A9DA6AE06BEEAF7C134;
    TEnumAsByte<ETimelineDirection::Type> AvoidGhost_Timeline__Direction_050D027B45BD2A9DA6AE06BEEAF7C134;
    class UTimelineComponent* AvoidGhost_Timeline;
    class UMaterialInstanceDynamic* GhostMaterial;
    float Alpha;
    FLinearColor StaminaColor;
    FLinearColor NonStaminaColor;
    bool UseStamina;
    float AlphaContrast;
    class UGhostAnimBP_C* ReferenceAnimBP;
    bool AvoidPlayRate;
    class UPlayerAnim* ReferencePlayerAnim;
    float PlayRate;
    float GhostDuration;
    float PositionInterpolation;
    float StartingCursorMin;
    float RewindCursor;

    void StartPlayrate();
    void AvoidGhost_Timeline__FinishedFunc();
    void AvoidGhost_Timeline__UpdateFunc();
    void ReceiveBeginPlay();
    void PlayVFXAnim(FVector Avoid Position, FVector Avoid Direction);
    void ExecuteUbergraph_BP_AvoidGhost_01(int32 EntryPoint);
};

#endif
