#ifndef UE4SS_SDK_BP_Btn_TrainingMode_LessonListItem_HPP
#define UE4SS_SDK_BP_Btn_TrainingMode_LessonListItem_HPP

class UBP_Btn_TrainingMode_LessonListItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UBorder* Border_AllMouseStates;                                             // 0x0830 (size: 0x8)
    class UImage* Brush_Over;                                                         // 0x0838 (size: 0x8)
    class UBorder* BtnBorder;                                                         // 0x0840 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0848 (size: 0x8)
    class UImage* LineRight;                                                          // 0x0850 (size: 0x8)
    class UImage* ValidationCheck;                                                    // 0x0858 (size: 0x8)
    int32 LessonNumber;                                                               // 0x0860 (size: 0x4)
    FText Text;                                                                       // 0x0868 (size: 0x18)
    bool Enabled;                                                                     // 0x0880 (size: 0x1)
    class UAkAudioEvent* OnFocusEvent;                                                // 0x0888 (size: 0x8)
    class UAkAudioEvent* OnClickEvent;                                                // 0x0890 (size: 0x8)
    bool isTextCentered;                                                              // 0x0898 (size: 0x1)
    bool IsWhite;                                                                     // 0x0899 (size: 0x1)
    bool IsLocked;                                                                    // 0x089A (size: 0x1)
    FBP_Btn_TrainingMode_LessonListItem_COnLessonSelected OnLessonSelected;           // 0x08A0 (size: 0x10)
    void OnLessonSelected(int32 LessonNumber);
    FBP_Btn_TrainingMode_LessonListItem_COnLessonFocused OnLessonFocused;             // 0x08B0 (size: 0x10)
    void OnLessonFocused(int32 LessonNumber);
    bool IsAlreadyCompleted;                                                          // 0x08C0 (size: 0x1)

    void SetIsLocked(bool Locked);
    void SetIsWhite(bool White);
    void SetFocusBrush(bool OnFocus);
    void SetText(FText Text, bool OnFocus, bool isTextCentered);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Btn_TrainingMode_LessonListItem(int32 EntryPoint);
    void OnLessonFocused__DelegateSignature(int32 LessonNumber);
    void OnLessonSelected__DelegateSignature(int32 LessonNumber);
}; // Size: 0x8C1

#endif
