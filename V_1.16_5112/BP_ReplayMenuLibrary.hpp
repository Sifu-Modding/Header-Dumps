#ifndef UE4SS_SDK_BP_ReplayMenuLibrary_HPP
#define UE4SS_SDK_BP_ReplayMenuLibrary_HPP

class UBP_ReplayMenuLibrary_C : public UBlueprintFunctionLibrary
{

    void ShowFilterPresetSavedPopup(bool SaveIsSuccess, class UWBP_FilterPresetSavedPopup_C* InWidget, class APlayerController* PlayerController, class UObject* __WorldContext, class UWBP_FilterPresetSavedPopup_C*& OutWidget);
    void ExportScreenshot(class UReplayMenuWidget* Menu, class UObject* __WorldContext);
    void UpdateCineCameraSettings(class UReplayKey* Key, class UReplayCineCameraComponent* CineCameraComponent, class UObject* __WorldContext);
    void GetNextPropertyItemsWithDirection(int32 Direction, int32 CurrentItemIndex, TArray<class UWBP_ReplayMenuItem_C*>& Items, class UObject* __WorldContext, class UWBP_ReplayMenuItem_C*& ReturnItem);
    void UpdatePropertyItemsNavigationRules(TArray<class UWBP_ReplayMenuItem_C*>& Items, class UObject* __WorldContext);
    void CreateLeavePopup(class APlayerController* OwningPlayer, FText TitleText, FText PrimaryText, FText SecondaryText, FText BottomText, bool Animated, FText YesText, FText NoText, class UObject* __WorldContext, class UBP_Menu_Popup_Validation_C*& PopupWidget, class UBP_Popup_Background_C*& PopupBackground);
    void HideLeavePopup(class UBP_Menu_Popup_Validation_C* PopupWidget, class UBP_Popup_Background_C* PopupBackground, class ABaseReplayController* Controller, bool HandleSpectatorAL, bool RemoveInputsHandler, class UObject* __WorldContext);
    void ShowLeavePopup(class UBP_Menu_Popup_Validation_C* PopupWidget, class UBP_Popup_Background_C* PopupBackground, class ABaseReplayController* Controller, const FShowLeavePopupYesCallback& YesCallback, const FShowLeavePopupNoCallback& NoCallback, bool HandleSpectatorAL, class UObject* __WorldContext);
};

#endif
