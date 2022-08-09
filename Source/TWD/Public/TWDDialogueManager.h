#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDBarkHistory.h"
#include "GameFramework/Actor.h"
#include "DialogueStartedEventDelegate.h"
#include "DialogueFinishedDelegate.h"
#include "TWDDialogueManager.generated.h"

class UDataTable;
class ATWDGameDirector;
class ATWDCharacter;
class UTWDDialogue;
class UTWDBarkSemaphore;
class ATWDPlayerController;

UCLASS(Blueprintable)
class TWD_API ATWDDialogueManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueStartedEvent DialogueStarted;
    
protected:
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> SpecialDialogueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FTWDBarkHistory> GlobalBarkHistory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> RuleDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTWDDialogue*> ActiveDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDGameDirector* GameDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDialoguePlaying(TSubclassOf<UTWDDialogue> Dialogue);
    
};

