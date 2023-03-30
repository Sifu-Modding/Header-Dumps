#ifndef UE4SS_SDK_BaseDetectiveBoard_HPP
#define UE4SS_SDK_BaseDetectiveBoard_HPP

class UBaseDetectiveBoard_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UNamedSlot* BackgroundSlot;                                                 // 0x0318 (size: 0x8)
    class UBP_Menu_BoardLines_C* BP_Menu_BoardLines;                                  // 0x0320 (size: 0x8)
    class UImage* HidderImage;                                                        // 0x0328 (size: 0x8)
    class UNamedSlot* NamedSlot_60;                                                   // 0x0330 (size: 0x8)
    bool bIsShowingSelectedItems;                                                     // 0x0338 (size: 0x1)
    TMap<TEnumAsByte<DetectiveInvestigationEnum>, FText> InvestigationDescriptions;   // 0x0340 (size: 0x50)
    FBaseDetectiveBoard_COnShowSelectedItems OnShowSelectedItems;                     // 0x0390 (size: 0x10)
    void OnShowSelectedItems();
    TEnumAsByte<DetectiveInvestigationEnum> CurrentFilter;                            // 0x03A0 (size: 0x1)

    TArray<TEnumAsByte<DetectiveInvestigationEnum>> GetShownInvestigations();
    class UDetectiveLinkableItem_C* GetItemByEntryTagAsName(FName InEntryTagAsName);
    void GatherAllItemsFromWidget_Rec(class UWidget* InWidget, TArray<class UDetectiveLinkableItem_C*>& InListRef);
    void UpdateItemVisibility(class UUserWidget* InItem, bool bVisible);
    TArray<class UDetectiveLinkableItem_C*> GetItemsByInvestigationID(TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void OnlyShowByInvestigationID(TEnumAsByte<DetectiveInvestigationEnum> InvestigationId);
    void OnlyShowInvestigationLinked_Recursive(class UDetectiveBoardItem_C* Item, TArray<class UDetectiveLinkableItem_C*>& ItemListRef);
    void OnlyShowInvestigationLinked(class UDetectiveBoardItem_C* Item);
    void ShowAllItems(bool Editor, bool bUpdateLinked);
    void OnlyShowItems(TArray<class UDetectiveLinkableItem_C*>& ItemList);
    TArray<class UDetectiveLinkableItem_C*> GetAllItems();
    void UpdateDB();
    void UpdateLines(bool Editor, bool bUpdateLinked, TArray<class UDetectiveLinkableItem_C*>& ItemList);
    void BPE_OnSynchronizeProperties();
    void OnShowInvestigation_Event(class UDetectiveBoardItem_C* MainItem);
    void Construct();
    void ExecuteUbergraph_BaseDetectiveBoard(int32 EntryPoint);
    void OnShowSelectedItems__DelegateSignature();
}; // Size: 0x3A1

#endif
