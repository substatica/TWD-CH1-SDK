#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedName.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedName {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(Transient)
    uint8 ReplicatedIndex;
    
public:
    FSDIReplicatedName();
};

