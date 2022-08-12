#pragma once
#include "CoreMinimal.h"
#include "LookAtCameraInfo.generated.h"

class UCameraComponent;

USTRUCT(BlueprintType)
struct FLookAtCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    TWD_API FLookAtCameraInfo();
};

