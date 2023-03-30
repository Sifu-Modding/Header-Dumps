#ifndef UE4SS_SDK_Test_UI_HardpointText_HPP
#define UE4SS_SDK_Test_UI_HardpointText_HPP

class UTest_UI_HardpointText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UProgressBar* GaugeProg_0;                                                  // 0x0270 (size: 0x8)
    class UProgressBar* GaugeProg_1;                                                  // 0x0278 (size: 0x8)
    class UProgressBar* GaugeProg_2;                                                  // 0x0280 (size: 0x8)
    class USizeBox* SB_GaugeProg_0;                                                   // 0x0288 (size: 0x8)
    class USizeBox* SB_GaugeProg_1;                                                   // 0x0290 (size: 0x8)
    class USizeBox* SB_GaugeProg_2;                                                   // 0x0298 (size: 0x8)
    class USizeBox* SB_NameArea_0;                                                    // 0x02A0 (size: 0x8)
    class USizeBox* SB_NameArea_1;                                                    // 0x02A8 (size: 0x8)
    class USizeBox* SB_NameArea_2;                                                    // 0x02B0 (size: 0x8)
    class USizeBox* SB_UnderGauge_0;                                                  // 0x02B8 (size: 0x8)
    class USizeBox* SB_UnderGauge_1;                                                  // 0x02C0 (size: 0x8)
    class USizeBox* SB_UnderGauge_2;                                                  // 0x02C8 (size: 0x8)
    class UTextBlock* Text_NameArea_0;                                                // 0x02D0 (size: 0x8)
    class UTextBlock* Text_NameArea_1;                                                // 0x02D8 (size: 0x8)
    class UTextBlock* Text_NameArea_2;                                                // 0x02E0 (size: 0x8)
    class UImage* TheDOT_0;                                                           // 0x02E8 (size: 0x8)
    class UImage* TheDOT_1;                                                           // 0x02F0 (size: 0x8)
    class UImage* TheDOT_2;                                                           // 0x02F8 (size: 0x8)
    class UProgressBar* Undergauge_0;                                                 // 0x0300 (size: 0x8)
    class UProgressBar* Undergauge_1;                                                 // 0x0308 (size: 0x8)
    class UProgressBar* Undergauge_2;                                                 // 0x0310 (size: 0x8)
    FText DisplayedText;                                                              // 0x0318 (size: 0x18)
    FLinearColor DefaultColor;                                                        // 0x0330 (size: 0x10)
    FLinearColor ValidatedColor;                                                      // 0x0340 (size: 0x10)
    bool IsOver;                                                                      // 0x0350 (size: 0x1)
    TArray<class UProgressBar*> AllgaugeProd;                                         // 0x0358 (size: 0x10)
    TArray<class UProgressBar*> AllUnderGauge;                                        // 0x0368 (size: 0x10)
    TArray<class UTextBlock*> AllText;                                                // 0x0378 (size: 0x10)
    TArray<class UImage*> AllDot;                                                     // 0x0388 (size: 0x10)

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
}; // Size: 0x398

#endif
