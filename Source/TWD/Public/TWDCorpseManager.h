#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RFloat.h"
#include "TWDCorpseManager.generated.h"

class ATWDCharacter;
class UTWDCharacterArchetype;

UCLASS(Blueprintable)
class TWD_API ATWDCorpseManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorpseCleanupDesiredSpawnWalkerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorpseCleanupSpawnWalkerOffscreenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat SpawnWalkerCheckInterval;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<ATWDCharacter>, float> Corpses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> DeathPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DeathPoolTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LowPerfTime;
    
public:
    ATWDCorpseManager();
    UFUNCTION(BlueprintCallable)
    void SetDeathPoolTransform(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInDeathPool(ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToDeathPool(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    ATWDCharacter* AcquireCharacterFromDeathPool(TSubclassOf<ATWDCharacter> CharacterClass, TSubclassOf<UTWDCharacterArchetype> ArchetypeClass, FTransform Transform);
    
};

