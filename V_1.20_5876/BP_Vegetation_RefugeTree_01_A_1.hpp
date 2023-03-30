#ifndef UE4SS_SDK_BP_Vegetation_RefugeTree_01_A_1_HPP
#define UE4SS_SDK_BP_Vegetation_RefugeTree_01_A_1_HPP

class ABP_Vegetation_RefugeTree_01_A_1_C : public ABP_Vegetaion_Master_WithOpaque_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Vegetation_RefugeTree_01_A_1(int32 EntryPoint);
}; // Size: 0x318

#endif
