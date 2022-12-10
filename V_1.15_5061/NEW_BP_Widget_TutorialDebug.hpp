#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialDebug_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialDebug_HPP

class UNEW_BP_Widget_TutorialDebug_C : public UUserWidget
{
    class UTextBlock* AI;
    class UTextBlock* AIType;
    class UTextBlock* Name;
    class UTextBlock* Number;

    void SetDebugElements(FString PhaseName, int32 PhaseNumber, bool NeedsAI, TEnumAsByte<Enum_TutorialAITypes> AIType);
};

#endif
