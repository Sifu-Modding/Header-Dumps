#ifndef UE4SS_SDK_BP_Menu_SkillBtn_HPP
#define UE4SS_SDK_BP_Menu_SkillBtn_HPP

class UBP_Menu_SkillBtn_C : public USkillButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0868 (size: 0x8)
    class UWidgetAnimation* HoldingAnim;                                              // 0x0870 (size: 0x8)
    class UWidgetAnimation* ValidatedAnim;                                            // 0x0878 (size: 0x8)
    class UWidgetAnimation* UnlockedAnim;                                             // 0x0880 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0888 (size: 0x8)
    class UOverlay* ActiveOverlay;                                                    // 0x0890 (size: 0x8)
    class UImage* Blink;                                                              // 0x0898 (size: 0x8)
    class UImage* Outline;                                                            // 0x08A0 (size: 0x8)
    class UBP_HUD_RadialProgressBar_C* RadialBar;                                     // 0x08A8 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x08B0 (size: 0x8)
    class USizeBox* SizeBox_2;                                                        // 0x08B8 (size: 0x8)
    class UBorder* SkillPointBkg;                                                     // 0x08C0 (size: 0x8)
    class UAsyncImage* SkillPointIcon;                                                // 0x08C8 (size: 0x8)
    FBP_Menu_SkillBtn_CSkillBtnHovered SkillBtnHovered;                               // 0x08D0 (size: 0x10)
    void SkillBtnHovered(class UBP_Menu_SkillBtn_C* Button);
    FBP_Menu_SkillBtn_CSkillBtnUnhovered SkillBtnUnhovered;                           // 0x08E0 (size: 0x10)
    void SkillBtnUnhovered(class UBP_Menu_SkillBtn_C* Button);
    bool SpendContext;                                                                // 0x08F0 (size: 0x1)
    FBP_Menu_SkillBtn_CSkillBtnUnlock SkillBtnUnlock;                                 // 0x08F8 (size: 0x10)
    void SkillBtnUnlock(class UBP_Menu_SkillBtn_C* Button, TArray<class TSubclassOf<USkillGameplayEffect>>& PrevSkills, TArray<class TSubclassOf<USkillGameplayEffect>>& NewSkills);
    bool InDeath;                                                                     // 0x0908 (size: 0x1)
    class UBP_Menu_SkillBtn_C* Parent;                                                // 0x0910 (size: 0x8)
    TArray<class UObject*> Childs;                                                    // 0x0918 (size: 0x10)
    TEnumAsByte<Menu_SkillBtn_State> ParentState;                                     // 0x0928 (size: 0x1)
    TEnumAsByte<Menu_SkillBtn_State> SkillState;                                      // 0x0929 (size: 0x1)
    TEnumAsByte<Menu_SkillBtn_Init> SkillInit;                                        // 0x092A (size: 0x1)
    bool OnHover;                                                                     // 0x092B (size: 0x1)
    bool ChargeLock;                                                                  // 0x092C (size: 0x1)
    bool HoldStarted;                                                                 // 0x092D (size: 0x1)
    float Value;                                                                      // 0x0930 (size: 0x4)
    FBP_Menu_SkillBtn_CSkillBtnConsolidate SkillBtnConsolidate;                       // 0x0938 (size: 0x10)
    void SkillBtnConsolidate(class UBP_Menu_SkillBtn_C* Button);
    FBP_Menu_SkillBtn_CSkillBtnClicked SkillBtnClicked;                               // 0x0948 (size: 0x10)
    void SkillBtnClicked();
    FBP_Menu_SkillBtn_CSkillBtnPermUnlock SkillBtnPermUnlock;                         // 0x0958 (size: 0x10)
    void SkillBtnPermUnlock();
    FGameplayTag HiddenTag;                                                           // 0x0968 (size: 0x8)
    int32 ChargeIndex;                                                                // 0x0970 (size: 0x4)
    float AnimPlaybackSpeed;                                                          // 0x0974 (size: 0x4)
    bool PermanentlyUnlocked;                                                         // 0x0978 (size: 0x1)

    void HiddenConditionCheck(bool& ShouldDisplay);
    void GetSkillProgress(TSubclassOf<class USkillGameplayEffect> LocalSkill, int32& Current, int32& Max, int32& ConsolidationValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ActivateSkill();
    void ConsolidateSkill();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetEnable(bool bIsFocusable);
    bool IsClickable();
    void OnRelease();
    void OnHolding(float LocalValue);
    void PlayOutAnim();
    void PlayValidatedAnim();
    void PlayUnlockedAnim();
    void GetState(TEnumAsByte<Menu_SkillBtn_State>& State);
    void UnlockSkill(bool bPreventCost);
    void UpdateButtonState();
    void UpdateButtonStyle();
    void OnFinished_B63D17814A9F1B217129849CDF94F8CC();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnDataUpdated();
    void UpdateStateAfterDelay(class UObject* _menu, float _fDuration);
    void PreConstruct(bool IsDesignTime);
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Menu_SkillBtn(int32 EntryPoint);
    void SkillBtnPermUnlock__DelegateSignature();
    void SkillBtnClicked__DelegateSignature();
    void SkillBtnConsolidate__DelegateSignature(class UBP_Menu_SkillBtn_C* Button);
    void SkillBtnUnlock__DelegateSignature(class UBP_Menu_SkillBtn_C* Button, TArray<class TSubclassOf<USkillGameplayEffect>>& PrevSkills, TArray<class TSubclassOf<USkillGameplayEffect>>& NewSkills);
    void SkillBtnUnhovered__DelegateSignature(class UBP_Menu_SkillBtn_C* Button);
    void SkillBtnHovered__DelegateSignature(class UBP_Menu_SkillBtn_C* Button);
}; // Size: 0x979

#endif
