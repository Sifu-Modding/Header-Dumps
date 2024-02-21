#ifndef UE4SS_SDK_BP_ShrineGameplayEffectRejuvenate_HPP
#define UE4SS_SDK_BP_ShrineGameplayEffectRejuvenate_HPP

class UBP_ShrineGameplayEffectRejuvenate_C : public UBP_ShrineGameplayEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0800 (size: 0x8)

    void CanApply(class AFightingCharacter* Character, bool& bCanApply);
    void Post Apply Effect(class APawn* Owner);
    void ExecuteUbergraph_BP_ShrineGameplayEffectRejuvenate(int32 EntryPoint);
}; // Size: 0x808

#endif
