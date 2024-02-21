#ifndef UE4SS_SDK_BP_SoundUtility_HPP
#define UE4SS_SDK_BP_SoundUtility_HPP

class UBP_SoundUtility_C : public UBlueprintFunctionLibrary
{

    void BPF_SetPlayerCurrentCheckpointSoundStates(class UObject* World Context Object, class UObject* __WorldContext);
    void BPF_StopEvent(TArray<class AAkAmbientSound*>& AkAmbientArray, class UAkAudioEvent* AkStopEvent, class UObject* __WorldContext);
    void BPF_PlayEvent(TArray<class AAkAmbientSound*>& AkAmbientArray, class UObject* __WorldContext);
    void BPF_IsCameraFacing(class AFightingCharacter* Character, class UObject* __WorldContext, bool& IsFacing);
    void BPF_PlaySoundDoor(class AActor* LockableDoor, class UAkAudioEvent* AkEvent, bool IsDoorClose, class UObject* __WorldContext);
    void DebugPrintSoundSwitch(FSCSoundSwitchValue Sound Switch, FName Group, FName State, class UObject* __WorldContext);
    void BPF_SetSoundSwitch(FSCSoundSwitchValue SWITCH, FName Group, FName State, bool Save Game, class UObject* __WorldContext);
    void BPF_IsSoundSwitchValid(FSCSoundSwitchValue SWITCH, class UObject* __WorldContext, bool& Result);
    void BPF_HandleFightStateEnd(FSoundMoodState Sound State, class UObject* __WorldContext);
    void BPF_IsSoundStateFightOrMelee(FSoundMoodState Sound State, class UObject* __WorldContext, bool& Result);
    void BPF_GetSoundStatePostFightSwitchs(FSoundMoodState Sound State, class UObject* __WorldContext, TArray<FSCSoundSwitchValue>& SWITCH);
    void BPF_OnSoundMoodChanged(FSoundMoodState New State, FSoundMoodState Previous State, class UObject* __WorldContext);
}; // Size: 0x28

#endif
