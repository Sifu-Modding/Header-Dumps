#ifndef UE4SS_SDK_DetectiveBoardWidget_HPP
#define UE4SS_SDK_DetectiveBoardWidget_HPP

class UDetectiveBoardWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UBackgroundBlur* BackgroundBlur;
    class UBaseDetectiveBoard_C* BaseDetectiveBoard;
    class UBorder* Border_Bkg;
    class UImage* Composing;
    class UGridPanel* GamePlayTips_Grid;
    class UGridPanel* H1_Grid;
    class UGridPanel* H2_Grid;
    class UGridPanel* H3_Grid;
    class UGridPanel* H4_Grid;
    class UGridPanel* H5_Grid;
    class UImage* IMG_NotesToMyself_Chinese;
    class UCanvasPanel* ItemCanvas;
    class UImage* ItemsSlots_H1;
    class UImage* ItemsSlots_H2;
    class UImage* ItemsSlots_H3;
    class UImage* ItemsSlots_H4;
    class UImage* ItemsSlots_H5;
    class USizeBox* SizeBox_1;
    class UDetectiveBoardItem_C* TIPS_01;
    class UDetectiveBoardItem_C* TIPS_02;
    class UDetectiveBoardItem_C* TIPS_03;
    class UDetectiveBoardItem_C* TIPS_04;
    class UDetectiveBoardItem_C* TIPS_05;
    class UDetectiveBoardItem_C* TIPS_06;
    FDetectiveBoardWidget_CItemHoveredBoard ItemHoveredBoard;
    void ItemHoveredBoard(class UDetectiveBoardItem_C* Item, bool bByMouse);
    FDetectiveBoardWidget_CItemUnhoveredBoard ItemUnhoveredBoard;
    void ItemUnhoveredBoard(class UDetectiveBoardItem_C* Item);
    FDetectiveBoardWidget_CItemClickedBoard ItemClickedBoard;
    void ItemClickedBoard(class UDetectiveBoardItem_C* Item);
    TArray<class UWidget*> AllBoardItems;

    void Init Item Sizes();
    void GetMapMinMaxAlignement(FName InMapName, FVector2D& OutMin, FVector2D& OutMax);
    void Construct();
    void ItemHovered(class UDetectiveBoardItem_C* Item, bool bByMouse);
    void ItemUnhovered(class UDetectiveBoardItem_C* Item);
    void Item Clicked Board(class UDetectiveBoardItem_C* Item);
    void PreConstruct(bool IsDesignTime);
    void BPE_OnSynchronizeProperties();
    void ExecuteUbergraph_DetectiveBoardWidget(int32 EntryPoint);
    void ItemClickedBoard__DelegateSignature(class UDetectiveBoardItem_C* Item);
    void ItemUnhoveredBoard__DelegateSignature(class UDetectiveBoardItem_C* Item);
    void ItemHoveredBoard__DelegateSignature(class UDetectiveBoardItem_C* Item, bool bByMouse);
};

#endif
