#ifndef UE4SS_SDK_BP_Challenge_Modifiers_HPP
#define UE4SS_SDK_BP_Challenge_Modifiers_HPP

class UBP_Challenge_Modifiers_C : public UUserWidget
{
    class UTextBlock* ModifiersText;                                                  // 0x0268 (size: 0x8)
    FGameplayTag Cheat Gameplay Tag;                                                  // 0x0270 (size: 0x8)

    void SetCheatText(FGameplayTag CheatGameplayTag);
}; // Size: 0x278

#endif
