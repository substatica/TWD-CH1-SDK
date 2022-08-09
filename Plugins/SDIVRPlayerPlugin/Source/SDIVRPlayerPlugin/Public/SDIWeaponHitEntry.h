#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponHitEntry.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponHitEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform PrevTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Lerp;
    
    FSDIWeaponHitEntry();
};

