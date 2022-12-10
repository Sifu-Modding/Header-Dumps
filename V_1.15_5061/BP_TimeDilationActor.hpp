#ifndef UE4SS_SDK_BP_TimeDilationActor_HPP
#define UE4SS_SDK_BP_TimeDilationActor_HPP

class ABP_TimeDilationActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float TimeDilation;
    float PreviousTimeDilation;

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TimeDilationActor(int32 EntryPoint);
};

#endif
