#ifndef UE4SS_SDK_BaseDetectiveBoard_HPP
#define UE4SS_SDK_BaseDetectiveBoard_HPP

class UBaseDetectiveBoard_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* BackgroundSlot;
    class UBP_Menu_BoardLines_C* BP_Menu_BoardLines;
    class UImage* HidderImage;
    class UNamedSlot* NamedSlot_60;
    bool bIsShowingSelectedItems;
    TMap<TEnumAsByte<DetectiveInvestigationEnum>, FText> InvestigationDescriptions;
    FBaseDetectiveBoard_COnShowSelectedItems OnShowSelectedItems;
    void OnShowSelectedItems();
    TEnumAsByte<DetectiveInvestigationEnum> CurrentFilter;

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
};

#endif
