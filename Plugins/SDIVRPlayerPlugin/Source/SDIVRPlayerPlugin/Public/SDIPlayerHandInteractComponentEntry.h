#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ESDIInteractRangeType.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandInteractComponentEntry.generated.h"

class ASDIPlayerController;
class UPrimitiveComponent;
class AActor;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIPlayerHandInteractComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ASDIPlayerController> WeakController;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector SegmentLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector RootLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LateralDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ScreenAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SortScore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDIInteractRangeType RangeType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand ControllerHand;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bInsideCapsule;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bEmbedded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bOnscreen;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHighlighted;
    
private:
    UPROPERTY(Transient)
    bool bTestedLOS;
    
    UPROPERTY(Transient)
    bool bUsedShortcutLOS;
    
    UPROPERTY(Transient)
    bool bValidLOS;
    
    UPROPERTY(Transient)
    bool bHasLOS;
    
    UPROPERTY(Transient)
    FVector HandLOSLocation;
    
    UPROPERTY(Transient)
    FVector CompLOSLocation;
    
    UPROPERTY(Transient)
    bool bTestedValidInteractionHighlight;
    
    UPROPERTY(Transient)
    bool bValidInteractionHighlight;
    
public:
    FSDIPlayerHandInteractComponentEntry();
};

