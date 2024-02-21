#ifndef UE4SS_SDK_BP_LessonActionCondition_Throw_Dizzy_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Throw_Dizzy_HPP

class UBP_LessonActionCondition_Throw_Dizzy_C : public UBP_LessonActionCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)

    void UnbindAll();
    void BPE_Init();
    void OnThrowStarted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_LessonActionCondition_Throw_Dizzy(int32 EntryPoint);
}; // Size: 0x248

#endif
