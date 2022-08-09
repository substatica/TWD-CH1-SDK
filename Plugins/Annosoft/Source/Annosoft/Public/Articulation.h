#pragma once
#include "CoreMinimal.h"
#include "Articulation.generated.h"

USTRUCT(BlueprintType)
struct FArticulation {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Phoneme;
    
    UPROPERTY(VisibleAnywhere)
    float Weight;
    
    UPROPERTY(VisibleAnywhere)
    float TimeStart;
    
    UPROPERTY(VisibleAnywhere)
    float TimeEnd;
    
    ANNOSOFT_API FArticulation();
};

