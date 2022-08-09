#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "TWDWeaponResponseInterface.generated.h"

class USceneComponent;
class UDamageType;
class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UTWDWeaponResponseInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDWeaponResponseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool OnWeaponHit(FVector Location, FVector Normal, FVector Force, FName BoneName, const UDamageType* DamageType, AActor* DamageCauser, USceneComponent* ComponentHit) PURE_VIRTUAL(OnWeaponHit, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanReceiveWeaponHit() PURE_VIRTUAL(CanReceiveWeaponHit, return false;);
    
};

