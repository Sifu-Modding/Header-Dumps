#ifndef UE4SS_SDK_BP_LightSwitchSetup_03_HPP
#define UE4SS_SDK_BP_LightSwitchSetup_03_HPP

class ABP_LightSwitchSetup_03_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> Lights;
    TArray<class AEmitter*> Particles hidden in Village;
    TArray<class AEmitter*> Particles hidden in Nightclub;
    bool Debug IsVillage;
    class AActor* HiddenInVillage;
    class AActor* HiddenInNightclub;
    class APostProcessVolume* PPV_Village;
    class APostProcessVolume* PPV_NightClub;
    class AActor* MaterialSwitchLightOff;
    class AActor* ShowInTurnOffLight;
    bool UseLightOff-TransitionPit;
    TArray<class AActor*> SRC_Village;
    TArray<class AActor*> SRC_NightClub;
    TArray<class AActor*> MaterialSwitchWall;
    class UMaterialInstance* MaterialVillageWall;
    class UMaterialInstance* MaterialNightClubWall;
    TArray<class AActor*> MaterialSwitchFloor;
    class UMaterialInstance* MaterialVillageFloor;
    class UMaterialInstance* MaterialNightClubFloor;
    TArray<class AActor*> DecalHSLControl;
    TArray<class AActor*> PropsHSLControl;
    float LightnessDecalLightOn (Pitt);
    float LightnessDecalLightOff (Pitt);
    float LightnessPropsLightOn (Pitt);
    float LightnessPropsLightOff (Pitt);
    class AActor* FootstepsVillage;
    class AActor* FootstepsNightClub;
    TArray<class AActor*> Gravel_Footsteps;
    TArray<class ABP_BaseBreakable_C*> BRK Village;

    void UserConstructionScript();
    void SwitchVillage();
    void SwitchNightclub();
    void DestroyVillageBRKAfterSwitch();
    void ExecuteUbergraph_BP_LightSwitchSetup_03(int32 EntryPoint);
};

#endif
