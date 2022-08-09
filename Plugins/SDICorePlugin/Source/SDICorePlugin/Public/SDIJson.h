#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "SDIJson.generated.h"

class UObject;

UCLASS(BlueprintType)
class SDICOREPLUGIN_API USDIJson : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDIJson();
    UFUNCTION(BlueprintPure)
    static FGuid GetObjectGuid(UObject* Obj);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetClassGuid(UClass* Class);
    
};

