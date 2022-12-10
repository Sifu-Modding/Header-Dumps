#ifndef UE4SS_SDK_Amb_BreakableLoop_Blueprint_HPP
#define UE4SS_SDK_Amb_BreakableLoop_Blueprint_HPP

class AAmb_BreakableLoop_Blueprint_C : public AAkAmbientSound
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsPlayable;
    TSoftObjectPtr<ABP_WeakBreakable_C> BP_Breakable;
    class UAkAudioEvent* AkEventLoopStop;

    void StartLoopSound();
    void ComponentFracture(const FVector& HitPoint, const FVector& HitDirection);
    void ExecuteUbergraph_Amb_BreakableLoop_Blueprint(int32 EntryPoint);
};

#endif
