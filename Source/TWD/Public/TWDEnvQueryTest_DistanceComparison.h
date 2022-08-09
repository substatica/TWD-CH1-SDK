#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "ETWDEnvTestOperation.h"
#include "ETWDEnvTestDistance.h"
#include "DistanceLine.h"
#include "TWDEnvQueryTest_DistanceComparison.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDEnvQueryTest_DistanceComparison : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETWDEnvTestDistance::Type> TestMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETWDEnvTestOperation::Type> TestOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceLine LineA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceLine LineB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueHysteresis;
    
    UTWDEnvQueryTest_DistanceComparison();
};

