#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TWDEQTest_PathfindingComplexity.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class TWD_API UTWDEQTest_PathfindingComplexity : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DistanceMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxHeightDifference;
    
    UTWDEQTest_PathfindingComplexity();
};

