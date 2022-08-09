#pragma once
#include "CoreMinimal.h"
#include "SDIEnumTypeHandle.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIEnumTypeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnum* EnumData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EnumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EnumName;
    
    FSDIEnumTypeHandle();
};

