#ifndef UE4SS_SDK_InvestigationBoard_HPP
#define UE4SS_SDK_InvestigationBoard_HPP

class UInvestigationBoard_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03E0 (size: 0x8)
    class UBP_Menu_BoardLines_C* BP_Menu_BoardLines;                                  // 0x03E8 (size: 0x8)
    class UDetectiveBoardEntryList_C* DetectiveBoardEntryList;                        // 0x03F0 (size: 0x8)
    class UUniformGridPanel* ItemContainerGridPanel;                                  // 0x03F8 (size: 0x8)
    class UBP_Btn_InputTip_C* NavigationButton_Back;                                  // 0x0400 (size: 0x8)
    class UBP_Btn_Title_C* Title;                                                     // 0x0408 (size: 0x8)
    class UTextBlock* TitleTextBlock;                                                 // 0x0410 (size: 0x8)
    class USCButton* FirstItem;                                                       // 0x0418 (size: 0x8)
    TArray<class UDetectiveBoardItem_C*> Generated Items;                             // 0x0420 (size: 0x10)

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
}; // Size: 0x430

#endif
