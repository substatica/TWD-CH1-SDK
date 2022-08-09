#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "SDIInteractiveActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInteractiveActorSkeletalMesh : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIInteractiveActorSkeletalMesh();
};

