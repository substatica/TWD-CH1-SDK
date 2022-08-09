#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDPlayerCage.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ATWDPlayerCage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CageMatInst;
    
public:
    ATWDPlayerCage();
};

