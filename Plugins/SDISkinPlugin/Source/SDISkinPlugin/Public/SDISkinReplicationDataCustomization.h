#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinReplicationDataCustomization.generated.h"

class USDISkinObject;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinReplicationDataCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDISkinObject> SkinRef;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    FSDISkinReplicationDataCustomization();
};

