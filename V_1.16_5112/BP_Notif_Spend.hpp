#ifndef UE4SS_SDK_BP_Notif_Spend_HPP
#define UE4SS_SDK_BP_Notif_Spend_HPP

class UBP_Notif_Spend_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow;
    class UVerticalBox* CurrencyTotalUpdate;
    class UBP_Notif_Currency_C* CurrentCurrency;
    class UBP_Notif_Currency_C* PlannedCurrency;
    TEnumAsByte<UI_CurrencyTypes> CurrencyType;

    void SetupSpending(TEnumAsByte<UI_CurrencyTypes> CurrencyType, int32 CurrentValue, int32 PlannedValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Notif_Spend(int32 EntryPoint);
};

#endif
