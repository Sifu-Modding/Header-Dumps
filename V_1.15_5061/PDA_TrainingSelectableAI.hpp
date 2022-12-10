#ifndef UE4SS_SDK_PDA_TrainingSelectableAI_HPP
#define UE4SS_SDK_PDA_TrainingSelectableAI_HPP

class UPDA_TrainingSelectableAI_C : public UPrimaryDataAsset
{
    TMap<TEnumAsByte<Enum_TrainingSelectableArchetypes>, FSTR_Training_AIVersions> SpawnableAI;

    void GetArchetypeSelectableVersions(TEnumAsByte<Enum_TrainingSelectableArchetypes> Archetype, TArray<TEnumAsByte<Enum_TrainingSelectableVersions>>& Versions, bool& IsBoss);
    void GetSelectableArchetypes(TArray<TEnumAsByte<Enum_TrainingSelectableArchetypes>>& SelectableArchetypes);
};

#endif
