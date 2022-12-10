#ifndef UE4SS_SDK_Test_UI_HardpointText_HPP
#define UE4SS_SDK_Test_UI_HardpointText_HPP

class UTest_UI_HardpointText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* GaugeProg_0;
    class UProgressBar* GaugeProg_1;
    class UProgressBar* GaugeProg_2;
    class USizeBox* SB_GaugeProg_0;
    class USizeBox* SB_GaugeProg_1;
    class USizeBox* SB_GaugeProg_2;
    class USizeBox* SB_NameArea_0;
    class USizeBox* SB_NameArea_1;
    class USizeBox* SB_NameArea_2;
    class USizeBox* SB_UnderGauge_0;
    class USizeBox* SB_UnderGauge_1;
    class USizeBox* SB_UnderGauge_2;
    class UTextBlock* Text_NameArea_0;
    class UTextBlock* Text_NameArea_1;
    class UTextBlock* Text_NameArea_2;
    class UImage* TheDOT_0;
    class UImage* TheDOT_1;
    class UImage* TheDOT_2;
    class UProgressBar* Undergauge_0;
    class UProgressBar* Undergauge_1;
    class UProgressBar* Undergauge_2;
    FText DisplayedText;
    FLinearColor DefaultColor;
    FLinearColor ValidatedColor;
    bool IsOver;
    TArray<class UProgressBar*> AllgaugeProd;
    TArray<class UProgressBar*> AllUnderGauge;
    TArray<class UTextBlock*> AllText;
    TArray<class UImage*> AllDot;

    FText Get_Task_Instruction_Text_0();
    void PreConstruct(bool IsDesignTime);
    void UpdateTextOfPerf(FString Area, float ValueCurrent, float ValueTotal, int32 Index);
    void Validated(int32 Index, bool ChangeBackColorOfAllTextToWhite);
    void DisplayDot(bool ShouldDisplayDot, int32 Index);
    void CompletedRun(int32 Index);
    void DisplayThoseElements(int32 Index);
    void HideAllHuD();
    void TellPlayerToKillAllEnemy(int32 Index);
    void ExecuteUbergraph_Test_UI_HardpointText(int32 EntryPoint);
};

#endif
