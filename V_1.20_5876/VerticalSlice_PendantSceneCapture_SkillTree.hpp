#ifndef UE4SS_SDK_VerticalSlice_PendantSceneCapture_SkillTree_HPP
#define UE4SS_SDK_VerticalSlice_PendantSceneCapture_SkillTree_HPP

class AVerticalSlice_PendantSceneCapture_SkillTree_C : public AThePlainesLevel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasRenderTarget2D* RenderTarget_DeathPendant;                           // 0x0438 (size: 0x8)
    class ASkillTree* None_ExecuteUbergraph_VerticalSlice_PendantSceneCapture_SkillTree_RefProperty; // 0x0440 (size: 0x8)

    void ReceiveBeginPlay();
    void OnMatchStarted();
    void ExecuteUbergraph_VerticalSlice_PendantSceneCapture_SkillTree(int32 EntryPoint);
}; // Size: 0x448

#endif
