#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedName.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedName {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 ReplicatedIndex;
    
public:
    FSDIReplicatedName();
};

