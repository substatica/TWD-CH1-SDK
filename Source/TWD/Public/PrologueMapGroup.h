#pragma once
#include "CoreMinimal.h"
#include "PrologueMapGroup.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FPrologueMapGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EnvironmentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DesignMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LightScenarioMap;
    
    FPrologueMapGroup();
};

