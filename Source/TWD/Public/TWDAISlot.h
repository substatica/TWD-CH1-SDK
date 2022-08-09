#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDAISlot.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDAISlot {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Index;
    
    UPROPERTY(Transient)
    float HomeAngle;
    
    UPROPERTY(Transient)
    FVector RelTranslation;
    
    UPROPERTY(Transient)
    FVector AbsTranslation;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDCharacter> Owner;
    
    UPROPERTY(Transient)
    uint32 SideFlags;
    
    TWD_API FTWDAISlot();
};

