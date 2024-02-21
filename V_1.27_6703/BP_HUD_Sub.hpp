#ifndef UE4SS_SDK_BP_HUD_Sub_HPP
#define UE4SS_SDK_BP_HUD_Sub_HPP

class UBP_HUD_Sub_C : public USCDialogWidget
{
    class UWidgetAnimation* FadeOut;                                                  // 0x0320 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0328 (size: 0x8)
    class UBorder* Background;                                                        // 0x0330 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0338 (size: 0x8)
    class URichTextBlock* DialogLine;                                                 // 0x0340 (size: 0x8)
    class UTextBlock* Separator;                                                      // 0x0348 (size: 0x8)
    class UTextBlock* SpeakerName;                                                    // 0x0350 (size: 0x8)
    class UScaleBox* TextScaleBox;                                                    // 0x0358 (size: 0x8)
    FTimerHandle DialogHidingTimerHandle;                                             // 0x0360 (size: 0x8)
    FBP_HUD_Sub_CDialog Launch Dialog Launch;                                         // 0x0368 (size: 0x10)
    void Dialog Launch();
    float DialogueDuration;                                                           // 0x0378 (size: 0x4)
    bool Highlight;                                                                   // 0x037C (size: 0x1)
    class USCDialogComponent* K2Node_Event__dialogLauncher;                           // 0x0380 (size: 0x8)
    FSCDialogData K2Node_Event__dialogData;                                           // 0x0388 (size: 0x3F0)
    bool K2Node_Event__bGenericSubtitles;                                             // 0x0778 (size: 0x1)
    bool CallFunc_IsLastMan_bIsBoss;                                                  // 0x0779 (size: 0x1)
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x077C (size: 0x10)
    void TimerDynamicDelegate();
    TScriptInterface<class IBP_HUD_Interface_C> K2Node_DynamicCast_AsBP_HUD_Interface; // 0x0790 (size: 0x10)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x07A0 (size: 0x1)
    class UObject* CallFunc_GetHUDEventDispatcher_EventDispatcher;                    // 0x07A8 (size: 0x8)
    class USCDialogComponent* K2Node_Event__dialogLauncher_1;                         // 0x07B0 (size: 0x8)
    bool K2Node_Event__bGenericSubtitles_1;                                           // 0x07B8 (size: 0x1)
    class USCDialogComponent* K2Node_Event__dialogLauncher_2;                         // 0x07C0 (size: 0x8)
    bool K2Node_Event__bGenericSubtitles_2;                                           // 0x07C8 (size: 0x1)
    EGameOptionTypes K2Node_CustomEvent_eGameOptionType;                              // 0x07C9 (size: 0x1)
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x07CC (size: 0x10)
    void OnOptionChangedDynamicDelegate(EGameOptionTypes bpp__eGameOptionType__pf);
    FBP_HUD_Sub_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x07DC (size: 0x10)
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
}; // Size: 0x7F0

#endif
