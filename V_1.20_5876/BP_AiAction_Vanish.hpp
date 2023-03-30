#ifndef UE4SS_SDK_BP_AiAction_Vanish_HPP
#define UE4SS_SDK_BP_AiAction_Vanish_HPP

class UBP_AiAction_Vanish_C : public UAIActionAttack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)
    float Vanish Attack Actor Max Distance;                                           // 0x0160 (size: 0x4)
    class UCurveFloat* C_Fajar_VanishIn;                                              // 0x0168 (size: 0x8)
    class UCurveFloat* C_Fajar_VanishOut;                                             // 0x0170 (size: 0x8)
    TSubclassOf<class UBP_FajarVanishFindActorCondition_C> Find Actor to Vanish into Condition; // 0x0178 (size: 0x8)
    class AActor* Spawned Bamboo;                                                     // 0x0180 (size: 0x8)
    float Offset After Vanish To Test Nav;                                            // 0x0188 (size: 0x4)
    FVector Extent After Vanish To Test Nav;                                          // 0x018C (size: 0xC)
    float Vanish Attack Actor Min Distance;                                           // 0x0198 (size: 0x4)
    float Attack Jump Offset From Vanish Actor;                                       // 0x019C (size: 0x4)
    TSubclassOf<class UComboAIConditionFindActorsEnvQuery> Find Fake Vanish Actors Condition; // 0x01A0 (size: 0x8)
    int32 Current Vanish Hint Index;                                                  // 0x01A8 (size: 0x4)
    bool Force Vanish Hint LookAt;                                                    // 0x01AC (size: 0x1)
    FName BBKey bHasVanishHintRemaining;                                              // 0x01B0 (size: 0x8)
    FName BBKey Vanish Hint Count;                                                    // 0x01B8 (size: 0x8)
    FName BBKey Vanish Hint Delay;                                                    // 0x01C0 (size: 0x8)
    FName BBKey Vanish Hint Delay After;                                              // 0x01C8 (size: 0x8)
    int32 Vanish Hint Count;                                                          // 0x01D0 (size: 0x4)
    float Vanish Hint Delay Before;                                                   // 0x01D4 (size: 0x4)
    float Vanish Hint Delay After;                                                    // 0x01D8 (size: 0x4)
    TArray<class AActor*> Found Fake Vanish Actors;                                   // 0x01E0 (size: 0x10)
    class UComboAIConditionFindActorsEnvQuery* Find Fake Vanish Actors Query;         // 0x01F0 (size: 0x8)
    float Vanish Hint Delay Between;                                                  // 0x01F8 (size: 0x4)
    class AActor* Last Hint Vanish Actor;                                             // 0x0200 (size: 0x8)
    FInt32Range Hint Count Range;                                                     // 0x0208 (size: 0x10)
    bool bPrintDebugInfos;                                                            // 0x0218 (size: 0x1)
    bool bSkipAttackHintIfSameAsPreviousHint;                                         // 0x0219 (size: 0x1)
    bool IsAttackHint;                                                                // 0x021A (size: 0x1)

    void SelectVanishVFX(class UParticleSystem*& FX);
    void SelectBambooToSpawn(TSubclassOf<class ASCActor>& Bamboo);
    void Try To Project Attack Jump Location(const class UObject* _worldCtxt, const FVector& _vPoint, FVector& _vOutProjected);
    void Set Movement Enabled(bool bEnabled);
    void Is Last Hint Same Actor As Attack(bool& ReturnValue2);
    void Display Vanish Hint(class UObject* Vanish Actor);
    void Set Vanish Hint Delay(float _fValue);
    FVector Get Vanish Attack Juming Location(class AActor* Vanish Actor);
    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
    FVector Get Vanish Landing Location(class AActor* Character, class AActor* Vanish Actor);
    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
    void Set Hud Visibility(bool Condition);
    float BPE_GetAttackRange();
    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
    void GetFightingCharacter(class AFightingCharacter*& AsFighting Character);
    FString BPE_GetName();
    void BPE_OnNamedEvent(FName _eventName);
    void On Vanish In Finished();
    void BPE_OnFinished(bool _bSucceeded);
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    void BPE_OnBehaviorTreeInjected(class UBlackboardComponent* _blackBoardComponent);
    void On Found Fake Vanish Actors(const TArray<FComboAIConditionFindActorsEnvQueryResult>& _result);
    void ExecuteUbergraph_BP_AiAction_Vanish(int32 EntryPoint);
}; // Size: 0x21B

#endif
