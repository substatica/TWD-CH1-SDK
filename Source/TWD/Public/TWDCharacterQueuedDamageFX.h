#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "TWDCharacterQueuedDamageFX.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTWDCharacterQueuedDamageFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    ETWDCharacterHitRegion Region;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName AttachSocket;
    
    TWD_API FTWDCharacterQueuedDamageFX();
};

