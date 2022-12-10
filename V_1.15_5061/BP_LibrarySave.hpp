#ifndef UE4SS_SDK_BP_LibrarySave_HPP
#define UE4SS_SDK_BP_LibrarySave_HPP

class UBP_LibrarySave_C : public UBlueprintFunctionLibrary
{

    void HasConsumedLastLife(class UStatsComponent* StatsComponent, class UObject* __WorldContext, bool& ConsumedLastLife);
    FString GetTrueSaveFilename(FString InSaveFileName, class UObject* __WorldContext);
    void GetUseableSaveNames(class UObject* __WorldContext, TArray<FString>& SaveNameList);
    void BPF_HasAnyHideoutSave(class UObject* __WorldContext, bool& bResult);
    void BPF_LDSave(class UObject* __WorldContext);
    void BPF_SetPlayerCompletedTuto(bool bCompleted, class AFightingPlayerController* PlayerController, bool bSaveNow, class UObject* __WorldContext);
    void BPF_HasPlayerCompletedTuto(class UObject* __WorldContext, bool& bCompleted);
};

#endif
