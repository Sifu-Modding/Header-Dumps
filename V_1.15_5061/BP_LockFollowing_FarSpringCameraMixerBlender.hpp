#ifndef UE4SS_SDK_BP_LockFollowing_FarSpringCameraMixerBlender_HPP
#define UE4SS_SDK_BP_LockFollowing_FarSpringCameraMixerBlender_HPP

class UBP_LockFollowing_FarSpringCameraMixerBlender_C : public USpringCameraMixerBlender
{
    float MinBackSpeedToFarRatio;
    float MinFrontSpeedToCloseRatio;
    float MinXDistance;
    float MaxXDistance;
    float MaxYDistance;
    float MinYDistance;
    float SpeedFactorClose;
    float SpeedFactorFar;
    float MaxRangeForAIs;
    float CursorMin;
    float CursorMax;
    float ForceCursorMinIfDownTarget;
    bool UseOwnerVelocityInComputation;
    bool UseSynchroTargetInComputation;
    float cursorMinByYawAngleDiffAtZero;
    float cursorMinByYawAngleDiffAt180;
    bool UseTakedownSurroundingOption;

    void RetrievePotentialSynchroTarget(class UOrderComponent* bpp__InstigatorOrderComponent__pf, class AActor*& bpp__SynchroTarget__pf);
};

#endif
