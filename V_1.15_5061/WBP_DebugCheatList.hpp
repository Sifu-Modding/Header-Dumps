#ifndef UE4SS_SDK_WBP_DebugCheatList_HPP
#define UE4SS_SDK_WBP_DebugCheatList_HPP

class UWBP_DebugCheatList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AutoTakedown;
    class UBorder* Autothrow;
    class UBorder* Focus;
    class UBorder* Ghost;
    class UBorder* Invincible;
    class UVerticalBox* MainVerticalBox;
    class UBorder* OPM;
    class UBorder* Structure;
    class UWBP_TimeDilationDebug_C* WBP_TimeDilationDebug;
    FTimerHandle RefreshTimer;

    void Construct();
    void RefreshCheats();
    void ExecuteUbergraph_WBP_DebugCheatList(int32 EntryPoint);
};

#endif
