#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveHighlightManager.h"
#include "ETWDInteractionType.h"
#include "TWDInteractiveHighlightActorPool.h"
#include "TWDInteractiveHighlightManagerEntry.h"
#include "Engine/EngineTypes.h"
#include "TWDInteractiveHighlightManager.generated.h"

class AActor;
class USceneComponent;

UCLASS(Config=Game)
class ATWDInteractiveHighlightManager : public ASDIInteractiveHighlightManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDInteractionType, FTWDInteractiveHighlightActorPool> HighlightActorPools;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float NearbyRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> NearbyOverlapChannel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> NearbyLOSChannel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bNearbyDistributeLOSChecks;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bNearbyDistributeUpdates;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FTWDInteractiveHighlightManagerEntry> Entries;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FTWDInteractiveHighlightManagerEntry> NearbyEntries;
    
    UPROPERTY(Transient)
    uint32 NearbyDistributionCounter;
    
public:
    ATWDInteractiveHighlightManager();
    UFUNCTION(BlueprintCallable)
    static void SetCustomHighlight(AActor* Actor, USceneComponent* Component, bool bHighlighted, ETWDInteractionType Type);
    
};

