#ifndef UE4SS_SDK_UI_Wude_Symbols_HPP
#define UE4SS_SDK_UI_Wude_Symbols_HPP

class AUI_Wude_Symbols_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* SM_UI_Symbols;                                        // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_UI_Wude_Symbols(int32 EntryPoint);
}; // Size: 0x2C8

#endif
