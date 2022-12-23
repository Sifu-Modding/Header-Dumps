#ifndef UE4SS_SDK_BP_Button_Over_HPP
#define UE4SS_SDK_BP_Button_Over_HPP

class UBP_Button_Over_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Selection_Outline_Glow;
    class UBorder* Border_OutlineSelection;

    void Construct();
    void BPE_OnVisible();
    void ExecuteUbergraph_BP_Button_Over(int32 EntryPoint);
};

#endif
