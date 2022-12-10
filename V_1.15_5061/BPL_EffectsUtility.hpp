#ifndef UE4SS_SDK_BPL_EffectsUtility_HPP
#define UE4SS_SDK_BPL_EffectsUtility_HPP

class UBPL_EffectsUtility_C : public UBlueprintFunctionLibrary
{

    void ComputeImpulse(FHitDescription HitDescription, bool DebugSphere, float RadiusIn, class UObject* __WorldContext, FVector& Impulse_Center, float& Radius);
    void Play FX(FName Play FX_Socket Name, class USkeletalMeshComponent* Mesh Compoennt, class UParticleSystem* Particle to Spawn, bool Is Attached, class UObject* __WorldContext);
    void Get Socket Name(FName Socket, class USkeletalMeshComponent* Mesh Component, TArray<uint8>& Extra infos, class UObject* __WorldContext, FName& Socket Name);
    void GetMirrorLimb(bool MirrorCheck, TEnumAsByte<ENUM_SelectedLimb> Index, class UObject* __WorldContext, TEnumAsByte<ENUM_SelectedLimb>& New Index);
    float Get Value From Bool(bool Bool, class UObject* __WorldContext);
    void GetGoreActivation(class UObject* __WorldContext, bool& Return Value);
    void GetTangeantFromVector(FVector Vector In, class UObject* __WorldContext, FVector& Vector Out);
};

#endif
