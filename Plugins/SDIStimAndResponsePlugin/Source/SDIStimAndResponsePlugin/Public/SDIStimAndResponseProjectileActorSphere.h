#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseProjectileActor.h"
#include "SDIStimAndResponseProjectileActorSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class SDISTIMANDRESPONSEPLUGIN_API ASDIStimAndResponseProjectileActorSphere : public ASDIStimAndResponseProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
public:
    ASDIStimAndResponseProjectileActorSphere();
};

