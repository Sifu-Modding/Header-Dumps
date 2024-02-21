#ifndef UE4SS_SDK_BP_InputProfileUIData_HPP
#define UE4SS_SDK_BP_InputProfileUIData_HPP

class UBP_InputProfileUIData_C : public UInputMappingProfileUIData
{
    TSoftClassPtr<UUserWidget> Widget;                                                // 0x0028 (size: 0x28)
    FText Name;                                                                       // 0x0050 (size: 0x18)
    TMap<TEnumAsByte<BP_RemappingActionTypes>, FBP_RemappinActionInfos> Actions;      // 0x0068 (size: 0x50)
    bool IsCustomInput;                                                               // 0x00B8 (size: 0x1)

}; // Size: 0xB9

#endif
