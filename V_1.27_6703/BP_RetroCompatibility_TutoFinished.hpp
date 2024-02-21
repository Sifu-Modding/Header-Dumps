#ifndef UE4SS_SDK_BP_RetroCompatibility_TutoFinished_HPP
#define UE4SS_SDK_BP_RetroCompatibility_TutoFinished_HPP

class UBP_RetroCompatibility_TutoFinished_C : public USaveUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_CheckingSave(const class USCSaveObject* _saveToCheck);
    void ExecuteUbergraph_BP_RetroCompatibility_TutoFinished(int32 EntryPoint);
}; // Size: 0xE8

#endif
