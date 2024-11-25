#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberActor.h"
#include "TWDDismemberLimbCap.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATWDDismemberLimbCap : public ATWDDismemberActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ATWDDismemberLimbCap(const FObjectInitializer& ObjectInitializer);
};

