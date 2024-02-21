#ifndef UE4SS_SDK_WBP_ReplayEditorBottomInputDisplay_HPP
#define UE4SS_SDK_WBP_ReplayEditorBottomInputDisplay_HPP

class UWBP_ReplayEditorBottomInputDisplay_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWBP_AvailableInputContainer_C* 0-LeaveModeContainer;                       // 0x0318 (size: 0x8)
    class UBP_Btn_InputTip_C* Back;                                                   // 0x0320 (size: 0x8)
    class UWidgetSwitcher* Back_Quit_Switcher;                                        // 0x0328 (size: 0x8)
    class UWBP_AvailableInputContainer_C* BackContainer;                              // 0x0330 (size: 0x8)
    class UBP_Btn_InputTip_C* LeaveMode;                                              // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_Hold_C* QuitHold;                                          // 0x0340 (size: 0x8)
    class UWBP_AvailableInputContainer_C* ReplayQuit;                                 // 0x0348 (size: 0x8)
    InputContext MappingContext;                                                      // 0x0350 (size: 0x1)

    void GetLeaveModeInputAvailability(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverrides();
    void ForceUpdateAvailabilityDisplay();
    void GetQuitInputAvailability(bool& _bOutAvailable);
    void GetParentMenu(class UReplayMenuWidget*& Menu);
    void GetBackInputAvailability(bool& _bOutAvailable);
    void GetScreenshotInputAvailability(bool& _bOutAvailable);
    void Construct();
    void ExecuteUbergraph_WBP_ReplayEditorBottomInputDisplay(int32 EntryPoint);
}; // Size: 0x351

#endif
