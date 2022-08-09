#pragma once
#include "CoreMinimal.h"
#include "SDIProjectileActor.h"
#include "SDIProjectileActorSphere.generated.h"

class USphereComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIProjectileActorSphere : public ASDIProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereCollision;
    
public:
    ASDIProjectileActorSphere();
};

