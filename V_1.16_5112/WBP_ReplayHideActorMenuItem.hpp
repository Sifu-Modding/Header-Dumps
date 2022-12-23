#ifndef UE4SS_SDK_WBP_ReplayHideActorMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayHideActorMenuItem_HPP

class UWBP_ReplayHideActorMenuItem_C : public UWBP_SpinBoxEnum_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ReplayHideActorType> HideActorTypeValue;
    TArray<class AActor*> HiddenActors;

    void HideMainCharacter();
    void OnSetNextValue(ECycleDirection Direction);
    void HideActor(class AActor*& Actor);
    void HideActors(TArray<class AActor*>& Actors);
    void RestoreHiddenActors();
    void BindProperty(class UWBP_ReplaySubMenuWithProperties_C* Owner);
    void ApplyHideActorType();
    void ExecuteUbergraph_WBP_ReplayHideActorMenuItem(int32 EntryPoint);
};

#endif
