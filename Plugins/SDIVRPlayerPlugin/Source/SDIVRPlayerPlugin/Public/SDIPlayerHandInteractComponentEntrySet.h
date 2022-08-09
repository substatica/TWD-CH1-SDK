#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "ESDIInteractRangeType.h"
#include "SDIPlayerHandInteractComponentEntrySet.generated.h"

class ASDIPlayerController;
class USDIPlayerHandInteractComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIPlayerHandInteractComponentEntrySet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASDIPlayerController* Owner;
    
    UPROPERTY(Export, Transient)
    TMap<ESDIInteractRangeType, TWeakObjectPtr<USDIPlayerHandInteractComponent>> Components;
    
    UPROPERTY(Transient)
    TArray<FSDIPlayerHandInteractComponentEntry> Entries;
    
public:
    FSDIPlayerHandInteractComponentEntrySet();
};

