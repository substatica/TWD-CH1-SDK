#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapAttributeDataAsset.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class TWD_API UMapAttributeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Icon;
    
    UMapAttributeDataAsset();
};

