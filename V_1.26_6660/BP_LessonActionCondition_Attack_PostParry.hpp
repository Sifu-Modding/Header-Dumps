#ifndef UE4SS_SDK_BP_LessonActionCondition_Attack_PostParry_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Attack_PostParry_HPP

class UBP_LessonActionCondition_Attack_PostParry_C : public UBP_LessonActionCondition_Attack_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)

    void BPE_Init();
    void ExecuteUbergraph_BP_LessonActionCondition_Attack_PostParry(int32 EntryPoint);
}; // Size: 0x268

#endif
