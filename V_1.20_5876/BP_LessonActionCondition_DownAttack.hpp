#ifndef UE4SS_SDK_BP_LessonActionCondition_DownAttack_HPP
#define UE4SS_SDK_BP_LessonActionCondition_DownAttack_HPP

class UBP_LessonActionCondition_DownAttack_C : public UBP_LessonActionCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)

    void UnbindAll();
    void BPE_Init();
    void OnDownAttackFinished(uint8 _ID, class UOrderComponent* _OrderComponent);
    void OnDownAttackStarted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_LessonActionCondition_DownAttack(int32 EntryPoint);
}; // Size: 0x248

#endif
