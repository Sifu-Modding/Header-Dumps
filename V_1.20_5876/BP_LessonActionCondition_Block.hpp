#ifndef UE4SS_SDK_BP_LessonActionCondition_Block_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Block_HPP

class UBP_LessonActionCondition_Block_C : public UBP_LessonActionCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)

    void UnbindAll();
    void BPE_Init();
    void OnMcHit(class AController* ControllerInstigator, bool IsGuarding);
    void ExecuteUbergraph_BP_LessonActionCondition_Block(int32 EntryPoint);
}; // Size: 0x248

#endif
