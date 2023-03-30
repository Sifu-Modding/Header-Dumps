#ifndef UE4SS_SDK_DetectiveBoardItem_HPP
#define UE4SS_SDK_DetectiveBoardItem_HPP

class UDetectiveBoardItem_C : public UDetectiveLinkableItem_C
{
    class UWidgetAnimation* LoadedAnim;                                               // 0x0350 (size: 0x8)
    class UWidgetAnimation* ZoomFocusAnim;                                            // 0x0358 (size: 0x8)
    class UWidgetAnimation* NotifAnim;                                                // 0x0360 (size: 0x8)
    class UWidgetAnimation* FocusAnim;                                                // 0x0368 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0370 (size: 0x8)
    class UDetectiveBlocker_C* DetectiveBlocker;                                      // 0x0378 (size: 0x8)
    class UDetectiveKey_C* DetectiveKey;                                              // 0x0380 (size: 0x8)
    class UImage* InvestigationImage;                                                 // 0x0388 (size: 0x8)
    class USCButton* ItemButton;                                                      // 0x0390 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0398 (size: 0x8)
    class USizeBox* MainSizeBox;                                                      // 0x03A0 (size: 0x8)
    class UOverlay* Notif;                                                            // 0x03A8 (size: 0x8)
    class UImage* SelectionOutlineLocked;                                             // 0x03B0 (size: 0x8)
    class UImage* SelectionOutlineUnlocked;                                           // 0x03B8 (size: 0x8)
    class UWidgetSwitcher* StateSwitcher;                                             // 0x03C0 (size: 0x8)
    class UBorder* Unlocked;                                                          // 0x03C8 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Image;                                                 // 0x03D0 (size: 0x28)
    TSoftObjectPtr<UTexture2D> LowResImage;                                           // 0x03F8 (size: 0x28)
    class UDetectiveBoardEntryList_C* EntryListWidgetOverride;                        // 0x0420 (size: 0x8)
    FDetectiveBoardItem_CItemHovered ItemHovered;                                     // 0x0428 (size: 0x10)
    void ItemHovered(class UDetectiveBoardItem_C* bpp__Item__pf, bool bpp__bByMouse__pf);
    FDetectiveBoardItem_CItemUnhovered ItemUnhovered;                                 // 0x0438 (size: 0x10)
    void ItemUnhovered(class UDetectiveBoardItem_C* bpp__Item__pf);
    bool Rendered;                                                                    // 0x0448 (size: 0x1)
    FDetectiveBoardItem_CItemClicked itemClicked;                                     // 0x0450 (size: 0x10)
    void ItemClicked(class UDetectiveBoardItem_C* bpp__Item__pf);
    TSoftObjectPtr<UTexture2D> LowResImageToShow;                                     // 0x0460 (size: 0x28)
    TSoftObjectPtr<UTexture2D> ImageToShow;                                           // 0x0488 (size: 0x28)
    DetectiveBoardItemSFXTypes SFXType;                                               // 0x04B0 (size: 0x1)
    bool bBlockHoverCall;                                                             // 0x04B1 (size: 0x1)
    FVector2D LinkOffset;                                                             // 0x04B4 (size: 0x8)
    bool bUseLowResImage;                                                             // 0x04BC (size: 0x1)
    float ItemDefaultSize;                                                            // 0x04C0 (size: 0x4)
    bool bForceNotifHidden;                                                           // 0x04C4 (size: 0x1)
    bool IsZoomedItem;                                                                // 0x04C5 (size: 0x1)
    FVector2D WantedSlotGridSize;                                                     // 0x04C8 (size: 0x8)
    int32 NewVar_0;                                                                   // 0x04D0 (size: 0x4)
    bool Temp_bool_Variable;                                                          // 0x04D4 (size: 0x1)
    ESlateVisibility Temp_byte_Variable;                                              // 0x04D5 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x04D6 (size: 0x1)
    class UObject* K2Node_CustomEvent_Loaded;                                         // 0x04D8 (size: 0x8)
    ESlateVisibility K2Node_Select_Default;                                           // 0x04E0 (size: 0x1)
    class UObject* Temp_object_Variable;                                              // 0x04E8 (size: 0x8)
    class UTexture2D* K2Node_DynamicCast_AsTexture_2D;                                // 0x04F0 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x04F8 (size: 0x1)
    FAnchors K2Node_MakeStruct_Anchors;                                               // 0x04FC (size: 0x10)
    bool Temp_bool_Variable_1;                                                        // 0x050C (size: 0x1)
    class USCButton* K2Node_ComponentBoundEvent__buttonFocused;                       // 0x0510 (size: 0x8)
    class USCButton* K2Node_ComponentBoundEvent__buttonUnfocused;                     // 0x0518 (size: 0x8)
    class UWidgetAnimation* K2Node_Select_Default_1;                                  // 0x0520 (size: 0x8)
    bool Temp_bool_Variable_2;                                                        // 0x0528 (size: 0x1)
    bool K2Node_CustomEvent_bPlayAnimation;                                           // 0x0529 (size: 0x1)
    FDetectiveBoardItem_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x052C (size: 0x10)
    void OnAssetLoaded(class UObject* Loaded);
    float CallFunc_BreakVector2D_X;                                                   // 0x053C (size: 0x4)
    float CallFunc_BreakVector2D_Y;                                                   // 0x0540 (size: 0x4)
    bool Temp_bool_Variable_3;                                                        // 0x0544 (size: 0x1)
    TSoftObjectPtr<UTexture2D> K2Node_Select_Default_2;                               // 0x0548 (size: 0x28)
    float K2Node_Select_Default_3;                                                    // 0x0570 (size: 0x4)
    class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1;                              // 0x0578 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0580 (size: 0x1)

