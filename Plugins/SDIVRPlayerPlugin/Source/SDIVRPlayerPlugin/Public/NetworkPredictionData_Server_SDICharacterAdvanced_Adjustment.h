#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NetworkPredictionData_Server_SDICharacterAdvanced_Adjustment.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementSpringPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementSpringVelocity;
    
    FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment();
};

