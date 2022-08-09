#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_ParallelToCoverDirection.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_ParallelToCoverDirection : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxEpsilon;
    
    UEnvQueryTest_ParallelToCoverDirection();
};

