#ifndef UE4SS_SDK_BP_SoundSeanP3_FireWhoosh_HPP
#define UE4SS_SDK_BP_SoundSeanP3_FireWhoosh_HPP

class UBP_SoundSeanP3_FireWhoosh_C : public UAnimNotify
{
    class UAkAudioEvent* AkEvent;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
