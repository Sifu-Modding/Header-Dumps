#ifndef UE4SS_SDK_Objective_Indicator_NTarget_HPP
#define UE4SS_SDK_Objective_Indicator_NTarget_HPP

class UObjective_Indicator_NTarget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Pulse;                                                    // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_94;                                               // 0x0278 (size: 0x8)
    class UOverlay* diamond;                                                          // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_196;                                                          // 0x0298 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x02A0 (size: 0x8)
    FVector LocToFocus;                                                               // 0x02A8 (size: 0xC)
    FLinearColor ColorDefault;                                                        // 0x02B4 (size: 0x10)
    FLinearColor ColorHidden;                                                         // 0x02C4 (size: 0x10)
    class ABaseCharacter* Actor;                                                      // 0x02D8 (size: 0x8)
    bool IsNTargetDead;                                                               // 0x02E0 (size: 0x1)
    bool Should NOTDisplay;                                                           // 0x02E1 (size: 0x1)
    bool Initialized;                                                                 // 0x02E2 (size: 0x1)
    bool Hardpoint;                                                                   // 0x02E3 (size: 0x1)
    bool OfBound;                                                                     // 0x02E4 (size: 0x1)
    bool NeedPulse;                                                                   // 0x02E5 (size: 0x1)
    bool NeedPulsePreviousState;                                                      // 0x02E6 (size: 0x1)

    void UpdateLocalScale(FVector2D Scale);
    void Set Loc(const FVector& WorldPosition, bool& OnBound);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShouldDisplayDot?(bool ShouldNOTDisplay);
    void UpdateActorToFocus(class ABaseCharacter* Actor);
    void Initialize();
    void ExecuteUbergraph_Objective_Indicator_NTarget(int32 EntryPoint);
}; // Size: 0x2E7

#endif
