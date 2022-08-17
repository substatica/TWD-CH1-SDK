#pragma once
#include "CoreMinimal.h"
#include "SDIProjectileActor.h"
#include "SDIProjectileActorSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIProjectileActorSphere : public ASDIProjectileActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
public:
    ASDIProjectileActorSphere(const FObjectInitializer& ObjectInitializer);
};

