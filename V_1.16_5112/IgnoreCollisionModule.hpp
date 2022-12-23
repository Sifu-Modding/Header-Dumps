#ifndef UE4SS_SDK_IgnoreCollisionModule_HPP
#define UE4SS_SDK_IgnoreCollisionModule_HPP

class AIgnoreCollisionDirector : public AActor
{
};

class UIgnoreCollisionStatics : public UBlueprintFunctionLibrary
{

    void BPF_SetCollisionIgnored(class UPrimitiveComponent* _ComponentA, FName _boneNameA, class UPrimitiveComponent* _ComponentB, FName _boneNameB, bool _bIgnoreCollision);
};

struct FRigidBodyContainerDescription
{
    TWeakObjectPtr<class UPrimitiveComponent> m_Component;
    FName m_boneName;

};

struct FRigidBodyContainerDescriptionPair
{
    FRigidBodyContainerDescription m_first;
    FRigidBodyContainerDescription m_second;

};

#endif
