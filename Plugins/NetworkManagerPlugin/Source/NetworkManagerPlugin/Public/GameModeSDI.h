#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameModeSDI.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FGameModeSDI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString displayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    FGameModeSDI();
};

