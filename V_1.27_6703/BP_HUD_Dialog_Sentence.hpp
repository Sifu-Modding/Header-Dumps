#ifndef UE4SS_SDK_BP_HUD_Dialog_Sentence_HPP
#define UE4SS_SDK_BP_HUD_Dialog_Sentence_HPP

class UBP_HUD_Dialog_Sentence_C : public USCUserWidget
{
    class URichTextBlock* DialogText;                                                 // 0x0310 (size: 0x8)
    class UWidgetSwitcher* IconSwitcher;                                              // 0x0318 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x0320 (size: 0x8)
    class UBorder* SentenceBkg;                                                       // 0x0328 (size: 0x8)
    class UInputData* InputData;                                                      // 0x0330 (size: 0x8)
    FBP_HUD_Dialog_Sentence_CInputValidated InputValidated;                           // 0x0338 (size: 0x10)
    void InputValidated();
    FBP_HUD_Dialog_Sentence_CInputPressed InputPressed;                               // 0x0348 (size: 0x10)
    void InputPressed();
    FBP_HUD_Dialog_Sentence_CInputReleased InputReleased;                             // 0x0358 (size: 0x10)
    void InputReleased();
    bool InputWasPressed;                                                             // 0x0368 (size: 0x1)
    bool bCanUseSentence;                                                             // 0x0369 (size: 0x1)
    int32 ReplyIndex;                                                                 // 0x036C (size: 0x4)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x0370 (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x03A8 (size: 0x4)
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;                                 // 0x03B0 (size: 0xE8)
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;                          // 0x0498 (size: 0x160)
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;                            // 0x05F8 (size: 0x50)

    void InputValidated__DelegateSignature();
    void InputReleased__DelegateSignature();
    void InputPressed__DelegateSignature();
    void UpdateBarFromInput();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void PrepareForDisplay(FSCConversationInteractiveReply bpp__Reply__pf, int32 bpp__InReplyIndex__pf, bool bpp__ForceDisplay__pf);
    void Construct();
}; // Size: 0x648

#endif
