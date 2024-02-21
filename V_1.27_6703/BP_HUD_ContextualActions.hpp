#ifndef UE4SS_SDK_BP_HUD_ContextualActions_HPP
#define UE4SS_SDK_BP_HUD_ContextualActions_HPP

class UBP_HUD_ContextualActions_C : public USCUserWidget
{
    class UTextBlock* HitText;                                                        // 0x0310 (size: 0x8)
    class UBP_Btn_Input_C* InputGrab;                                                 // 0x0318 (size: 0x8)
    class UBP_Btn_Input_C* InputKnocked;                                              // 0x0320 (size: 0x8)
    class UWidgetSwitcher* InputSwitcher;                                             // 0x0328 (size: 0x8)
    class UTextBlock* ThrowText;                                                      // 0x0330 (size: 0x8)
    FVector Location;                                                                 // 0x0338 (size: 0xC)
    float Timer;                                                                      // 0x0344 (size: 0x4)
    float PlayerDistance;                                                             // 0x0348 (size: 0x4)
    bool IsMoving;                                                                    // 0x034C (size: 0x1)
    class AFightingCharacter* My Char;                                                // 0x0350 (size: 0x8)

    void VisibilityTest(class UImage* bpp__InteractionImage__pf, ESlateVisibility bpp__InVisibility__pf);
    void SetAction(EActionType bpp__ActionType__pf);
    void DisplayContextualAction(bool bpp__Display__pf);
}; // Size: 0x358

#endif
