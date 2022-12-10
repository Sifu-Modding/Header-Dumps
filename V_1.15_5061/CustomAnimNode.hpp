#ifndef UE4SS_SDK_CustomAnimNode_HPP
#define UE4SS_SDK_CustomAnimNode_HPP

#include "CustomAnimNode_enums.hpp"

struct FAxisSettings
{
    TEnumAsByte<EAxis::Type> YawRotationAxis;
    float BodyOrientationAlpha;

};

struct FBoneRef
{
    FBoneReference Bone;

};

struct FAnimMode_OrientationWarping : public FAnimNode_Base
{
    FPoseLink BasePose;
    float LocomotionAngle;
    FAxisSettings Settings;
    TArray<FBoneRef> SpineBones;
    FBoneReference IKFootRootBone;

};

struct FIKBones
{
    FBoneReference IKFootBone;
    FBoneReference FKFootBone;
    int32 NumBonesInLimb;

};

struct FPelvisAdjustmentInterp
{
    float Stiffness;
    float Dampen;

};

struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKFootRootBone;
    TArray<FIKBones> FeetDefinitions;
    FBoneReference PelvisBone;
    EIKFootRootLocalAxis SpeedWarpingAxisMode;
    float SpeedScaling;
    float PelvisAdjustmentAlpha;
    float MaxIter;
    FPelvisAdjustmentInterp PelvisAdjustmentInterp;
    bool ClampIKUsingFKLeg;

};

struct FIKFootLocation
{
    FVector LimbRootLocation;
    FVector OriginLocation;
    FVector ActualLocation;
    FVector NewLocation;

};

#endif
