#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageInflictedHistoryInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDICOREPLUGIN_API USDIDamageInflictedHistoryInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIDamageInflictedHistoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float TimeSinceLastDamageInflictedToClass(TSubclassOf<AActor> ActorClass, bool bExact) const PURE_VIRTUAL(TimeSinceLastDamageInflictedToClass, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float TimeSinceLastDamageInflictedToActor(const AActor* Actor) const PURE_VIRTUAL(TimeSinceLastDamageInflictedToActor, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetLastDamageInflictedToClass(FSDIReplicatedDamageData& OutDamage, TSubclassOf<AActor> ActorClass, bool bExact) const PURE_VIRTUAL(GetLastDamageInflictedToClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetLastDamageInflictedToActor(FSDIReplicatedDamageData& OutDamage, const AActor* Actor) const PURE_VIRTUAL(GetLastDamageInflictedToActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetDamagedActors(TArray<AActor*>& OutActors, float TimeLimit) const PURE_VIRTUAL(GetDamagedActors, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DamagedClassInHistory(TSubclassOf<AActor> ActorClass, float TimeLimit, bool bExact) const PURE_VIRTUAL(DamagedClassInHistory, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DamagedActorInHistory(const AActor* Actor, float TimeLimit) const PURE_VIRTUAL(DamagedActorInHistory, return false;);
    
};

