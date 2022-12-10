#ifndef UE4SS_SDK_BP_ShrineModifierCalculation_HPP
#define UE4SS_SDK_BP_ShrineModifierCalculation_HPP

class UBP_ShrineModifierCalculation_C : public UGameplayModMagnitudeCalculation
{
    bool UsePerDifficultyValues;
    float Value;
    float Values (Easy);
    float Values (Hard);

    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec);
};

#endif
