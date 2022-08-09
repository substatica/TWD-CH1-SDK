#pragma once
#include "CoreMinimal.h"
#include "SDIGameplayTagActor.h"
#include "SDIGameplayTagActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS()
class SDISTIMANDRESPONSEPLUGIN_API ASDIGameplayTagActorStaticMesh : public ASDIGameplayTagActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIGameplayTagActorStaticMesh();
};

