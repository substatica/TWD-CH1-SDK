#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "GameFramework/PlayerState.h"
#include "SDICorePlayerState.generated.h"

UCLASS()
class SDICOREPLUGIN_API ASDICorePlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ESDIUtilityAIDifficulty RepMonkeyDifficulty;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    uint8 RepMonkeyMode;
    
public:
    ASDICorePlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetMonkeyMode(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty);
    
    UFUNCTION(BlueprintPure)
    bool IsSmartMonkey() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMonkey() const;
    
    UFUNCTION(BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetMonkeyMode() const;
    
    UFUNCTION(BlueprintPure)
    ESDIUtilityAIDifficulty GetMonkeyDifficulty() const;
    
};

