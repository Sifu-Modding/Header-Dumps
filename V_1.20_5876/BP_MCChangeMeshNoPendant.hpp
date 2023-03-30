#ifndef UE4SS_SDK_BP_MCChangeMeshNoPendant_HPP
#define UE4SS_SDK_BP_MCChangeMeshNoPendant_HPP

class UBP_MCChangeMeshNoPendant_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TEnumAsByte<ECheatSwapMesh> eSwapMesh;                                            // 0x0040 (size: 0x1)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MCChangeMeshNoPendant(int32 EntryPoint);
}; // Size: 0x41

#endif
