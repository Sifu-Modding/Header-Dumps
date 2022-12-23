#ifndef UE4SS_SDK_BP_HUD_Dialog_Timer_HPP
#define UE4SS_SDK_BP_HUD_Dialog_Timer_HPP

class UBP_HUD_Dialog_Timer_C : public UUserWidget
{
    class UProgressBar* VerticalTimer;
    float Timer;
    FBP_HUD_Dialog_Timer_CTimerElapsed TimerElapsed;
    void TimerElapsed();
    float TimerInit;
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;

    void TimerElapsed__DelegateSignature();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void StopTimer();
    void InitTimer(float bpp__Timer__pf);
};

#endif
