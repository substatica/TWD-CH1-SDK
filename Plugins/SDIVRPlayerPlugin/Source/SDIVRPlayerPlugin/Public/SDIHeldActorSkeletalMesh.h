#pragma once
#include "CoreMinimal.h"
#include "SDIHeldActor.h"
#include "SDIHeldActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIHeldActorSkeletalMesh : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIHeldActorSkeletalMesh();
};

