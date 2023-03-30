#ifndef UE4SS_SDK_BP_Btn_Remapping_Base_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Base_HPP

class UBP_Btn_Remapping_Base_C : public UButtonUserWidget
{
    bool BreakDependency;                                                             // 0x0820 (size: 0x1)

    void GetTitle(FText& Title);
    void GetID(FMappingID& ID);
}; // Size: 0x821

#endif
