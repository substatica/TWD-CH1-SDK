#pragma once
#include "CoreMinimal.h"
#include "BinSizeConfig.generated.h"

USTRUCT(BlueprintType)
struct FBinSizeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FName TagToBin;
    
    UPROPERTY(Config)
    TArray<int32> BinSizes;
    
    SDICOREPLUGIN_API FBinSizeConfig();
};

