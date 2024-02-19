#ifndef UE4SS_SDK_BP_VisualLoggerSnapshot_HPP
#define UE4SS_SDK_BP_VisualLoggerSnapshot_HPP

class UBP_VisualLoggerSnapshot_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBP_Popup_Background_C* BP_Popup_Background;                                // 0x0318 (size: 0x8)
    class UEditableText* EditableText_156;                                            // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_131;                                                  // 0x0330 (size: 0x8)
    bool Stop;                                                                        // 0x0338 (size: 0x1)

    void BPE_OnVisible();
    void BndEvt__EditableText_156_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_VisualLoggerSnapshot(int32 EntryPoint);
}; // Size: 0x339

#endif
