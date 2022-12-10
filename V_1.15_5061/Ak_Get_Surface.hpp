#ifndef UE4SS_SDK_Ak_Get_Surface_HPP
#define UE4SS_SDK_Ak_Get_Surface_HPP

class UAk_Get_Surface_C : public UAnimNotify_AkEvent_C
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
