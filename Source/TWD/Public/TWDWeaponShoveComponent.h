#pragma once
#include "CoreMinimal.h"
#include "SDIDamageData.h"
#include "Components/ActorComponent.h"
#include "SDIPlayerHandMove.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDWeaponShoveComponent.generated.h"

class ATWDCharacter;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDWeaponShoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanShove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShoveRequireTwoHands;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanShoveWhenWinded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIPlayerHandMove ShoveMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShoveMinPenetration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<ETWDCharacterHitRegion> ShoveRegionFilter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShoveCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIDamageData ShoveDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShoveStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShoveDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnShove;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<ATWDCharacter>, float> ShoveTimestamps;
    
public:
    UTWDWeaponShoveComponent();
    UFUNCTION()
    void OnShoveActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& HitInfo);
    
};

