#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapAttributeDataAsset.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class TWD_API UMapAttributeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AttributeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Icon;
    
    UMapAttributeDataAsset();
};

