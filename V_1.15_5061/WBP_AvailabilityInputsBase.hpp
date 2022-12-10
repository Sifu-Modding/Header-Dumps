#ifndef UE4SS_SDK_WBP_AvailabilityInputsBase_HPP
#define UE4SS_SDK_WBP_AvailabilityInputsBase_HPP

class UWBP_AvailabilityInputsBase_C : public USCUserWidget
{
    class UPanelWidget* Root;
    bool bHasAnyVisibleChildrens;
    FWBP_AvailabilityInputsBase_COnMenuVisibilityRequestUpdate OnMenuVisibilityRequestUpdate;
    void OnMenuVisibilityRequestUpdate();
    bool bPreviouslyHadAnyVisibleChildrens;

    void GetParentMenu(class UReplayMenuWidget*& Menu);
    void ApplyMappingContext(InputContext Context);
    void InitializeInputAvailabilityOverride();
    void IsAnyAvailableInputVisible(class UPanelWidget* Root, bool& Return);
    void OnAvailableInputVisibilityChanged(ESlateVisibility InVisibility);
    void Initialize(class UPanelWidget* Root);
    void OnMenuVisibilityRequestUpdate__DelegateSignature();
};

#endif
