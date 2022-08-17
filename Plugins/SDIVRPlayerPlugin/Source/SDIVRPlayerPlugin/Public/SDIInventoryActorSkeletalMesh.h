#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryActor.h"
#include "SDIInventoryActorSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInventoryActorSkeletalMesh : public ASDIInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ASDIInventoryActorSkeletalMesh(const FObjectInitializer& ObjectInitializer);
};