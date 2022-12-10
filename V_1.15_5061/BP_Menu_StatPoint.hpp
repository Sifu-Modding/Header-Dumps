#ifndef UE4SS_SDK_BP_Menu_StatPoint_HPP
#define UE4SS_SDK_BP_Menu_StatPoint_HPP

class UBP_Menu_StatPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Locked;
    class UWidgetSwitcher* StatPoint_Switcher;
    class UImage* Unlockable;
    class UImage* Unlocked;
    bool Is Black;

    void SetIsBlack(bool Black);
    void SetStyle(bool IsBlack);
    void SetState(bool IsLocked, bool IsUnlockable);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Menu_StatPoint(int32 EntryPoint);
};

#endif
