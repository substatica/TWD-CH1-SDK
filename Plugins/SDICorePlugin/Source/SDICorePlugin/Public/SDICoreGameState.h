#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameState.h"
#include "SDICoreGameState.generated.h"

class ASDICoreFXManager;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDICoreFXManager> FXManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepServerTimeStamp, meta=(AllowPrivateAccess=true))
    float RepServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepServerTimeStampDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepServerTimeStampDeltaRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedServerTickMS;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 RepServerTickMS;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDICoreFXManager> FXManager;
    
public:
    ASDICoreGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepServerTimeStamp(float OldRepServerTimeStamp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTickMS() const;
    
};

