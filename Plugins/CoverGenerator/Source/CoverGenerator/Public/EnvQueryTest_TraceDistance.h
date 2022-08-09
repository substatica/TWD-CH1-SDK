#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_TraceDistance.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_TraceDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxTraceDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue VerticalOffset;
    
    UEnvQueryTest_TraceDistance();
};

