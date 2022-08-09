#pragma once
#include "CoreMinimal.h"
#include "ECharacterReaction.h"
#include "TWDGuardPointLeash.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct FTWDGuardPointLeash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ECharacterReaction> ReactionKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AVolume*> InclusionVolumes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AVolume*> ExclusionVolumes;
    
    TWD_API FTWDGuardPointLeash();
};

