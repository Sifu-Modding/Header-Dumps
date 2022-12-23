#ifndef UE4SS_SDK_BP_MenuTrainingSpawn_HPP
#define UE4SS_SDK_BP_MenuTrainingSpawn_HPP

class UBP_MenuTrainingSpawn_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAsyncImage* ArchetypeImg;
    class UBP_Btn_InputTip_C* InputConfirm;
    class UBP_Btn_InputTip_C* InputNumber;
    class UBP_Btn_SpinBox_C* SpinArchetype;
    class UBP_Btn_SpinBox_C* SpinNumber;
    class UBP_Btn_SpinBox_C* SpinVersion;
    class UPDA_TrainingSelectableAI_C* TrainingArchetypeDB;
    FSTR_Training_SpawnedAI CurrentTrainingSpawnedAI;
    FBP_MenuTrainingSpawn_CApplyChangeEvent ApplyChangeEvent;
    void ApplyChangeEvent(FSTR_Training_SpawnedAI TrainingSpawnedAI);
    FSTR_Training_SpawnedAI PreviousTrainingSpawnedAI;

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
};

#endif
