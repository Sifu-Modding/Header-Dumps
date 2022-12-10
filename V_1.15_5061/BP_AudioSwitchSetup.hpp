#ifndef UE4SS_SDK_BP_AudioSwitchSetup_HPP
#define UE4SS_SDK_BP_AudioSwitchSetup_HPP

class ABP_AudioSwitchSetup_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AAkAmbientSound*> EventFireVillage;
    TArray<class AAkAmbientSound*> EventNightClub;
    float AmbFireVillageRTPCValue;
    float AmbNightClubRTPCValue;
    FSCSoundSwitchValue SoundStateFireVillage;
    FSCSoundSwitchValue SoundStateNightClub;

    void Stop Event(class AAkAmbientSound* EventToStop);
    void Play Event(class AAkAmbientSound* EventToPlay);
    void AudioSwitchVillage();
    void AudioSwitchClub();
    void ExecuteUbergraph_BP_AudioSwitchSetup(int32 EntryPoint);
};

#endif
