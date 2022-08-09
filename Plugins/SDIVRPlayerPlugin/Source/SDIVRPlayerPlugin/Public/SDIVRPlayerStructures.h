#pragma once
#include "CoreMinimal.h"
#include "SDIStructures.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "SDIVRPlayerStructures.generated.h"

class AActor;
class ASDIPlayerHand;

UCLASS()
class SDIVRPLAYERPLUGIN_API USDIVRPlayerStructures : public USDIStructures {
    GENERATED_BODY()
public:
    USDIVRPlayerStructures();
    UFUNCTION(BlueprintPure)
    static AActor* GetEntryPlayerHandGripActor(const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static ASDIPlayerHand* GetEntryPlayerHand(const FSDIPlayerHandInteractComponentEntry& Entry);
    
};

