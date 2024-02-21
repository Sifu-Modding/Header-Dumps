#ifndef UE4SS_SDK_BP_Button_Over_HPP
#define UE4SS_SDK_BP_Button_Over_HPP

class UBP_Button_Over_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* Selection_Outline_Glow;                                   // 0x0318 (size: 0x8)
    class UBorder* Border_OutlineSelection;                                           // 0x0320 (size: 0x8)

    void Construct();
    void BPE_OnVisible();
    void ExecuteUbergraph_BP_Button_Over(int32 EntryPoint);
}; // Size: 0x328

#endif
