#ifndef UE4SS_SDK_BP_Menu_HideoutItemForSave_HPP
#define UE4SS_SDK_BP_Menu_HideoutItemForSave_HPP

class UBP_Menu_HideoutItemForSave_C : public UBP_Menu_HideoutItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08D8 (size: 0x8)
    FBP_Menu_HideoutItemForSave_CHideoutClicked_0 HideoutClicked_0;                   // 0x08E0 (size: 0x10)
    void HideoutClicked_0();

    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Menu_HideoutItemForSave(int32 EntryPoint);
    void HideoutClicked_0__DelegateSignature();
}; // Size: 0x8F0

#endif
