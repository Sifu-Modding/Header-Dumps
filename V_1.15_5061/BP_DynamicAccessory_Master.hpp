#ifndef UE4SS_SDK_BP_DynamicAccessory_Master_HPP
#define UE4SS_SDK_BP_DynamicAccessory_Master_HPP

class ABP_DynamicAccessory_Master_C : public ASCActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Accessory;
    class USceneComponent* DefaultSceneRoot;
    bool HideScalp;
    bool Eject First;
    bool Is for Activity;
    FVector Impulse;

    void Eject(FVector AddImpulse);
    void CE_EjectSelf(FVector Add Impulse);
    void EjectMulticast(FVector AddImpulse);
    void ExecuteUbergraph_BP_DynamicAccessory_Master(int32 EntryPoint);
};

#endif
