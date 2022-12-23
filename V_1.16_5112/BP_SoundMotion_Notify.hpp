#ifndef UE4SS_SDK_BP_SoundMotion_Notify_HPP
#define UE4SS_SDK_BP_SoundMotion_Notify_HPP

class UBP_SoundMotion_Notify_C : public UAnimNotify
{
    class UAkAudioEvent* Event;
    FName MotionLocation;

    TArray<FName> LocationOption();
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
