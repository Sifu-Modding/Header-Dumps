#ifndef UE4SS_SDK_BP_ThePlainesGameState_HPP
#define UE4SS_SDK_BP_ThePlainesGameState_HPP

class ABP_ThePlainesGameState_C : public AThePlainesGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ThePlainesGameState(int32 EntryPoint);
};

#endif
