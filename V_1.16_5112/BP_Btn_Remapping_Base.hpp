#ifndef UE4SS_SDK_BP_Btn_Remapping_Base_HPP
#define UE4SS_SDK_BP_Btn_Remapping_Base_HPP

class UBP_Btn_Remapping_Base_C : public UButtonUserWidget
{
    bool BreakDependency;

    void GetTitle(FText& Title);
    void GetID(FMappingID& ID);
};

#endif
