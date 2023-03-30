#ifndef UE4SS_SDK_AN_PlayBarks_HPP
#define UE4SS_SDK_AN_PlayBarks_HPP

class UAN_PlayBarks_C : public UAnimNotify
{
    FName BarkToPlay;                                                                 // 0x0038 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x40

#endif
