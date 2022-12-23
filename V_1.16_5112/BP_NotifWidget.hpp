#ifndef UE4SS_SDK_BP_NotifWidget_HPP
#define UE4SS_SDK_BP_NotifWidget_HPP

class UBP_NotifWidget_C : public USCUserWidget
{
    class UWidgetAnimation* BoardNotifAnim;
    class UProgressBar* AutoOpenProgressBar;
    class UProgressBar* AutoOpenProgressBar_1;
    class UImage* Blocker;
    class UTextBlock* DotTxt;
    class UImage* HighPrioNotif;
    class UImage* HighPrioNotif_1;
    class UImage* HighPrioNotif_2;
    class UWidgetSwitcher* IconSwitcher;
    class UWidgetSwitcher* IlluSwitcher;
    class UBP_Btn_InputTip_C* InputOpenMenu;
    class UBP_Btn_InputTip_C* InputOpenMenuGoals;
    class UImage* Key;
    class UBorder* NotifBorder;
    class UBorder* NotifBorder_1;
    class UTextBlock* NotifDescription;
    class UWidgetSwitcher* NotificationType;
    class UTextBlock* NotifTitle;
    class UTextBlock* NotifTitle_1;
    bool bShouldOpenPauseMenu;
    bool NotifList;
    TArray<FNotifInfoStructure> WaitingNotifs;
    int32 iThresholdGroupedNotifs;
    bool DisableNotifs;
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void OnSaveCheckFinished();
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void DynamicMulticast();
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void OnAbilitySystemComponentTagsChangedDelegate(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    FBP_NotifWidget_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void OnObjectUnlockedDynamic(FGameplayTag bpp___objectUnlockedTag__pf);
    FGameplayTag K2Node_CustomEvent__objectUnlockedTag;

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
    void m_OnObjectUnlocked_Event(FGameplayTag bpp___objectUnlockedTag__pf);
    void Hide Notif(bool bpp__bResetRequests__pf);
    void HandleObjectUnlockNotif();
    void Construct();
    void CanShowNextNotif(bool& bpp__bCanShowNext__pf);
    void AddNotif(FNotifInfoStructure bpp__NewNotif__pf);
    void AddGroupedNotif(TArray<FGameplayTag>& bpp__NotifsTag__pf);
    void OnSaveCheckFinished__DelegateSignature();
    void OnObjectUnlockedDynamic__DelegateSignature(FGameplayTag bpp___objectUnlockedTag__pf);
    void DynamicMulticast__DelegateSignature();
    void CurrentMenuChanged__DelegateSignature(EMenuEnum bpp___ePrevMenu__pf, EMenuEnum bpp___eNewMenu__pf);
};

#endif
