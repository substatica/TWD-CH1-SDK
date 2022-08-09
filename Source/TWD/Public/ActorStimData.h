#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorStimData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorStimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Stimulus;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bHostile;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector StimLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Age;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName Tag;
    
    TWD_API FActorStimData();
};

