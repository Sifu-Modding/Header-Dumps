#ifndef UE4SS_SDK_IgnoreCollisionModule_HPP
#define UE4SS_SDK_IgnoreCollisionModule_HPP

struct FRigidBodyContainerDescription
{
    TWeakObjectPtr<class UPrimitiveComponent> m_Component;                            // 0x0000 (size: 0x8)
    FName m_boneName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigidBodyContainerDescriptionPair
{
    FRigidBodyContainerDescription m_first;                                           // 0x0000 (size: 0x10)
    FRigidBodyContainerDescription m_second;                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

class AIgnoreCollisionDirector : public AActor
{
}; // Size: 0x350

class UIgnoreCollisionStatics : public UBlueprintFunctionLibrary
{

    void BPF_SetCollisionIgnored(class UPrimitiveComponent* _ComponentA, FName _boneNameA, class UPrimitiveComponent* _ComponentB, FName _boneNameB, bool _bIgnoreCollision);
}; // Size: 0x28

#endif
