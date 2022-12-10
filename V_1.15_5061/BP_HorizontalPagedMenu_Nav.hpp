#ifndef UE4SS_SDK_BP_HorizontalPagedMenu_Nav_HPP
#define UE4SS_SDK_BP_HorizontalPagedMenu_Nav_HPP

class UBP_HorizontalPagedMenu_Nav_C : public UBP_PagedMenu_Nav_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Line;
    class UBP_Btn_Input_C* NextTip;
    class UBP_Btn_Input_C* PrevTip;
    class UHorizontalBox* TabsBox;
    class UBorder* Underline;
    class UGenericInputData* PrevInputData;
    class UGenericInputData* NextInputData;
    class UGenericInputData* PrevAltInputData;
    class UGenericInputData* NextAltInputData;
    InputAction PrevInputAction;
    InputAction NextInputAction;
    InputAction PrevAltInputAction;
    InputAction NextAltInputAction;
    bool AltNavigation;
    float UnderlineSize;
    float BlendDuration;
    float BlendTimeElapsed;
    ESCBlendType BlendType;
    FVector2D RatiosOnStartBlend;

    void UpdateInputVisibility();
    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    void SetBtnGamepadNavDisabled(class UBP_Btn_Tab_C* InButton, bool InDisableGamepadNav);
    void OnLocalCurrentMenuChanged(EMenuEnum PrevMenu, EMenuEnum NewMenu);
    void GetButtonContainer(class UPanelWidget*& OutContainer);
    void GetNavigationSFX(bool bSuccess, class UAkAudioEvent*& OutEvent);
    void OnSlotAdded(class UBP_Btn_Tab_C* InBtn, class UPanelSlot* inTab);
    void SetColor(bool Black);
    void UpdateUnderlineSize(EMenuEnum PrevMenu, EMenuEnum NewMenu);
    void SetTipOpacity();
    void SetAltNavigation(bool InAltNavigation);
    void FillControllerButton(class UControllerButtonWidget* ControllerButtonMenu, class UGenericInputData* DefaultInputData, class UGenericInputData* AltInputData, InputAction DefaultInputAction, InputAction AltInputAction);
    void RefreshUnderlinePosition(FVector2D& OutTargetRatio);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_BP_HorizontalPagedMenu_Nav(int32 EntryPoint);
};

#endif
