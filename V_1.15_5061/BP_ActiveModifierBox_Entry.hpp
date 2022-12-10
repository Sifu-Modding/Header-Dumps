#ifndef UE4SS_SDK_BP_ActiveModifierBox_Entry_HPP
#define UE4SS_SDK_BP_ActiveModifierBox_Entry_HPP

class UBP_ActiveModifierBox_Entry_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CheatTitle;
    class UTextBlock* CheatValue;
    class UImage* Fond;
    class UImage* Fond_1;
    class UPerPlatformImage* Icon;
    class UPerPlatformImage* Icon_1;
    class UImage* LineImg;
    class UWidgetSwitcher* ModifierType;
    FGameplayTag CheatGameplayTag;

    void SetBlack(bool Black);
    void SetCheatText(FGameplayTag CheatGameplayTag);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_ActiveModifierBox_Entry(int32 EntryPoint);
};

#endif
