#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DialogueStartedEventDelegate.h"
#include "TWDBarkHistory.h"
#include "DialogueFinishedDelegate.h"
#include "TWDDialogueManager.generated.h"

class ATWDGameDirector;
class ATWDCharacter;
class UDataTable;
class UTWDDialogue;
class UTWDBarkSemaphore;
class ATWDPlayerController;

UCLASS()
class TWD_API ATWDDialogueManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDialogueStartedEvent DialogueStarted;
    
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> SpecialDialogueCharacters;
    
    UPROPERTY(Transient)
    TMap<FName, FTWDBarkHistory> GlobalBarkHistory;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> RuleDataTables;
    
    UPROPERTY()
    TArray<UTWDDialogue*> ActiveDialogues;
    
    UPROPERTY(Transient)
    ATWDGameDirector* GameDirector;
    
    UPROPERTY(Transient)
    UTWDBarkSemaphore* BarkSemaphore;
    
public:
    ATWDDialogueManager();
    UFUNCTION(BlueprintCallable)
    void UnRegisterSpecialDialogueCharacter(ATWDCharacter* CharacterToRemove);
    
    UFUNCTION(BlueprintCallable)
    void StopDialogue(TSubclassOf<UTWDDialogue> Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpecialDialogueCharacter(ATWDCharacter* CharacterToRegister);
    
    UFUNCTION(BlueprintCallable)
    UTWDDialogue* PlayDialogue(TSubclassOf<UTWDDialogue> Dialogue, const TArray<ATWDCharacter*>& Characters, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& DialogueFinished);
    
private:
    UFUNCTION()
    void OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDialoguePlaying(TSubclassOf<UTWDDialogue> Dialogue);
    
};

