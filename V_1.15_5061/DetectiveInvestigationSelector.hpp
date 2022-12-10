#ifndef UE4SS_SDK_DetectiveInvestigationSelector_HPP
#define UE4SS_SDK_DetectiveInvestigationSelector_HPP

class UDetectiveInvestigationSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* InvestigationVerticalBox;
    class UImage* Paper_Bkg;
    class UBaseDetectiveBoard_C* DetectiveBoard;
    FDetectiveInvestigationSelector_CShowInvestigationBoard ShowInvestigationBoard;
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
};

#endif
