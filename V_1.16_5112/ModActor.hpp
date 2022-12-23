#ifndef UE4SS_SDK_ModActor_HPP
#define UE4SS_SDK_ModActor_HPP

class AModActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UBP_Menu_Startup_C* MainMenu;
    FString PreviousLevelName;
    FString ModAuthor;
    FString ModDescription;
    FString ModVersion;

    void CreateSettingButton();
    void ReceiveTick(float DeltaSeconds);
    void OnSettingPress();
    void RetryMode();
    void BackToMainMenu();
    void PreBeginPlay();
    void PostBeginPlay();
    void ModMenuButtonPressed(int32 Index);
    void PrintToModLoader(FString Message);
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
};

#endif
