#ifndef UE4SS_SDK_BP_BulletTimeAbility_HPP
#define UE4SS_SDK_BP_BulletTimeAbility_HPP

class UBP_BulletTimeAbility_C : public USCGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;
    FSCGameplayAbilityActivationInfo Activation Infos;
    TArray<class UAbilityTask*> PrepTasks;
    InputAction E Input Action;

    void m_OnInputActionDetected_12CDEA23429788C03F983CB39A084DDA();
    void m_OnPaused_AB12D3434ACDDE7EF0CE80B667D86B32();
    void m_OnStarted_AB12D3434ACDDE7EF0CE80B667D86B32();
    void m_OnFinish_AB12D3434ACDDE7EF0CE80B667D86B32();
    void K2_OnEndAbility(bool bWasCancelled);
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void ExecuteUbergraph_BP_BulletTimeAbility(int32 EntryPoint);
};

#endif
