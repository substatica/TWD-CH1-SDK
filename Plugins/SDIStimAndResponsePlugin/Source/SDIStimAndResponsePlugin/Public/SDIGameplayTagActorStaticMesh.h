#pragma once
#include "CoreMinimal.h"
#include "SDIGameplayTagActor.h"
#include "SDIGameplayTagActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class SDISTIMANDRESPONSEPLUGIN_API ASDIGameplayTagActorStaticMesh : public ASDIGameplayTagActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIGameplayTagActorStaticMesh();
};