    void ItemUnhovered__DelegateSignature(class UDetectiveBoardItem_C* bpp__Item__pf);
    void ItemHovered__DelegateSignature(class UDetectiveBoardItem_C* bpp__Item__pf, bool bpp__bByMouse__pf);
    void ItemClicked__DelegateSignature(class UDetectiveBoardItem_C* bpp__Item__pf);
    void UpdateVisual();
    void UpdateTypeImages(class UAbilitySystemComponent* bpp__InComponent__pf, bool bpp__Editor__pf);
    void UpdateItems(bool bpp__Editor__pf);
    void UpdateImageAlignment();
    void TryToShowEntries();
    void TryToHideEntries();
    bool ShouldShowEntries();
    void SetSlotGridSize(int32 bpp__Row__pf, int32 bpp__Column__pf);
    void OnLoaded_8C86884B473BD2A666D440A16CDD0120(class UObject* bpp__Loaded__pf);
    void OnItemImageLoadStarted();
    void OnItemImageLoaded(bool bpp__bPlayAnimation__pf);
    FEventReply OnFocusReceived(FGeometry bpp__MyGeometry__pf, FFocusEvent bpp__InFocusEvent__pf);
    void HideEntries();
    class UDetectiveBoardEntryList_C* GetEntryListWidget();
    void GetAnchorOverride(class UWidget*& bpp__OutResultValue__pf, FVector2D& bpp__OutOffset__pf);
    void ForceSwitcherInvalidation();
    void ExecuteUbergraph_DetectiveBoardItem_3(int32 bpp__EntryPoint__pf);
    void DismissAllNotifies(bool bpp__bUpdateVisibility__pf);
    void Construct();
    void ClearImage();
    void BPE_OnSynchronizeProperties();
    void BndEvt__SCButton_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_ButtonUnFocused__DelegateSignature(class USCButton* bpp___buttonUnfocused__pf);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_ButtonFocused__DelegateSignature(class USCButton* bpp___buttonFocused__pf);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
}; // Size: 0x588

#endif
