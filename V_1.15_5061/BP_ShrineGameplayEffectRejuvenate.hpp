#ifndef UE4SS_SDK_BP_ShrineGameplayEffectRejuvenate_HPP
#define UE4SS_SDK_BP_ShrineGameplayEffectRejuvenate_HPP

class UBP_ShrineGameplayEffectRejuvenate_C : public UBP_ShrineGameplayEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void CanApply(class AFightingCharacter* Character, bool& bCanApply);
    void Post Apply Effect(class APawn* Owner);
    void ExecuteUbergraph_BP_ShrineGameplayEffectRejuvenate(int32 EntryPoint);
};

#endif
