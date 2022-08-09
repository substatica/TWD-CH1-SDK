#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LevelScriptActor.h"
#include "TWDSuspendableLevel.generated.h"

class ATWDCharacter;
class ASDIHeldActor;
class AActor;

UCLASS(Blueprintable)
class TWD_API ATWDSuspendableLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SaveContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> StartingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASDIHeldActor*> StartingHeldActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SaveExcludedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> SaveExcludedActors;
    
public:
    ATWDSuspendableLevel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayNew();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayFromSave();
    
    UFUNCTION(BlueprintCallable)
    void AddSaveExcludedActor(AActor* ActorToExclude);
    
};

