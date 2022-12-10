#ifndef UE4SS_SDK_Hideout_2_Light_HPP
#define UE4SS_SDK_Hideout_2_Light_HPP

class AHideout_2_Light_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialInstance* Material - Entrance;
    class UMaterialInstance* Material - FireVillage1;
    class UMaterialInstance* Material - FireVillage2;
    class UMaterialInstance* Material - ForBakingLight ( DONTDELETE);
    class AStaticMeshActor* SM_SkyDome_01_1_ExecuteUbergraph_Hideout_2_Light_RefProperty;

    void ReceiveBeginPlay();
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_01_B_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_01_C_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_01_D_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_01_E_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_01_F_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_02_B_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_02_C_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Light_TriggerSkyDomeMaterial_02_D_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_Hideout_2_Light(int32 EntryPoint);
};

#endif
