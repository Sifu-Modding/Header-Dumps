#ifndef UE4SS_SDK_BP_HUD_InfoProgressDoor_HPP
#define UE4SS_SDK_BP_HUD_InfoProgressDoor_HPP

class UBP_HUD_InfoProgressDoor_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x03A0 (size: 0x8)
    class UTextBlock* InfoTextBlock;                                                  // 0x03A8 (size: 0x8)
    FText InfoText;                                                                   // 0x03B0 (size: 0x18)
    FBP_HUD_InfoProgressDoor_CED_InfoEnded ED_InfoEnded;                              // 0x03C8 (size: 0x10)
    void ED_InfoEnded();

    void SequenceEvent__ENTRYPOINTBP_HUD_InfoProgressDoor_0();
    void SequenceEvent_0();
    void Construct();
    void ExecuteUbergraph_BP_HUD_InfoProgressDoor(int32 EntryPoint);
    void ED_InfoEnded__DelegateSignature();
}; // Size: 0x3D8

#endif
