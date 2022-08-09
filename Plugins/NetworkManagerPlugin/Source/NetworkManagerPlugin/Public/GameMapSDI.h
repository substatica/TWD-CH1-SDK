#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameMapSDI.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FGameMapSDI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString displayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString displayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    FGameMapSDI();
};

