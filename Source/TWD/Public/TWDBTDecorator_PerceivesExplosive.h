#pragma once
#include "CoreMinimal.h"
#include "TWDBTD_Base.h"
#include "TWDBTDecorator_PerceivesExplosive.generated.h"

UCLASS()
class UTWDBTDecorator_PerceivesExplosive : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxDistanceToExplosive;
    
    UTWDBTDecorator_PerceivesExplosive();
};

