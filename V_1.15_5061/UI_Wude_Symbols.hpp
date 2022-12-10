#ifndef UE4SS_SDK_UI_Wude_Symbols_HPP
#define UE4SS_SDK_UI_Wude_Symbols_HPP

class AUI_Wude_Symbols_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_UI_Symbols;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_UI_Wude_Symbols(int32 EntryPoint);
};

#endif
