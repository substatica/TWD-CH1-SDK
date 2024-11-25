#pragma once
#include "CoreMinimal.h"
#include "SDIHeldActor.h"
#include "SDIHeldActorStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIHeldActorStaticMesh : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASDIHeldActorStaticMesh(const FObjectInitializer& ObjectInitializer);
};

