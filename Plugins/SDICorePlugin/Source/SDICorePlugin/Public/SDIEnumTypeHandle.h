#pragma once
#include "CoreMinimal.h"
#include "SDIEnumTypeHandle.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIEnumTypeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* EnumData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnumName;
    
    FSDIEnumTypeHandle();
};

