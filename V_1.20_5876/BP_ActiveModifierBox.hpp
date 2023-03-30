#ifndef UE4SS_SDK_BP_ActiveModifierBox_HPP
#define UE4SS_SDK_BP_ActiveModifierBox_HPP

class UBP_ActiveModifierBox_C : public USCUserWidget
{
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x0310 (size: 0x8)
    class UBP_ActiveModifierBox_Entry_C* BP_ActiveModifierBox_Entry;                  // 0x0318 (size: 0x8)
    class UBP_ActiveModifierBox_Entry_C* BP_ActiveModifierBox_Entry_119;              // 0x0320 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0328 (size: 0x8)
    class UImage* BrushOver_1;                                                        // 0x0330 (size: 0x8)
    class UPerPlatformImage* Icon;                                                    // 0x0338 (size: 0x8)
    class UPerPlatformImage* Icon_1;                                                  // 0x0340 (size: 0x8)
    class UTextBlock* ModifiersTitle;                                                 // 0x0348 (size: 0x8)
    class UTextBlock* ModifiersTitle_1;                                               // 0x0350 (size: 0x8)
    class UWidgetSwitcher* ModifierType;                                              // 0x0358 (size: 0x8)
    class UVerticalBox* ModifierVerticalBox;                                          // 0x0360 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0368 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0370 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0378 (size: 0x8)
    bool ShowBackground;                                                              // 0x0380 (size: 0x1)
    bool isInArena;                                                                   // 0x0381 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x0382 (size: 0x1)

    void UpdateTitle();
    void Try Get Existing Tag Item(FGameplayTag bpp__GameplayTag__pf, class UBP_ActiveModifierBox_Entry_C*& bpp__TaggedEntry__pf);
    void TryUpdateTagEntryOrAdd(FGameplayTag bpp__GameplayTag__pf);
    void SetDarkMode(bool bpp__DarkMode__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void InitList(TArray<FGameplayTag>& bpp__CheatTag__pf);
    void HideBackground(bool bpp__Hide__pf);
    void Construct();
    void ClearEntries();
}; // Size: 0x388

#endif
