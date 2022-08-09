#pragma once
#include "CoreMinimal.h"
#include "SDIHeldActor.h"
#include "SDIHeldActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIHeldActorSkeletalMesh : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIHeldActorSkeletalMesh();
};

