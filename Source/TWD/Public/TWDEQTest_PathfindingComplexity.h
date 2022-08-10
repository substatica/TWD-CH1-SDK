#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TWDEQTest_PathfindingComplexity.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class TWD_API UTWDEQTest_PathfindingComplexity : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DistanceMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxHeightDifference;
    
    UTWDEQTest_PathfindingComplexity();
};

