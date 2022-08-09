#pragma once
#include "CoreMinimal.h"
#include "SDIReferenceCounter.h"
#include "Engine/EngineTypes.h"
#include "SDICollisionResponseRefCount.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICollisionResponseRefCount : public FSDIReferenceCounter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ECollisionResponse> CollisionResponse;
    
    FSDICollisionResponseRefCount();
};

