#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDIPrecomputedVisibilityTestActor.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable, Transient)
class SDICOREPLUGIN_API ASDIPrecomputedVisibilityTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePrecomputedVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    ASDIPrecomputedVisibilityTestActor();
};

