#ifndef UE4SS_SDK_WBP_MusicExportSettings_HPP
#define UE4SS_SDK_WBP_MusicExportSettings_HPP

class UWBP_MusicExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BalconyFight;                             // 0x0428 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightFajar;                           // 0x0430 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightJinfeng;                         // 0x0438 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightKuroki;                          // 0x0440 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightSean;                            // 0x0448 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightSifu;                            // 0x0450 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightYang;                            // 0x0458 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0460 (size: 0x8)
    class UTextBlock* BtnText_1;                                                      // 0x0468 (size: 0x8)
    class UTextBlock* BtnText_2;                                                      // 0x0470 (size: 0x8)
    class UTextBlock* BtnText_3;                                                      // 0x0478 (size: 0x8)
    class UTextBlock* BtnText_4;                                                      // 0x0480 (size: 0x8)
    class UTextBlock* BtnText_5;                                                      // 0x0488 (size: 0x8)
    class UTextBlock* BtnText_6;                                                      // 0x0490 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* DanceFloorFight;                          // 0x0498 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FightCave;                                // 0x04A0 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FightElevator;                            // 0x04A8 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FightIntel;                               // 0x04B0 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FightOffice;                              // 0x04B8 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FightStairs;                              // 0x04C0 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* FireVillage;                              // 0x04C8 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* KungFuStudentFight;                       // 0x04D0 (size: 0x8)
    class UImage* LineLeft;                                                           // 0x04D8 (size: 0x8)
    class UImage* LineLeft_1;                                                         // 0x04E0 (size: 0x8)
    class UImage* LineLeft_2;                                                         // 0x04E8 (size: 0x8)
    class UImage* LineLeft_3;                                                         // 0x04F0 (size: 0x8)
    class UImage* LineLeft_4;                                                         // 0x04F8 (size: 0x8)
    class UImage* LineLeft_5;                                                         // 0x0500 (size: 0x8)
    class UImage* LineLeft_6;                                                         // 0x0508 (size: 0x8)
    class UImage* LineRight;                                                          // 0x0510 (size: 0x8)
    class UImage* LineRight_1;                                                        // 0x0518 (size: 0x8)
    class UImage* LineRight_2;                                                        // 0x0520 (size: 0x8)
    class UImage* LineRight_3;                                                        // 0x0528 (size: 0x8)
    class UImage* LineRight_4;                                                        // 0x0530 (size: 0x8)
    class UImage* LineRight_5;                                                        // 0x0538 (size: 0x8)
    class UImage* LineRight_6;                                                        // 0x0540 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* MainTheme;                                // 0x0548 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* MoneyRoomMelee;                           // 0x0550 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* MuseumExhibition;                         // 0x0558 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* NoMusicButton;                            // 0x0560 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* PitFight;                                 // 0x0568 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0570 (size: 0x8)
    class UWBP_SpinBoxBool_C* ReplayBGMusic;                                          // 0x0578 (size: 0x8)
    class UScrollBox* ScrollBox_Music;                                                // 0x0580 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* SkullBroFight;                            // 0x0588 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* SquatsCorridor;                           // 0x0590 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* SquatsSecondBuilding;                     // 0x0598 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* Warehouse;                                // 0x05A0 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* WuguanTheme;                              // 0x05A8 (size: 0x8)
    class UWBP_SpinBox_ReplayMusicButton_C* WuguanThemeALT;                           // 0x05B0 (size: 0x8)
    bool MenuPopped;                                                                  // 0x05B8 (size: 0x1)

    void OnBGMusicOptionChanged();
    void SetBtnMusicPlayingFeedback(FName StateName);
    void OnClickMusicBtn(class UButtonUserWidget* _button, bool _bWithMouse);
    void GetRootContainer(class UPanelWidget*& Widget);
    void BPE_OnMenuPopped();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void BndEvt__WBP_MusicExportSettings_ReplayBGMusic_K2Node_ComponentBoundEvent_9_OnReceivedFocus__DelegateSignature();
    void BndEvt__WBP_MusicExportSettings_ReplayBGMusic_K2Node_ComponentBoundEvent_1_OnLostFocus__DelegateSignature();
    void ExecuteUbergraph_WBP_MusicExportSettings(int32 EntryPoint);
}; // Size: 0x5B9

#endif
