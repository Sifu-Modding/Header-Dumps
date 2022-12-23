#ifndef UE4SS_SDK_InputManager_HPP
#define UE4SS_SDK_InputManager_HPP

class UInputManager_C : public UInputManager
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_InputManager(int32 EntryPoint);
};

#endif
