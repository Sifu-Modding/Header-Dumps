#ifndef UE4SS_SDK_Sequence_DeathEffect_HPP
#define UE4SS_SDK_Sequence_DeathEffect_HPP

class USequenceDirector_C : public UDeathLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)
    TArray<class AActor*> ActorLists;                                                 // 0x0108 (size: 0x10)
    class UParticleSystem* PS_DeathBurst;                                             // 0x0118 (size: 0x8)
    class UParticleSystem* PS_DeathCircle;                                            // 0x0120 (size: 0x8)
    class ACameraActor* TransitionCam;                                                // 0x0128 (size: 0x8)
    float TimeDilation;                                                               // 0x0130 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsType;                                // 0x0138 (size: 0x10)

    void SequenceEvent__ENTRYPOINTSequenceDirector_7();
    void SequenceEvent__ENTRYPOINTSequenceDirector_6();
    void SequenceEvent__ENTRYPOINTSequenceDirector_5();
    void SequenceEvent__ENTRYPOINTSequenceDirector_4();
    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void UpdateAging();
    void ResetTimeDilationToNormal();
    void JustRespawned();
    void GetKillerActor(class AActor*& KillerActor);
    void EndTimeDilation();
    void InitTimeDilation();
    void ClearKillerActorFromCustomStencil();
    void FrameOne();
    void SpawnDeathCirclePS();
    void SetPlayerLocationInDeathMPC();
    void SetActorsVisibleAgain();
    void SetAllActorsInvisible();
    void DisableDeathEventPP();
    void OnCreated();
    void EnableDeathEventPP();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x148

#endif
