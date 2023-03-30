#ifndef UE4SS_SDK_BP_Notif_Spend_HPP
#define UE4SS_SDK_BP_Notif_Spend_HPP

class UBP_Notif_Spend_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0270 (size: 0x8)
    class UVerticalBox* CurrencyTotalUpdate;                                          // 0x0278 (size: 0x8)
    class UBP_Notif_Currency_C* CurrentCurrency;                                      // 0x0280 (size: 0x8)
    class UBP_Notif_Currency_C* PlannedCurrency;                                      // 0x0288 (size: 0x8)
    TEnumAsByte<UI_CurrencyTypes> CurrencyType;                                       // 0x0290 (size: 0x1)

    void SetupSpending(TEnumAsByte<UI_CurrencyTypes> CurrencyType, int32 CurrentValue, int32 PlannedValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Notif_Spend(int32 EntryPoint);
}; // Size: 0x291

#endif
