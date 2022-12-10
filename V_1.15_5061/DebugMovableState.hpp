#ifndef UE4SS_SDK_DebugMovableState_HPP
#define UE4SS_SDK_DebugMovableState_HPP

class UDebugMovableState_C : public UUserWidget
{
    class UTextBlock* MovableState;

    void UpdateMovableState(EDebugMovableState eMovableState);
};

#endif
