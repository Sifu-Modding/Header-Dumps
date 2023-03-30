#ifndef UE4SS_SDK_CustomAnimNode_HPP
#define UE4SS_SDK_CustomAnimNode_HPP

#include "CustomAnimNode_enums.hpp"

struct FAnimMode_OrientationWarping : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0010 (size: 0x10)
    float LocomotionAngle;                                                            // 0x0020 (size: 0x4)
    FAxisSettings Settings;                                                           // 0x0024 (size: 0x8)
    TArray<FBoneRef> SpineBones;                                                      // 0x0030 (size: 0x10)
    FBoneReference IKFootRootBone;                                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKFootRootBone;                                                    // 0x00C8 (size: 0x10)
    TArray<FIKBones> FeetDefinitions;                                                 // 0x00D8 (size: 0x10)
    FBoneReference PelvisBone;                                                        // 0x00E8 (size: 0x10)
    EIKFootRootLocalAxis SpeedWarpingAxisMode;                                        // 0x00F8 (size: 0x1)
    float SpeedScaling;                                                               // 0x00FC (size: 0x4)
    float PelvisAdjustmentAlpha;                                                      // 0x0100 (size: 0x4)
    float MaxIter;                                                                    // 0x0104 (size: 0x4)
    FPelvisAdjustmentInterp PelvisAdjustmentInterp;                                   // 0x0108 (size: 0x8)
    bool ClampIKUsingFKLeg;                                                           // 0x0110 (size: 0x1)

}; // Size: 0x160

struct FAxisSettings
{
    TEnumAsByte<EAxis::Type> YawRotationAxis;                                         // 0x0000 (size: 0x1)
    float BodyOrientationAlpha;                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FBoneRef
{
    FBoneReference Bone;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FIKBones
{
    FBoneReference IKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference FKFootBone;                                                        // 0x0010 (size: 0x10)
    int32 NumBonesInLimb;                                                             // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FIKFootLocation
{
    FVector LimbRootLocation;                                                         // 0x0000 (size: 0xC)
    FVector OriginLocation;                                                           // 0x000C (size: 0xC)
    FVector ActualLocation;                                                           // 0x0018 (size: 0xC)
    FVector NewLocation;                                                              // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FPelvisAdjustmentInterp
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float Dampen;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

#endif
