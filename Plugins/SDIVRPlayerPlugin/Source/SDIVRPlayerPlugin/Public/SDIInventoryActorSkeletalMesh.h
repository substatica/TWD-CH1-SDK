#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryActor.h"
#include "SDIInventoryActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInventoryActorSkeletalMesh : public ASDIInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIInventoryActorSkeletalMesh();
};

