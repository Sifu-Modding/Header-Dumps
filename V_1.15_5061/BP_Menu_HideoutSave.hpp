#ifndef UE4SS_SDK_BP_Menu_HideoutSave_HPP
#define UE4SS_SDK_BP_Menu_HideoutSave_HPP

class UBP_Menu_HideoutSave_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HideoutBox;
    class UBP_Menu_HideoutItemForSave_C* NewRun;
    class UBP_Menu_HideoutItemForSave_C* PreviousRun;
    int32 LastHideout;

    void SetHideoutToOverride(int32 HideoutBitmask, int32 HideoutNb);
    class UWidget* Parrallax(EUINavigation Navigation);
    void BPE_OnVisible();
    void OnClickedNew(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnClickPrevious(class UButtonUserWidget* _button, bool _bWithMouse);
    void ExecuteUbergraph_BP_Menu_HideoutSave(int32 EntryPoint);
};

#endif
