#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDInventoryActorBlueprintInterface.generated.h"

class ATWDPlayerCharacter;

UINTERFACE(Blueprintable)
class UTWDInventoryActorBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDInventoryActorBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInventoryEffectInfo(ATWDPlayerCharacter* PlayerCharacter, float& HealthEffect, float& MaxHealthEffect, float& MaxStaminaEffect) const;
    
};

