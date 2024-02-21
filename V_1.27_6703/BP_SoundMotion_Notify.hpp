#ifndef UE4SS_SDK_BP_SoundMotion_Notify_HPP
#define UE4SS_SDK_BP_SoundMotion_Notify_HPP

class UBP_SoundMotion_Notify_C : public UAnimNotify
{
    class UAkAudioEvent* Event;                                                       // 0x0038 (size: 0x8)
    FName MotionLocation;                                                             // 0x0040 (size: 0x8)

    TArray<FName> LocationOption();
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x48

#endif
