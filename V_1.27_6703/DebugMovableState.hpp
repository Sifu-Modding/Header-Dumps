#ifndef UE4SS_SDK_DebugMovableState_HPP
#define UE4SS_SDK_DebugMovableState_HPP

class UDebugMovableState_C : public UUserWidget
{
    class UTextBlock* MovableState;                                                   // 0x0268 (size: 0x8)

    void UpdateMovableState(EDebugMovableState eMovableState);
}; // Size: 0x270

#endif
