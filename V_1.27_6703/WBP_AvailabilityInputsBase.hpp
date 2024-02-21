#ifndef UE4SS_SDK_WBP_AvailabilityInputsBase_HPP
#define UE4SS_SDK_WBP_AvailabilityInputsBase_HPP

class UWBP_AvailabilityInputsBase_C : public USCUserWidget
{
    class UPanelWidget* Root;                                                         // 0x0310 (size: 0x8)
    bool bHasAnyVisibleChildrens;                                                     // 0x0318 (size: 0x1)
    FWBP_AvailabilityInputsBase_COnMenuVisibilityRequestUpdate OnMenuVisibilityRequestUpdate; // 0x0320 (size: 0x10)
    void OnMenuVisibilityRequestUpdate();
    bool bPreviouslyHadAnyVisibleChildrens;                                           // 0x0330 (size: 0x1)

    void GetParentMenu(class UReplayMenuWidget*& Menu);
    void ApplyMappingContext(InputContext Context);
    void InitializeInputAvailabilityOverride();
    void IsAnyAvailableInputVisible(class UPanelWidget* Root, bool& Return);
    void OnAvailableInputVisibilityChanged(ESlateVisibility InVisibility);
    void Initialize(class UPanelWidget* Root);
    void OnMenuVisibilityRequestUpdate__DelegateSignature();
}; // Size: 0x331

#endif
