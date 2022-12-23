#ifndef UE4SS_SDK_AnimationBudgetAllocator_HPP
#define UE4SS_SDK_AnimationBudgetAllocator_HPP

struct FAnimationBudgetAllocatorParameters
{
    float BudgetInMs;
    float MinQuality;
    int32 MaxTickRate;
    float WorkUnitSmoothingSpeed;
    float AlwaysTickFalloffAggression;
    float InterpolationFalloffAggression;
    int32 InterpolationMaxRate;
    int32 MaxInterpolatedComponents;
    float InterpolationTickMultiplier;
    float InitialEstimatedWorkUnitTimeMs;
    int32 MaxTickedOffsreenComponents;
    int32 StateChangeThrottleInFrames;
    float BudgetFactorBeforeReducedWork;
    float BudgetFactorBeforeReducedWorkEpsilon;
    float BudgetPressureSmoothingSpeed;
    int32 ReducedWorkThrottleMinInFrames;
    int32 ReducedWorkThrottleMaxInFrames;
    float BudgetFactorBeforeAggressiveReducedWork;
    int32 ReducedWorkThrottleMaxPerFrame;
    float BudgetPressureBeforeEmergencyReducedWork;

};

class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetAnimationBudgetParameters(class UObject* WorldContextObject, const FAnimationBudgetAllocatorParameters& InParameters);
    void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};

class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
    uint8 bAutoRegisterWithBudgetAllocator;
    uint8 bAutoCalculateSignificance;
    uint8 bShouldUseActorRenderedFlag;

    void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

#endif
