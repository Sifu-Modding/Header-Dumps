#ifndef UE4SS_SDK_AnimationCore_HPP
#define UE4SS_SDK_AnimationCore_HPP

#include "AnimationCore_enums.hpp"

class UAnimationDataSourceRegistry : public UObject
{
    TMap<class FName, class TWeakObjectPtr<UObject>> DataSources;

};

struct FNodeObject
{
    FName Name;
    FName ParentName;

};

struct FNodeHierarchyData
{
    TArray<FNodeObject> Nodes;
    TArray<FTransform> Transforms;
    TMap<FName, int32> NodeNameToIndexMapping;

};

struct FNodeHierarchyWithUserData
{
    FNodeHierarchyData Hierarchy;

};

struct FConstraintOffset
{
    FVector Translation;
    FQuat Rotation;
    FVector Scale;
    FTransform Parent;

};

struct FFilterOptionPerAxis
{
    bool bX;
    bool bY;
    bool bZ;

};

struct FConstraintDescription
{
    bool bTranslation;
    bool bRotation;
    bool bScale;
    bool bParent;
    FFilterOptionPerAxis TranslationAxes;
    FFilterOptionPerAxis RotationAxes;
    FFilterOptionPerAxis ScaleAxes;

};

struct FTransformConstraint
{
    FConstraintDescription Operator;
    FName SourceNode;
    FName TargetNode;
    float Weight;
    bool bMaintainOffset;

};

struct FConstraintDescriptor
{
    EConstraintType Type;

};

struct FConstraintData
{
    FConstraintDescriptor Constraint;
    float Weight;
    bool bMaintainOffset;
    FTransform Offset;
    FTransform CurrentTransform;

};

struct FTransformFilter
{
    FFilterOptionPerAxis TranslationFilter;
    FFilterOptionPerAxis RotationFilter;
    FFilterOptionPerAxis ScaleFilter;

};

struct FCCDIKChainLink
{
};

struct FEulerTransform
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;

};

struct FFABRIKChainLink
{
};

struct FAxis
{
    FVector Axis;
    bool bInLocalSpace;

};

struct FConstraintDescriptionEx
{
    FFilterOptionPerAxis AxesFilterOption;

};

struct FAimConstraintDescription : public FConstraintDescriptionEx
{
    FAxis LookAt_Axis;
    FAxis LookUp_Axis;
    bool bUseLookUp;
    FVector LookUpTarget;

};

struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
    ETransformConstraintType TransformType;

};

struct FNodeChain
{
    TArray<FName> Nodes;

};

struct FTransformNoScale
{
    FVector Location;
    FQuat Rotation;

};

#endif
