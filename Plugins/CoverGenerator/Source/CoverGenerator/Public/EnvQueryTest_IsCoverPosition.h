#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsCoverPosition.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_IsCoverPosition : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHorizontalDistanceOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextVerticalDistanceOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderBoolValue DebugData;
    
    UEnvQueryTest_IsCoverPosition();
};

