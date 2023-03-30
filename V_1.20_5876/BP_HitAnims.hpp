#ifndef UE4SS_SDK_BP_HitAnims_HPP
#define UE4SS_SDK_BP_HitAnims_HPP

class UBP_HitAnims_C : public UHitAnimRequest
{
    FHittedAnimations LightHitAnimations;                                             // 0x0028 (size: 0xE8)
    FHittedAnimations MediumHitAnimations;                                            // 0x0110 (size: 0xE8)
    FHittedAnimations StrongHitAnimations;                                            // 0x01F8 (size: 0xE8)
    FHittedAnimations KnockdownHitAnimations;                                         // 0x02E0 (size: 0xE8)
    FCardinalAnimContainer StayInKnockdownHitAnimations;                              // 0x03C8 (size: 0x60)
    FCardinalAnimContainer OutOfKnockdownHitAnimations;                               // 0x0428 (size: 0x60)
    FHittedAnimations LightDeathAnimations;                                           // 0x0488 (size: 0xE8)
    FHittedAnimations StrongDeathAnimations;                                          // 0x0570 (size: 0xE8)
    FCardinalHittedAnimations LowPushableAnimations;                                  // 0x0658 (size: 0x20)
    FFrontBackHittedAnimations DownDeathAnimations;                                   // 0x0678 (size: 0x10)
    class UAnimSequence* DownLoop;                                                    // 0x0688 (size: 0x8)
    class UAnimSequence* DizzyLoopHead;                                               // 0x0690 (size: 0x8)
    class UAnimSequence* PushedLoop;                                                  // 0x0698 (size: 0x8)
    class UAnimSequence* PushedHitLowCol_L;                                           // 0x06A0 (size: 0x8)
    bool MirrorHitLowCol_L;                                                           // 0x06A8 (size: 0x1)
    class UAnimSequence* PushedHitLowCol_R;                                           // 0x06B0 (size: 0x8)
    bool MirrorHitLowCol_R;                                                           // 0x06B8 (size: 0x1)
    class UAnimSequence* PushedWallSplash;                                            // 0x06C0 (size: 0x8)
    class UAnimSequence* PushedHitAnimation;                                          // 0x06C8 (size: 0x8)
    class UAnimSequence* FallHitAnimation;                                            // 0x06D0 (size: 0x8)
    class UAnimSequence* FallDeathAnimation;                                          // 0x06D8 (size: 0x8)
    class UAnimSequence* HitByPushedChara;                                            // 0x06E0 (size: 0x8)
    class UAnimSequence* StructureBrokenLoop;                                         // 0x06E8 (size: 0x8)
    class UAnimSequence* WallSplahDeath;                                              // 0x06F0 (size: 0x8)
    float ALGenericAllDelayedFrameNB;                                                 // 0x06F8 (size: 0x4)
    float ALHittedCancelStartingFrame;                                                // 0x06FC (size: 0x4)
    bool MirrorHitOnGuard;                                                            // 0x0700 (size: 0x1)
    TArray<FHittedOrderServiceInfos> GenericToDownOrderServices;                      // 0x0708 (size: 0x10)
    TArray<FHittedOrderServiceInfos> HitToKnockeddownServices;                        // 0x0718 (size: 0x10)
    TArray<class UAnimSequence*> DeflectHighRightAnimations;                          // 0x0728 (size: 0x10)
    TArray<class UAnimSequence*> DeflectHighLeftAnimations;                           // 0x0738 (size: 0x10)
    TArray<class UAnimSequence*> DeflectMidRightAnimations;                           // 0x0748 (size: 0x10)
    TArray<class UAnimSequence*> DeflectMidLeftAnimations;                            // 0x0758 (size: 0x10)
    TArray<class UAnimSequence*> DeflectLowRightAnimations;                           // 0x0768 (size: 0x10)
    TArray<class UAnimSequence*> DeflectLowLeftAnimations;                            // 0x0778 (size: 0x10)
    FHittedAnimations WeaponLightHitAnimations;                                       // 0x0788 (size: 0xE8)
    FHittedAnimations WeaponMediumHitAnimations;                                      // 0x0870 (size: 0xE8)
    FHittedAnimations WeaponStrongHitAnimations;                                      // 0x0958 (size: 0xE8)
    FAnimContainer WeaponPushedAnim;                                                  // 0x0A40 (size: 0x18)
    FAnimContainer SlopeToGround;                                                     // 0x0A58 (size: 0x18)
    FAnimContainer GroundToSlope;                                                     // 0x0A70 (size: 0x18)
    TMap<class EnvironmentalImpactReceiverType, class UAnimSequence*> WallSplashOnObject; // 0x0A88 (size: 0x50)
    FHitAnimsPerDataTableContainer HitAnimsPerData;                                   // 0x0AD8 (size: 0x50)
    TArray<FHittedOrderServiceInfos> LandingToDownOrderServices;                      // 0x0B28 (size: 0x10)
    class UAnimSequence* DizzyLoopPlexus;                                             // 0x0B38 (size: 0x8)
    class UAnimSequence* DizzyLoopGroin;                                              // 0x0B40 (size: 0x8)
    class UAnimSequence* DizzyLoopBelly;                                              // 0x0B48 (size: 0x8)
    FHittedAnimations WeaponLightDeathAnimations;                                     // 0x0B50 (size: 0xE8)
    FHittedAnimations WeaponStrongDeathAnimations;                                    // 0x0C38 (size: 0xE8)
    FFrontBackHittedAnimations WeaponDownDeathAnimations;                             // 0x0D20 (size: 0x10)
    class UAnimSequence* WeaponPushedHitLowCol;                                       // 0x0D30 (size: 0x8)
    class UAnimSequence* WeaponFallDeathAnimation;                                    // 0x0D38 (size: 0x8)
    class UAnimSequence* WeaponWallSplashDeath;                                       // 0x0D40 (size: 0x8)
    FCardinalHittedAnimations WeaponLowPushableAnimations;                            // 0x0D48 (size: 0x20)
    class UAnimSequence* WeaponFallHitAnimation;                                      // 0x0D68 (size: 0x8)
    FAnimContainer WeaponSlopeToGround;                                               // 0x0D70 (size: 0x18)
    FAnimContainer WeaponGroundToSlope;                                               // 0x0D88 (size: 0x18)
    FCardinalAnimContainer KnockdownByHeavyThrowableContainerAnimations;              // 0x0DA0 (size: 0x60)
    FCardinalAnimContainer KnockdownByHeavyThrowableWeaponContainerAnimations;        // 0x0E00 (size: 0x60)
    class UAnimSequence* PushedGuard;                                                 // 0x0E60 (size: 0x8)
    class UAnimSequence* PushedDeath;                                                 // 0x0E68 (size: 0x8)
    FEditableOrderType EditableSlopeHittedOrderType;                                  // 0x0E70 (size: 0x58)
    TArray<FHittedOrderServiceInfos> AlreadyDownOrderServices;                        // 0x0EC8 (size: 0x10)
    class UAnimSequence* PushedMid2HitAnimation;                                      // 0x0ED8 (size: 0x8)
    FHitAnimsPerDataTableContainer DeathAnimsPerData;                                 // 0x0EE0 (size: 0x50)
    FAnimSyncContainer ParryFromDownSuccess;                                          // 0x0F30 (size: 0x30)
    bool DizzyMirrorable;                                                             // 0x0F60 (size: 0x1)

