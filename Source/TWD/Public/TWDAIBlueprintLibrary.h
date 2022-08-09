#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "TWDAIBlueprintLibrary.generated.h"

class APawn;
class ATWDCharacter;

UCLASS(BlueprintType)
class TWD_API UTWDAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTWDAIBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool GetNearbyWalkersWithAverageLocation(APawn* Pawn, float Radius, TArray<ATWDCharacter*>& OutWalkers, FVector& AverageLocation);
    
};

