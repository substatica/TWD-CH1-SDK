#pragma once
#include "CoreMinimal.h"
#include "ETWDWorldEventType.h"
#include "MapTerritoryAttribute.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FMapTerritoryAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWorldEventType Type;
    
    FMapTerritoryAttribute();
};

