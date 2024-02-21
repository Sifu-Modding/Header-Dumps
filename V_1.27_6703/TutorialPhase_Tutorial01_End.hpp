#ifndef UE4SS_SDK_TutorialPhase_Tutorial01_End_HPP
#define UE4SS_SDK_TutorialPhase_Tutorial01_End_HPP

class ATutorialPhase_Tutorial01_End_C : public ATutorial_Phase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)

    void StartPhase(bool& Success);
    void EndPhase();
    void ExecuteUbergraph_TutorialPhase_Tutorial01_End(int32 EntryPoint);
}; // Size: 0x3E8

#endif
