#ifndef UE4SS_SDK_WBP_ControllerDebug_HPP
#define UE4SS_SDK_WBP_ControllerDebug_HPP

class UWBP_ControllerDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InputDebug_C* WBP_InputDebug_A;
    class UWBP_InputDebug_C* WBP_InputDebug_B;
    class UWBP_InputDebug_C* WBP_InputDebug_LB;
    class UWBP_InputDebug_C* WBP_InputDebug_LT;
    class UWBP_InputDebug_C* WBP_InputDebug_RB;
    class UWBP_InputDebug_C* WBP_InputDebug_RT;
    class UWBP_InputDebug_C* WBP_InputDebug_X;
    class UWBP_InputDebug_C* WBP_InputDebug_Y;
    class UWBP_StickDebug_C* WBP_StickDebug_L;
    class UWBP_StickDebug_C* WBP_StickDebug_R;

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
};

#endif
