#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDialogueFinishedState.h"
#include "EDialogueState.h"
#include "EPreSuspendPreResumeState.h"
#include "TWDDialogue.generated.h"

class ATWDCharacter;
class UDataTable;
class ATWDPlayerController;

UCLASS(Blueprintable)
class TWD_API UTWDDialogue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreSuspendPreResumeState PreSuspendPreResumeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteOnStop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DialogueLineDataTableReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreResume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogueFinished(bool bCompleted, EDialogueFinishedState DialogueFinishedState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterExitedDialogueRange(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnteredDialogueRange(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Start();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetInstigatorCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerController* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDialogueState GetDialogueState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATWDCharacter*> GetCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetCharacter(int32 CharacterIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBookmark() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void End();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearBookmark() const;
    
};

