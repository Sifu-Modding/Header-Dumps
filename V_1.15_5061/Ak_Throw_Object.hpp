#ifndef UE4SS_SDK_Ak_Throw_Object_HPP
#define UE4SS_SDK_Ak_Throw_Object_HPP

class UAk_Throw_Object_C : public UAnimNotify_AkEvent_C
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
