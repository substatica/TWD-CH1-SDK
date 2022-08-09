#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TWDGameDirector.generated.h"

class ATWDSpawnManager;
class ATWDDialogueManager;
class ATWDUtilityManager;
class ATWDAIDirector;
class ATWDCorpseManager;

UCLASS()
class TWD_API ATWDGameDirector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDDialogueManager> DialogueManagerBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDSpawnManager> SpawnManagerBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDUtilityManager> UtilityManagerBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDCorpseManager> CorpseManagerBlueprint;
    
    UPROPERTY(Transient)
    ATWDDialogueManager* DialogueManager;
    
    UPROPERTY(Transient)
    ATWDSpawnManager* SpawnManager;
    
    UPROPERTY(Transient)
    ATWDAIDirector* AIDirector;
    
    UPROPERTY(Transient)
    ATWDUtilityManager* UtilityManager;
    
    UPROPERTY(Transient)
    ATWDCorpseManager* CorpseManager;
    
public:
    ATWDGameDirector();
};

