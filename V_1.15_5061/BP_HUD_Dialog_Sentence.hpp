#ifndef UE4SS_SDK_BP_HUD_Dialog_Sentence_HPP
#define UE4SS_SDK_BP_HUD_Dialog_Sentence_HPP

class UBP_HUD_Dialog_Sentence_C : public USCUserWidget
{
    class URichTextBlock* DialogText;
    class UWidgetSwitcher* IconSwitcher;
    class UScaleBox* ScaleBox_0;
    class UBorder* SentenceBkg;
    class UInputData* InputData;
    FBP_HUD_Dialog_Sentence_CInputValidated InputValidated;
    void InputValidated();
    FBP_HUD_Dialog_Sentence_CInputPressed InputPressed;
    void InputPressed();
    FBP_HUD_Dialog_Sentence_CInputReleased InputReleased;
    void InputReleased();
    bool InputWasPressed;
    bool bCanUseSentence;
    int32 ReplyIndex;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;

    void InputValidated__DelegateSignature();
    void InputReleased__DelegateSignature();
    void InputPressed__DelegateSignature();
    void UpdateBarFromInput();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void PrepareForDisplay(FSCConversationInteractiveReply bpp__Reply__pf, int32 bpp__InReplyIndex__pf, bool bpp__ForceDisplay__pf);
    void Construct();
};

#endif
