#ifndef UE4SS_SDK_Bp_Btn_Tab_Vertical_HPP
#define UE4SS_SDK_Bp_Btn_Tab_Vertical_HPP

class UBp_Btn_Tab_Vertical_C : public UBP_Btn_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Bp_Btn_Tab_Vertical(int32 EntryPoint);
};

#endif
