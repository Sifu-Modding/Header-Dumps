#ifndef UE4SS_SDK_BP_HUD_ContextualActions_HPP
#define UE4SS_SDK_BP_HUD_ContextualActions_HPP

class UBP_HUD_ContextualActions_C : public USCUserWidget
{
    class UTextBlock* HitText;
    class UBP_Btn_Input_C* InputGrab;
    class UBP_Btn_Input_C* InputKnocked;
    class UWidgetSwitcher* InputSwitcher;
    class UTextBlock* ThrowText;
    FVector Location;
    float Timer;
    float PlayerDistance;
    bool IsMoving;
    class AFightingCharacter* My Char;

    void VisibilityTest(class UImage* bpp__InteractionImage__pf, ESlateVisibility bpp__InVisibility__pf);
    void SetAction(EActionType bpp__ActionType__pf);
    void DisplayContextualAction(bool bpp__Display__pf);
};

#endif
