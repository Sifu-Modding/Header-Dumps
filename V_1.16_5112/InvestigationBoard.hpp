#ifndef UE4SS_SDK_InvestigationBoard_HPP
#define UE4SS_SDK_InvestigationBoard_HPP

class UInvestigationBoard_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Menu_BoardLines_C* BP_Menu_BoardLines;
    class UDetectiveBoardEntryList_C* DetectiveBoardEntryList;
    class UUniformGridPanel* ItemContainerGridPanel;
    class UBP_Btn_InputTip_C* NavigationButton_Back;
    class UBP_Btn_Title_C* Title;
    class UTextBlock* TitleTextBlock;
    class USCButton* FirstItem;
    TArray<class UDetectiveBoardItem_C*> Generated Items;

    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    bool BPE_OnAltPageNavigation(ECycleDirection _eDirection);
    bool BPE_OnBackButtonPressed();
    void ClearItemImages();
    void GenerateItems(int32 InCount, TArray<class UDetectiveBoardItem_C*>& ItemList);
    void GetLinesWidget(class UBP_Menu_BoardLines_C*& OutLinesWidget);
    void GetDisplayItems(TArray<class UDetectiveBoardItem_C*>& OutItemList);
    void Set Items(TArray<class UDetectiveLinkableItem_C*>& InItemList, TEnumAsByte<DetectiveInvestigationEnum> InInvestigationID, FText InvestigationText, bool itemClicked);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void ExecuteUbergraph_InvestigationBoard(int32 EntryPoint);
};

#endif
