#ifndef UE4SS_SDK_WBP_ReplayActorsTargetMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayActorsTargetMenuItem_HPP

class UWBP_ReplayActorsTargetMenuItem_C : public UWBP_SpinBoxText_C
{
    TArray<class AFightingCharacter*> FightingCharacters;                             // 0x0570 (size: 0x10)
    FText AIText;                                                                     // 0x0580 (size: 0x18)
    class ABP_AutoFocusTargetFeedback_PlaceHolder_C* ActorTargetFeedback;             // 0x0598 (size: 0x8)
    TSubclassOf<class ABP_AutoFocusTargetFeedback_PlaceHolder_C> TargetActorFeedbackClass; // 0x05A0 (size: 0x8)
    bool ResetToFirstOption;                                                          // 0x05A8 (size: 0x1)

    void DestroyTargetFeedback();
    void UpdateTargetFeedback(bool ForceHide);
    void GetCurrentTarget(class AFightingCharacter*& Character);
    void AddOption(class AFightingCharacter* FightingCharacter);
    FString Get Target Unique Name(const class AActor* _actor);
    void Update Options();
    void GetTextContent(FText& Content);
}; // Size: 0x5A9

#endif
