#ifndef UE4SS_SDK_BP_Btn_DebugTeleport_HPP
#define UE4SS_SDK_BP_Btn_DebugTeleport_HPP

class UBP_Btn_DebugTeleport_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BtnTxt;
    class USCButton* SCBtn;
    class AActor* ShortcutActor;
    class ABP_DebugTeleportManager_C* DebugShortcut;
    FBP_Btn_DebugTeleport_CED_ButtonPressed ED_ButtonPressed;
    void ED_ButtonPressed(int32 ID);
    int32 ID;

    void SetText(FString inString);
    void SetLevelShortcut(class AActor* ShortcutActor, int32 ID);
    void Construct();
    void BndEvt__SCButton_98_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_DebugTeleport(int32 EntryPoint);
    void ED_ButtonPressed__DelegateSignature(int32 ID);
};

#endif
