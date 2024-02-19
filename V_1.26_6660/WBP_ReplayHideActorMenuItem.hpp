#ifndef UE4SS_SDK_WBP_ReplayHideActorMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayHideActorMenuItem_HPP

class UWBP_ReplayHideActorMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    TEnumAsByte<ReplayHideActorType> HideActorTypeValue;                              // 0x0588 (size: 0x1)
    TArray<class AActor*> HiddenActors;                                               // 0x0590 (size: 0x10)

    void HideMainCharacter();
    void OnSetNextValue(ECycleDirection Direction);
    void HideActor(class AActor*& Actor);
    void HideActors(TArray<class AActor*>& Actors);
    void RestoreHiddenActors();
    void BindProperty(class UWBP_ReplaySubMenuWithProperties_C* Owner);
    void ApplyHideActorType();
    void ExecuteUbergraph_WBP_ReplayHideActorMenuItem(int32 EntryPoint);
}; // Size: 0x5A0

#endif
