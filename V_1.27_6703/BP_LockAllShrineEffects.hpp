#ifndef UE4SS_SDK_BP_LockAllShrineEffects_HPP
#define UE4SS_SDK_BP_LockAllShrineEffects_HPP

class UBP_LockAllShrineEffects_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class TSubclassOf<UGameplayEffect>> ShrineEffects;                         // 0x0040 (size: 0x10)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void ExecuteUbergraph_BP_LockAllShrineEffects(int32 EntryPoint);
}; // Size: 0x50

#endif
