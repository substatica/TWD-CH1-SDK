#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseProjectileActor.h"
#include "SDIProjectileActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIProjectileActor : public ASDIStimAndResponseProjectileActor {
    GENERATED_BODY()
public:
    ASDIProjectileActor(const FObjectInitializer& ObjectInitializer);
};

