#pragma once
#include "CoreMinimal.h"
#include "ESDIInteractRangeType.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "SDIPlayerHandInteractComponentEntrySet.generated.h"

class ASDIPlayerController;
class USDIPlayerHandInteractComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIPlayerHandInteractComponentEntrySet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerController* Owner;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TMap<ESDIInteractRangeType, TWeakObjectPtr<USDIPlayerHandInteractComponent>> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIPlayerHandInteractComponentEntry> Entries;
    
public:
    FSDIPlayerHandInteractComponentEntrySet();
};

