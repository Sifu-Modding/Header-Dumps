#ifndef UE4SS_SDK_BP_UnlockAllShrineEffects_HPP
#define UE4SS_SDK_BP_UnlockAllShrineEffects_HPP

class UBP_UnlockAllShrineEffects_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class TSubclassOf<UGameplayEffect>> ShrineEffects;                         // 0x0040 (size: 0x10)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_UnlockAllShrineEffects(int32 EntryPoint);
}; // Size: 0x50

#endif
