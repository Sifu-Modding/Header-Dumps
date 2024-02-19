#ifndef UE4SS_SDK_BP_AiAction_TakedownReactionAnim_Grunt_HPP
#define UE4SS_SDK_BP_AiAction_TakedownReactionAnim_Grunt_HPP

class UBP_AiAction_TakedownReactionAnim_Grunt_C : public UBP_AIAction_TakedownReaction_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    class UAnimSequence* CloseAnim;                                                   // 0x0178 (size: 0x8)
    float CloseDist;                                                                  // 0x0180 (size: 0x4)
    TArray<class UAnimSequence*> Anims;                                               // 0x0188 (size: 0x10)
    TArray<class UAnimSequence*> WeaponAnims;                                         // 0x0198 (size: 0x10)

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_TakedownReactionAnim_Grunt(int32 EntryPoint);
}; // Size: 0x1A8

#endif
