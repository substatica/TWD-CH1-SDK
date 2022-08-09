#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LevelScriptActor.h"
#include "TWDItemPersistenceHandledDelegate.h"
#include "TWDPersistentLevel.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWD_API ATWDPersistentLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPersistenceHandled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDItemPersistenceHandled OnItemPersistenceHandled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> PersistenceExcludedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> PersistenceExcludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SublevelsToWaitFor;
    
public:
    ATWDPersistentLevel();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitForLevelsToBeLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrePersistenceHandling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostPersistenceHandling();
    
    UFUNCTION(BlueprintCallable)
    void HandlePersistence();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddExcludedActor(AActor* ActorToExclude);
    
};

