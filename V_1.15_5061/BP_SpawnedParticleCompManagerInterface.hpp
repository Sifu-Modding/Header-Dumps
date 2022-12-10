#ifndef UE4SS_SDK_BP_SpawnedParticleCompManagerInterface_HPP
#define UE4SS_SDK_BP_SpawnedParticleCompManagerInterface_HPP

class IBP_SpawnedParticleCompManagerInterface_C : public IInterface
{

    void OnParticleCompPlayed(uint8 bpp__InOrderId__pf, class UParticleSystemComponent* bpp__InParticleComp__pf);
};

#endif
