#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseActor.h"
#include "SDIStimAndResponseActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS()
class SDISTIMANDRESPONSEPLUGIN_API ASDIStimAndResponseActorStaticMesh : public ASDIStimAndResponseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIStimAndResponseActorStaticMesh();
};

