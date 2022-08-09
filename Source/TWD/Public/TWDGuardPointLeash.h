#pragma once
#include "CoreMinimal.h"
#include "ECharacterReaction.h"
#include "TWDGuardPointLeash.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct FTWDGuardPointLeash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterReaction> ReactionKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> InclusionVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> ExclusionVolumes;
    
    TWD_API FTWDGuardPointLeash();
};

