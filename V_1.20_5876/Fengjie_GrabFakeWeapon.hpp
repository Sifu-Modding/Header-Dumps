#ifndef UE4SS_SDK_Fengjie_GrabFakeWeapon_HPP
#define UE4SS_SDK_Fengjie_GrabFakeWeapon_HPP

class AFengjie_GrabFakeWeapon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)

    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePreUninitializeComponents();
    void ExecuteUbergraph_Fengjie_GrabFakeWeapon(int32 EntryPoint);
}; // Size: 0x2C8

#endif
