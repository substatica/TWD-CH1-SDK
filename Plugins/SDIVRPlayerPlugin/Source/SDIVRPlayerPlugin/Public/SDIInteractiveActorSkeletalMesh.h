#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "SDIInteractiveActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInteractiveActorSkeletalMesh : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIInteractiveActorSkeletalMesh();
};

