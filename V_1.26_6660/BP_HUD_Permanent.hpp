#ifndef UE4SS_SDK_BP_HUD_Permanent_HPP
#define UE4SS_SDK_BP_HUD_Permanent_HPP

class UBP_HUD_Permanent_C : public UHUDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UWidgetAnimation* Hide;                                                     // 0x03A0 (size: 0x8)
    class UWidgetAnimation* Show;                                                     // 0x03A8 (size: 0x8)
    class UBorder* Border_5;                                                          // 0x03B0 (size: 0x8)
    class UBorder* Border_BG;                                                         // 0x03B8 (size: 0x8)
    class UBorder* Border_Container;                                                  // 0x03C0 (size: 0x8)
    class UCircularThrobber* CircularThrobber;                                        // 0x03C8 (size: 0x8)
    class USizeBox* InfoNotification;                                                 // 0x03D0 (size: 0x8)
    class UIntStatTextBlock* IntStatTextBlock_1;                                      // 0x03D8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x03E0 (size: 0x8)
    class UHorizontalBox* PlayerCount;                                                // 0x03E8 (size: 0x8)
    class USizeBox* ProcessNotification;                                              // 0x03F0 (size: 0x8)
    class USizeBox* SizeBoxNotifications;                                             // 0x03F8 (size: 0x8)
    class UWidgetSwitcher* SwitcherNotification;                                      // 0x0400 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0408 (size: 0x8)
    class UTextBlock* TextInfoLine1;                                                  // 0x0410 (size: 0x8)
    class UTextBlock* TextInfoLine2;                                                  // 0x0418 (size: 0x8)
    bool HandleJoinSession;                                                           // 0x0420 (size: 0x1)
    TEnumAsByte<HUD_PermanentNotifs> CurrentNotification;                             // 0x0421 (size: 0x1)
    FLinearColor ErrorColor;                                                          // 0x0424 (size: 0x10)
    FLinearColor SuccessColor;                                                        // 0x0434 (size: 0x10)
    FLinearColor NormalColor;                                                         // 0x0444 (size: 0x10)
    bool Cancel;                                                                      // 0x0454 (size: 0x1)
    FText Text_NotifInfo_GotoToAltar_Line1;                                           // 0x0458 (size: 0x18)
    FText Text_NotifInfo_GotoToAltar_Line2;                                           // 0x0470 (size: 0x18)

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
}; // Size: 0x488

#endif
