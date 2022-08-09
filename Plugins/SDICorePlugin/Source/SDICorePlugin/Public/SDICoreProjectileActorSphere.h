#pragma once
#include "CoreMinimal.h"
#include "SDICoreProjectileActor.h"
#include "SDICoreProjectileActorSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreProjectileActorSphere : public ASDICoreProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
public:
    ASDICoreProjectileActorSphere();
};

