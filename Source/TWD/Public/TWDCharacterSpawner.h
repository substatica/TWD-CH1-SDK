#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NavigationObjectBase.h"
#include "SpawnerCharacterSpawnedDelegate.h"
#include "SpawnerCharacterDiedDelegate.h"
#include "TWDCharacterSpawner.generated.h"

class UDamageType;
class ATWDCharacter;
class AActor;

UCLASS(Blueprintable)
class TWD_API ATWDCharacterSpawner : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerCharacterSpawned SpawnerCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerCharacterDied SpawnerCharacterDied;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDCharacter> CharacterBlueprint;
    
public:
    ATWDCharacterSpawner();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnSingle();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
};

