#ifndef UE4SS_SDK_BP_AiActionThrowFromGround_HPP
#define UE4SS_SDK_BP_AiActionThrowFromGround_HPP

class UBP_AiActionThrowFromGround_C : public UAIActionThrowObject
{
    float MinimumDistanceForThrow;
    float MaximumDistanceForThrow;

    FString BPE_GetName();
    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
};

#endif
