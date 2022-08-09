#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDPlayerCage.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class ATWDPlayerCage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* CageMatInst;
    
public:
    ATWDPlayerCage();
};

