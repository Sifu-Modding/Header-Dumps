#ifndef UE4SS_SDK_BPFightingAiController_HPP
#define UE4SS_SDK_BPFightingAiController_HPP

class ABPFightingAiController_C : public AFightingAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAIPerceptionComponent* AIPerception;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPFightingAiController(int32 EntryPoint);
};

#endif
