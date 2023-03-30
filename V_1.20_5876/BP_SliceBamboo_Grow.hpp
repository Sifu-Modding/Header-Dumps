#ifndef UE4SS_SDK_BP_SliceBamboo_Grow_HPP
#define UE4SS_SDK_BP_SliceBamboo_Grow_HPP

class ABP_SliceBamboo_Grow_C : public ABP_SliceBamboo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class USCNavModifierComponent* SCNavModifier;                                     // 0x0378 (size: 0x8)
    float Timeline_1_WobbleApparition_3FE391A743B2022551A9E2B97B2B1CCC;               // 0x0380 (size: 0x4)
    float Timeline_1_Growth_Folliage_Base_3FE391A743B2022551A9E2B97B2B1CCC;           // 0x0384 (size: 0x4)
    float Timeline_1_Growwth_Folliage_Bamboo_3FE391A743B2022551A9E2B97B2B1CCC;        // 0x0388 (size: 0x4)
    float Timeline_1_DegrowthGrowth_3FE391A743B2022551A9E2B97B2B1CCC;                 // 0x038C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3FE391A743B2022551A9E2B97B2B1CCC; // 0x0390 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0398 (size: 0x8)
    float Timeline_Growth_WobbleApparition_DE13F4DC47194AE496DF1BBAC6E3F3FD;          // 0x03A0 (size: 0x4)
    float Timeline_Growth_Growth_Folliage_Base_DE13F4DC47194AE496DF1BBAC6E3F3FD;      // 0x03A4 (size: 0x4)
    float Timeline_Growth_Growwth_Folliage_Bamboo_DE13F4DC47194AE496DF1BBAC6E3F3FD;   // 0x03A8 (size: 0x4)
    float Timeline_Growth_Growth_DE13F4DC47194AE496DF1BBAC6E3F3FD;                    // 0x03AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Growth__Direction_DE13F4DC47194AE496DF1BBAC6E3F3FD; // 0x03B0 (size: 0x1)
    class UTimelineComponent* Timeline_Growth;                                        // 0x03B8 (size: 0x8)
    float TimeLine_Degrowth_WobbleApparition_7A56B488485025ACDDAE18B24E96D765;        // 0x03C0 (size: 0x4)
    float TimeLine_Degrowth_Growth_Folliage_Base_7A56B488485025ACDDAE18B24E96D765;    // 0x03C4 (size: 0x4)
    float TimeLine_Degrowth_Growwth_Folliage_Bamboo_7A56B488485025ACDDAE18B24E96D765; // 0x03C8 (size: 0x4)
    float TimeLine_Degrowth_DegrowthGrowth_7A56B488485025ACDDAE18B24E96D765;          // 0x03CC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TimeLine_Degrowth__Direction_7A56B488485025ACDDAE18B24E96D765; // 0x03D0 (size: 0x1)
    class UTimelineComponent* TimeLine_Degrowth;                                      // 0x03D8 (size: 0x8)
    float Bamboo Lifetime;                                                            // 0x03E0 (size: 0x4)
    float Auto Grow Delay;                                                            // 0x03E4 (size: 0x4)

    void UserConstructionScript();
    void TimeLine_Degrowth__FinishedFunc();
    void TimeLine_Degrowth__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_Growth__FinishedFunc();
    void Timeline_Growth__UpdateFunc();
    void Fadeout_Bamboo();
    void ReceiveBeginPlay();
    void Grow_Bamboo();
    void CE_Bamboo_Lifetime_Delay();
    void Slicing();
    void Wobbling(bool Fajar Jumping on Bamboo);
    void CE_DestroyBamboo();
    void OnPoolablePreInitializeComponents();
    void ExecuteUbergraph_BP_SliceBamboo_Grow(int32 EntryPoint);
}; // Size: 0x3E8

#endif
