#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponHitComponentHitSignatureDelegate.generated.h"

class USDIWeaponHitCapsuleComponent;
class AActor;
class UPrimitiveComponent;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FSDIWeaponHitComponentHitSignature, USDIWeaponHitCapsuleComponent*, SelfComponent, USDIWeaponHitCapsuleComponent*, WeaponHitComponent, AActor*, HitActor, UPrimitiveComponent*, HitComp, const FVector&, HitVelocity, const FTransform&, HitTransform, const FHitResult&, HitInfo, const UDamageType*, DamageType);

