#ifndef UE4SS_SDK_DetectiveInvestigationSelector_HPP
#define UE4SS_SDK_DetectiveInvestigationSelector_HPP

class UDetectiveInvestigationSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UVerticalBox* InvestigationVerticalBox;                                     // 0x0270 (size: 0x8)
    class UImage* Paper_Bkg;                                                          // 0x0278 (size: 0x8)
    class UBaseDetectiveBoard_C* DetectiveBoard;                                      // 0x0280 (size: 0x8)
    FDetectiveInvestigationSelector_CShowInvestigationBoard ShowInvestigationBoard;   // 0x0288 (size: 0x10)
    void ShowInvestigationBoard(TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);

    void ForceCurrentInvestigation();
    void SetForcedInvestigation(TEnumAsByte<DetectiveInvestigationEnum> InInvestigationID);
    void SetItemBlocked(bool bBlocked);
    bool FocusCurrentFilter();
    bool FocusFirstEnabledFilter();
    void ResetFilters();
    void SetDetectiveBoard(class UBaseDetectiveBoard_C* InDetectiveBoard);
    void OnShowInvestigation(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void Construct();
    void OnShowInvestigationBoard(class UDetectiveInvestigationItem_C* Caller, TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void ExecuteUbergraph_DetectiveInvestigationSelector(int32 EntryPoint);
    void ShowInvestigationBoard__DelegateSignature(TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
}; // Size: 0x298

#endif
