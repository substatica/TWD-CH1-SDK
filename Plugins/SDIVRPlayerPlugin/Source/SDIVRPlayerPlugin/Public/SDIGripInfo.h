#pragma once
#include "CoreMinimal.h"
#include "SDIGripInfo.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIGripInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Twist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Swing1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Swing2;
    
    FSDIGripInfo();
};

