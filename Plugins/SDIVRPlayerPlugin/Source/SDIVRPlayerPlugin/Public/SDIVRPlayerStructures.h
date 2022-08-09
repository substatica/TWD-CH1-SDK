#pragma once
#include "CoreMinimal.h"
#include "SDIStructures.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "SDIVRPlayerStructures.generated.h"

class ASDIPlayerHand;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIVRPlayerStructures : public USDIStructures {
    GENERATED_BODY()
public:
    USDIVRPlayerStructures();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetEntryPlayerHandGripActor(const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASDIPlayerHand* GetEntryPlayerHand(const FSDIPlayerHandInteractComponentEntry& Entry);
    
};

