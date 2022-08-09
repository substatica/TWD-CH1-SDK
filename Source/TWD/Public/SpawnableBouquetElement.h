#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterHitRegion.h"
#include "SpawnableBouquetElement.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FSpawnableBouquetElement {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FTransform T;
    
    UPROPERTY(Transient)
    FName AttachBoneName;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> AttachParent;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(Transient)
    bool bAnchored;
    
    UPROPERTY(Transient)
    bool bEnablePhysics;
    
    UPROPERTY(Transient)
    FName AttachBoneNameOverride;
    
    UPROPERTY(Transient)
    FName AnchorBoneName;
    
    UPROPERTY(Transient)
    FVector SpawnImpulseVector;
    
    UPROPERTY(Transient)
    ETWDCharacterHitRegion SpawnContext;
    
    TWD_API FSpawnableBouquetElement();
};

