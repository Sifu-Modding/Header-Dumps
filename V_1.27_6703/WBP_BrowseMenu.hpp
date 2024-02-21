#ifndef UE4SS_SDK_WBP_BrowseMenu_HPP
#define UE4SS_SDK_WBP_BrowseMenu_HPP

class UWBP_BrowseMenu_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWBP_AvailableInputContainer_C* BrowseContainer;                            // 0x0318 (size: 0x8)
    class UBP_Btn_InputTip_C* BrowseSettingsInput;                                    // 0x0320 (size: 0x8)
    class UWBP_AvailableInputContainer_C* CloseContainer;                             // 0x0328 (size: 0x8)
    class UBP_Btn_InputTip_C* CloseInput;                                             // 0x0330 (size: 0x8)
    class UWBP_AvailableInputContainer_C* FocusContainer;                             // 0x0338 (size: 0x8)
    class UBP_Btn_InputTip_C* FocusInput;                                             // 0x0340 (size: 0x8)
    InputContext MappingContext;                                                      // 0x0348 (size: 0x1)

    void GetSubMenu(class UWBP_ReplaySubMenuBase_C*& Menu);
    void ForceInputDisplayRefresh();
    void HasSubMenuDisplayed(bool& Displayed);
    void FocusInputAvailability(bool& _bOutAvailable);
    void GetMenu(class UReplayMenuWidget*& Menu);
    void BrowseInputAvailability(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverrides();
    void Construct();
    void ExecuteUbergraph_WBP_BrowseMenu(int32 EntryPoint);
}; // Size: 0x349

#endif
