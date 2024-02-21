#ifndef UE4SS_SDK_BP_HUD_Dialog_Timer_HPP
#define UE4SS_SDK_BP_HUD_Dialog_Timer_HPP

class UBP_HUD_Dialog_Timer_C : public UUserWidget
{
    class UProgressBar* VerticalTimer;                                                // 0x0268 (size: 0x8)
    float Timer;                                                                      // 0x0270 (size: 0x4)
    FBP_HUD_Dialog_Timer_CTimerElapsed TimerElapsed;                                  // 0x0278 (size: 0x10)
    void TimerElapsed();
    float TimerInit;                                                                  // 0x0288 (size: 0x4)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x028C (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x02C4 (size: 0x4)

    void TimerElapsed__DelegateSignature();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void StopTimer();
    void InitTimer(float bpp__Timer__pf);
}; // Size: 0x2C8

#endif
