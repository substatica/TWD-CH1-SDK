#pragma once
#include "CoreMinimal.h"
#include "TWDAmmoPouchItemInfo.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDAmmoPouchItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText AmmoName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 AmmoClip;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 AmmoStock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bShowStock;
    
    FTWDAmmoPouchItemInfo();
};

