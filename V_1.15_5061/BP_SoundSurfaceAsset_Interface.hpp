#ifndef UE4SS_SDK_BP_SoundSurfaceAsset_Interface_HPP
#define UE4SS_SDK_BP_SoundSurfaceAsset_Interface_HPP

class IBP_SoundSurfaceAsset_Interface_C : public IInterface
{

    void IsPlayer(bool& bpp__IsPlayer__pf);
    void GetSoundSurfaceDataAsset(class UPrimaryDataAsset*& bpp__SoundSurfaceDataAsset__pf);
    void GetFightingCharacter(class AFightingCharacter*& bpp__Character__pf);
};

#endif
