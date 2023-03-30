#ifndef UE4SS_SDK_NEW_BP_Widget_TutorialInputManager_HPP
#define UE4SS_SDK_NEW_BP_Widget_TutorialInputManager_HPP

class UNEW_BP_Widget_TutorialInputManager_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class USizeBox* VerticalBox;                                                      // 0x0318 (size: 0x8)
    class UVerticalBox* VS_Inputs;                                                    // 0x0320 (size: 0x8)
    TArray<class UNEW_BP_Widget_TutorialInput_C*> SpawnedInputs;                      // 0x0328 (size: 0x10)

    void ScaleWidget();
    void CleanAllInputs();
    void CreateInputDisplay(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FString DisplayedTip);
    void Construct();
    void ExecuteUbergraph_NEW_BP_Widget_TutorialInputManager(int32 EntryPoint);
}; // Size: 0x338

#endif
