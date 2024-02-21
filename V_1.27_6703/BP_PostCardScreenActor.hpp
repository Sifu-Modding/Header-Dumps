#ifndef UE4SS_SDK_BP_PostCardScreenActor_HPP
#define UE4SS_SDK_BP_PostCardScreenActor_HPP

class ABP_PostCardScreenActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    FVector Timeline_0_NewTrack_2_2ED187BA46A7D8B6826E9DAB71463DAD;                   // 0x02C8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2ED187BA46A7D8B6826E9DAB71463DAD; // 0x02D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02D8 (size: 0x8)
    class UMaterialInstanceDynamic* PostCardMat;                                      // 0x02E0 (size: 0x8)
    bool FadeToBlackInProgress;                                                       // 0x02E8 (size: 0x1)
    float DtDilated;                                                                  // 0x02EC (size: 0x4)
    float FadeToBlackTimer;                                                           // 0x02F0 (size: 0x4)
    float FadeToBlackDuration;                                                        // 0x02F4 (size: 0x4)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FadeToBlack(float Duration);
    void DestroyEffect();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PostCardScreenActor(int32 EntryPoint);
}; // Size: 0x2F8

#endif
