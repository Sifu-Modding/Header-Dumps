#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialDebug_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialDebug_HPP

class UNEW_BP_Widget_TutorialDebug_C : public UUserWidget
{
    class UTextBlock* AI;                                                             // 0x0268 (size: 0x8)
    class UTextBlock* AIType;                                                         // 0x0270 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* Number;                                                         // 0x0280 (size: 0x8)

    void SetDebugElements(FString PhaseName, int32 PhaseNumber, bool NeedsAI, TEnumAsByte<Enum_TutorialAITypes> AIType);
}; // Size: 0x288

#endif
