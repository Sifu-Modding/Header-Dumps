#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialTitle_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialTitle_HPP

class UNEW_BP_Widget_TutorialTitle_C : public UBP_HUD_Title_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)

    void SetPhaseTitle(TArray<FText>& DisplayedTitle, bool Display);
    void ToggleTitle(bool Condition);
    void ExecuteUbergraph_NEW_BP_Widget_TutorialTitle(int32 EntryPoint);
}; // Size: 0x2C8

#endif
