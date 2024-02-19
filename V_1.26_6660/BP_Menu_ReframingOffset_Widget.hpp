#ifndef UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP
#define UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP

class UBP_Menu_ReframingOffset_Widget_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x0918 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x0920 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x0928 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x0930 (size: 0x8)
    class UOverlay* HUDGuides;                                                        // 0x0938 (size: 0x8)
    class UBP_Btn_InputTip_C* InputBackHUD;                                           // 0x0940 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueHUD;                                       // 0x0948 (size: 0x8)
    class UBP_Btn_InputTip_C* InputDefault;                                           // 0x0950 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0958 (size: 0x8)
    class UWidgetSwitcher* OptionsSwitcher;                                           // 0x0960 (size: 0x8)
    class USafeZone* SafeZone_options;                                                // 0x0968 (size: 0x8)
    class UTextBlock* TextHUDinstruction;                                             // 0x0970 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x0978 (size: 0x8)
    class UImage* TopRight;                                                           // 0x0980 (size: 0x8)

    bool BPE_OnInputAction(InputAction eAction);
    bool BPE_OnMenuActionSecondaryPressed();
    void UpdateHUD();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void ExecuteUbergraph_BP_Menu_ReframingOffset_Widget(int32 EntryPoint);
}; // Size: 0x988

#endif
