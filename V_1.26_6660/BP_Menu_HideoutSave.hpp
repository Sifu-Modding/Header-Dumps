#ifndef UE4SS_SDK_BP_Menu_HideoutSave_HPP
#define UE4SS_SDK_BP_Menu_HideoutSave_HPP

class UBP_Menu_HideoutSave_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UHorizontalBox* HideoutBox;                                                 // 0x03E0 (size: 0x8)
    class UBP_Menu_HideoutItemForSave_C* NewRun;                                      // 0x03E8 (size: 0x8)
    class UBP_Menu_HideoutItemForSave_C* PreviousRun;                                 // 0x03F0 (size: 0x8)
    int32 LastHideout;                                                                // 0x03F8 (size: 0x4)

    void SetHideoutToOverride(int32 HideoutBitmask, int32 HideoutNb);
    class UWidget* Parrallax(EUINavigation Navigation);
    void BPE_OnVisible();
    void OnClickedNew(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnClickPrevious(class UButtonUserWidget* _button, bool _bWithMouse);
    void ExecuteUbergraph_BP_Menu_HideoutSave(int32 EntryPoint);
}; // Size: 0x3FC

#endif
