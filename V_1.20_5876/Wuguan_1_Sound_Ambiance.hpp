#ifndef UE4SS_SDK_Wuguan_1_Sound_Ambiance_HPP
#define UE4SS_SDK_Wuguan_1_Sound_Ambiance_HPP

class AWuguan_1_Sound_Ambiance_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    bool SoundBankLoaded;                                                             // 0x0438 (size: 0x1)
    TArray<class AAkAmbientSound*> PreparedAkAmbient;                                 // 0x0440 (size: 0x10)
    class AAkAmbientSound* Amb_Wuguan_City_Rumble_SpotSound_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0450 (size: 0x8)
    class AAkAmbientSound* AMB_FanMotor_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0458 (size: 0x8)
    class AAkAmbientSound* AMB_FanMotor2_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0460 (size: 0x8)
    class AAkAmbientSound* AMB_Fridge_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0468 (size: 0x8)
    class AAmb_MultiPos_Blueprint_C* AMB_MultiPos_BuzzLight1_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0470 (size: 0x8)
    class AAmb_MultiPos_Blueprint_C* AMB_MultiPos_BuzzLight2_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0478 (size: 0x8)
    class AAmb_MultiPos_Blueprint_C* AMB_MultiPos_Wind_Leaves1_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0480 (size: 0x8)
    class AAmb_MultiPos_Blueprint_C* AMB_MultiPos_Wind_Leaves2_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0488 (size: 0x8)
    class AAkAmbientSound* AMB_RoomTone_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0490 (size: 0x8)
    class AAmb_MultiPos_Blueprint_C* AMB_WindLeaves_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x0498 (size: 0x8)
    class AAkAmbientSound* AMB_WuguanHub_Ext_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x04A0 (size: 0x8)
    class AAkAmbientSound* AMB_WuganHub_SkillTree_LOC_2_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x04A8 (size: 0x8)
    class AAkAmbientSound* AMB_Wuguan_Tutorial_TrainingRoom_ExecuteUbergraph_Wuguan_1_Sound_Ambiance_RefProperty; // 0x04B0 (size: 0x8)

    void BndEvt__SCPlayerVolume_PostBuilding_Parent_K2Node_ActorBoundEvent_0_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_PostBuilding_Parent_K2Node_ActorBoundEvent_1_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_AroundCentralYard6_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_AroundCentralYard6_K2Node_ActorBoundEvent_13_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Building_CentralYard_K2Node_ActorBoundEvent_14_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Building_Yard_Terrasse_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Building_CentralYard_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Building_Yard_Terrasse_K2Node_ActorBoundEvent_17_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Wuguan_1_Sound_Ambiance_SCPlayerVolume_TrainingRoom_K2Node_ActorBoundEvent_6_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Wuguan_1_Sound_Ambiance_SCPlayerVolume_TrainingRoom_K2Node_ActorBoundEvent_8_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BPE_AllSoundBanksLoaded();
    void Prepare_Play_Event(const TArray<class AAkAmbientSound*>& AkAmbientArray);
    void CallWaitingEvents();
    void Prepare Stop Event(const TArray<class AAkAmbientSound*>& AkAmbientArray);
    void ExecuteUbergraph_Wuguan_1_Sound_Ambiance(int32 EntryPoint);
}; // Size: 0x4B8

#endif
