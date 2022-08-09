#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDIRandomSkinParamSetEntry.h"
#include "SDIRandomSkinParamSetShared.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDIRandomSkinParamSetShared : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIRandomSkinParamSetEntry> Entries;
    
public:
    USDIRandomSkinParamSetShared();
};