    void ShouldMirrorDownLoopOnGoToDown(bool bpp__bMirrorQuadrant__pf, EQuadrantTypes bpp__InQuadrant__pf, ESCCardinalPoints bpp__InCardinal__pf, bool& bpp__bOutShouldMirror__pf);
    void SelectAndUpdateRandomAnim(class AFightingCharacter* bpp__Defender__pf, TArray<class UAnimSequence*>& bpp__AnimToChooseFrom__pf, class UAnimSequence*& bpp__Anim__pf);
    void HandleStructureBroken(FHittedAnimContainer& bpp__In__pf, FImpactResult& bpp__Impact__pf, bool bpp__IsMC__pf, class AFightingCharacter* bpp__Defender__pf, FHittedAnimContainer& bpp__Out__pf);
    void GetDeflectAnimation(EHeight bpp__Height__pf, EAttackOrigin bpp__Origin__pf, class AFightingCharacter* bpp__Defender__pf, class UAnimSequence*& bpp__Anim__pf);
    void GetDeathAnimOffensiveAvoid(class UAnimSequence*& bpp__DeathAnimSequence__pf);
    void GetComputedOrigin(EAttackOrigin bpp__RawOrigin__pf, bool bpp__IsAttackMirror__pf, EAttackOrigin& bpp__ComputedOrigin__pf);
    class UAnimSequence* GetAnimationFromImpactContext(const FImpactResult& bpp__ImpactResult__pf__const, FHittedAnimations bpp__Animations__pf, bool bpp__Mirror__pf, EQuadrantTypes bpp__Quadrant__pf, class AFightingCharacter* bpp__Defender__pf, FHittedAnimations bpp__WeaponAnimations__pf, FHitRequest& bpp__HitRequest__pf, bool& bpp__MirrorAnim__pf, class UAnimSequence*& bpp__WeaponAnimValue__pf);
    class UAnimSequence* GetAnimationFromFlatImpactContext(const FImpactResult& bpp__ImpactResult__pf__const, FFlatHittedAnimations bpp__Animations__pf, bool bpp__Mirror__pf, EQuadrantTypes bpp__Quadrant__pf, class AFightingCharacter* bpp__Defender__pf, FFlatHittedAnimations bpp__WeaponAnimations__pf, bool& bpp__MirrorAnim__pf, class UAnimSequence*& bpp__WeaponAnimValue__pf);
    TArray<class UAnimSequence*> BPE_GetHitDeathAnimations();
    void BPE_GetHitAnimation(const FHitRequest& bpp___request__pf__const, const FImpactResult& bpp___impact__pf__const, class AFightingCharacter* bpp___defender__pf, FHittedAnimContainer& bpp___result__pf, FAnimContainer& bpp___weaponResult__pf);
    void AnimationsToFlatAnimations(FHittedAnimations bpp__InAnimations__pf, FFlatHittedAnimations& bpp__HighAnimations__pf, FFlatHittedAnimations& bpp__MidAnimations__pf, FFlatHittedAnimations& bpp__LowAnimations__pf, FFlatHittedAnimations& bpp__Mid2Animations__pf);
}; // Size: 0xF68

#endif
