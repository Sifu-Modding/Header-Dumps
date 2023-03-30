#ifndef UE4SS_SDK_BP_SeanStaff_HPP
#define UE4SS_SDK_BP_SeanStaff_HPP

class ABP_SeanStaff_C : public ABP_TwoHandedWeaponFamily_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0908 (size: 0x8)
    class USCSkeletalMeshVLogDebugDrawComponent* SCSkeletalMeshVLogDebugDraw;         // 0x0910 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SeanStaff(int32 EntryPoint);
}; // Size: 0x918

#endif
