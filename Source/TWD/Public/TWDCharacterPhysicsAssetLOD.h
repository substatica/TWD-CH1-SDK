#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterPhysicsAssetLOD.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FTWDCharacterPhysicsAssetLOD {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    float EngageDistance;
    
    UPROPERTY(EditAnywhere)
    float DisengageDistance;
    
    UPROPERTY(EditAnywhere)
    float EngageTimeSinceLastRender;
    
    TWD_API FTWDCharacterPhysicsAssetLOD();
};

