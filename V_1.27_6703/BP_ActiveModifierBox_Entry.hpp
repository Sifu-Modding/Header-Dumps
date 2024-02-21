#ifndef UE4SS_SDK_BP_ActiveModifierBox_Entry_HPP
#define UE4SS_SDK_BP_ActiveModifierBox_Entry_HPP

class UBP_ActiveModifierBox_Entry_C : public USCUserWidget
{
    class UTextBlock* CheatSmallDesc;                                                 // 0x0310 (size: 0x8)
    class UTextBlock* CheatTitle;                                                     // 0x0318 (size: 0x8)
    class UTextBlock* CheatValue;                                                     // 0x0320 (size: 0x8)
    class UImage* Fond;                                                               // 0x0328 (size: 0x8)
    class UImage* Fond_1;                                                             // 0x0330 (size: 0x8)
    class UPerPlatformImage* Icon;                                                    // 0x0338 (size: 0x8)
    class UPerPlatformImage* Icon_1;                                                  // 0x0340 (size: 0x8)
    class UPerPlatformImage* Icon_2;                                                  // 0x0348 (size: 0x8)
    class UPerPlatformImage* Icon_3;                                                  // 0x0350 (size: 0x8)
    class UPerPlatformImage* Icon_4;                                                  // 0x0358 (size: 0x8)
    class UImage* LineImg;                                                            // 0x0360 (size: 0x8)
    class UWidgetSwitcher* ModifierType;                                              // 0x0368 (size: 0x8)
    class UWidgetSwitcher* ModifierType2;                                             // 0x0370 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0378 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0380 (size: 0x8)
    FGameplayTag CheatGameplayTag;                                                    // 0x0388 (size: 0x8)
    bool isInArena;                                                                   // 0x0390 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x0391 (size: 0x1)

    void SetCheatText(FGameplayTag bpp__CheatGameplayTag__pf);
    void SetBlack(bool bpp__Black__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
}; // Size: 0x398

#endif
