#ifndef UE4SS_SDK_BP_HardPointFeedback_DA_HPP
#define UE4SS_SDK_BP_HardPointFeedback_DA_HPP

class UBP_HardPointFeedback_DA_C : public UPrimaryDataAsset
{
    class UMaterialInterface* PP 1Box;                                                // 0x0030 (size: 0x8)
    class UMaterialInterface* PP 2Box;                                                // 0x0038 (size: 0x8)
    class UMaterialInterface* PP 3Box;                                                // 0x0040 (size: 0x8)
    class UMaterialInterface* PP 4Box;                                                // 0x0048 (size: 0x8)
    class UMaterialInterface* PP 5Box;                                                // 0x0050 (size: 0x8)
    class UMaterialInterface* PP 6Box;                                                // 0x0058 (size: 0x8)
    class UMaterialInterface* PP 7Box;                                                // 0x0060 (size: 0x8)
    class UMaterialInterface* PP 1Box LimitOnly;                                      // 0x0068 (size: 0x8)
    class UMaterialInterface* PP 2Box LimitOnly;                                      // 0x0070 (size: 0x8)
    class UMaterialInterface* PP 3Box LimitOnly;                                      // 0x0078 (size: 0x8)
    class UMaterialInterface* PP 4Box LimitOnly;                                      // 0x0080 (size: 0x8)
    class UMaterialInterface* PP 5Box LimitOnly;                                      // 0x0088 (size: 0x8)
    class UMaterialInterface* PP 6Box LimitOnly;                                      // 0x0090 (size: 0x8)
    class UMaterialInterface* PP 7Box LimitOnly;                                      // 0x0098 (size: 0x8)
    class UMaterialInterface* PP 8Box LimitOnly;                                      // 0x00A0 (size: 0x8)
    class UMaterialInterface* PP KitchenStairsToCave;                                 // 0x00A8 (size: 0x8)
    class UMaterialInterface* PP Octogon Kitchen;                                     // 0x00B0 (size: 0x8)

    void GetAdequatePP(TArray<class ASCVolume*>& Boxes, TArray<class ASCVolume*>& Cylinders, bool LimitOnly, TEnumAsByte<EHardpointCustomPP_Enum> CustomHardpointPP, class UMaterialInterface*& PP_Material);
}; // Size: 0xB8

#endif
