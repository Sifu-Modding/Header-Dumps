#ifndef UE4SS_SDK_BP_HUD_InfoProgressDoor_HPP
#define UE4SS_SDK_BP_HUD_InfoProgressDoor_HPP

class UBP_HUD_InfoProgressDoor_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UTextBlock* InfoTextBlock;
    FText InfoText;
    FBP_HUD_InfoProgressDoor_CED_InfoEnded ED_InfoEnded;
    void ED_InfoEnded();

    void SequenceEvent__ENTRYPOINTBP_HUD_InfoProgressDoor_0();
    void SequenceEvent_0();
    void Construct();
    void ExecuteUbergraph_BP_HUD_InfoProgressDoor(int32 EntryPoint);
    void ED_InfoEnded__DelegateSignature();
};

#endif
