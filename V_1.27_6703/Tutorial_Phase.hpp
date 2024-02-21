#ifndef UE4SS_SDK_Tutorial_Phase_HPP
#define UE4SS_SDK_Tutorial_Phase_HPP

class ATutorial_Phase_C : public AActor
{
    class UTutorial_ActionCounterComponent_C* ActionCounter_Component;                // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    FTutorial_Phase_CPhaseEnded PhaseEnded;                                           // 0x02C0 (size: 0x10)
    void PhaseEnded(bool AutomaticallySkip);
    class ABP_FightingPlayer_C* PlayerCharacter;                                      // 0x02D0 (size: 0x8)
    bool IsActive;                                                                    // 0x02D8 (size: 0x1)
    bool NeedsTutoAI;                                                                 // 0x02D9 (size: 0x1)
    TEnumAsByte<Enum_TutorialAITypes> AIBehaviour;                                    // 0x02DA (size: 0x1)
    FTutorial_Phase_CCreateCustomCondition CreateCustomCondition;                     // 0x02E0 (size: 0x10)
    void CreateCustomCondition(FText ConditionText);
    FTutorial_Phase_CValidCustomCondition ValidCustomCondition;                       // 0x02F0 (size: 0x10)
    void ValidCustomCondition(FText ConditionText);
    int32 AIIndex;                                                                    // 0x0300 (size: 0x4)
    FTutorial_Phase_CCreateHint CreateHint;                                           // 0x0308 (size: 0x10)
    void CreateHint(FText Tips);
    float StartDelay;                                                                 // 0x0318 (size: 0x4)
    FText DisplayedPhaseTitle;                                                        // 0x0320 (size: 0x18)
    bool EndPhase_AutomaticallySkip;                                                  // 0x0338 (size: 0x1)
    bool EndPhase_StopAIBehaviour;                                                    // 0x0339 (size: 0x1)
    FTutorial_Phase_CCreateInputWidget CreateInputWidget;                             // 0x0340 (size: 0x10)
    void CreateInputWidget(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FString DisplayedTips);
    FTutorial_Phase_CED_CleanInputWidgets ED_CleanInputWidgets;                       // 0x0350 (size: 0x10)
    void ED_CleanInputWidgets();
    FTutorial_Phase_CED_CleanHintWidgets ED_CleanHintWidgets;                         // 0x0360 (size: 0x10)
    void ED_CleanHintWidgets();
    bool WantRespawn;                                                                 // 0x0370 (size: 0x1)
    FTutorial_Phase_CED_WantRespawn ED_WantRespawn;                                   // 0x0378 (size: 0x10)
    void ED_WantRespawn();
    FTutorial_Phase_CED_TutoMode ED_TutoMode;                                         // 0x0388 (size: 0x10)
    void ED_TutoMode(bool Active);
    FTutorial_Phase_CED_DisplayTitle ED_DisplayTitle;                                 // 0x0398 (size: 0x10)
    void ED_DisplayTitle(TArray<FText>& Title, bool Display);
    FTutorial_Phase_CED_SetBehavior ED_SetBehavior;                                   // 0x03A8 (size: 0x10)
    void ED_SetBehavior(TEnumAsByte<Enum_TutorialAITypes> AIType);
    FTutorial_Phase_CED_CleanCounterWidgets ED_CleanCounterWidgets;                   // 0x03B8 (size: 0x10)
    void ED_CleanCounterWidgets();
    FTutorial_Phase_CED_CounterAlignement ED_CounterAlignement;                       // 0x03C8 (size: 0x10)
    void ED_CounterAlignement(bool LeftAlign);
    bool Left Align;                                                                  // 0x03D8 (size: 0x1)

    void UpdateCounterAlignement(bool LeftAlign);
    void CleanCounterWidgets();
    void CleanHintWidgets();
    void CleanInputWidgets();
    void DisplayInput(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FText DisplayedTips);
    void DisplayHint(FText Tips);
    void ConditionEnd(FText ConditionText);
    void ConditionStart(FText ConditionText, FText& ConditionCreated);
    void StartPhase(bool& Success);
    void EndPhase();
    void ED_CounterAlignement__DelegateSignature(bool LeftAlign);
    void ED_CleanCounterWidgets__DelegateSignature();
    void ED_SetBehavior__DelegateSignature(TEnumAsByte<Enum_TutorialAITypes> AIType);
    void ED_DisplayTitle__DelegateSignature(TArray<FText>& Title, bool Display);
    void ED_TutoMode__DelegateSignature(bool Active);
    void ED_WantRespawn__DelegateSignature();
    void ED_CleanHintWidgets__DelegateSignature();
    void ED_CleanInputWidgets__DelegateSignature();
    void CreateInputWidget__DelegateSignature(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FString DisplayedTips);
    void CreateHint__DelegateSignature(FText Tips);
    void ValidCustomCondition__DelegateSignature(FText ConditionText);
    void CreateCustomCondition__DelegateSignature(FText ConditionText);
    void PhaseEnded__DelegateSignature(bool AutomaticallySkip);
}; // Size: 0x3D9

#endif
