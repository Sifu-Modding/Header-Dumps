#ifndef UE4SS_SDK_BP_Volume_Template_HPP
#define UE4SS_SDK_BP_Volume_Template_HPP

class ABP_Volume_Template_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02C0 (size: 0x8)
    FVector Width;                                                                    // 0x02C8 (size: 0xC)
    FVector Length;                                                                   // 0x02D4 (size: 0xC)
    FVector Height;                                                                   // 0x02E0 (size: 0xC)
    FVector Extent;                                                                   // 0x02EC (size: 0xC)

    void UserConstructionScript();
}; // Size: 0x2F8

#endif
