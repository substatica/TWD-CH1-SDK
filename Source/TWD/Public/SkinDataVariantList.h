#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SkinDataVariantList.generated.h"

class USDISkinObject;

USTRUCT(BlueprintType)
struct FSkinDataVariantList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<USDISkinObject>> Variants;
    
    TWD_API FSkinDataVariantList();
};

