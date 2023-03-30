#ifndef UE4SS_SDK_BP_Vegetaion_Master_WithOpaque_HPP
#define UE4SS_SDK_BP_Vegetaion_Master_WithOpaque_HPP

class ABP_Vegetaion_Master_WithOpaque_C : public ABP_Vegetation_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* OpaqueMesh;                                           // 0x02F8 (size: 0x8)
    class UMaterialInterface* OpaqueMaterialLOD0;                                     // 0x0300 (size: 0x8)
    class UMaterialInterface* OpaqueMaterialLOD1;                                     // 0x0308 (size: 0x8)

    void SetupMeshesArray();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Vegetaion_Master_WithOpaque(int32 EntryPoint);
}; // Size: 0x310

#endif
