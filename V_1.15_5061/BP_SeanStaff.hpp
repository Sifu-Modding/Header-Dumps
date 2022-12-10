#ifndef UE4SS_SDK_BP_SeanStaff_HPP
#define UE4SS_SDK_BP_SeanStaff_HPP

class ABP_SeanStaff_C : public ABP_TwoHandedWeaponFamily_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USCSkeletalMeshVLogDebugDrawComponent* SCSkeletalMeshVLogDebugDraw;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SeanStaff(int32 EntryPoint);
};

#endif
