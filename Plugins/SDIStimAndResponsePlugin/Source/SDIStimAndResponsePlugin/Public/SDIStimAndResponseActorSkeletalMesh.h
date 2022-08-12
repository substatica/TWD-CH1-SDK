#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseActor.h"
#include "SDIStimAndResponseActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SDISTIMANDRESPONSEPLUGIN_API ASDIStimAndResponseActorSkeletalMesh : public ASDIStimAndResponseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIStimAndResponseActorSkeletalMesh();
};

