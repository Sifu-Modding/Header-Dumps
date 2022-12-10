#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialInputManager_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialInputManager_HPP

class UNEW_BP_Widget_TutorialInputManager_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* VerticalBox;
    class UVerticalBox* VS_Inputs;
    TArray<class UNEW_BP_Widget_TutorialInput_C*> SpawnedInputs;

    void ScaleWidget();
    void CleanAllInputs();
    void CreateInputDisplay(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FString DisplayedTip);
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialInputManager(int32 EntryPoint);
};

#endif
