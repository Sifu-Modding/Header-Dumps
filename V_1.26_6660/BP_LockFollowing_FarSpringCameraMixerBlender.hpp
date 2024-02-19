#ifndef UE4SS_SDK_BP_LockFollowing_FarSpringCameraMixerBlender_HPP
#define UE4SS_SDK_BP_LockFollowing_FarSpringCameraMixerBlender_HPP

class UBP_LockFollowing_FarSpringCameraMixerBlender_C : public USpringCameraMixerBlender
{
    float MinBackSpeedToFarRatio;                                                     // 0x0038 (size: 0x4)
    float MinFrontSpeedToCloseRatio;                                                  // 0x003C (size: 0x4)
    float MinXDistance;                                                               // 0x0040 (size: 0x4)
    float MaxXDistance;                                                               // 0x0044 (size: 0x4)
    float MaxYDistance;                                                               // 0x0048 (size: 0x4)
    float MinYDistance;                                                               // 0x004C (size: 0x4)
    float SpeedFactorClose;                                                           // 0x0050 (size: 0x4)
    float SpeedFactorFar;                                                             // 0x0054 (size: 0x4)
    float MaxRangeForAIs;                                                             // 0x0058 (size: 0x4)
    float CursorMin;                                                                  // 0x005C (size: 0x4)
    float CursorMax;                                                                  // 0x0060 (size: 0x4)
    float ForceCursorMinIfDownTarget;                                                 // 0x0064 (size: 0x4)
    bool UseOwnerVelocityInComputation;                                               // 0x0068 (size: 0x1)
    bool UseSynchroTargetInComputation;                                               // 0x0069 (size: 0x1)
    float cursorMinByYawAngleDiffAtZero;                                              // 0x006C (size: 0x4)
    float cursorMinByYawAngleDiffAt180;                                               // 0x0070 (size: 0x4)
    bool UseTakedownSurroundingOption;                                                // 0x0074 (size: 0x1)

    void RetrievePotentialSynchroTarget(class UOrderComponent* bpp__InstigatorOrderComponent__pf, class AActor*& bpp__SynchroTarget__pf);
}; // Size: 0x78

#endif
