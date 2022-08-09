#pragma once
#include "CoreMinimal.h"
#include "SDICoreProjectileMovementComponent.h"
#include "SDIProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIProjectileMovementComponent : public USDICoreProjectileMovementComponent {
    GENERATED_BODY()
public:
    USDIProjectileMovementComponent();
};

