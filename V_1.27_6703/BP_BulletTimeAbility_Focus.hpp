#ifndef UE4SS_SDK_BP_BulletTimeAbility_Focus_HPP
#define UE4SS_SDK_BP_BulletTimeAbility_Focus_HPP

class UBP_BulletTimeAbility_Focus_C : public USCGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    FSCGameplayAbilityActivationInfo Activation Infos;                                // 0x0570 (size: 0x128)
    TArray<class UAbilityTask*> PrepTasks;                                            // 0x0698 (size: 0x10)
    InputAction E Input Action;                                                       // 0x06A8 (size: 0x1)

    void m_OnPaused_1914C5B4465039E30629DF8877581482();
    void m_OnStarted_1914C5B4465039E30629DF8877581482();
    void m_OnFinish_1914C5B4465039E30629DF8877581482();
    void m_OnInputActionDetected_245730B548A935C1E1DE1CB82D38E722();
    void K2_OnEndAbility(bool bWasCancelled);
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void ExecuteUbergraph_BP_BulletTimeAbility_Focus(int32 EntryPoint);
}; // Size: 0x6A9

#endif
