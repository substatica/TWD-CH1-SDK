#pragma once
#include "CoreMinimal.h"
#include "TWDCorpseInfo.generated.h"

class ATWDCharacter;

USTRUCT()
struct FTWDCorpseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATWDCharacter* Corpse;
    
    UPROPERTY(Transient)
    bool bOffscreen;
    
    UPROPERTY(Transient)
    float Distance;
    
    UPROPERTY(Transient)
    float TimeDead;
    
    UPROPERTY(Transient)
    float CleanupTimestamp;
    
    UPROPERTY(Transient)
    bool bHighPriorityCorpse;
    
    UPROPERTY(Transient)
    bool bCorpseCleanupCanSpawnWalker;
    
    UPROPERTY(Transient)
    bool bBeingDragged;
    
    UPROPERTY(Transient)
    float MinDistanceCorpseCleanupFromPlayer;
    
    UPROPERTY(Transient)
    int32 NumCorpsesTouched;
    
    TWD_API FTWDCorpseInfo();
};

