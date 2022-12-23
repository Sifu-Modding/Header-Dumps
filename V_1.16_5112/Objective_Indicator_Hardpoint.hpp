#ifndef UE4SS_SDK_Objective_Indicator_Hardpoint_HPP
#define UE4SS_SDK_Objective_Indicator_Hardpoint_HPP

class UObjective_Indicator_Hardpoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UImage* CenterImage;
    class UCanvasPanel* Hardpoint_Canvas;
    class UImage* PulseImage;
    class UImage* PulseImageExt;
    class APlayerController* PlayerController;
    FVector LocToFocus;
    FLinearColor ColorDefault;
    FLinearColor ColorHidden;
    class ABaseCharacter* Actor;
    bool IsNTargetDead;
    bool Should NOTDisplay;
    bool Initialized;
    bool Hardpoint;

    void Set Loc(const FVector& WorldPosition);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateLocOfUIPoint(FVector WorldCoord);
    void ShouldDisplayDot?(bool ShouldNOTDisplay);
    void Initialize();
    void ExecuteUbergraph_Objective_Indicator_Hardpoint(int32 EntryPoint);
};

#endif
