#ifndef UE4SS_SDK_WBP_DebugCheatList_HPP
#define UE4SS_SDK_WBP_DebugCheatList_HPP

class UWBP_DebugCheatList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBorder* AutoTakedown;                                                      // 0x0270 (size: 0x8)
    class UBorder* Autothrow;                                                         // 0x0278 (size: 0x8)
    class UBorder* Focus;                                                             // 0x0280 (size: 0x8)
    class UBorder* Ghost;                                                             // 0x0288 (size: 0x8)
    class UBorder* Invincible;                                                        // 0x0290 (size: 0x8)
    class UVerticalBox* MainVerticalBox;                                              // 0x0298 (size: 0x8)
    class UBorder* OPM;                                                               // 0x02A0 (size: 0x8)
    class UBorder* Structure;                                                         // 0x02A8 (size: 0x8)
    class UWBP_TimeDilationDebug_C* WBP_TimeDilationDebug;                            // 0x02B0 (size: 0x8)
    FTimerHandle RefreshTimer;                                                        // 0x02B8 (size: 0x8)

    void Construct();
    void RefreshCheats();
    void ExecuteUbergraph_WBP_DebugCheatList(int32 EntryPoint);
}; // Size: 0x2C0

#endif
