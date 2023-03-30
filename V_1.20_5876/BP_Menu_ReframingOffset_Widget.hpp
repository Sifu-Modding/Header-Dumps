#ifndef UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP
#define UE4SS_SDK_BP_Menu_ReframingOffset_Widget_HPP

class UBP_Menu_ReframingOffset_Widget_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0898 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x08A0 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x08A8 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x08B0 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x08B8 (size: 0x8)
    class UOverlay* HUDGuides;                                                        // 0x08C0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputBackHUD;                                           // 0x08C8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueHUD;                                       // 0x08D0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputDefault;                                           // 0x08D8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x08E0 (size: 0x8)
    class UWidgetSwitcher* OptionsSwitcher;                                           // 0x08E8 (size: 0x8)
    class USafeZone* SafeZone_options;                                                // 0x08F0 (size: 0x8)
    class UTextBlock* TextHUDinstruction;                                             // 0x08F8 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x0900 (size: 0x8)
    class UImage* TopRight;                                                           // 0x0908 (size: 0x8)

    bool BPE_OnInputAction(InputAction eAction);
    bool BPE_OnMenuActionSecondaryPressed();
    void UpdateHUD();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void ExecuteUbergraph_BP_Menu_ReframingOffset_Widget(int32 EntryPoint);
}; // Size: 0x910

#endif
