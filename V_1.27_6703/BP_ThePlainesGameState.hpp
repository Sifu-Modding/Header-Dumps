#ifndef UE4SS_SDK_BP_ThePlainesGameState_HPP
#define UE4SS_SDK_BP_ThePlainesGameState_HPP

class ABP_ThePlainesGameState_C : public AThePlainesGameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03B8 (size: 0x8)

    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ThePlainesGameState(int32 EntryPoint);
}; // Size: 0x3C0

#endif
