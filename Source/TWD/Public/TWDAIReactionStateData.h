#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIEnumTypeHandle.h"
#include "TWDAIReactionStateData.generated.h"

USTRUCT(BlueprintType)
struct FTWDAIReactionStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(EditAnywhere)
    uint32 Previous;
    
    UPROPERTY(EditAnywhere)
    uint32 Requested;
    
    UPROPERTY(EditAnywhere)
    uint32 CharacterTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHearing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIEnumTypeHandle AnimEnumHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BarkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange WaitTime;
    
    TWD_API FTWDAIReactionStateData();
};

