#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinReplicationDataCustomization.h"
#include "SDISkinReplicationData.generated.h"

class USDISkinObject;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<USDISkinObject> Skin;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsePreAuthoredMeshes;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSDISkinReplicationDataCustomization> CustomizationData;
    
    UPROPERTY(Transient)
    int32 SkinChangeCounter;
    
    FSDISkinReplicationData();
};

