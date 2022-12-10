#ifndef UE4SS_SDK_DetectiveInvestigationItem_HPP
#define UE4SS_SDK_DetectiveInvestigationItem_HPP

class UDetectiveInvestigationItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* HoverBkg;
    class USCButton* MainButton;
    class UTextBlock* MainTextBlock;
    FDetectiveInvestigationItem_COnShowInvestigation OnShowInvestigation;
    void OnShowInvestigation(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    TEnumAsByte<DetectiveInvestigationEnum> InvestigationId;
    FText InvestigationText;
    FDetectiveInvestigationItem_COnHighlightInvestigation OnHighlightInvestigation;
    void OnHighlightInvestigation(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    bool bForced;
    bool bSilentlyEnabled;

    void UpdateUI(bool bInEnabled);
    void SetIsForced(bool bInForced, bool bForcedEnabled);
    void SetInvestigationInfos(TEnumAsByte<DetectiveInvestigationEnum> InInvestigationID, FText InInvestigationText);
    void Construct();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_ButtonFocused__DelegateSignature(class USCButton* _buttonFocused);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_ButtonUnFocused__DelegateSignature(class USCButton* _buttonUnfocused);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_DetectiveInvestigationItem(int32 EntryPoint);
    void OnHighlightInvestigation__DelegateSignature(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void OnShowInvestigation__DelegateSignature(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
};

#endif
