#ifndef UE4SS_SDK_Wave_DUPL_1_HPP
#define UE4SS_SDK_Wave_DUPL_1_HPP

class UWave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowWaveBoss;
    class UWidgetAnimation* ShowWave;
    class UImage* Background;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* TxtBossName;
    class UTextBlock* TxtWaveNameCH;
    class UTextBlock* TxtWaveNameEN;
    class AModeManager_C* ModeManager;

    void SequenceEvent__ENTRYPOINTWave_3();
    void SequenceEvent__ENTRYPOINTWave_2();
    void SequenceEvent__ENTRYPOINTWave_1();
    void SequenceEvent__ENTRYPOINTWave_0();
    void ShowWaveBossAnimation();
    void ShowWaveAnimation();
    void SpawnEnemies();
    void ResetPlayerPos();
    void PlayBossSequence();
    void SequenceEvent_0();
    void ExecuteUbergraph_Wave(int32 EntryPoint);
};

#endif
