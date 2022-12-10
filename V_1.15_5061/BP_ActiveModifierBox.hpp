#ifndef UE4SS_SDK_BP_ActiveModifierBox_HPP
#define UE4SS_SDK_BP_ActiveModifierBox_HPP

class UBP_ActiveModifierBox_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_130;
    class UBP_ActiveModifierBox_Entry_C* BP_ActiveModifierBox_Entry;
    class UBP_ActiveModifierBox_Entry_C* BP_ActiveModifierBox_Entry_119;
    class UImage* BrushOver;
    class UImage* BrushOver_1;
    class UPerPlatformImage* Icon;
    class UPerPlatformImage* Icon_1;
    class UTextBlock* ModifiersTitle;
    class UTextBlock* ModifiersTitle_1;
    class UWidgetSwitcher* ModifierType;
    class UVerticalBox* ModifierVerticalBox;
    class UVerticalBox* VerticalBox_0;
    bool ShowBackground;

    void UpdateTitle();
    void HideBackground(bool Hide);
    void SetDarkmode(bool DarkMode);
    void InitList(TArray<FGameplayTag>& CheatTag);
    void ClearEntries();
    void TryUpdateTagEntryOrAdd(FGameplayTag GameplayTag);
    void Try Get Existing Tag Item(FGameplayTag GameplayTag, class UBP_ActiveModifierBox_Entry_C*& TaggedEntry);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BP_ActiveModifierBox(int32 EntryPoint);
};

#endif
