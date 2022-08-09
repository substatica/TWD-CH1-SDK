#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterPhysicsAssetLOD.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FTWDCharacterPhysicsAssetLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisengageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngageTimeSinceLastRender;
    
    TWD_API FTWDCharacterPhysicsAssetLOD();
};

