#ifndef UE4SS_SDK_BP_DebugWJActor_HPP
#define UE4SS_SDK_BP_DebugWJActor_HPP

class ABP_DebugWJActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;

    void OnPoolablePostInitializeComponents();
    void OnPoolablePostUninitializeComponents();
    void OnPoolablePreInitializeComponents();
    void OnPoolablePreUninitializeComponents();
    void ExecuteUbergraph_BP_DebugWJActor(int32 EntryPoint);
};

#endif
