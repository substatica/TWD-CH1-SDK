#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "BinSizeConfig.h"
#include "BinnedObjectInfo.h"
#include "SDISignificanceManager.generated.h"

class UObject;

UCLASS()
class SDICOREPLUGIN_API USDISignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UObject*, FBinnedObjectInfo> BinnedObjectInfos;
    
    UPROPERTY(Transient)
    TSet<FName> TagsToBin;
    
    UPROPERTY(Config)
    TArray<FBinSizeConfig> BinSizeConfigs;
    
    UPROPERTY(Config)
    float BinChangeRateLimitTime;
    
public:
    USDISignificanceManager();
};

