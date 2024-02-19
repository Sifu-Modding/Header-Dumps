#ifndef UE4SS_SDK_DefaultGameMode_HPP
#define UE4SS_SDK_DefaultGameMode_HPP

class ADefaultGameMode_C : public AThePlainesGameMode
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0450 (size: 0x8)
    FDefaultGameMode_CNewEventDispatcher NewEventDispatcher;                          // 0x0458 (size: 0x10)
    void NewEventDispatcher();

    void NewEventDispatcher__DelegateSignature();
}; // Size: 0x468

#endif
