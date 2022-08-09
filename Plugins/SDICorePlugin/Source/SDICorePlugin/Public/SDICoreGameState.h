#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameState.h"
#include "SDICoreGameState.generated.h"

class ASDICoreFXManager;

UCLASS()
class SDICOREPLUGIN_API ASDICoreGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditDefaultsOnly)
    TSubclassOf<ASDICoreFXManager> FXManagerClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepServerTimeStamp)
    float RepServerTimeStamp;
    
    UPROPERTY(Transient)
    float RepServerTimeStampDelta;
    
    UPROPERTY(Transient)
    float RepServerTimeStampDeltaRemaining;
    
    UPROPERTY(Replicated, Transient)
    float ServerTimeStamp;
    
    UPROPERTY(Transient)
    float SmoothedServerTickMS;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    uint8 RepServerTickMS;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDICoreFXManager> FXManager;
    
public:
    ASDICoreGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_RepServerTimeStamp(float OldRepServerTimeStamp);
    
public:
    UFUNCTION(BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    float GetServerTickMS() const;
    
};

