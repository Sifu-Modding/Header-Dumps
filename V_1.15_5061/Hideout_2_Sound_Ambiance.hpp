#ifndef UE4SS_SDK_Hideout_2_Sound_Ambiance_HPP
#define UE4SS_SDK_Hideout_2_Sound_Ambiance_HPP

class AHideout_2_Sound_Ambiance_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool SoundBankLoaded;
    TArray<class AAkAmbientSound*> PreparedAkAmbient;
    class AAkAmbientSound* Zone1_AMB_CityLight_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditioner_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditioner2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditionerNew1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditionerNew2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditionerNew3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_AirConditionerNew4_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Gen_TV_Emission_2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone1_AMB_Multi_Neon_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone1_AMB_Vending_Machine_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone2_AMB_CorridorClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone2_AMB_Multi_NeonCorridor_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone2_AMB_SmallClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone2_AMB_Multi_Neon_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone2_AMB_AirConditioner_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone2_AMB_Gen_Fan_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone2_AMB_Gen_Fan2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Fridge_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_LOC_1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_LOC_2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_LOC_5_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_LOC_3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_LOC_4_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FridgeTop_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_MultiPos_RndMetal1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_MultiPos_RndMetal2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_LargeClub_RndMetal_0_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FlashkickBuzzLight_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_Multi_Neon_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FridgeTop2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FridgeTop3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FridgeTop4_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_FridgeTop6_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_Multi_NeonUp_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_SmallClub2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_Multi_NeonVIPSecret2_2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMB_Multi_NeonVIPSecret_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_SmallClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone3_AMBMulti_Neon_Corridor_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_NeonBuzz_ControlRoom_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_AirConditioner_ControlRoom_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_Fridge_ControlRoom_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_ControlRoomMachine_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_NeonBuzz_ControlRoom2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_NeonBuzz_ControlRoom3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone3_AMB_Gen_NeonBuzz_ControlRoom4_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone4_AMB_SmallClubRight_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone4_AMB_MultiNeonRight_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone4_AMB_MediumClubLeft_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone4_AMB_MediumClubLeft_LOC_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone4_AMB_SmallClubLeft_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone4_AMB_Multi_NeonLeft_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_MediumClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_BlendFireClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_Fridge_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_Gen_Fan_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_Gen_Fan2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_LargeClub_RndMetal_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_LargeClub_RndMetal2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_LargeClub_RndMetal3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone5_AMB_MediumClub_LOC_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone5_AMB_Multi_Neon_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone5_AMB_Multi_Neon2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone5_AMB_Multi_NeonPit_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_FireClubBlend_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Lanterns_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone6_AMB_Multi_Lanterns1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone6_AMB_Multi_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_SmallFireVIllage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Gen_Fire_Huge_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Loop_WaterPipe_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_BuzzLight1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_BuzzLight2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Gen_Fridge_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone7_AMB_SmallClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone7_AMB_Multi_Neon_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone7_AMB_MediumClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone8_AMB_FireVillage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone8_AMB_SmallFireVillage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone8_Multi_Lanterns1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone8_Multi_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_BuzzLight_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_BuzzLight2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_SmallClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_MultiPos_Buzzlight1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_MultiPos_Buzzlight2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_Lanterns1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_FireClub_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_MultiPos_Lanterns_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_MultiPos_Shutters_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_Multipos_Candle1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone9_AMB_Multipos_Candle2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_Fire_Small1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone9_AMB_Fire_Small2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_Multi_Lanterns1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_Multi_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_Multi_Lanterns3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_Multi_Lanterns4_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone10_AMB_SmallFireVillage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone10_AMB_DroneLevel1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_MultiPos_Fire_Medium_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_MultiPos_Fire_Small_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_MultiPos_Fire_Large_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone10_AMB_Multipos_Fire_Huge_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone11_AMB_MediumFireVillage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone11_AMB_Fire_Large1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone11_AMB_Fire_Large2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone11_AMB_Flag_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone11_AMB_DroneLevel2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone11_Amb_Multipos_Fire_Medium_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone11_AMB_MultiPos_Fire_Small_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone11_AMB_MultiPos_Lantern1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone11_AMB_MultiPos_Lantern2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone12_AMB_LargeFireVillage_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Huge1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Huge2_7_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Large1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Large2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Medium_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Fire_Small1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Lantern1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone12_AMB_MultiPos_Lantern2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_ShutterMovement1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_ShutterMovement2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone13_AMB_ShutterBump_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone12_AMB_Lanterns2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone12_AMB_Lanterns_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone12_AMB_DroneLevel3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_BossRoom_Lantern1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_BossRoom_Lantern2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone13_AMB_BossRoom_Phase1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_Candles2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_Candles3_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_MultiPos_Candles_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_FireLoc1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone13_AMB_FireLoc2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone13_AMB_BossRoom_Phase2_Bed_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone13_AMB_BossRoom_RooftopFireLoc_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone8_AMB_Gen_Fire_Medium_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone8_Amb_MultiPos_Fire_Small_1_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_MultiPos_Blueprint_C* Zone8_Amb_MultiPos_Fire_Small_2_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAkAmbientSound* Zone6_AMB_Fire_Medium_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;
    class AAmb_RTPCBox_C* Amb_RTPCBox_SeanStinger_ExecuteUbergraph_Hideout_2_Sound_Ambiance_RefProperty;

    void LeavingZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void EnteringZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone1_Streets_Parents_K2Node_ActorBoundEvent_0_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone1_Streets_Parents_K2Node_ActorBoundEvent_1_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone2_ClubEntrance_Parents_K2Node_ActorBoundEvent_4_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone2_ClubEntrance_Parents_K2Node_ActorBoundEvent_5_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone2_ClubEntrance_Corridor_K2Node_ActorBoundEvent_8_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone2_ClubEntrance_Corridor_K2Node_ActorBoundEvent_9_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone3_DanceFloor_Parents_K2Node_ActorBoundEvent_34_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone3_DanceFloor_Parents_K2Node_ActorBoundEvent_35_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone3_DanceFloorCorridor_Parents_K2Node_ActorBoundEvent_36_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone3_DanceFloorCorridor_Parents_K2Node_ActorBoundEvent_37_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone3_VIPSecretZone_Parents_K2Node_ActorBoundEvent_38_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone3_VIPSecretZone_Parents_K2Node_ActorBoundEvent_39_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone4_LeftCorridor_Parents_K2Node_ActorBoundEvent_15_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone4_LeftCorridor_Parents_K2Node_ActorBoundEvent_20_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone4_RightCorridor_Parents_K2Node_ActorBoundEvent_21_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone4_RightCorridor_Parents_K2Node_ActorBoundEvent_27_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Hideout_2_Sound_Ambiance_Zone3_4_NightClub_SCPlayerVolume_Zone3_VIPSecretZone_Child1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Sound_Ambiance_Zone3_4_NightClub_SCPlayerVolume_Zone3_VIPSecretZone_Child1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone5_FightClub_Bar_Parents_K2Node_ActorBoundEvent_12_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone5_FightClub_Bar_Parents_K2Node_ActorBoundEvent_13_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone5_FightClub_Pit_Child2_K2Node_ActorBoundEvent_28_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone6_FireFight_Parents_K2Node_ActorBoundEvent_14_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone6_FireFight_Parents_K2Node_ActorBoundEvent_15_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone7_TrainingRoom_Parents_K2Node_ActorBoundEvent_16_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone7_TrainingRoom_Parents_K2Node_ActorBoundEvent_17_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Parents_K2Node_ActorBoundEvent_18_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Parents_K2Node_ActorBoundEvent_19_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone7_TrainingRoomCorridor_Parent_K2Node_ActorBoundEvent_40_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone7_TrainingRoomCorridor_Parent_K2Node_ActorBoundEvent_41_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone6_FireCorridor_Parent_K2Node_ActorBoundEvent_10_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone6_FireCorridor_Parent_K2Node_ActorBoundEvent_11_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Parents_K2Node_ActorBoundEvent_50_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Parents_K2Node_ActorBoundEvent_51_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Child_K2Node_ActorBoundEvent_47_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone8_ScoubidouCorridor_Child_K2Node_ActorBoundEvent_48_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SCPlayerVolume_Zone9_Arena_Parents_K2Node_ActorBoundEvent_20_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone9_Arena_Parents_K2Node_ActorBoundEvent_21_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone9_PreArenaCorridor_Parents_K2Node_ActorBoundEvent_29_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone9_PreArenaCorridor_Parents_K2Node_ActorBoundEvent_30_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone10_FireStreets_Parents_K2Node_ActorBoundEvent_2_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone10_FireStreets_Parents_K2Node_ActorBoundEvent_3_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone11_FireClubEntrance_Parents_K2Node_ActorBoundEvent_22_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone11_FireClubEntrance_Parents_K2Node_ActorBoundEvent_23_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone12_FireClub_Parents_K2Node_ActorBoundEvent_24_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone12_FireClub_Parents_K2Node_ActorBoundEvent_25_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone12_BossRoomP3_Parents_K2Node_ActorBoundEvent_43_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone12_BossRoomP3_Parents_K2Node_ActorBoundEvent_44_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SCPlayerVolume_Zone12_BossRoomP1_K2Node_ActorBoundEvent_45_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SCPlayerVolume_Zone12_BossRoomP1_K2Node_ActorBoundEvent_46_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Hideout_2_Sound_Ambiance_Zone13_BossRoom_SCPlayerVolume_Zone12_EntryBossRoom_K2Node_ActorBoundEvent_0_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Hideout_2_Sound_Ambiance_Zone13_BossRoom_SCPlayerVolume_Zone12_EntryBossRoom_K2Node_ActorBoundEvent_1_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BPE_AllSoundBanksLoaded();
    void Prepare_Play_Event(const TArray<class AAkAmbientSound*>& AkAmbientArray);
    void CallWaitingEvents();
    void Prepare Stop Event(const TArray<class AAkAmbientSound*>& AkAmbientArray);
    void BndEvt__Hideout_2_Sound_Ambiance_SCPlayerVolume_Zone5_FightClub_Pit_Child_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Sound_Ambiance_SCPlayerVolume_Zone5_FightClub_Pit_Child2_K2Node_ActorBoundEvent_32_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Hideout_2_Sound_Ambiance_SCPlayerVolume_Zone3_DanceFloor_TopParents_K2Node_ActorBoundEvent_53_VolumeBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Hideout_2_Sound_Ambiance_SCPlayerVolume_Zone3_DanceFloor_TopParents_K2Node_ActorBoundEvent_56_VolumeEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Hideout_2_Sound_Ambiance_StopRTPCBox_K2Node_ActorBoundEvent_31_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_Hideout_2_Sound_Ambiance(int32 EntryPoint);
};

#endif
