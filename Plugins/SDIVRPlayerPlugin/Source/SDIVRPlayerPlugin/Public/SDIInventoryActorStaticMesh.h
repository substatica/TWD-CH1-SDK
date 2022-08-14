#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryActor.h"
#include "SDIInventoryActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInventoryActorStaticMesh : public ASDIInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIInventoryActorStaticMesh();
};

