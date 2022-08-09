#pragma once
#include "CoreMinimal.h"
#include "BinSizeConfig.generated.h"

USTRUCT(BlueprintType)
struct FBinSizeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagToBin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BinSizes;
    
    SDICOREPLUGIN_API FBinSizeConfig();
};

