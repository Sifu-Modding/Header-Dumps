#ifndef UE4SS_SDK_BP_TimeDilationActor_HPP
#define UE4SS_SDK_BP_TimeDilationActor_HPP

class ABP_TimeDilationActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    float TimeDilation;                                                               // 0x02C0 (size: 0x4)
    float PreviousTimeDilation;                                                       // 0x02C4 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TimeDilationActor(int32 EntryPoint);
}; // Size: 0x2C8

#endif
