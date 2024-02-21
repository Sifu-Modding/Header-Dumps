#ifndef UE4SS_SDK_BP_ShrineGameplayEffect_HPP
#define UE4SS_SDK_BP_ShrineGameplayEffect_HPP

class UBP_ShrineGameplayEffect_C : public USCGameplayEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07F8 (size: 0x8)

    void CanApply(class AFightingCharacter* Character, bool& bCanApply);
    void Pre Apply Effect(class APawn* Owner);
    void Post Apply Effect(class APawn* Owner);
    void ExecuteUbergraph_BP_ShrineGameplayEffect(int32 EntryPoint);
}; // Size: 0x800

#endif
