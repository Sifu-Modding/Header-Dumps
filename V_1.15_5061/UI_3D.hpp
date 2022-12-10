#ifndef UE4SS_SDK_UI_3D_HPP
#define UE4SS_SDK_UI_3D_HPP

class AUI_3D_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<TEnumAsByte<UI3DEnum>, AActor*> ObjectsToCaptureMap;
    TArray<class AActor*> MainCharUI3D;
    class ASkeletalMeshActor* WantedCharMesh;
    class ABP_UI_3D_C* BP_UI_3D_6_ExecuteUbergraph_UI_3D_RefProperty;
    class ABP_MainChar_W_UI_3D_C* BP_MainChar_W_UI_3D_2_EdGraph_0_RefProperty;
    class ABP_MainChar_M_UI_3D_C* BP_MainChar_M_UI_3D_EdGraph_0_RefProperty;
    class ABP_Pendant_UI_3D_C* BP_Pendant_UI_3D_EdGraph_1_RefProperty;
    class ASCStaticMeshPrimInstActor* SM_Shrine_02_A_5_EdGraph_1_RefProperty;

    void ApplySkin(class ASkeletalMeshActor* SkeletalMeshActor);
    void SetupMap(class AActor* MainCharMesh, TMap<TEnumAsByte<UI3DEnum>, AActor*>& OutMap);
    void SetRightGenderMesh(class AActor*& MainCharMesh);
    void ReceiveBeginPlay();
    void OnMeshChanged_Event(ECharacterGender _eNewGender, bool _bMustHandlePropSpawn);
    void OnPawnInitializedDynamic_Event(class AFightingCharacter* _pawn);
    void ExecuteUbergraph_UI_3D(int32 EntryPoint);
};

#endif
