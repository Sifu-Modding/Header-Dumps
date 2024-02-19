#ifndef UE4SS_SDK_BP_Btn_DebugTeleport_HPP
#define UE4SS_SDK_BP_Btn_DebugTeleport_HPP

class UBP_Btn_DebugTeleport_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UTextBlock* BtnTxt;                                                         // 0x0318 (size: 0x8)
    class USCButton* SCBtn;                                                           // 0x0320 (size: 0x8)
    class AActor* ShortcutActor;                                                      // 0x0328 (size: 0x8)
    class ABP_DebugTeleportManager_C* DebugShortcut;                                  // 0x0330 (size: 0x8)
    FBP_Btn_DebugTeleport_CED_ButtonPressed ED_ButtonPressed;                         // 0x0338 (size: 0x10)
    void ED_ButtonPressed(int32 ID);
    int32 ID;                                                                         // 0x0348 (size: 0x4)

    void SetText(FString inString);
    void SetLevelShortcut(class AActor* ShortcutActor, int32 ID);
    void Construct();
    void BndEvt__SCButton_98_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_DebugTeleport(int32 EntryPoint);
    void ED_ButtonPressed__DelegateSignature(int32 ID);
}; // Size: 0x34C

#endif
