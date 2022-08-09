#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RFloat.h"
#include "TWDCorpseManager.generated.h"

class ATWDCharacter;
class UTWDCharacterArchetype;

UCLASS()
class TWD_API ATWDCorpseManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CorpseCleanupDesiredSpawnWalkerDelay;
    
    UPROPERTY(EditAnywhere)
    float CorpseCleanupSpawnWalkerOffscreenTime;
    
    UPROPERTY(EditAnywhere)
    FRFloat SpawnWalkerCheckInterval;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ATWDCharacter>, float> Corpses;
    
    UPROPERTY(Transient)
    TArray<ATWDCharacter*> DeathPool;
    
    UPROPERTY(Transient)
    FTransform DeathPoolTransform;
    
    UPROPERTY(Transient)
    float LowPerfTime;
    
public:
    ATWDCorpseManager();
    UFUNCTION(BlueprintCallable)
    void SetDeathPoolTransform(FTransform Transform);
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterInDeathPool(ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToDeathPool(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    ATWDCharacter* AcquireCharacterFromDeathPool(TSubclassOf<ATWDCharacter> CharacterClass, TSubclassOf<UTWDCharacterArchetype> ArchetypeClass, FTransform Transform);
    
};

