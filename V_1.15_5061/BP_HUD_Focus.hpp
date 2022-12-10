#ifndef UE4SS_SDK_BP_HUD_Focus_HPP
#define UE4SS_SDK_BP_HUD_Focus_HPP

class UBP_HUD_Focus_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_HUD_FocusSelector_Container_C* BP_HUD_FocusSelector_Container;
    class UInvalidationBox* InvalidationBox_0;

    void OnFocus(bool FocusLocal);
    void UpdateScale();
    void Construct();
    void OnOptionChanged(EGameOptionTypes eGameOptionType);
    void BPE_BindToDelegates(bool _bPawnOnly);
    void OnFocusStart();
    void OnFocusStop(bool _bCancel);
    void ExecuteUbergraph_BP_HUD_Focus(int32 EntryPoint);
};

#endif
