#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDIRandomSkinParamSetEntry.h"
#include "SDIRandomSkinParamSetShared.generated.h"

UCLASS(BlueprintType)
class SDISKINPLUGIN_API USDIRandomSkinParamSetShared : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDIRandomSkinParamSetEntry> Entries;
    
public:
    USDIRandomSkinParamSetShared();
};

