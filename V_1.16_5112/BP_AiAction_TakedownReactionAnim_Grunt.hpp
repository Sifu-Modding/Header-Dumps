#ifndef UE4SS_SDK_BP_AiAction_TakedownReactionAnim_Grunt_HPP
#define UE4SS_SDK_BP_AiAction_TakedownReactionAnim_Grunt_HPP

class UBP_AiAction_TakedownReactionAnim_Grunt_C : public UBP_AIAction_TakedownReaction_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimSequence* CloseAnim;
    float CloseDist;
    TArray<class UAnimSequence*> Anims;
    TArray<class UAnimSequence*> WeaponAnims;

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void ExecuteUbergraph_BP_AiAction_TakedownReactionAnim_Grunt(int32 EntryPoint);
};

#endif
