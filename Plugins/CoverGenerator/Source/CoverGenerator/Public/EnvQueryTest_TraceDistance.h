#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_TraceDistance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_TraceDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxTraceDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue VerticalOffset;
    
    UEnvQueryTest_TraceDistance();
};

