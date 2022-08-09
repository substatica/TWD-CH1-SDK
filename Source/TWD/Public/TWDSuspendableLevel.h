#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LevelScriptActor.h"
#include "TWDSuspendableLevel.generated.h"

class ATWDCharacter;
class ASDIHeldActor;
class AActor;

UCLASS()
class TWD_API ATWDSuspendableLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FString> SaveContext;
    
protected:
    UPROPERTY(Transient)
    TArray<ATWDCharacter*> StartingCharacters;
    
    UPROPERTY(Transient)
    TArray<ASDIHeldActor*> StartingHeldActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> SaveExcludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> SaveExcludedActors;
    
public:
    ATWDSuspendableLevel();
    UFUNCTION(BlueprintImplementableEvent)
    void PreSuspend();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PostSuspend();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginPlayNew();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginPlayFromSave();
    
    UFUNCTION(BlueprintCallable)
    void AddSaveExcludedActor(AActor* ActorToExclude);
    
};

