#ifndef UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP
#define UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP

class UBP_Menu_ReframingOffset_Widget_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur;
    class UImage* BottomLeft;
    class UImage* BottomRight;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UOverlay* HUDGuides;
    class UBP_Btn_InputTip_C* InputBackHUD;
    class UBP_Btn_InputTip_C* InputContinueHUD;
    class UBP_Btn_InputTip_C* InputDefault;
    class UInvalidationBox* InvalidationBox_0;
    class UWidgetSwitcher* OptionsSwitcher;
    class USafeZone* SafeZone_options;
    class UTextBlock* TextHUDinstruction;
    class UImage* TopLeft;
    class UImage* TopRight;

    bool BPE_OnInputAction(InputAction eAction);
    bool BPE_OnMenuActionSecondaryPressed();
    void UpdateHUD();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void ExecuteUbergraph_BP_Menu_ReframingOffset_Widget(int32 EntryPoint);
};

#endif
