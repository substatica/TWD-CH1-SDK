#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDAISlot.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDAISlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RelTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AbsTranslation;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDCharacter> Owner;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 SideFlags;
    
    TWD_API FTWDAISlot();
};

