#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIRandomSkinParamSetEntry.h"
#include "SDIRandomSkinParamSet.generated.h"

class USDIRandomSkinParamSetShared;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRandomSkinParamSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIRandomSkinParamSetEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDIRandomSkinParamSetShared> SharedParamSet;
    
public:
    FSDIRandomSkinParamSet();
};

