#ifndef UE4SS_SDK_BP_LibraryUi_HPP
#define UE4SS_SDK_BP_LibraryUi_HPP

class UBP_LibraryUi_C : public UBlueprintFunctionLibrary
{

    void FormatTime(float TimeInSeconds, class UObject* __WorldContext, FString& OutString);
    void UpdateTextLanguageInSaveAndApply(class UBP_Btn_SpinBox_C* SpinBox, int32 IndexInSpinBox, class UObject* __WorldContext);
    void UpdateAudioLanguageInSave(int32 IndexOfLanguage, class UObject* __WorldContext, FString& AudioCulture);
    void InitTextLanguage(class UBP_Btn_SpinBox_C* SpinBox, class UObject* __WorldContext);
    void InitAudioLanguage(class UBP_Btn_SpinBox_C* SpinBox, class UObject* __WorldContext);
    void GetHideoutIndex(FName MapTag, class UObject* __WorldContext, int32& OutIndex);
    void GetHideoutInfos(int32 InHideoutIndex, class UObject* __WorldContext, FHideoutVisualDescription& OutDescription);
    void BPF Is Actor Input Action Target (class AActor* Actor, InputAction Action, class UObject* __WorldContext, bool& Is Target);
    FText FormatReward(uint8 Index, class UObject* __WorldContext);
    FText FormatRank(int32 A, class UObject* __WorldContext);
    FSlateColor GetTiersColor(uint8 Tiers, class UObject* __WorldContext);
};

#endif
