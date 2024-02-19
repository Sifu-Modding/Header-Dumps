#ifndef UE4SS_SDK_NotifInfoStructure_HPP
#define UE4SS_SDK_NotifInfoStructure_HPP

struct FNotifInfoStructure
{
    FText KeyTitle_2_EF328811427A106A674BC8BDCF4D6003;                                // 0x0000 (size: 0x18)
    class UAkAudioEvent* AkEvent_5_5D9D88D24D922B227406E19AC3492974;                  // 0x0018 (size: 0x8)
    int32 IlluIndex_8_CDE9EBEB4B254ED17DBF6C8868C32043;                               // 0x0020 (size: 0x4)
    bool NewShouldOpenPauseMenu_11_3568A8404A880345CC9966A2C3770B27;                  // 0x0024 (size: 0x1)
    FLinearColor ProgressBarColor_14_650C88B54A28E6971B4FE9A2B5B7810D;                // 0x0028 (size: 0x10)
    TArray<FMenuRequestStructure> RequestedMenus_21_986BC8014AC8B90BC20B5590E20B2D95; // 0x0038 (size: 0x10)
    bool RequestMenu_19_148CFF75475464E08B3A2494574FDA06;                             // 0x0048 (size: 0x1)
    FGameplayTag ObjectUnlockTag_25_D1E900BA492ECABFF8BF328FDE153EEB;                 // 0x004C (size: 0x8)
    HUD_Enum_NotificationType NotificationType_28_762F6AD142B32EDD5AF7B7B6D7BC2E48;   // 0x0054 (size: 0x1)

}; // Size: 0x58

#endif
