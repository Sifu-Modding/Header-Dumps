#ifndef UE4SS_SDK_UI_3D_HPP
#define UE4SS_SDK_UI_3D_HPP

class AUI_3D_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    TMap<TEnumAsByte<UI3DEnum>, AActor*> ObjectsToCaptureMap;                         // 0x0438 (size: 0x50)
    TArray<class AActor*> MainCharUI3D;                                               // 0x0488 (size: 0x10)
    class ASkeletalMeshActor* WantedCharMesh;                                         // 0x0498 (size: 0x8)
    class ABP_UI_3D_C* BP_UI_3D_6_ExecuteUbergraph_UI_3D_RefProperty;                 // 0x04A0 (size: 0x8)
    class ABP_MainChar_W_UI_3D_C* BP_MainChar_W_UI_3D_2_EdGraph_0_RefProperty;        // 0x04A8 (size: 0x8)
    class ABP_MainChar_M_UI_3D_C* BP_MainChar_M_UI_3D_EdGraph_0_RefProperty;          // 0x04B0 (size: 0x8)
    class ABP_Pendant_UI_3D_C* BP_Pendant_UI_3D_EdGraph_1_RefProperty;                // 0x04B8 (size: 0x8)
    class ASCStaticMeshPrimInstActor* SM_Shrine_02_A_5_EdGraph_1_RefProperty;         // 0x04C0 (size: 0x8)

    void ApplySkin(class ASkeletalMeshActor* SkeletalMeshActor);
    void SetupMap(class AActor* MainCharMesh, TMap<TEnumAsByte<UI3DEnum>, AActor*>& OutMap);
    void SetRightGenderMesh(class AActor*& MainCharMesh);
    void ReceiveBeginPlay();
    void OnMeshChanged_Event(ECharacterGender _eNewGender, bool _bMustHandlePropSpawn);
    void OnPawnInitializedDynamic_Event(class AFightingCharacter* _pawn);
    void ExecuteUbergraph_UI_3D(int32 EntryPoint);
}; // Size: 0x4C8

#endif
