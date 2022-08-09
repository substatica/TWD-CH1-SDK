#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NavigationObjectBase.h"
#include "SpawnerCharacterDiedDelegate.h"
#include "SpawnerCharacterSpawnedDelegate.h"
#include "TWDCharacterSpawner.generated.h"

class AActor;
class UDamageType;
class ATWDCharacter;

UCLASS()
class TWD_API ATWDCharacterSpawner : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnerCharacterSpawned SpawnerCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerCharacterDied SpawnerCharacterDied;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATWDCharacter> CharacterBlueprint;
    
public:
    ATWDCharacterSpawner();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnSingle();
    
private:
    UFUNCTION()
    void OnCharacterDied(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
};

