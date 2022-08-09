#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETWDInteractionType.h"
#include "TWDInteractiveHighlightManagerEntry.generated.h"

class AActor;
class UPrimitiveComponent;
class ATWDInteractiveHighlightActor;

USTRUCT(BlueprintType)
struct FTWDInteractiveHighlightManagerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAnyInteractions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLeftHandClose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLeftHandRanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bRightHandClose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bRightHandRanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bValidLOS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasLOS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bOutOfRange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Highlight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDInteractionType Type;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ATWDInteractiveHighlightActor* HighlightActor;
    
    TWD_API FTWDInteractiveHighlightManagerEntry();
};

