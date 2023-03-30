#ifndef UE4SS_SDK_DetectiveInvestigationItem_HPP
#define UE4SS_SDK_DetectiveInvestigationItem_HPP

class UDetectiveInvestigationItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UImage* HoverBkg;                                                           // 0x0270 (size: 0x8)
    class USCButton* MainButton;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* MainTextBlock;                                                  // 0x0280 (size: 0x8)
    FDetectiveInvestigationItem_COnShowInvestigation OnShowInvestigation;             // 0x0288 (size: 0x10)
    void OnShowInvestigation(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    TEnumAsByte<DetectiveInvestigationEnum> InvestigationId;                          // 0x0298 (size: 0x1)
    FText InvestigationText;                                                          // 0x02A0 (size: 0x18)
    FDetectiveInvestigationItem_COnHighlightInvestigation OnHighlightInvestigation;   // 0x02B8 (size: 0x10)
    void OnHighlightInvestigation(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    bool bForced;                                                                     // 0x02C8 (size: 0x1)
    bool bSilentlyEnabled;                                                            // 0x02C9 (size: 0x1)

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
}; // Size: 0x2CA

#endif
