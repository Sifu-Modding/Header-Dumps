#ifndef UE4SS_SDK_WBP_ControllerDebug_HPP
#define UE4SS_SDK_WBP_ControllerDebug_HPP

class UWBP_ControllerDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_A;                                        // 0x0270 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_B;                                        // 0x0278 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_LB;                                       // 0x0280 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_LT;                                       // 0x0288 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_RB;                                       // 0x0290 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_RT;                                       // 0x0298 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_X;                                        // 0x02A0 (size: 0x8)
    class UWBP_InputDebug_C* WBP_InputDebug_Y;                                        // 0x02A8 (size: 0x8)
    class UWBP_StickDebug_C* WBP_StickDebug_L;                                        // 0x02B0 (size: 0x8)
    class UWBP_StickDebug_C* WBP_StickDebug_R;                                        // 0x02B8 (size: 0x8)

    void InitAxis(FName ActionName, FInitAxisCallbackAxis CallbackAxis);
    void InitButton(FName ActionName, FInitButtonCallbackPressed CallbackPressed, FInitButtonCallbackReleased CallbackReleased);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void APressed();
    void AReleased();
    void BPressed();
    void BReleased();
    void YPressed();
    void YReleased();
    void XPressed();
    void XReleased();
    void RBPressed();
    void RBReleased();
    void LBPressed();
    void LBReleased();
    void ExecuteUbergraph_WBP_ControllerDebug(int32 EntryPoint);
}; // Size: 0x2C0

#endif
