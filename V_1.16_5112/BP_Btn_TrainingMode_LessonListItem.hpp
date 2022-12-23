#ifndef UE4SS_SDK_BP_Btn_TrainingMode_LessonListItem_HPP
#define UE4SS_SDK_BP_Btn_TrainingMode_LessonListItem_HPP

class UBP_Btn_TrainingMode_LessonListItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UBorder* Border_AllMouseStates;
    class UImage* Brush_Over;
    class UBorder* BtnBorder;
    class UTextBlock* BtnText;
    class UImage* LineLeft;
    class UImage* LineRight;
    int32 LessonNumber;
    FText Text;
    bool Enabled;
    class UAkAudioEvent* OnFocusEvent;
    class UAkAudioEvent* OnClickEvent;
    bool isTextCentered;
    bool IsWhite;
    bool IsLocked;
    FBP_Btn_TrainingMode_LessonListItem_COnLessonSelected OnLessonSelected;
    void OnLessonSelected(int32 LessonNumber);
    FBP_Btn_TrainingMode_LessonListItem_COnLessonFocused OnLessonFocused;
    void OnLessonFocused(int32 LessonNumber);

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
};

#endif
