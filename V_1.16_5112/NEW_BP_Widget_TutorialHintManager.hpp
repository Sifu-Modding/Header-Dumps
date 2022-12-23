#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialHintManager_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialHintManager_HPP

class UNEW_BP_Widget_TutorialHintManager_C : public UUserWidget
{
    class UVerticalBox* VS_Hints;
    TArray<class UNEW_BP_Widget_TutorialHint_C*> SpawnedHints;

    void CleanAllTips();
    void CreateTips(FText Tips);
};

#endif
