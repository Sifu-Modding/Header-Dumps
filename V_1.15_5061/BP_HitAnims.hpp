#ifndef UE4SS_SDK_BP_HitAnims_HPP
#define UE4SS_SDK_BP_HitAnims_HPP

class UBP_HitAnims_C : public UHitAnimRequest
{
    FHittedAnimations LightHitAnimations;
    FHittedAnimations MediumHitAnimations;
    FHittedAnimations StrongHitAnimations;
    FHittedAnimations KnockdownHitAnimations;
    FCardinalAnimContainer StayInKnockdownHitAnimations;
    FCardinalAnimContainer OutOfKnockdownHitAnimations;
    FHittedAnimations LightDeathAnimations;
    FHittedAnimations StrongDeathAnimations;
    FCardinalHittedAnimations LowPushableAnimations;
    FFrontBackHittedAnimations DownDeathAnimations;
    class UAnimSequence* DownLoop;
    class UAnimSequence* DizzyLoopHead;
    class UAnimSequence* PushedLoop;
    class UAnimSequence* PushedHitLowCol_L;
    bool MirrorHitLowCol_L;
    class UAnimSequence* PushedHitLowCol_R;
    bool MirrorHitLowCol_R;
    class UAnimSequence* PushedWallSplash;
    class UAnimSequence* PushedHitAnimation;
    class UAnimSequence* FallHitAnimation;
    class UAnimSequence* FallDeathAnimation;
    class UAnimSequence* HitByPushedChara;
    class UAnimSequence* StructureBrokenLoop;
    class UAnimSequence* WallSplahDeath;
    float ALGenericAllDelayedFrameNB;
    float ALHittedCancelStartingFrame;
    bool MirrorHitOnGuard;
    TArray<FHittedOrderServiceInfos> GenericToDownOrderServices;
    TArray<FHittedOrderServiceInfos> HitToKnockeddownServices;
    TArray<class UAnimSequence*> DeflectHighRightAnimations;
    TArray<class UAnimSequence*> DeflectHighLeftAnimations;
    TArray<class UAnimSequence*> DeflectMidRightAnimations;
    TArray<class UAnimSequence*> DeflectMidLeftAnimations;
    TArray<class UAnimSequence*> DeflectLowRightAnimations;
    TArray<class UAnimSequence*> DeflectLowLeftAnimations;
    FHittedAnimations WeaponLightHitAnimations;
    FHittedAnimations WeaponMediumHitAnimations;
    FHittedAnimations WeaponStrongHitAnimations;
    FAnimContainer WeaponPushedAnim;
    FAnimContainer SlopeToGround;
    FAnimContainer GroundToSlope;
    TMap<class EnvironmentalImpactReceiverType, class UAnimSequence*> WallSplashOnObject;
    FHitAnimsPerDataTableContainer HitAnimsPerData;
    TArray<FHittedOrderServiceInfos> LandingToDownOrderServices;
    class UAnimSequence* DizzyLoopPlexus;
    class UAnimSequence* DizzyLoopGroin;
    class UAnimSequence* DizzyLoopBelly;
    FHittedAnimations WeaponLightDeathAnimations;
    FHittedAnimations WeaponStrongDeathAnimations;
    FFrontBackHittedAnimations WeaponDownDeathAnimations;
    class UAnimSequence* WeaponPushedHitLowCol;
    class UAnimSequence* WeaponFallDeathAnimation;
    class UAnimSequence* WeaponWallSplashDeath;
    FCardinalHittedAnimations WeaponLowPushableAnimations;
    class UAnimSequence* WeaponFallHitAnimation;
    FAnimContainer WeaponSlopeToGround;
    FAnimContainer WeaponGroundToSlope;
    FCardinalAnimContainer KnockdownByHeavyThrowableContainerAnimations;
    FCardinalAnimContainer KnockdownByHeavyThrowableWeaponContainerAnimations;
    class UAnimSequence* PushedGuard;
    class UAnimSequence* PushedDeath;
    FEditableOrderType EditableSlopeHittedOrderType;
    TArray<FHittedOrderServiceInfos> AlreadyDownOrderServices;
    class UAnimSequence* PushedMid2HitAnimation;
    FHitAnimsPerDataTableContainer DeathAnimsPerData;
    FAnimSyncContainer ParryFromDownSuccess;
    bool DizzyMirrorable;

    void ShouldMirrorDownLoopOnGoToDown(bool bpp__bMirrorQuadrant__pf, EQuadrantTypes bpp__InQuadrant__pf, ESCCardinalPoints bpp__InCardinal__pf, bool& bpp__bOutShouldMirror__pf);
    void SelectAndUpdateRandomAnim(class AFightingCharacter* bpp__Defender__pf, TArray<class UAnimSequence*>& bpp__AnimToChooseFrom__pf, class UAnimSequence*& bpp__Anim__pf);
    void HandleStructureBroken(FHittedAnimContainer& bpp__In__pf, FImpactResult& bpp__Impact__pf, bool bpp__IsMC__pf, class AFightingCharacter* bpp__Defender__pf, FHittedAnimContainer& bpp__Out__pf);
    void GetDeflectAnimation(EHeight bpp__Height__pf, EAttackOrigin bpp__Origin__pf, class AFightingCharacter* bpp__Defender__pf, class UAnimSequence*& bpp__Anim__pf);
    void GetComputedOrigin(EAttackOrigin bpp__RawOrigin__pf, bool bpp__IsAttackMirror__pf, EAttackOrigin& bpp__ComputedOrigin__pf);
    class UAnimSequence* GetAnimationFromImpactContext(const FImpactResult& bpp__ImpactResult__pf__const, FHittedAnimations bpp__Animations__pf, bool bpp__Mirror__pf, EQuadrantTypes bpp__Quadrant__pf, class AFightingCharacter* bpp__Defender__pf, FHittedAnimations bpp__WeaponAnimations__pf, FHitRequest& bpp__HitRequest__pf, bool& bpp__MirrorAnim__pf, class UAnimSequence*& bpp__WeaponAnimValue__pf);
    class UAnimSequence* GetAnimationFromFlatImpactContext(const FImpactResult& bpp__ImpactResult__pf__const, FFlatHittedAnimations bpp__Animations__pf, bool bpp__Mirror__pf, EQuadrantTypes bpp__Quadrant__pf, class AFightingCharacter* bpp__Defender__pf, FFlatHittedAnimations bpp__WeaponAnimations__pf, bool& bpp__MirrorAnim__pf, class UAnimSequence*& bpp__WeaponAnimValue__pf);
    TArray<class UAnimSequence*> BPE_GetHitDeathAnimations();
    void BPE_GetHitAnimation(const FHitRequest& bpp___request__pf__const, const FImpactResult& bpp___impact__pf__const, class AFightingCharacter* bpp___defender__pf, FHittedAnimContainer& bpp___result__pf, FAnimContainer& bpp___weaponResult__pf);
    void AnimationsToFlatAnimations(FHittedAnimations bpp__InAnimations__pf, FFlatHittedAnimations& bpp__HighAnimations__pf, FFlatHittedAnimations& bpp__MidAnimations__pf, FFlatHittedAnimations& bpp__LowAnimations__pf, FFlatHittedAnimations& bpp__Mid2Animations__pf);
};

#endif
