#ifndef UE4SS_SDK_BP_HUD_PickUp_Item_HPP
#define UE4SS_SDK_BP_HUD_PickUp_Item_HPP

class UBP_HUD_PickUp_Item_C : public UPickUpMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Apparition_PickupItem;                                    // 0x02B0 (size: 0x8)
    class UTextBlock* ItemNumber;                                                     // 0x02B8 (size: 0x8)
    class UImage* ItemPicto;                                                          // 0x02C0 (size: 0x8)
    bool TickOn;                                                                      // 0x02C8 (size: 0x1)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetNumber();
    void ExecuteUbergraph_BP_HUD_PickUp_Item(int32 EntryPoint);
}; // Size: 0x2C9

#endif
