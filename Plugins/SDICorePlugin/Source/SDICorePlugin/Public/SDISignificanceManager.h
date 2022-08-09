#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "BinSizeConfig.h"
#include "BinnedObjectInfo.h"
#include "SDISignificanceManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDISignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FBinnedObjectInfo> BinnedObjectInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> TagsToBin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBinSizeConfig> BinSizeConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BinChangeRateLimitTime;
    
public:
    USDISignificanceManager();
};

