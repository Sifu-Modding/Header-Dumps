#ifndef UE4SS_SDK_BP_AutoFocusTargetFeedback_PlaceHolder_HPP
#define UE4SS_SDK_BP_AutoFocusTargetFeedback_PlaceHolder_HPP

class ABP_AutoFocusTargetFeedback_PlaceHolder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* Root;
    float DisplayedTime;
    float DisplayTime;
    class AActor* ForwardTarget;
    FVector Offset;
    FVector ActorInitialLocation;

    void DisplayRequested(class ACharacter* Target, class APlayerController* Controller);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_AutoFocusTargetFeedback_PlaceHolder(int32 EntryPoint);
};

#endif
