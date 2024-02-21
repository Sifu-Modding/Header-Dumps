#ifndef UE4SS_SDK_BP_BossArchetypeDB_HPP
#define UE4SS_SDK_BP_BossArchetypeDB_HPP

class UBP_BossArchetypeDB_C : public UBP_Base_ArchetypeDB_C
{
    int32 ElementID;                                                                  // 0x06E8 (size: 0x4)
    int32 TakedownLeft;                                                               // 0x06EC (size: 0x4)
    bool HideBossUI;                                                                  // 0x06F0 (size: 0x1)
    bool DisplayStandardLifeGauge;                                                    // 0x06F1 (size: 0x1)

}; // Size: 0x6F2

#endif
