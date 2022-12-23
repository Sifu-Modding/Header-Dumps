#ifndef UE4SS_SDK_BP_LockAllShrineEffects_HPP
#define UE4SS_SDK_BP_LockAllShrineEffects_HPP

class UBP_LockAllShrineEffects_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class TSubclassOf<UGameplayEffect>> ShrineEffects;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void ExecuteUbergraph_BP_LockAllShrineEffects(int32 EntryPoint);
};

#endif
