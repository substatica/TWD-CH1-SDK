#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TWDEQTest_Pathfollowing.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class TWD_API UTWDEQTest_Pathfollowing : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UTWDEQTest_Pathfollowing();
};

