#pragma once
#include "CoreMinimal.h"
#include "SDISocketReference.generated.h"

USTRUCT(BlueprintType)
struct FSDISocketReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    SDICOREPLUGIN_API FSDISocketReference();
};

