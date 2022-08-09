#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "ETWDEnvTestDistance.h"
#include "TWDEnvQueryTest_DistanceWithHysteresis.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UTWDEnvQueryTest_DistanceWithHysteresis : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETWDEnvTestDistance::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue FloatValueHysteresis;
    
    UTWDEnvQueryTest_DistanceWithHysteresis();
};

