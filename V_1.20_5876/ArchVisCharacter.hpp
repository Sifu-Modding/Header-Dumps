#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x0548 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x0558 (size: 0x10)
    FString TurnAxisName;                                                             // 0x0568 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x0578 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0588 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0598 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x05A8 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x05AC (size: 0x4)

}; // Size: 0x5B0

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x0BC0 (size: 0xC)
    FRotator RotationalDeceleration;                                                  // 0x0BCC (size: 0xC)
    FRotator MaxRotationalVelocity;                                                   // 0x0BD8 (size: 0xC)
    float MinPitch;                                                                   // 0x0BE4 (size: 0x4)
    float MaxPitch;                                                                   // 0x0BE8 (size: 0x4)
    float WalkingFriction;                                                            // 0x0BEC (size: 0x4)
    float WalkingSpeed;                                                               // 0x0BF0 (size: 0x4)
    float WalkingAcceleration;                                                        // 0x0BF4 (size: 0x4)

}; // Size: 0xC10

#endif
