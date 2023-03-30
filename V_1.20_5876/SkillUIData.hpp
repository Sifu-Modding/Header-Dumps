#ifndef UE4SS_SDK_SkillUIData_HPP
#define UE4SS_SDK_SkillUIData_HPP

class USkillUIData_C : public UGameplayEffectUIData
{
    FText Name;                                                                       // 0x0028 (size: 0x18)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0040 (size: 0x28)
    class UTexture2D* Illustration;                                                   // 0x0068 (size: 0x8)
    class UFileMediaSource* VideoSource;                                              // 0x0070 (size: 0x8)
    FText Description;                                                                // 0x0078 (size: 0x18)
    FText Inputs;                                                                     // 0x0090 (size: 0x18)

}; // Size: 0xA8

#endif
