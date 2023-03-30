#ifndef UE4SS_SDK_BP_HUD_TakedownAction_HPP
#define UE4SS_SDK_BP_HUD_TakedownAction_HPP

class UBP_HUD_TakedownAction_C : public USCUserWidget
{
    class UWidgetAnimation* TakedownAnim;                                             // 0x0310 (size: 0x8)
    class UImage* Circle1;                                                            // 0x0318 (size: 0x8)
    class UImage* Circle2;                                                            // 0x0320 (size: 0x8)
    class UImage* Dot2;                                                               // 0x0328 (size: 0x8)
    class UBP_Btn_Input_C* Input1;                                                    // 0x0330 (size: 0x8)
    class UBP_Btn_Input_C* Input2;                                                    // 0x0338 (size: 0x8)
    class UWidgetSwitcher* InRange;                                                   // 0x0340 (size: 0x8)
    class UOverlay* Takedown;                                                         // 0x0348 (size: 0x8)
    FVector Location;                                                                 // 0x0350 (size: 0xC)

    void VisibilityTest(class UImage* bpp__InteractionImage__pf, ESlateVisibility bpp__InVisibility__pf);
    void SetInRange(bool bpp__InRange__pf);
    void DisplayTakedownAction(bool bpp__Display__pf);
    void Construct();
}; // Size: 0x360

#endif
