#ifndef UE4SS_SDK_BP_SCFootsteps_Base_HPP
#define UE4SS_SDK_BP_SCFootsteps_Base_HPP

class UBP_SCFootsteps_Base_C : public UFootStepAnimNotify
{

    void FetchSoundSurfaceData(uint8 Surface, class UMeshComponent* MeshComp, FHitResult HitResults, bool& IsInGameplay, FVector& ImpactLocation, class AFightingCharacter*& Character, FStruct_Footsteps& FootSteps, class UAkComponent*& SCAkComponent, bool& BlockingHit);
}; // Size: 0x50

#endif
