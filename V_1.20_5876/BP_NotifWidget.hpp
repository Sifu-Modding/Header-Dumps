#ifndef UE4SS_SDK_BP_NotifWidget_HPP
#define UE4SS_SDK_BP_NotifWidget_HPP

class UBP_NotifWidget_C : public USCUserWidget
{
    class UWidgetAnimation* BoardNotifAnim;                                           // 0x0310 (size: 0x8)
    class UProgressBar* AutoOpenProgressBar;                                          // 0x0318 (size: 0x8)
    class UProgressBar* AutoOpenProgressBar_1;                                        // 0x0320 (size: 0x8)
    class UImage* Blocker;                                                            // 0x0328 (size: 0x8)
    class UTextBlock* DotTxt;                                                         // 0x0330 (size: 0x8)
    class UImage* HighPrioNotif;                                                      // 0x0338 (size: 0x8)
    class UImage* HighPrioNotif_1;                                                    // 0x0340 (size: 0x8)
    class UImage* HighPrioNotif_2;                                                    // 0x0348 (size: 0x8)
    class UWidgetSwitcher* IconSwitcher;                                              // 0x0350 (size: 0x8)
    class UWidgetSwitcher* IlluSwitcher;                                              // 0x0358 (size: 0x8)
    class UBP_Btn_InputTip_C* InputOpenMenu;                                          // 0x0360 (size: 0x8)
    class UBP_Btn_InputTip_C* InputOpenMenuGoals;                                     // 0x0368 (size: 0x8)
    class UImage* Key;                                                                // 0x0370 (size: 0x8)
    class UBorder* NotifBorder;                                                       // 0x0378 (size: 0x8)
    class UBorder* NotifBorder_1;                                                     // 0x0380 (size: 0x8)
    class UTextBlock* NotifDescription;                                               // 0x0388 (size: 0x8)
    class UWidgetSwitcher* NotificationType;                                          // 0x0390 (size: 0x8)
    class UTextBlock* NotifTitle;                                                     // 0x0398 (size: 0x8)
    class UTextBlock* NotifTitle_1;                                                   // 0x03A0 (size: 0x8)
    bool bShouldOpenPauseMenu;                                                        // 0x03A8 (size: 0x1)
    bool NotifList;                                                                   // 0x03A9 (size: 0x1)
    TArray<FNotifInfoStructure> WaitingNotifs;                                        // 0x03B0 (size: 0x10)
    int32 iThresholdGroupedNotifs;                                                    // 0x03C0 (size: 0x4)
    bool DisableNotifs;                                                               // 0x03C4 (size: 0x1)
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x03C8 (size: 0x10)
    void DynamicMulticast();
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x03D8 (size: 0x10)
    void DynamicMulticast();
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x03E8 (size: 0x10)
    void OnAbilitySystemComponentTagsChangedDelegate(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x03F8 (size: 0x10)
    void OnSaveCheckFinished();

    void UpdateNotif();
    void TryToOpenDetectiveBoard();
    void ShowNotification(FNotifInfoStructure bpp__NotifInfo__pf);
    void SequenceEvent__ENTRYPOINTBP_NotifWidget_0();
    void OnShowAnimationFinished();
    void OnSaveLoaded();
    void OnGiveInitialControlToPlayer_Event();
    void OnCurrentMenuChanged(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
    void NewDetectiveBoardEntry(class USCAbilitySystemComponent* bpp___abilityComponent__pf, const FGameplayTag& bpp___tag__pf__const, int32 bpp___iCount__pf);
    void m_OnSaveCheckFinished_Event();
    void m_OnObjectsUnlockedFinished_Event();
    void Hide Notif(bool bpp__bResetRequests__pf);
    void HandleObjectUnlockNotif();
    void Construct();
    void CanShowNextNotif(bool& bpp__bCanShowNext__pf);
    void AddNotif(FNotifInfoStructure bpp__NewNotif__pf);
    void AddGroupedNotif(TArray<FGameplayTag>& bpp__NotifsTag__pf);
    void OnSaveCheckFinished__DelegateSignature();
    void DynamicMulticast__DelegateSignature();
    void CurrentMenuChanged__DelegateSignature(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
}; // Size: 0x408

#endif
