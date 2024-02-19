#ifndef UE4SS_SDK_DetectiveBoardWidget_HPP
#define UE4SS_SDK_DetectiveBoardWidget_HPP

class UDetectiveBoardWidget_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UImage* Background;                                                         // 0x0318 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x0320 (size: 0x8)
    class UBaseDetectiveBoard_C* BaseDetectiveBoard;                                  // 0x0328 (size: 0x8)
    class UBorder* Border_Bkg;                                                        // 0x0330 (size: 0x8)
    class UImage* Composing;                                                          // 0x0338 (size: 0x8)
    class UGridPanel* GamePlayTips_Grid;                                              // 0x0340 (size: 0x8)
    class UGridPanel* H1_Grid;                                                        // 0x0348 (size: 0x8)
    class UGridPanel* H2_Grid;                                                        // 0x0350 (size: 0x8)
    class UGridPanel* H3_Grid;                                                        // 0x0358 (size: 0x8)
    class UGridPanel* H4_Grid;                                                        // 0x0360 (size: 0x8)
    class UGridPanel* H5_Grid;                                                        // 0x0368 (size: 0x8)
    class UImage* IMG_NotesToMyself_Chinese;                                          // 0x0370 (size: 0x8)
    class UCanvasPanel* ItemCanvas;                                                   // 0x0378 (size: 0x8)
    class UImage* ItemsSlots_H1;                                                      // 0x0380 (size: 0x8)
    class UImage* ItemsSlots_H2;                                                      // 0x0388 (size: 0x8)
    class UImage* ItemsSlots_H3;                                                      // 0x0390 (size: 0x8)
    class UImage* ItemsSlots_H4;                                                      // 0x0398 (size: 0x8)
    class UImage* ItemsSlots_H5;                                                      // 0x03A0 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x03A8 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_01;                                             // 0x03B0 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_02;                                             // 0x03B8 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_03;                                             // 0x03C0 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_04;                                             // 0x03C8 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_05;                                             // 0x03D0 (size: 0x8)
    class UDetectiveBoardItem_C* TIPS_06;                                             // 0x03D8 (size: 0x8)
    FDetectiveBoardWidget_CItemHoveredBoard ItemHoveredBoard;                         // 0x03E0 (size: 0x10)
    void ItemHoveredBoard(class UDetectiveBoardItem_C* Item, bool bByMouse);
    FDetectiveBoardWidget_CItemUnhoveredBoard ItemUnhoveredBoard;                     // 0x03F0 (size: 0x10)
    void ItemUnhoveredBoard(class UDetectiveBoardItem_C* Item);
    FDetectiveBoardWidget_CItemClickedBoard ItemClickedBoard;                         // 0x0400 (size: 0x10)
    void ItemClickedBoard(class UDetectiveBoardItem_C* Item);
    TArray<class UWidget*> AllBoardItems;                                             // 0x0410 (size: 0x10)

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
}; // Size: 0x420

#endif
