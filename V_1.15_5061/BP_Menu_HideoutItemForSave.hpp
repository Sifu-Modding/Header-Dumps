#ifndef UE4SS_SDK_BP_Menu_HideoutItemForSave_HPP
#define UE4SS_SDK_BP_Menu_HideoutItemForSave_HPP

class UBP_Menu_HideoutItemForSave_C : public UBP_Menu_HideoutItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_Menu_HideoutItemForSave_CHideoutClicked_0 HideoutClicked_0;
    void HideoutClicked_0();

    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Menu_HideoutItemForSave(int32 EntryPoint);
    void HideoutClicked_0__DelegateSignature();
};

#endif
