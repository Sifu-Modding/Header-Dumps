#ifndef UE4SS_SDK_BP_Btn_Hold_HPP
#define UE4SS_SDK_BP_Btn_Hold_HPP

class UBP_Btn_Hold_C : public USCUserWidget
{
    class UWidgetAnimation* ValidateAnim;
    class UWidgetAnimation* StillAnim;
    class UVerticalBox* HoldBox;
    class UBP_Btn_Input_C* InputTip;
    class UProgressBar* LinearBar;
    FBP_Btn_Hold_CHoldingButton HoldingButton;
    void HoldingButton();
    bool HoldSoundON;
    FBP_Btn_Hold_CValidateButton ValidateButton;
    void ValidateButton();
    FBP_Btn_Hold_CStartAnim StartAnim;
    void StartAnim();
    FBP_Btn_Hold_CStopAnim StopAnim;
    void StopAnim();
    InputAction InputAction;
    FName GameParameter;
    class UAkAudioEvent* HoldSound;
    class UAkAudioEvent* ReleaseSound;
    bool Black;
    bool K2Node_Event_IsDesignTime;

    void ValidateButton__DelegateSignature();
    void StopAnim__DelegateSignature();
    void StartAnim__DelegateSignature();
    void HoldingButton__DelegateSignature();
    void TxtColor(FSlateColor& bpp__TextColor__pf);
    void StopAnimEvent();
    void StartAnimEvent();
    FLinearColor ShadowColor();
    void SetOutlineColor(class UTextBlock* bpp__Text__pf, bool bpp__Black__pf, FSlateFontInfo& bpp__SlateFontInfo__pf);
    void SetHoldProgress(float bpp__LocalValue__pf, bool bpp__CanPlaySound__pf);
    void SequenceEvent__ENTRYPOINTBP_Btn_Hold_1();
    void SequenceEvent__ENTRYPOINTBP_Btn_Hold_0();
    void ReleaseHold(float bpp__LocalValue__pf, bool bpp__CanPlaySoun__pf, float& bpp__HoldValue__pf);
    void PreConstruct(bool bpp__IsDesignTime__pf);
    void OnValidateButton();
    void OnHoldingValue(float bpp__Value__pf, float& bpp__HoldValue__pf);
    void OnHoldingButton(bool bpp__CanHold__pf, bool bpp__CanPlaySound__pf, float& bpp__HoldValue__pf);
    void IsBlack?(bool bpp__LocalBlack__pf);
    void Construct();
};

#endif
