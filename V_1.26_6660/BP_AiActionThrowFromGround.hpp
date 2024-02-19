#ifndef UE4SS_SDK_BP_AiActionThrowFromGround_HPP
#define UE4SS_SDK_BP_AiActionThrowFromGround_HPP

class UBP_AiActionThrowFromGround_C : public UAIActionThrowObject
{
    float MinimumDistanceForThrow;                                                    // 0x0158 (size: 0x4)
    float MaximumDistanceForThrow;                                                    // 0x015C (size: 0x4)

    FString BPE_GetName();
    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
}; // Size: 0x160

#endif
