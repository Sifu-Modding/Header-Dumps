#ifndef UE4SS_SDK_ModeUI_HPP
#define UE4SS_SDK_ModeUI_HPP

class UModeUI_C : public UUserWidget
{
    class UWave_C* wave;

    void ShowWaveScreen(Fwave wave);
    void SetWaveText(Fwave wave);
};

#endif
