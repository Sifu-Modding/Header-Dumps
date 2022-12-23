#ifndef UE4SS_SDK_BP_HUD_Sub_HPP
#define UE4SS_SDK_BP_HUD_Sub_HPP

class UBP_HUD_Sub_C : public USCDialogWidget
{
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* FadeIn;
    class UBorder* Background;
    class UCanvasPanel* CanvasPanel_0;
    class URichTextBlock* DialogLine;
    class UTextBlock* Separator;
    class UTextBlock* SpeakerName;
    class UScaleBox* TextScaleBox;
    FTimerHandle DialogHidingTimerHandle;
    FBP_HUD_Sub_CDialog Launch Dialog Launch;
    void Dialog Launch();
    float DialogueDuration;
    bool Highlight;
    class USCDialogComponent* K2Node_Event__dialogLauncher;
    FSCDialogData K2Node_Event__dialogData;
    bool K2Node_Event__bGenericSubtitles;
    bool CallFunc_IsLastMan_bIsBoss;
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void TimerDynamicDelegate();
    TScriptInterface<class IBP_HUD_Interface_C> K2Node_DynamicCast_AsBP_HUD_Interface;
    bool K2Node_DynamicCast_bSuccess;
    class UObject* CallFunc_GetHUDEventDispatcher_EventDispatcher;
    class USCDialogComponent* K2Node_Event__dialogLauncher_1;
    bool K2Node_Event__bGenericSubtitles_1;
    class USCDialogComponent* K2Node_Event__dialogLauncher_2;
    bool K2Node_Event__bGenericSubtitles_2;
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void OnOptionChangedDynamicDelegate(EGameOptionTypes bpp__eGameOptionType__pf);
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void OnScaleHUD();

    void OnScaleHUD__DelegateSignature();
    void Dialog Launch__DelegateSignature();
    void Update Offset from Bottom();
    void UpdateBackgroundOpacity();
    void SetColor(bool bpp__LocalLastMan__pf);
    void ScaleDialog();
    void OnOptionChanged(EGameOptionTypes bpp__eGameOptionType__pf);
    void IsLastMan(class UActorComponent* bpp__Component__pf, bool& bpp__bIsBoss__pf);
    void HideDialogLine();
    void GetHUDScale(float& bpp__ValueHUDSize__pf);
    void Construct();
    void BPE_OnDialogSegmentCompleted(class USCDialogComponent* bpp___dialogLauncher__pf, bool bpp___bGenericSubtitles__pf__const);
    void BPE_DialogLaunched(class USCDialogComponent* bpp___dialogLauncher__pf, const FSCDialogData& bpp___dialogData__pf__const, bool bpp___bGenericSubtitles__pf__const);
    void BPE_DialogCanceled(class USCDialogComponent* bpp___dialogLauncher__pf, bool bpp___bGenericSubtitles__pf__const);
    void OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes bpp__eGameOptionType__pf);
};

#endif
