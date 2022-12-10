#ifndef UE4SS_SDK_BP_LevelScoringTrigger_HPP
#define UE4SS_SDK_BP_LevelScoringTrigger_HPP

class ABP_LevelScoringTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__BP_LevelScoringTrigger_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LevelScoringTrigger(int32 EntryPoint);
};

#endif
