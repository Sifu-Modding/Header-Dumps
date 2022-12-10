#ifndef UE4SS_SDK_Hideout_2_Sound_Global_HPP
#define UE4SS_SDK_Hideout_2_Sound_Global_HPP

class AHideout_2_Sound_Global_C : public ASoundLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<AActor> CorridorLightFlick_01;
    class AActor* Music_Player_ExecuteUbergraph_Hideout_2_Sound_Global_RefProperty;

    void BPE_OnMoodChanged(FSoundMoodState _previousState, FSoundMoodState _newState);
    void BPE_AllSoundBanksLoaded();
    void CustomEvent_0(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    void BndEvt__SCPlayerVolume3_3_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BPE_OnAppliedSoundStateFromSave();
    void ExecuteUbergraph_Hideout_2_Sound_Global(int32 EntryPoint);
};

#endif
