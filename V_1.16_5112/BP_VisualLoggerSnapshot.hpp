#ifndef UE4SS_SDK_BP_VisualLoggerSnapshot_HPP
#define UE4SS_SDK_BP_VisualLoggerSnapshot_HPP

class UBP_VisualLoggerSnapshot_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Popup_Background_C* BP_Popup_Background;
    class UEditableText* EditableText_156;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_131;
    bool Stop;

    void BPE_OnVisible();
    void BndEvt__EditableText_156_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_VisualLoggerSnapshot(int32 EntryPoint);
};

#endif
