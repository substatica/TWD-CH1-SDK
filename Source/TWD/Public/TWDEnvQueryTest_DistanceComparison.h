#pragma once
#include "CoreMinimal.h"
#include "ETWDEnvTestDistance.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DistanceLine.h"
#include "ETWDEnvTestOperation.h"
#include "DataProviders/AIDataProvider.h"
#include "TWDEnvQueryTest_DistanceComparison.generated.h"

UCLASS()
class TWD_API UTWDEnvQueryTest_DistanceComparison : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETWDEnvTestDistance::Type> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETWDEnvTestOperation::Type> TestOperation;
    
    UPROPERTY(EditDefaultsOnly)
    FDistanceLine LineA;
    
    UPROPERTY(EditDefaultsOnly)
    FDistanceLine LineB;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueHysteresis;
    
    UTWDEnvQueryTest_DistanceComparison();
};

