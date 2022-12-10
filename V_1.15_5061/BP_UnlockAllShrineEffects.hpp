#ifndef UE4SS_SDK_BP_UnlockAllShrineEffects_HPP
#define UE4SS_SDK_BP_UnlockAllShrineEffects_HPP

class UBP_UnlockAllShrineEffects_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class TSubclassOf<UGameplayEffect>> ShrineEffects;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_UnlockAllShrineEffects(int32 EntryPoint);
};

#endif
