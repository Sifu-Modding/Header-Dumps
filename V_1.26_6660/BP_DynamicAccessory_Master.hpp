#ifndef UE4SS_SDK_BP_DynamicAccessory_Master_HPP
#define UE4SS_SDK_BP_DynamicAccessory_Master_HPP

class ABP_DynamicAccessory_Master_C : public ASCActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* SM_Accessory;                                         // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    bool HideScalp;                                                                   // 0x02F8 (size: 0x1)
    bool Eject First;                                                                 // 0x02F9 (size: 0x1)
    bool Is for Activity;                                                             // 0x02FA (size: 0x1)
    FVector Impulse;                                                                  // 0x02FC (size: 0xC)

    void Eject(FVector AddImpulse);
    void CE_EjectSelf(FVector Add Impulse);
    void EjectMulticast(FVector Impulse);
    void ExecuteUbergraph_BP_DynamicAccessory_Master(int32 EntryPoint);
}; // Size: 0x308

#endif
