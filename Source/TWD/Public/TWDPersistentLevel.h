#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LevelScriptActor.h"
#include "TWDItemPersistenceHandledDelegate.h"
#include "TWDPersistentLevel.generated.h"

class AActor;

UCLASS()
class TWD_API ATWDPersistentLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPersistenceHandled;
    
    UPROPERTY(BlueprintAssignable)
    FTWDItemPersistenceHandled OnItemPersistenceHandled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> PersistenceExcludedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> PersistenceExcludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SublevelsToWaitFor;
    
public:
    ATWDPersistentLevel();
protected:
    UFUNCTION()
    void WaitForLevelsToBeLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrePersistenceHandling();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostPersistenceHandling();
    
    UFUNCTION()
    void HandlePersistence();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddExcludedActor(AActor* ActorToExclude);
    
};

