#ifndef UE4SS_SDK_BP_Menu_BoardLines_HPP
#define UE4SS_SDK_BP_Menu_BoardLines_HPP

class UBP_Menu_BoardLines_C : public UUserWidget
{
    TArray<FUI_Line> Lines;
    FVector2D Center2D;
    bool InDeath;
    FLinearColor LineColor;
    TMap<class UGridPanel*, class FVector2D> GridSizes;
    TArray<FLinearColor> LineColors;

    void FindAndComputeGrid_Recursive(class UWidget* InWidget);
    FVector2D ComputeGridSize(class UGridPanel* InGrid);
    void OnLinesUpdated();
    FVector2D GetPinPointInParentSpace(class UWidget* InWidget, bool& bIsValid);
    FVector2D ComputeLinePinPoint(class UWidget* InWidget, bool& bIsValid);
    void OnPaint(FPaintContext& Context);
};

#endif
