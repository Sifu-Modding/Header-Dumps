#ifndef UE4SS_SDK_WBP_ReplayActorsTargetMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayActorsTargetMenuItem_HPP

class UWBP_ReplayActorsTargetMenuItem_C : public UWBP_SpinBoxText_C
{
    TArray<class AFightingCharacter*> FightingCharacters;
    FText AIText;
    class ABP_AutoFocusTargetFeedback_PlaceHolder_C* ActorTargetFeedback;
    TSubclassOf<class ABP_AutoFocusTargetFeedback_PlaceHolder_C> TargetActorFeedbackClass;
    bool ResetToFirstOption;

    void DestroyTargetFeedback();
    void UpdateTargetFeedback(bool ForceHide);
    void GetCurrentTarget(class AFightingCharacter*& Character);
    void AddOption(class AFightingCharacter* FightingCharacter);
    FString Get Target Unique Name(const class AActor* _actor);
    void Update Options();
    void GetTextContent(FText& Content);
};

#endif
