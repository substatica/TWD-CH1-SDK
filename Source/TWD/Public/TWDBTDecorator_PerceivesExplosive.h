#pragma once
#include "CoreMinimal.h"
#include "TWDBTD_Base.h"
#include "TWDBTDecorator_PerceivesExplosive.generated.h"

UCLASS(Blueprintable)
class UTWDBTDecorator_PerceivesExplosive : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToExplosive;
    
    UTWDBTDecorator_PerceivesExplosive();
};

