#ifndef UE4SS_SDK_BP_Menu_SkillBtn_HPP
#define UE4SS_SDK_BP_Menu_SkillBtn_HPP

class UBP_Menu_SkillBtn_C : public USkillButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoldingAnim;
    class UWidgetAnimation* ValidatedAnim;
    class UWidgetAnimation* UnlockedAnim;
    class UWidgetAnimation* HoverAnim;
    class UOverlay* ActiveOverlay;
    class UImage* Blink;
    class UImage* Outline;
    class UBP_HUD_RadialProgressBar_C* RadialBar;
    class UScaleBox* ScaleBox_0;
    class USizeBox* SizeBox_2;
    class UBorder* SkillPointBkg;
    class UAsyncImage* SkillPointIcon;
    FBP_Menu_SkillBtn_CSkillBtnHovered SkillBtnHovered;
    void SkillBtnHovered(class UBP_Menu_SkillBtn_C* Button);
    FBP_Menu_SkillBtn_CSkillBtnUnhovered SkillBtnUnhovered;
    void SkillBtnUnhovered(class UBP_Menu_SkillBtn_C* Button);
    bool SpendContext;
    FBP_Menu_SkillBtn_CSkillBtnUnlock SkillBtnUnlock;
    void SkillBtnUnlock(class UBP_Menu_SkillBtn_C* Button, TArray<class TSubclassOf<USkillGameplayEffect>>& PrevSkills, TArray<class TSubclassOf<USkillGameplayEffect>>& NewSkills);
    bool InDeath;
    class UBP_Menu_SkillBtn_C* Parent;
    TArray<class UObject*> Childs;
    TEnumAsByte<Menu_SkillBtn_State> ParentState;
    TEnumAsByte<Menu_SkillBtn_State> SkillState;
    TEnumAsByte<Menu_SkillBtn_Init> SkillInit;
    bool OnHover;
    bool ChargeLock;
    bool HoldStarted;
    float Value;
    FBP_Menu_SkillBtn_CSkillBtnConsolidate SkillBtnConsolidate;
    void SkillBtnConsolidate(class UBP_Menu_SkillBtn_C* Button);
    FBP_Menu_SkillBtn_CSkillBtnClicked SkillBtnClicked;
    void SkillBtnClicked();
    FBP_Menu_SkillBtn_CSkillBtnPermUnlock SkillBtnPermUnlock;
    void SkillBtnPermUnlock();
    FGameplayTag HiddenTag;
    int32 ChargeIndex;
    float AnimPlaybackSpeed;
    bool PermanentlyUnlocked;

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
};

#endif
