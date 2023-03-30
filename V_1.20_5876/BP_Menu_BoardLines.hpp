#ifndef UE4SS_SDK_BP_Menu_BoardLines_HPP
#define UE4SS_SDK_BP_Menu_BoardLines_HPP

class UBP_Menu_BoardLines_C : public UUserWidget
{
    TArray<FUI_Line> Lines;                                                           // 0x0268 (size: 0x10)
    FVector2D Center2D;                                                               // 0x0278 (size: 0x8)
    bool InDeath;                                                                     // 0x0280 (size: 0x1)
    FLinearColor LineColor;                                                           // 0x0284 (size: 0x10)
    TMap<class UGridPanel*, class FVector2D> GridSizes;                               // 0x0298 (size: 0x50)
    TArray<FLinearColor> LineColors;                                                  // 0x02E8 (size: 0x10)

    void FindAndComputeGrid_Recursive(class UWidget* InWidget);
    FVector2D ComputeGridSize(class UGridPanel* InGrid);
    void OnLinesUpdated();
    FVector2D GetPinPointInParentSpace(class UWidget* InWidget, bool& bIsValid);
    FVector2D ComputeLinePinPoint(class UWidget* InWidget, bool& bIsValid);
    void OnPaint(FPaintContext& Context);
}; // Size: 0x2F8

#endif
