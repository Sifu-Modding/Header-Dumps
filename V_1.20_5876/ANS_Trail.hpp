#ifndef UE4SS_SDK_ANS_Trail_HPP
#define UE4SS_SDK_ANS_Trail_HPP

class UANS_Trail_C : public UAnimNotifyState_Trail
{
    FString BaseName;                                                                 // 0x0058 (size: 0x10)

    bool Received_NotifyTickExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, bool bPrediction, const TArray<uint8>& ExtraInfoBufferArray);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    void Play FX Trail(FName 1st Socket, FName 2nd Socket, class USkeletalMeshComponent* Mesh Component, class UParticleSystem* Particle to Spawn);
    FString GetNotifyName();
    class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyEndExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, bool bPrediction, const TArray<uint8>& ExtraInfoBufferArray);
    void GetSockets(class USkeletalMeshComponent* Mesh Component, TArray<uint8>& Extra infos, FName& 1st SocketName, FName& 2nd SocketName);
    bool Received_NotifyBeginExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bPrediction, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x68

#endif
