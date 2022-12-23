#ifndef UE4SS_SDK_WBP_BrowseMenu_HPP
#define UE4SS_SDK_WBP_BrowseMenu_HPP

class UWBP_BrowseMenu_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_AvailableInputContainer_C* BrowseContainer;
    class UBP_Btn_InputTip_C* BrowseSettingsInput;
    class UWBP_AvailableInputContainer_C* CloseContainer;
    class UBP_Btn_InputTip_C* CloseInput;
    class UWBP_AvailableInputContainer_C* FocusContainer;
    class UBP_Btn_InputTip_C* FocusInput;
    InputContext MappingContext;

    void GetSubMenu(class UWBP_ReplaySubMenuBase_C*& Menu);
    void ForceInputDisplayRefresh();
    void HasSubMenuDisplayed(bool& Displayed);
    void FocusInputAvailability(bool& _bOutAvailable);
    void GetMenu(class UReplayMenuWidget*& Menu);
    void BrowseInputAvailability(bool& _bOutAvailable);
    void InitializeInputAvailabilityOverrides();
    void Construct();
    void ExecuteUbergraph_WBP_BrowseMenu(int32 EntryPoint);
};

#endif
