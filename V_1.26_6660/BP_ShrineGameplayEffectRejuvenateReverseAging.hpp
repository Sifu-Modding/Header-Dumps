#ifndef UE4SS_SDK_BP_ShrineGameplayEffectRejuvenateReverseAging_HPP
#define UE4SS_SDK_BP_ShrineGameplayEffectRejuvenateReverseAging_HPP

class UBP_ShrineGameplayEffectRejuvenateReverseAging_C : public UBP_ShrineGameplayEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0800 (size: 0x8)

    void CanApply(class AFightingCharacter* Character, bool& bCanApply);
    void Post Apply Effect(class APawn* Owner);
    void ExecuteUbergraph_BP_ShrineGameplayEffectRejuvenateReverseAging(int32 EntryPoint);
}; // Size: 0x808

#endif
