#ifndef UE4SS_SDK_BP_SCPlayerStart_HPP
#define UE4SS_SDK_BP_SCPlayerStart_HPP

class ABP_SCPlayerStart_C : public ASCPlayerStart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    float LevelTitleDisplayDelay;                                                     // 0x03E8 (size: 0x4)
    TMap<class FName, class TSoftObjectPtr<AActor>> ActorsToRegisterToSequence;       // 0x03F0 (size: 0x50)

    void ReceiveBeginPlay();
    void LevelLaunchedEvent();
    void BPE_PrepareSequence(int32 _sequenceID);
    void ExecuteUbergraph_BP_SCPlayerStart(int32 EntryPoint);
}; // Size: 0x440

#endif
