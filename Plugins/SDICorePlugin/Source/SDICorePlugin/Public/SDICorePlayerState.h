#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICorePlayerState.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICorePlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ESDIUtilityAIDifficulty RepMonkeyDifficulty;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 RepMonkeyMode;
    
public:
    ASDICorePlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetMonkeyMode(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmartMonkey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonkey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetMonkeyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIUtilityAIDifficulty GetMonkeyDifficulty() const;
    
};

