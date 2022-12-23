#ifndef UE4SS_SDK_EnvQueryContext_Player_HPP
#define UE4SS_SDK_EnvQueryContext_Player_HPP

class UEnvQueryContext_Player_C : public UEnvQueryContext_BlueprintBase
{

    void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);
};

#endif
