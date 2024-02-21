#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialHintManager_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialHintManager_HPP

class UNEW_BP_Widget_TutorialHintManager_C : public UUserWidget
{
    class UVerticalBox* VS_Hints;                                                     // 0x0268 (size: 0x8)
    TArray<class UNEW_BP_Widget_TutorialHint_C*> SpawnedHints;                        // 0x0270 (size: 0x10)

    void CleanAllTips();
    void CreateTips(FText Tips);
}; // Size: 0x280

#endif
