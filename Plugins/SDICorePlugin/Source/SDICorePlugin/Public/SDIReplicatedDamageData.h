#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "SDIReplicatedDamageData.generated.h"

class UObject;
class UDamageType;
class APawn;
class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* DamagedActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerState* DamagedPS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APawn* InstigatorPawn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerState* InstigatorPS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UObject* DamageCauser;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 DamageID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector_NetQuantizeNormal ShotDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector_NetQuantize100 ImpactVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ImpactMass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HitReactImpulseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HitReactMinSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DamageIntended;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DamageTaken;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bRadialDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<uint8> CustomData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timestamp;
    
    FSDIReplicatedDamageData();
};

