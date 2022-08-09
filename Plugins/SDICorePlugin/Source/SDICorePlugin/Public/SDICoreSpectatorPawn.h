#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "SDICoreSpectatorPawn.generated.h"

class APlayerState;
class APawn;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplaySkipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplayRewindTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReplaySpeedStep;
    
public:
    ASDICoreSpectatorPawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_9();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_8();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_7();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_6();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_5();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_4();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_3();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_2();
    
    UFUNCTION(BlueprintCallable)
    void InputReleasePlayer_1();
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_9();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_8();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_7();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_6();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_5();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_4();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_3();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_2();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_1();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer_0();
    
    UFUNCTION(BlueprintCallable)
    void InputPressPlayer(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InputPressNextPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetViewPawn() const;
    
};

