#ifndef UE4SS_SDK_BP_ShrineModifierCalculation_HPP
#define UE4SS_SDK_BP_ShrineModifierCalculation_HPP

class UBP_ShrineModifierCalculation_C : public UGameplayModMagnitudeCalculation
{
    bool UsePerDifficultyValues;                                                      // 0x0040 (size: 0x1)
    float Value;                                                                      // 0x0044 (size: 0x4)
    float Values (Easy);                                                              // 0x0048 (size: 0x4)
    float Values (Hard);                                                              // 0x004C (size: 0x4)

    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec);
}; // Size: 0x50

#endif
