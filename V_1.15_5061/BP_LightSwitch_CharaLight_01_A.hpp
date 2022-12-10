#ifndef UE4SS_SDK_BP_LightSwitch_CharaLight_01_A_HPP
#define UE4SS_SDK_BP_LightSwitch_CharaLight_01_A_HPP

class ABP_LightSwitch_CharaLight_01_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* LGT_Chr_ShadowsForChara_FightClub;
    class USceneComponent* DefaultSceneRoot;

    void TurnOffLight();
    void TurnOnLight();
    void ExecuteUbergraph_BP_LightSwitch_CharaLight_01_A(int32 EntryPoint);
};

#endif
