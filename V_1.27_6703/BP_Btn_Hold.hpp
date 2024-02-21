#ifndef UE4SS_SDK_BP_Btn_Hold_HPP
#define UE4SS_SDK_BP_Btn_Hold_HPP

class UBP_Btn_Hold_C : public USCUserWidget
{
    class UWidgetAnimation* ValidateAnim;                                             // 0x0310 (size: 0x8)
    class UWidgetAnimation* StillAnim;                                                // 0x0318 (size: 0x8)
    class UVerticalBox* HoldBox;                                                      // 0x0320 (size: 0x8)
    class UBP_Btn_Input_C* InputTip;                                                  // 0x0328 (size: 0x8)
    class UProgressBar* LinearBar;                                                    // 0x0330 (size: 0x8)
    FBP_Btn_Hold_CHoldingButton HoldingButton;                                        // 0x0338 (size: 0x10)
    void HoldingButton();
    bool HoldSoundON;                                                                 // 0x0348 (size: 0x1)
    FBP_Btn_Hold_CValidateButton ValidateButton;                                      // 0x0350 (size: 0x10)
    void ValidateButton();
    FBP_Btn_Hold_CStartAnim StartAnim;                                                // 0x0360 (size: 0x10)
    void StartAnim();
    FBP_Btn_Hold_CStopAnim StopAnim;                                                  // 0x0370 (size: 0x10)
    void StopAnim();
    InputAction InputAction;                                                          // 0x0380 (size: 0x1)
    FName GameParameter;                                                              // 0x0384 (size: 0x8)
    class UAkAudioEvent* HoldSound;                                                   // 0x0390 (size: 0x8)
    class UAkAudioEvent* ReleaseSound;                                                // 0x0398 (size: 0x8)
    bool Black;                                                                       // 0x03A0 (size: 0x1)
    FBP_Btn_Hold_COnKeyValidityChanged OnKeyValidityChanged;                          // 0x03A8 (size: 0x10)
    void OnKeyValidityChanged();
    bool ManuallyInitializeMapping;                                                   // 0x03B8 (size: 0x1)
    bool K2Node_Event_IsDesignTime;                                                   // 0x03B9 (size: 0x1)
    FMappingID K2Node_CustomEvent__mappingID;                                         // 0x03C0 (size: 0x58)

    void ValidateButton__DelegateSignature();
    void StopAnim__DelegateSignature();
    void StartAnim__DelegateSignature();
    void OnKeyValidityChanged__DelegateSignature();
    void HoldingButton__DelegateSignature();
    void TxtColor(FSlateColor& bpp__TextColor__pf);
    void StopAnimEvent();
    void StartAnimEvent();
    FLinearColor ShadowColor();
    void SetOutlineColor(class UTextBlock* bpp__text__pf, bool bpp__Black__pf, FSlateFontInfo& bpp__SlateFontInfo__pf);
    void SetHoldProgress(float bpp__LocalValue__pf, bool bpp__CanPlaySound__pf);
    void SequenceEvent__ENTRYPOINTBP_Btn_Hold_1();
    void SequenceEvent__ENTRYPOINTBP_Btn_Hold_0();
    void ReleaseHold(float bpp__LocalValue__pf, bool bpp__CanPlaySoun__pf, float& bpp__HoldValue__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void OnValidateButton();
    void OnHoldingValue(float bpp__Value__pf, float& bpp__HoldValue__pf);
    void OnHoldingButton(bool bpp__CanHold__pf, bool bpp__CanPlaySound__pf, float& bpp__HoldValue__pf);
    void IsBlack?(bool bpp__LocalBlack__pf);
    void InitializeMapping(const FMappingID& bpp___mappingID__pf__const);
    void Construct();
    void BndEvt__BP_Btn_Hold_InputTip_K2Node_ComponentBoundEvent_0_OnKeyValidityChanged__DelegateSignature();
}; // Size: 0x418

#endif
