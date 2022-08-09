#pragma once
#include "CoreMinimal.h"
#include "TWDPersistentLevelItemData.h"
#include "TWDPersistentLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDPersistentLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDPersistentLevelItemData> PersistentInventory;
    
    FTWDPersistentLevelSaveData();
};

