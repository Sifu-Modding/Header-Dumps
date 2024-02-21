#ifndef UE4SS_SDK_EndlessMap_HPP
#define UE4SS_SDK_EndlessMap_HPP

class AEndlessMap_C : public AThePlainesLDLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class AStaticMeshActor* Cube3_ExecuteUbergraph_EndlessMap_RefProperty;            // 0x0488 (size: 0x8)

    void OnInteractiveChoiceSelected_63B7DF50488F631D604A769643AF514C(int32 DialogNodeId);
    void OnLineEnded_63B7DF50488F631D604A769643AF514C(int32 DialogNodeId);
    void OnDialogCut_63B7DF50488F631D604A769643AF514C(int32 DialogNodeId);
    void OnDialogCompleted_63B7DF50488F631D604A769643AF514C(int32 DialogNodeId);
    void ReceiveBeginPlay();
    void OnInteraction(class APlayerController* PlayerController);
    void ExecuteUbergraph_EndlessMap(int32 EntryPoint);
}; // Size: 0x490

#endif
