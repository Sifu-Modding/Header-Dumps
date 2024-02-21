#ifndef UE4SS_SDK_BP_HUD_PickUp_Menu_HPP
#define UE4SS_SDK_BP_HUD_PickUp_Menu_HPP

class UBP_HUD_PickUp_Menu_C : public UPickUpMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_0;                                    // 0x03B0 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_1;                                    // 0x03B8 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_2;                                    // 0x03C0 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_3;                                    // 0x03C8 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_4;                                    // 0x03D0 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_5;                                    // 0x03D8 (size: 0x8)
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_6;                                    // 0x03E0 (size: 0x8)

    void BPE_OnClose();
    void BPE_OnDataUpdated();
    void ExecuteUbergraph_BP_HUD_PickUp_Menu(int32 EntryPoint);
}; // Size: 0x3E8

#endif
