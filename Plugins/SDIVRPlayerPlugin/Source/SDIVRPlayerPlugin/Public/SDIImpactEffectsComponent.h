#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncedImpactInfo.h"
#include "Engine/EngineTypes.h"
#include "SDIImpactEffectsComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIImpactEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ImpactSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSynced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ImpactSoundSurfaceSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTimeSinceCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxImpactVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinImpactInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MagnitudeRTPCParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableActorImpactCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinActorCallbackImpactVelocity;
    
    UPROPERTY(Transient)
    float LastImpactSoundTimestamp;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> RegisteredComponents;
    
    UPROPERTY(Export, Transient)
    TSet<TWeakObjectPtr<UPrimitiveComponent>> PendingRegisteredComponents;
    
    UPROPERTY(Transient)
    FTimerHandle RegisterPendingComponentsTimer;
    
public:
    USDIImpactEffectsComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterOnComponentHit(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnActorHit();
    
protected:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerRequestImpactSound(const FSDISyncedImpactInfo& ImpactInfo);
    
    UFUNCTION()
    void RegisterPendingComponents();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterOnComponentHit(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnActorHit();
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlayImpactSound(const FSDISyncedImpactInfo& ImpactInfo);
    
};

