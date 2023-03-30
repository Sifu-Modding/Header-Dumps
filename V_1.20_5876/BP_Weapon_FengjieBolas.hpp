#ifndef UE4SS_SDK_BP_Weapon_FengjieBolas_HPP
#define UE4SS_SDK_BP_Weapon_FengjieBolas_HPP

class ABP_Weapon_FengjieBolas_C : public ABP_Weapon_MeteorHammerFamily_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0968 (size: 0x8)
    class USCSkeletalMeshVLogDebugDrawComponent* SCSkeletalMeshVLogDebugDraw;         // 0x0970 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0978 (size: 0x8)

    void GetWeaponAkComponent(class UAkComponent*& AkComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Weapon_FengjieBolas(int32 EntryPoint);
}; // Size: 0x980

#endif
