#ifndef UE4SS_SDK_BP_PostCardScreenActor_HPP
#define UE4SS_SDK_BP_PostCardScreenActor_HPP

class ABP_PostCardScreenActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;
    FVector Timeline_0_NewTrack_2_2ED187BA46A7D8B6826E9DAB71463DAD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2ED187BA46A7D8B6826E9DAB71463DAD;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* PostCardMat;
    bool FadeToBlackInProgress;
    float DtDilated;
    float FadeToBlackTimer;
    float FadeToBlackDuration;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FadeToBlack(float Duration);
    void DestroyEffect();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PostCardScreenActor(int32 EntryPoint);
};

#endif
