#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "RInt.h"
#include "QRotator.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "SDICoreProjectileMovementComponent.generated.h"

class ASDICoreProjectileActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bReplicateProjectileMovement;
    
    UPROPERTY(EditDefaultsOnly)
    FRInt Bounces;
    
    UPROPERTY(EditDefaultsOnly)
    float BounceRotationRateDecel;
    
    UPROPERTY(EditDefaultsOnly)
    FQRotator RotationRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBounceRoll;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBounceCountFloorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHomingAccelerationXYOnly;
    
    UPROPERTY(Replicated, Transient)
    int32 RepMaxBounces;
    
    UPROPERTY(Replicated, Transient)
    int32 RepBounceCount;
    
    UPROPERTY(Transient)
    int32 LocalBounceCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BounceRotationRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector BounceRotationAxis;
    
    UPROPERTY(Replicated, Transient)
    FVector_NetQuantize RepServerLocation;
    
    UPROPERTY(Replicated, Transient)
    FVector_NetQuantize10 RepServerVelocity;
    
    UPROPERTY(Replicated, Transient)
    float RepServerLocationTimestamp;
    
    UPROPERTY(Transient)
    float LastServerLocationTimestamp;
    
public:
    USDICoreProjectileMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Launch(FVector InitialVelocity);
    
    UFUNCTION(BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    ASDICoreProjectileActor* GetSDIProjectileOwner() const;
    
};

