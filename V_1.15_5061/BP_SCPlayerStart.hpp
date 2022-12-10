#ifndef UE4SS_SDK_BP_SCPlayerStart_HPP
#define UE4SS_SDK_BP_SCPlayerStart_HPP

class ABP_SCPlayerStart_C : public ASCPlayerStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    float LevelTitleDisplayDelay;
    TMap<class FName, class TSoftObjectPtr<AActor>> ActorsToRegisterToSequence;

    void ReceiveBeginPlay();
    void LevelLaunchedEvent();
    void BPE_PrepareSequence(int32 _sequenceID);
    void ExecuteUbergraph_BP_SCPlayerStart(int32 EntryPoint);
};

#endif
