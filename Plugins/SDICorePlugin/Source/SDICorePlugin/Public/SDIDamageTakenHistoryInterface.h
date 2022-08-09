#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageTakenHistoryInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDICOREPLUGIN_API USDIDamageTakenHistoryInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIDamageTakenHistoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float TimeSinceLastDamageTakenFromClass(TSubclassOf<AActor> ActorClass, bool bExact) const PURE_VIRTUAL(TimeSinceLastDamageTakenFromClass, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float TimeSinceLastDamageTakenFromActor(const AActor* Actor) const PURE_VIRTUAL(TimeSinceLastDamageTakenFromActor, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetLastDamageTakenFromClass(FSDIReplicatedDamageData& OutDamage, TSubclassOf<AActor> ActorClass, bool bExact) const PURE_VIRTUAL(GetLastDamageTakenFromClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetLastDamageTakenFromActor(FSDIReplicatedDamageData& OutDamage, const AActor* Actor) const PURE_VIRTUAL(GetLastDamageTakenFromActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetDamageInflicters(TArray<AActor*>& OutActors, float TimeLimit) const PURE_VIRTUAL(GetDamageInflicters, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DamageInflicterClassInHistory(TSubclassOf<AActor> ActorClass, float TimeLimit, bool bExact) const PURE_VIRTUAL(DamageInflicterClassInHistory, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DamageInflicterActorInHistory(const AActor* Actor, float TimeLimit) const PURE_VIRTUAL(DamageInflicterActorInHistory, return false;);
    
};

