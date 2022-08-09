#pragma once
#include "CoreMinimal.h"
#include "SpawnTagCommand.h"
#include "RFloat.h"
#include "SpawnTagCommandTimed.generated.h"

USTRUCT(BlueprintType)
struct FSpawnTagCommandTimed : public FSpawnTagCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat TimerLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFirstBeforeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoopCount;
    
    TWD_API FSpawnTagCommandTimed();
};

