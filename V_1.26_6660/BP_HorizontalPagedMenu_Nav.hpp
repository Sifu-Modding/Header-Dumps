#ifndef UE4SS_SDK_BP_HorizontalPagedMenu_Nav_HPP
#define UE4SS_SDK_BP_HorizontalPagedMenu_Nav_HPP

class UBP_HorizontalPagedMenu_Nav_C : public UBP_PagedMenu_Nav_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UBorder* Line;                                                              // 0x02E0 (size: 0x8)
    class UBP_Btn_Input_C* NextTip;                                                   // 0x02E8 (size: 0x8)
    class UBP_Btn_Input_C* PrevTip;                                                   // 0x02F0 (size: 0x8)
    class UHorizontalBox* TabsBox;                                                    // 0x02F8 (size: 0x8)
    class UBorder* Underline;                                                         // 0x0300 (size: 0x8)
    class UGenericInputData* PrevInputData;                                           // 0x0308 (size: 0x8)
    class UGenericInputData* NextInputData;                                           // 0x0310 (size: 0x8)
    class UGenericInputData* PrevAltInputData;                                        // 0x0318 (size: 0x8)
    class UGenericInputData* NextAltInputData;                                        // 0x0320 (size: 0x8)
    InputAction PrevInputAction;                                                      // 0x0328 (size: 0x1)
    InputAction NextInputAction;                                                      // 0x0329 (size: 0x1)
    InputAction PrevAltInputAction;                                                   // 0x032A (size: 0x1)
    InputAction NextAltInputAction;                                                   // 0x032B (size: 0x1)
    bool AltNavigation;                                                               // 0x032C (size: 0x1)
    float UnderlineSize;                                                              // 0x0330 (size: 0x4)
    float BlendDuration;                                                              // 0x0334 (size: 0x4)
    float BlendTimeElapsed;                                                           // 0x0338 (size: 0x4)
    ESCBlendType BlendType;                                                           // 0x033C (size: 0x1)
    FVector2D RatiosOnStartBlend;                                                     // 0x0340 (size: 0x8)

    void RefreshRandomizerDot(bool Active, bool HasCheat, bool IsArenaMenuMap);
    void GetDotColorAndVisibility(bool IsArenaMenuMap, bool FromPauseMenu, FLinearColor& Color, bool& ShouldBeVisible);
    void RefreshMenuModifierDot(bool FromPauseMenu, bool IsArenaMenuMap);
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
}; // Size: 0x348

#endif
