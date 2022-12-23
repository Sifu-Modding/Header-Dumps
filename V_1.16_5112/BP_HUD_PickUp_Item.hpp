#ifndef UE4SS_SDK_BP_HUD_PickUp_Item_HPP
#define UE4SS_SDK_BP_HUD_PickUp_Item_HPP

class UBP_HUD_PickUp_Item_C : public UPickUpMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Apparition_PickupItem;
    class UTextBlock* ItemNumber;
    class UImage* ItemPicto;
    bool TickOn;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetNumber();
    void ExecuteUbergraph_BP_HUD_PickUp_Item(int32 EntryPoint);
};

#endif
