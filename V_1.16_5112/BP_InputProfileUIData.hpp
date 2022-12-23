#ifndef UE4SS_SDK_BP_InputProfileUIData_HPP
#define UE4SS_SDK_BP_InputProfileUIData_HPP

class UBP_InputProfileUIData_C : public UInputMappingProfileUIData
{
    TSoftClassPtr<UUserWidget> Widget;
    FText Name;
    TMap<TEnumAsByte<BP_RemappingActionTypes>, FBP_RemappinActionInfos> Actions;
    bool IsCustomInput;

};

#endif
