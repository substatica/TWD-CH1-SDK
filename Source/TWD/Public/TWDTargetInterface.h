#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "TWDTargetInterface.generated.h"

class ATWDPlayerController;
class ATWDPlayerCharacter;
class ATWDWeaponActor;

UINTERFACE(Blueprintable)
class UTWDTargetInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool GetMeleeTargetLocation(const ATWDPlayerController* PC, const ATWDPlayerCharacter* Char, const ATWDWeaponActor* Weapon, const FTransform& SearchTransform, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool AllowMeleeTarget(const ATWDPlayerController* PC, const ATWDPlayerCharacter* Char, const ATWDWeaponActor* Weapon, bool bForLockon) const;
    
};

