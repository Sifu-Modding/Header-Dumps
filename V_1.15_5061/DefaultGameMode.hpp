#ifndef UE4SS_SDK_DefaultGameMode_HPP
#define UE4SS_SDK_DefaultGameMode_HPP

class ADefaultGameMode_C : public AThePlainesGameMode
{
    class USceneComponent* DefaultSceneRoot;
    FDefaultGameMode_CNewEventDispatcher NewEventDispatcher;
    void NewEventDispatcher();

    void NewEventDispatcher__DelegateSignature();
};

#endif
