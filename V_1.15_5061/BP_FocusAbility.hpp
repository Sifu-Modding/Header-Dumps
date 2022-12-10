#ifndef UE4SS_SDK_BP_FocusAbility_HPP
#define UE4SS_SDK_BP_FocusAbility_HPP

class UBP_FocusAbility_C : public USCGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AVitalPointActor* Target;
    FNetOrderStructSnapAnim Net Order Struct Snap Anim;
    FNetOrderStructSynchronizedAttackVictim Net Order Struct Synchronized Attack Victim;
    FVitalPointDataDefinition vitalPoint;
    FSCGameplayAbilityActivationInfo Activation Infos;
    TArray<class UAbilityTask*> PrepTasks;
    class UGameplayTask* FocusBillboardTask;
    float FocusDuration;
    InputAction E Input Action;
    FTargetForSlotsEnumHandler TargetHandler;

    class AActor* BPE_GetTarget(const FSCGameplayAbilityActorInfo& _ActorInfo);
    void m_OnVitalPointSelected_C31E33EF476344DA410A3AB3494354A1(class AVitalPointActor* _target);
    void m_OnPaused_F4E4FFB542EDBA39F82D0795B22252D9();
    void m_OnStarted_F4E4FFB542EDBA39F82D0795B22252D9();
    void m_OnFinish_F4E4FFB542EDBA39F82D0795B22252D9();
    void m_OnFinish_905B210244892FD7196E66A11712B1E8();
    void m_OnInputActionDetected_C4DE3D294266BD2EC89D83AA4BB403FD();
    void m_OnInputActionDetected_FA7A4A4647A5C8ADB26C348EEB1EC554();
    void m_OnFinish_7D07DBB64FFF5337AD2A21851A1EF507();
    void m_OnFinish_C72E16FF414CE1CBD073118300AEE8E9();
    void K2_OnEndAbility(bool bWasCancelled);
    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void StopFocus();
    void ExecuteUbergraph_BP_FocusAbility(int32 EntryPoint);
};

#endif
