#ifndef UE4SS_SDK_BP_BlazingAtriumtransition_01_HPP
#define UE4SS_SDK_BP_BlazingAtriumtransition_01_HPP

class ABP_BlazingAtriumTransition_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ALevelSequenceActor* Sequence Actor;

    void StartBlazingAtriumTransition();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BlazingAtriumTransition_01(int32 EntryPoint);
};

#endif
