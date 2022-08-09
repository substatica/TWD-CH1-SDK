#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDAINoiseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDAINoiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NoiseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FTWDAINoiseEvent();
};

