#ifndef UE4SS_SDK_BP_Menu_StatPoint_HPP
#define UE4SS_SDK_BP_Menu_StatPoint_HPP

class UBP_Menu_StatPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UImage* Locked;                                                             // 0x0270 (size: 0x8)
    class UWidgetSwitcher* StatPoint_Switcher;                                        // 0x0278 (size: 0x8)
    class UImage* Unlockable;                                                         // 0x0280 (size: 0x8)
    class UImage* Unlocked;                                                           // 0x0288 (size: 0x8)
    bool Is Black;                                                                    // 0x0290 (size: 0x1)

    void SetIsBlack(bool Black);
    void SetStyle(bool IsBlack);
    void SetState(bool IsLocked, bool IsUnlockable);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Menu_StatPoint(int32 EntryPoint);
}; // Size: 0x291

#endif
