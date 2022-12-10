#ifndef UE4SS_SDK_SkillUIData_HPP
#define UE4SS_SDK_SkillUIData_HPP

class USkillUIData_C : public UGameplayEffectUIData
{
    FText Name;
    TSoftObjectPtr<UTexture2D> Icon;
    class UTexture2D* Illustration;
    class UFileMediaSource* VideoSource;
    FText Description;
    FText Inputs;

};

#endif
