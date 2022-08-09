#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SDIJson.generated.h"

class UObject;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDIJson : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDIJson();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetObjectGuid(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetClassGuid(UClass* Class);
    
};

