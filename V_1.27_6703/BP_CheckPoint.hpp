#ifndef UE4SS_SDK_BP_CheckPoint_HPP
#define UE4SS_SDK_BP_CheckPoint_HPP

class ABP_CheckPoint_C : public ACheckPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    TArray<FSCSoundSwitchValue> soundStatesToSet;                                     // 0x03E8 (size: 0x10)
    bool TriggerLaunchSave;                                                           // 0x03F8 (size: 0x1)

    void SetSoundStates();
    void BndEvt__BP_CheckPoint_m_TriggerCheckpointEnter_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BPF_SetSoundStates();
    void ExecuteUbergraph_BP_CheckPoint(int32 EntryPoint);
}; // Size: 0x3F9

#endif
