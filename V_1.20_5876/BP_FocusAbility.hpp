#ifndef UE4SS_SDK_BP_FocusAbility_HPP
#define UE4SS_SDK_BP_FocusAbility_HPP

class UBP_FocusAbility_C : public USCGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class AVitalPointActor* Target;                                                   // 0x0570 (size: 0x8)
    FNetOrderStructSnapAnim Net Order Struct Snap Anim;                               // 0x0578 (size: 0x170)
    FNetOrderStructSynchronizedAttackVictim Net Order Struct Synchronized Attack Victim; // 0x06E8 (size: 0x188)
    FVitalPointDataDefinition vitalPoint;                                             // 0x0870 (size: 0x18)
    FSCGameplayAbilityActivationInfo Activation Infos;                                // 0x0888 (size: 0x128)
    TArray<class UAbilityTask*> PrepTasks;                                            // 0x09B0 (size: 0x10)
    class UGameplayTask* FocusBillboardTask;                                          // 0x09C0 (size: 0x8)
    float FocusDuration;                                                              // 0x09C8 (size: 0x4)
    InputAction E Input Action;                                                       // 0x09CC (size: 0x1)
    FTargetForSlotsEnumHandler TargetHandler;                                         // 0x09D0 (size: 0x50)

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
}; // Size: 0xA20

#endif
