#ifndef UE4SS_SDK_BP_LessonActionCondition_Takedown_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Takedown_HPP

class UBP_LessonActionCondition_Takedown_C : public UBP_LessonActionCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)

    void UnbindAll();
    void BPE_Init();
    void OnTDStarted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnAIKilled(class AActor* Victim, bool _bIsOnlyAssist, bool _bKillingBlow, class AActor* _Instigator, const FDamageInfos& _damageInfos);
    void ExecuteUbergraph_BP_LessonActionCondition_Takedown(int32 EntryPoint);
}; // Size: 0x248

#endif
