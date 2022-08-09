#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDialogueFinishedState.h"
#include "EPreSuspendPreResumeState.h"
#include "EDialogueState.h"
#include "TWDDialogue.generated.h"

class ATWDCharacter;
class UDataTable;
class ATWDPlayerController;

UCLASS(Blueprintable)
class TWD_API UTWDDialogue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPreSuspendPreResumeState PreSuspendPreResumeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompleteOnStop;
    
private:
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UDataTable*> DialogueLineDataTableReferences;
    
    UPROPERTY(Transient)
    TArray<ATWDCharacter*> Characters;
    
    UPROPERTY(Transient)
    ATWDPlayerController* Instigator;
    
public:
    UTWDDialogue();
    UFUNCTION(BlueprintCallable)
    void Suspend();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueState(EDialogueState InDialogueState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBookmark(const FString& BookMark) const;
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Restart();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void PreSuspend();
    
    UFUNCTION(BlueprintNativeEvent)
    void PreResume();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDialogueFinished(bool bCompleted, EDialogueFinishedState DialogueFinishedState);
    
    UFUNCTION()
    void OnCharacterExitedDialogueRange(ATWDCharacter* Character);
    
    UFUNCTION()
    void OnCharacterEnteredDialogueRange(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Start();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetInstigatorCharacter() const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerController* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    EDialogueState GetDialogueState() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ATWDCharacter*> GetCharacters() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetCharacter(int32 CharacterIndex) const;
    
    UFUNCTION(BlueprintPure)
    FString GetBookmark() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void End();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearBookmark() const;
    
};

