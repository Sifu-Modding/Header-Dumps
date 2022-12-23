#ifndef UE4SS_SDK_BP_WeaponLocomotionCarrier_Interface_HPP
#define UE4SS_SDK_BP_WeaponLocomotionCarrier_Interface_HPP

class IBP_WeaponLocomotionCarrier_Interface_C : public IInterface
{

    void SetWeaponV0Anims(FAnimContainer InFrontLeftCombat, FAnimContainer InFrontRightCombat, FAnimContainer InFrontLeftFreeMove);
    void SetWeaponMovingBlendSpaces(ESpeedState InSpeedState, FBlendSpaceContainer InFrontBlendSpaceDirection, FBlendSpaceContainer InBackBlendSpaceDirection);
};

#endif
