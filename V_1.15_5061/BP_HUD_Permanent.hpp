#ifndef UE4SS_SDK_BP_HUD_Permanent_HPP
#define UE4SS_SDK_BP_HUD_Permanent_HPP

class UBP_HUD_Permanent_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hide;
    class UWidgetAnimation* Show;
    class UBorder* Border_5;
    class UBorder* Border_BG;
    class UBorder* Border_Container;
    class UCircularThrobber* CircularThrobber;
    class USizeBox* InfoNotification;
    class UIntStatTextBlock* IntStatTextBlock_1;
    class UInvalidationBox* InvalidationBox_0;
    class UHorizontalBox* PlayerCount;
    class USizeBox* ProcessNotification;
    class USizeBox* SizeBoxNotifications;
    class UWidgetSwitcher* SwitcherNotification;
    class UTextBlock* Text;
    class UTextBlock* TextInfoLine1;
    class UTextBlock* TextInfoLine2;
    bool HandleJoinSession;
    TEnumAsByte<HUD_PermanentNotifs> CurrentNotification;
    FLinearColor ErrorColor;
    FLinearColor SuccessColor;
    FLinearColor NormalColor;
    bool Cancel;
    FText Text_NotifInfo_GotoToAltar_Line1;
    FText Text_NotifInfo_GotoToAltar_Line2;

    void OnOptionChanged(EGameOptionTypes eGameOptionType);
    void Bind_HUDVisibility();
    void ShowProcessNotification();
    void ShowInfoNotification(FText Line1, FText Line2);
    void RefreshMatchMakingStatus(uint8 NewStatus);
    void RefreshContent();
    void ShowMatchMakingStatus();
    void ShowJoiningSession();
    void BPE_OnVisible();
    void HandleNotifiaction();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void CancelCurrentAnimation();
    void Construct();
    void ExecuteUbergraph_BP_HUD_Permanent(int32 EntryPoint);
};

#endif
