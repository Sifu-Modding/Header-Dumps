#ifndef UE4SS_SDK_BP_Fengjie_Base_HPP
#define UE4SS_SDK_BP_Fengjie_Base_HPP

class ABP_Fengjie_Base_C : public ABP_AICharacter_Boss_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1F10 (size: 0x8)
    float UpdateShader_UpdateShader_76F88B48488195B0BA8A71879558BB8D;                 // 0x1F18 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> UpdateShader__Direction_76F88B48488195B0BA8A71879558BB8D; // 0x1F1C (size: 0x1)
    class UTimelineComponent* UpdateShader;                                           // 0x1F20 (size: 0x8)

    void UpdateShader__FinishedFunc();
    void UpdateShader__UpdateFunc();
    void ChangeGoldShader(bool Activate);
    void ExecuteUbergraph_BP_Fengjie_Base(int32 EntryPoint);
}; // Size: 0x1F28

#endif
