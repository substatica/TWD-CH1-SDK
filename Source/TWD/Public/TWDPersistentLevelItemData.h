#pragma once
#include "CoreMinimal.h"
#include "TWDSavedItemData.h"
#include "UObject/NoExportTypes.h"
#include "TWDPersistentLevelItemData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDPersistentLevelItemData : public FTWDSavedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemTransform;
    
    FTWDPersistentLevelItemData();
};

