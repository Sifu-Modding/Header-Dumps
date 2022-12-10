#ifndef UE4SS_SDK_BP_ArenaGameMode_HPP
#define UE4SS_SDK_BP_ArenaGameMode_HPP

class ABP_ArenaGameMode_C : public AArenaGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float DefaultPixelShaderDistScale;
    int32 HandleForbiddenSave;

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ArenaGameMode(int32 EntryPoint);
};

#endif
