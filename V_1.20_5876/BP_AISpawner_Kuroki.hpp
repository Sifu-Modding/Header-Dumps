#ifndef UE4SS_SDK_BP_AISpawner_Kuroki_HPP
#define UE4SS_SDK_BP_AISpawner_Kuroki_HPP

class ABP_AISpawner_Kuroki_C : public ABP_AISpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)

    void BPE_OnGeneratePoolActors(class ASCPoolableActorsContainer* _container);
    void ExecuteUbergraph_BP_AISpawner_Kuroki(int32 EntryPoint);
}; // Size: 0x5D8

#endif
