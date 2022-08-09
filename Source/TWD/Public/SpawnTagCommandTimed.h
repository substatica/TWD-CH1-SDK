#pragma once
#include "CoreMinimal.h"
#include "SpawnTagCommand.h"
#include "RFloat.h"
#include "SpawnTagCommandTimed.generated.h"

USTRUCT(BlueprintType)
struct FSpawnTagCommandTimed : public FSpawnTagCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloat TimerLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnFirstBeforeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxLoopCount;
    
    TWD_API FSpawnTagCommandTimed();
};

