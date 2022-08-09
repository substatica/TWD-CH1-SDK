#pragma once
#include "CoreMinimal.h"
#include "PrologueMapGroup.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FPrologueMapGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnvironmentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DesignMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightScenarioMap;
    
    FPrologueMapGroup();
};

