#ifndef UE4SS_SDK_BP_HUD_Dialog_HPP
#define UE4SS_SDK_BP_HUD_Dialog_HPP

class UBP_HUD_Dialog_C : public USCDialogWidget
{
    class UWidgetAnimation* AnswerAnim;                                               // 0x0320 (size: 0x8)
    class UWidgetAnimation* HintAnim;                                                 // 0x0328 (size: 0x8)
    class UBP_HUD_Dialog_Timer_C* BP_Timer;                                           // 0x0330 (size: 0x8)
    class UBP_Btn_Input_C* Input4;                                                    // 0x0338 (size: 0x8)
    class UBP_HUD_Dialog_Sentence_C* ObjectiveAnswer;                                 // 0x0340 (size: 0x8)
    class UBP_Btn_Input_C* ObjectiveInput;                                            // 0x0348 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x0350 (size: 0x8)
    class UBP_HUD_Dialog_Sentence_C* VengeanceAnswer;                                 // 0x0358 (size: 0x8)
    class UBP_Btn_Input_C* VengeanceInput;                                            // 0x0360 (size: 0x8)
    class UBP_HUD_Dialog_Sentence_C* WudeAnswer;                                      // 0x0368 (size: 0x8)
    class UBP_Btn_Input_C* WudeInput;                                                 // 0x0370 (size: 0x8)
    int32 InputPressed;                                                               // 0x0378 (size: 0x4)
    bool TimerElapsed;                                                                // 0x037C (size: 0x1)
    int32 MaxReplyIndex;                                                              // 0x0380 (size: 0x4)
    bool UseTauntInsteadOfVengeance;                                                  // 0x0384 (size: 0x1)
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;                               // 0x0388 (size: 0x10)
    FBP_HUD_Dialog_CTemp_delegate_Variable Temp_delegate_Variable;                    // 0x0398 (size: 0x10)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    FSCConversationInteractiveChoice K2Node_Event__choice;                            // 0x03A8 (size: 0x20)
    int32 Temp_int_Variable;                                                          // 0x03C8 (size: 0x4)
    TScriptInterface<class IBP_HUD_Interface_C> K2Node_DynamicCast_AsBP_HUD_Interface; // 0x03D0 (size: 0x10)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x03E0 (size: 0x1)
    class UObject* CallFunc_GetHUDEventDispatcher_EventDispatcher;                    // 0x03E8 (size: 0x8)
    class USCDialogComponent* K2Node_Event__dialogLauncher_1;                         // 0x03F0 (size: 0x8)
    bool K2Node_Event__bGenericSubtitles;                                             // 0x03F8 (size: 0x1)
    class USCDialogComponent* K2Node_Event__dialogLauncher;                           // 0x0400 (size: 0x8)
    FBP_HUD_Dialog_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0408 (size: 0x10)
    void OnOptionChangedDynamicDelegate(EGameOptionTypes bpp__eGameOptionType__pf);
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;                              // 0x0418 (size: 0x1)
    int32 Temp_int_Variable_1;                                                        // 0x041C (size: 0x4)

    void UpdateScale();
    void UpdateOpacity();
    void UpdateOffset();
    void ScaleWidget();
    void ReplyDisplay(FSCConversationInteractiveReply bpp__LocalReply__pf, int32 bpp__LocalIndex__pf, bool bpp__ForceDisplay__pf);
    void Prepare SentenceForDisplay(int32 bpp__Index__pf, TArray<FSCConversationInteractiveReply>& bpp__Replies__pf);
    void OnOptionChanged(EGameOptionTypes bpp__eGameOptionType__pf);
    void InteractiveSequenceStarted(const FSCConversationInteractiveChoice& bpp__SCConversationInteractiveChoice__pf__const);
    void HideWindow();
    void HandleTimerElapsedIfPossible();
    void Construct();
    void BPE_ShowBlackBarsRequested();
    void BPE_OnNextSegmentHasChoices();
    void BPE_OnDialogCompleted(class USCDialogComponent* bpp___dialogLauncher__pf);
    void BPE_InteractiveSequenceStarted(const FSCConversationInteractiveChoice& bpp___choice__pf__const);
    void BPE_InteractiveDialogInterrupted();
    void BPE_DialogCanceled(class USCDialogComponent* bpp___dialogLauncher__pf, bool bpp___bGenericSubtitles__pf__const);
    void BndEvt__Sentence3_K2Node_ComponentBoundEvent_9_InputReleased__DelegateSignature();
    void BndEvt__Sentence3_K2Node_ComponentBoundEvent_8_InputPressed__DelegateSignature();
    void BndEvt__Sentence3_K2Node_ComponentBoundEvent_2_InputValidated__DelegateSignature();
    void BndEvt__Sentence2_K2Node_ComponentBoundEvent_7_InputReleased__DelegateSignature();
    void BndEvt__Sentence2_K2Node_ComponentBoundEvent_6_InputPressed__DelegateSignature();
    void BndEvt__Sentence2_K2Node_ComponentBoundEvent_1_InputValidated__DelegateSignature();
    void BndEvt__Sentence1_K2Node_ComponentBoundEvent_5_InputReleased__DelegateSignature();
    void BndEvt__Sentence1_K2Node_ComponentBoundEvent_4_InputPressed__DelegateSignature();
    void BndEvt__Sentence1_K2Node_ComponentBoundEvent_0_InputValidated__DelegateSignature();
    void BndEvt__BP_HUD_Dialog_Timer_K2Node_ComponentBoundEvent_3_TimerElapsed__DelegateSignature();
    void OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes bpp__eGameOptionType__pf);
}; // Size: 0x420

#endif
