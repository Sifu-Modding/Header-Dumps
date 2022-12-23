#ifndef UE4SS_SDK_BP_HUD_Dialog_HPP
#define UE4SS_SDK_BP_HUD_Dialog_HPP

class UBP_HUD_Dialog_C : public USCDialogWidget
{
    class UWidgetAnimation* AnswerAnim;
    class UWidgetAnimation* HintAnim;
    class UBP_HUD_Dialog_Timer_C* BP_Timer;
    class UBP_Btn_Input_C* Input4;
    class UBP_HUD_Dialog_Sentence_C* ObjectiveAnswer;
    class UBP_Btn_Input_C* ObjectiveInput;
    class UScaleBox* ScaleBox_0;
    class UBP_HUD_Dialog_Sentence_C* VengeanceAnswer;
    class UBP_Btn_Input_C* VengeanceInput;
    class UBP_HUD_Dialog_Sentence_C* WudeAnswer;
    class UBP_Btn_Input_C* WudeInput;
    int32 InputPressed;
    bool TimerElapsed;
    int32 MaxReplyIndex;
    bool UseTauntInsteadOfVengeance;
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;
    FBP_HUD_Dialog_CTemp_delegate_Variable Temp_delegate_Variable;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    FSCConversationInteractiveChoice K2Node_Event__choice;
    int32 Temp_int_Variable;
    TScriptInterface<class IBP_HUD_Interface_C> K2Node_DynamicCast_AsBP_HUD_Interface;
    bool K2Node_DynamicCast_bSuccess;
    class UObject* CallFunc_GetHUDEventDispatcher_EventDispatcher;
    class USCDialogComponent* K2Node_Event__dialogLauncher_1;
    bool K2Node_Event__bGenericSubtitles;
    class USCDialogComponent* K2Node_Event__dialogLauncher;
    FBP_HUD_Dialog_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void OnOptionChangedDynamicDelegate(EGameOptionTypes bpp__eGameOptionType__pf);
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;
    int32 Temp_int_Variable_1;

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
};

#endif
