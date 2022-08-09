#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseInterface.generated.h"

class AActor;
class UDamageType;
class AController;
class UPrimitiveComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDISTIMANDRESPONSEPLUGIN_API USDIStimAndResponseInterface : public UInterface {
    GENERATED_BODY()
};

class SDISTIMANDRESPONSEPLUGIN_API ISDIStimAndResponseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void StopStimulusTick() PURE_VIRTUAL(StopStimulusTick,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void StartStimulusTick() PURE_VIRTUAL(StartStimulusTick,);
    
private:
    UFUNCTION()
    virtual void SaR_UpdateStimuli() PURE_VIRTUAL(SaR_UpdateStimuli,);
    
    UFUNCTION()
    virtual void SaR_OnTick() PURE_VIRTUAL(SaR_OnTick,);
    
    UFUNCTION()
    virtual void SaR_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) PURE_VIRTUAL(SaR_OnTakeAnyDamage,);
    
    UFUNCTION()
    virtual void SaR_OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) PURE_VIRTUAL(SaR_OnComponentHit,);
    
    UFUNCTION()
    virtual void SaR_OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) PURE_VIRTUAL(SaR_OnComponentEndOverlap,);
    
    UFUNCTION()
    virtual void SaR_OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) PURE_VIRTUAL(SaR_OnComponentBeginOverlap,);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RegisterMultipleComponentCallbacks(TArray<UPrimitiveComponent*> Comps, bool bOverlap, bool bHit) PURE_VIRTUAL(RegisterMultipleComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RegisterComponentCallbacks(UPrimitiveComponent* Comp, bool bOverlap, bool bHit) PURE_VIRTUAL(RegisterComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RegisterAllComponentCallbacks(bool bOverlap, bool bHit) PURE_VIRTUAL(RegisterAllComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RegisterAllCallbacks(bool bDamage, bool bOverlap, bool bHit) PURE_VIRTUAL(RegisterAllCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RegisterActorCallbacks(bool bDamage) PURE_VIRTUAL(RegisterActorCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void K2UpdateStimuli(const FGameplayTagContainer& IncomingStimuli, bool bNonLatent) PURE_VIRTUAL(K2UpdateStimuli,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsComponentOverlapRegistered(UPrimitiveComponent* Comp) const PURE_VIRTUAL(IsComponentOverlapRegistered, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual int32 GetNumOverlappingStimuli(const FGameplayTagQuery& Query) const PURE_VIRTUAL(GetNumOverlappingStimuli, return 0;);
    
};

