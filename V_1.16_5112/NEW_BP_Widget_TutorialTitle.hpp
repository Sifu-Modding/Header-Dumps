#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialTitle_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialTitle_HPP

class UNEW_BP_Widget_TutorialTitle_C : public UBP_HUD_Title_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetPhaseTitle(TArray<FText>& DisplayedTitle, bool Display);
    void ToggleTitle(bool Condition);
    void ExecuteUbergraph_NEW_BP_Widget_TutorialTitle(int32 EntryPoint);
};

#endif
