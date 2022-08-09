#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIEnumTypeHandle.h"
#include "TWDAIReactionStateData.generated.h"

USTRUCT(BlueprintType)
struct FTWDAIReactionStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisable;
    
    UPROPERTY(EditAnywhere)
    uint32 Previous;
    
    UPROPERTY(EditAnywhere)
    uint32 Requested;
    
    UPROPERTY(EditAnywhere)
    uint32 CharacterTargetType;
    
    UPROPERTY(EditAnywhere)
    bool bIsSight;
    
    UPROPERTY(EditAnywhere)
    bool bIsHearing;
    
    UPROPERTY(EditAnywhere)
    FSDIEnumTypeHandle AnimEnumHandle;
    
    UPROPERTY(EditAnywhere)
    FName BarkEvent;
    
    UPROPERTY(EditAnywhere)
    FFloatRange WaitTime;
    
    TWD_API FTWDAIReactionStateData();
};

