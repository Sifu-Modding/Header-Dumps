#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_DizzyAttack_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_DizzyAttack_HPP

class ATutorialPhase_Tutorial01_DizzyAttack_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    int32 CounterCount;                                                               // 0x03E8 (size: 0x4)

    void StartPhase(bool& Success);
    void CounterEnded(FStr_TutorialActionCounters Counter);
    void ExecuteUbergraph_TutorialPhase_Tutorial01_DizzyAttack(int32 EntryPoint);
}; // Size: 0x3EC

#endif
