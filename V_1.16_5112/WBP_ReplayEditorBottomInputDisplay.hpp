#ifndef UE4SS_SDK_WBP_ReplayEditorBottomInputDisplay_HPP
#define UE4SS_SDK_WBP_ReplayEditorBottomInputDisplay_HPP

class UWBP_ReplayEditorBottomInputDisplay_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_AvailableInputContainer_C* 0-LeaveModeContainer;
    class UBP_Btn_InputTip_C* Back;
    class UWidgetSwitcher* Back_Quit_Switcher;
    class UWBP_AvailableInputContainer_C* BackContainer;
    class UBP_Btn_InputTip_C* LeaveMode;
    class UBP_Btn_InputTip_C* Quit_1;
    class UWBP_AvailableInputContainer_C* ReplayQuit;
    InputContext MappingContext;

    void GetLeaveModeInputAvailability(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverrides();
    void ForceUpdateAvailabilityDisplay();
    void GetQuitInputAvailability(bool& _bOutAvailable);
    void GetParentMenu(class UReplayMenuWidget*& Menu);
    void GetBackInputAvailability(bool& _bOutAvailable);
    void GetScreenshotInputAvailability(bool& _bOutAvailable);
    void Construct();
    void ExecuteUbergraph_WBP_ReplayEditorBottomInputDisplay(int32 EntryPoint);
};

#endif
