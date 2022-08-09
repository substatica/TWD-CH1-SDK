#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIRigidBodySleeperComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDIRigidBodySleeperComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bUseWakeEvents;
    
    UPROPERTY(EditDefaultsOnly)
    float LowActivityDurationForSleep;
    
    UPROPERTY(EditDefaultsOnly)
    float LowActivityTranslationThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float LowActivityVelocityThreshold;
    
    UPROPERTY(Transient)
    float ActivityTimestamp;
    
    UPROPERTY(Transient)
    TMap<FName, FTransform> ThresholdBodyTransforms;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> RegisteredComponent;
    
    UPROPERTY(Transient)
    TArray<FName> RegisteredBodyNames;
    
    UPROPERTY(Transient)
    FTimerHandle ReRegisterComponentTimer;
    
    UPROPERTY(Transient)
    TSet<FName> AwakeBodies;
    
public:
    USDIRigidBodySleeperComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateRegisteredBodies();
    
    UFUNCTION(BlueprintCallable)
    void StopMonitoring();
    
    UFUNCTION(BlueprintCallable)
    void StartMonitoring(bool bReset);
    
    UFUNCTION()
    void ReRegisterComponent();
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponent(UPrimitiveComponent* Component, const TArray<FName>& BodyNames);
    
    UFUNCTION()
    void OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void ForceWake();
    
    UFUNCTION(BlueprintCallable)
    void ForceSleep();
    
};

