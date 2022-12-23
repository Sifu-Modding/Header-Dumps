#ifndef UE4SS_SDK_BP_HUD_TakedownAction_HPP
#define UE4SS_SDK_BP_HUD_TakedownAction_HPP

class UBP_HUD_TakedownAction_C : public USCUserWidget
{
    class UWidgetAnimation* TakedownAnim;
    class UImage* Circle1;
    class UImage* Circle2;
    class UImage* Dot2;
    class UBP_Btn_Input_C* Input1;
    class UBP_Btn_Input_C* Input2;
    class UWidgetSwitcher* InRange;
    class UOverlay* Takedown;
    FVector Location;

    void VisibilityTest(class UImage* bpp__InteractionImage__pf, ESlateVisibility bpp__InVisibility__pf);
    void SetInRange(bool bpp__InRange__pf);
    void DisplayTakedownAction(bool bpp__Display__pf);
    void Construct();
};

#endif
