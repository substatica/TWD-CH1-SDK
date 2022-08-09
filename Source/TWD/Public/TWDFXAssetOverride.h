#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TWDFXAssetOverride.generated.h"

class UFXSystemAsset;

USTRUCT()
struct TWD_API FTWDFXAssetOverride : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PlatformLevel;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath BaseSystem;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFXSystemAsset> OverrideSystem;
    
    FTWDFXAssetOverride();
};

