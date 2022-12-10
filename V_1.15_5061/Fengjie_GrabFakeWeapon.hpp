#ifndef UE4SS_SDK_Fengjie_GrabFakeWeapon_HPP
#define UE4SS_SDK_Fengjie_GrabFakeWeapon_HPP

class AFengjie_GrabFakeWeapon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePreUninitializeComponents();
    void ExecuteUbergraph_Fengjie_GrabFakeWeapon(int32 EntryPoint);
};

#endif
