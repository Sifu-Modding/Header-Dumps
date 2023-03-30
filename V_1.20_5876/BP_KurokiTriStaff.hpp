#ifndef UE4SS_SDK_BP_KurokiTriStaff_HPP
#define UE4SS_SDK_BP_KurokiTriStaff_HPP

class ABP_KurokiTriStaff_C : public ABPWeapon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class USCSkeletalMeshVLogDebugDrawComponent* SCSkeletalMeshVLogDebugDraw;         // 0x0908 (size: 0x8)

    void GetCapsules(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, TArray<float>& Radius);
    void DebugCapsules(const float Duration);
    void ExecuteUbergraph_BP_KurokiTriStaff(int32 EntryPoint);
}; // Size: 0x910

#endif
