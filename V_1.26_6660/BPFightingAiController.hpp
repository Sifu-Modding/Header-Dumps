#ifndef UE4SS_SDK_BPFightingAiController_HPP
#define UE4SS_SDK_BPFightingAiController_HPP

class ABPFightingAiController_C : public AFightingAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x0458 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPFightingAiController(int32 EntryPoint);
}; // Size: 0x460

#endif
