#ifndef UE4SS_SDK_Sequence_DeathEffect_HPP
#define UE4SS_SDK_Sequence_DeathEffect_HPP

class USequenceDirector_C : public UDeathLevelSequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AActor*> ActorLists;
    class UParticleSystem* PS_DeathBurst;
    class UParticleSystem* PS_DeathCircle;
    class ACameraActor* TransitionCam;
    float TimeDilation;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsType;

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
};

#endif
