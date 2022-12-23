#ifndef UE4SS_SDK_HitIngredient_HPP
#define UE4SS_SDK_HitIngredient_HPP

class IHitIngredient_C : public IInterface
{

    void Play_Hit_SFX(EGuardType bpp__GuardingType__pf, EHeight bpp__HittedHeight__pf, bool bpp__TargetHasWeapon__pf, bool bpp__IsResilientHit__pf, EAttackPowers bpp__AttackPower__pf);
    void GetWeight(EWeightCategory& bpp__Weight__pf);
    void GetInteractionIcon(class UTexture2D*& bpp__Icon__pf);
    void Get_Hit_VFX(EGuardType bpp__GuardingType__pf, TArray<class UParticleSystem*>& bpp__ParticleSystems__pf);
};

#endif
