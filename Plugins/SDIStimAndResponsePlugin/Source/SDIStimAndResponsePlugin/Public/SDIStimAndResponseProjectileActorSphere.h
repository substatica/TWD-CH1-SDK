#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseProjectileActor.h"
#include "SDIStimAndResponseProjectileActorSphere.generated.h"

class USphereComponent;

UCLASS()
class SDISTIMANDRESPONSEPLUGIN_API ASDIStimAndResponseProjectileActorSphere : public ASDIStimAndResponseProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereCollision;
    
public:
    ASDIStimAndResponseProjectileActorSphere();
};

