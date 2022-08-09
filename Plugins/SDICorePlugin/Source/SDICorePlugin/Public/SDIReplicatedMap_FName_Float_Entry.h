#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedMap_FName_Float_Entry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedMap_FName_Float_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    FSDIReplicatedMap_FName_Float_Entry();
};

