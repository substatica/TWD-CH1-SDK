#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedMap_FName_Float_Entry.h"
#include "SDIReplicatedMap_FName_Float.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedMap_FName_Float {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSDIReplicatedMap_FName_Float_Entry> Entries;
    
public:
    FSDIReplicatedMap_FName_Float();
};

