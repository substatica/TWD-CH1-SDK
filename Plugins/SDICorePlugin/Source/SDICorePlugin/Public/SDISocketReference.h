#pragma once
#include "CoreMinimal.h"
#include "SDISocketReference.generated.h"

USTRUCT(BlueprintType)
struct FSDISocketReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    SDICOREPLUGIN_API FSDISocketReference();
};

