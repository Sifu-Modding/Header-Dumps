#ifndef UE4SS_SDK_BP_MenuTrainingSpawn_HPP
#define UE4SS_SDK_BP_MenuTrainingSpawn_HPP

class UBP_MenuTrainingSpawn_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UAsyncImage* ArchetypeImg;                                                  // 0x03E0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputConfirm;                                           // 0x03E8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputNumber;                                            // 0x03F0 (size: 0x8)
    class UBP_Btn_SpinBox_C* SpinArchetype;                                           // 0x03F8 (size: 0x8)
    class UBP_Btn_SpinBox_C* SpinNumber;                                              // 0x0400 (size: 0x8)
    class UBP_Btn_SpinBox_C* SpinVersion;                                             // 0x0408 (size: 0x8)
    class UPDA_TrainingSelectableAI_C* TrainingArchetypeDB;                           // 0x0410 (size: 0x8)
    FSTR_Training_SpawnedAI CurrentTrainingSpawnedAI;                                 // 0x0418 (size: 0x8)
    FBP_MenuTrainingSpawn_CApplyChangeEvent ApplyChangeEvent;                         // 0x0420 (size: 0x10)
    void ApplyChangeEvent(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    FSTR_Training_SpawnedAI PreviousTrainingSpawnedAI;                                // 0x0430 (size: 0x8)

    void SetArchetypeImage(const FSTR_Training_SpawnedAI& Structure);
    void UpdateNumberSpinbox(bool IsBoss, FSTR_Training_SpawnedAI LocalTrainingSpawnedAI, bool Reset, int32& Number);
    bool BPE_OnActionButtonPressed();
    void UpdateVersionSpinbox(FSTR_Training_SpawnedAI LocalTrainingSpawnedAI, bool Reset, TEnumAsByte<Enum_TrainingSelectableVersions>& FirstVersion, bool& IsBoss);
    void UpdateArchetypeSpinbox(FSTR_Training_SpawnedAI LocalTrainingSpawnedAI);
    bool BPE_OnBackButtonPressed();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_MenuTrainingSpawn_SpinArchetype_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_MenuTrainingSpawn_SpinVersion_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_MenuTrainingSpawn_SpinNumber_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void ExecuteUbergraph_BP_MenuTrainingSpawn(int32 EntryPoint);
    void ApplyChangeEvent__DelegateSignature(FSTR_Training_SpawnedAI TrainingSpawnedAI);
}; // Size: 0x438

#endif
