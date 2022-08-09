#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SDICoreStats.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreStats : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDICoreStats();
};

