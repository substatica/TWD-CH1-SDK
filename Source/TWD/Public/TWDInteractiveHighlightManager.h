#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveHighlightManager.h"
#include "ETWDInteractionType.h"
#include "TWDInteractiveHighlightActorPool.h"
#include "Engine/EngineTypes.h"
#include "TWDInteractiveHighlightManagerEntry.h"
#include "TWDInteractiveHighlightManager.generated.h"

class USceneComponent;
class AActor;

UCLASS(Blueprintable, Config=Game)
class ATWDInteractiveHighlightManager : public ASDIInteractiveHighlightManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDInteractionType, FTWDInteractiveHighlightActorPool> HighlightActorPools;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> NearbyOverlapChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> NearbyLOSChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNearbyDistributeLOSChecks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNearbyDistributeUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDInteractiveHighlightManagerEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDInteractiveHighlightManagerEntry> NearbyEntries;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 NearbyDistributionCounter;
    
public:
    ATWDInteractiveHighlightManager();
    UFUNCTION(BlueprintCallable)
    static void SetCustomHighlight(AActor* Actor, USceneComponent* Component, bool bHighlighted, ETWDInteractionType Type);
    
};

