#ifndef UE4SS_SDK_AnimNotify_Fengjie_GoldShader_HPP
#define UE4SS_SDK_AnimNotify_Fengjie_GoldShader_HPP

class UAnimNotify_Fengjie_GoldShader_C : public UAnimNotify
{
    bool Activate;                                                                    // 0x0038 (size: 0x1)

    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x39

#endif
