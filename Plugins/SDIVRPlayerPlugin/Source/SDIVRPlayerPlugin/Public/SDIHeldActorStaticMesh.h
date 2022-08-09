#pragma once
#include "CoreMinimal.h"
#include "SDIHeldActor.h"
#include "SDIHeldActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIHeldActorStaticMesh : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIHeldActorStaticMesh();
};

