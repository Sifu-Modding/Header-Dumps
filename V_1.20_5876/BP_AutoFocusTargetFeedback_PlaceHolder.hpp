#ifndef UE4SS_SDK_BP_AutoFocusTargetFeedback_PlaceHolder_HPP
#define UE4SS_SDK_BP_AutoFocusTargetFeedback_PlaceHolder_HPP

class ABP_AutoFocusTargetFeedback_PlaceHolder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02C0 (size: 0x8)
    float DisplayedTime;                                                              // 0x02C8 (size: 0x4)
    float DisplayTime;                                                                // 0x02CC (size: 0x4)
    class AActor* ForwardTarget;                                                      // 0x02D0 (size: 0x8)
    FVector Offset;                                                                   // 0x02D8 (size: 0xC)
    FVector ActorInitialLocation;                                                     // 0x02E4 (size: 0xC)

    void DisplayRequested(class ACharacter* Target, class APlayerController* Controller);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_AutoFocusTargetFeedback_PlaceHolder(int32 EntryPoint);
}; // Size: 0x2F0

#endif
