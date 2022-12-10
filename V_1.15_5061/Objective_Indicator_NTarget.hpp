#ifndef UE4SS_SDK_Objective_Indicator_NTarget_HPP
#define UE4SS_SDK_Objective_Indicator_NTarget_HPP

class UObjective_Indicator_NTarget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UImage* CenterImage;
    class UImage* CenterImage_1;
    class UImage* PulseImage;
    class APlayerController* PlayerController;
    FVector LocToFocus;
    FLinearColor ColorDefault;
    FLinearColor ColorHidden;
    class ABaseCharacter* Actor;
    bool IsNTargetDead;
    bool Should NOTDisplay;
    bool Initialized;
    bool Hardpoint;
    bool OfBound;

    void Set Loc(const FVector& WorldPosition, bool& OnBound);
    void ShouldDisplayDot?(bool ShouldNOTDisplay);
    void UpdateActorToFocus(class ABaseCharacter* Actor);
    void Initialize();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Objective_Indicator_NTarget(int32 EntryPoint);
};

#endif
