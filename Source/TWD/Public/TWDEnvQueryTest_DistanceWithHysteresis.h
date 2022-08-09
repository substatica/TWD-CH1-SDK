#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDEnvTestDistance.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TWDEnvQueryTest_DistanceWithHysteresis.generated.h"

class UEnvQueryContext;

UCLASS()
class UTWDEnvQueryTest_DistanceWithHysteresis : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETWDEnvTestDistance::Type> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueHysteresis;
    
    UTWDEnvQueryTest_DistanceWithHysteresis();
};

