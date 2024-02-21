#ifndef UE4SS_SDK_BP_ArenaGameMode_HPP
#define UE4SS_SDK_BP_ArenaGameMode_HPP

class ABP_ArenaGameMode_C : public AArenaGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0498 (size: 0x8)
    float DefaultPixelShaderDistScale;                                                // 0x04A0 (size: 0x4)
    int32 HandleForbiddenSave;                                                        // 0x04A4 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ArenaGameMode(int32 EntryPoint);
}; // Size: 0x4A8

#endif
