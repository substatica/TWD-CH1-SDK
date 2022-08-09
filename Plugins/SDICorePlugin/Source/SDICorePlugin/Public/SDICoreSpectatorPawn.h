#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "SDICoreSpectatorPawn.generated.h"

class APlayerState;
class APawn;

UCLASS()
class SDICOREPLUGIN_API ASDICoreSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float ReplaySkipTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ReplayRewindTime;
    
    UPROPERTY(Transient)
    int32 ReplaySpeedStep;
    
public:
    ASDICoreSpectatorPawn();
    UFUNCTION(BlueprintPure)
    bool IsSpectatingReplay(float& OutTime, float& OutDuration, float& OutSpeed, int32& OutSpeedStep) const;
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseReplaySlower();
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseReplaySkip();
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseReplayRewind();
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseReplayPause();
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseReplayFaster();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePrevPlayer();
    
    UFUNCTION()
    void InputReleasePlayer_9();
    
    UFUNCTION()
    void InputReleasePlayer_8();
    
    UFUNCTION()
    void InputReleasePlayer_7();
    
    UFUNCTION()
    void InputReleasePlayer_6();
    
    UFUNCTION()
    void InputReleasePlayer_5();
    
    UFUNCTION()
    void InputReleasePlayer_4();
    
    UFUNCTION()
    void InputReleasePlayer_3();
    
    UFUNCTION()
    void InputReleasePlayer_2();
    
    UFUNCTION()
    void InputReleasePlayer_1();
    
    UFUNCTION()
    void InputReleasePlayer_0();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InputReleaseNextPlayer();
    
    UFUNCTION(BlueprintCallable)
    void InputPressReplaySlower();
    
    UFUNCTION(BlueprintCallable)
    void InputPressReplaySkip();
    
    UFUNCTION(BlueprintCallable)
    void InputPressReplayRewind();
    
    UFUNCTION(BlueprintCallable)
    void InputPressReplayPause();
    
    UFUNCTION(BlueprintCallable)
    void InputPressReplayFaster();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPrevPlayer();
    
    UFUNCTION()
    void InputPressPlayer_9();
    
    UFUNCTION()
    void InputPressPlayer_8();
    
    UFUNCTION()
    void InputPressPlayer_7();
    
    UFUNCTION()
    void InputPressPlayer_6();
    
    UFUNCTION()
    void InputPressPlayer_5();
    
    UFUNCTION()
    void InputPressPlayer_4();
    
    UFUNCTION()
    void InputPressPlayer_3();
    
    UFUNCTION()
    void InputPressPlayer_2();
    
    UFUNCTION()
    void InputPressPlayer_1();
    
    UFUNCTION()
    void InputPressPlayer_0();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InputPressNextPlayer();
    
    UFUNCTION(BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetViewPawn() const;
    
};

