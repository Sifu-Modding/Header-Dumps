#ifndef UE4SS_SDK_BP_HUD_PickUp_Menu_HPP
#define UE4SS_SDK_BP_HUD_PickUp_Menu_HPP

class UBP_HUD_PickUp_Menu_C : public UPickUpMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_0;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_1;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_2;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_3;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_4;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_5;
    class UBP_HUD_PickUp_Item_C* PickUpMenuItem_6;

    void BPE_OnClose();
    void BPE_OnDataUpdated();
    void ExecuteUbergraph_BP_HUD_PickUp_Menu(int32 EntryPoint);
};

#endif
