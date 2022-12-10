#ifndef UE4SS_SDK_WBP_MusicExportSettings_HPP
#define UE4SS_SDK_WBP_MusicExportSettings_HPP

class UWBP_MusicExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SpinBox_ReplayMusicButton_C* BalconyFight;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightFajar;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightJinfeng;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightKuroki;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightSean;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightSifu;
    class UWBP_SpinBox_ReplayMusicButton_C* BossFightYang;
    class UWBP_SpinBox_ReplayMusicButton_C* DanceFloorFight;
    class UWBP_SpinBox_ReplayMusicButton_C* FightCave;
    class UWBP_SpinBox_ReplayMusicButton_C* FightElevator;
    class UWBP_SpinBox_ReplayMusicButton_C* FightIntel;
    class UWBP_SpinBox_ReplayMusicButton_C* FightOffice;
    class UWBP_SpinBox_ReplayMusicButton_C* FightStairs;
    class UWBP_SpinBox_ReplayMusicButton_C* FireVillage;
    class UWBP_SpinBox_ReplayMusicButton_C* KungFuStudentFight;
    class UWBP_SpinBox_ReplayMusicButton_C* MainTheme;
    class UWBP_SpinBox_ReplayMusicButton_C* MoneyRoomMelee;
    class UWBP_SpinBox_ReplayMusicButton_C* MuseumExhibition;
    class UWBP_SpinBox_ReplayMusicButton_C* NoMusicButton;
    class UWBP_SpinBox_ReplayMusicButton_C* PitFight;
    class UVerticalBox* PropertiesVerticalBox;
    class UScrollBox* ScrollBox_Music;
    class UWBP_SpinBox_ReplayMusicButton_C* SkullBroFight;
    class UWBP_SpinBox_ReplayMusicButton_C* SquatsCorridor;
    class UWBP_SpinBox_ReplayMusicButton_C* SquatsSecondBuilding;
    class UWBP_SpinBox_ReplayMusicButton_C* Warehouse;
    class UWBP_SpinBox_ReplayMusicButton_C* WuguanTheme;
    class UWBP_SpinBox_ReplayMusicButton_C* WuguanThemeALT;

    void SetBtnMusicPlayingFeedback(FName StateName);
    void OnClickMusicBtn(class UButtonUserWidget* _button, bool _bWithMouse);
    void GetRootContainer(class UPanelWidget*& Widget);
    void BPE_OnMenuPopped();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void ExecuteUbergraph_WBP_MusicExportSettings(int32 EntryPoint);
};

#endif
