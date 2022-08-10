#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvQueryGenerator_CoverFMemory.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class UEnvQueryGenerator_CoverFMemory : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SquareExtent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue BoxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UEnvQueryGenerator_CoverFMemory();
};

