#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearm.h"
#include "ESDIInteractiveInteractType.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponAnimation.h"
#include "TWDWeaponImposterGun.generated.h"

class ASDIHeldActor;
class UAkAudioEvent;
class USkeletalMeshComponent;
class UAkComponent;
class ATWDCharacter;

UCLASS()
class TWD_API ATWDWeaponImposterGun : public ASDIWeaponFirearm {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ASDIWeaponFirearm> FirearmToSpawnOnDrop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ASDIHeldActor> BrokenFirearmToSpawnOnDrop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BrokenFirearmSpawnChance;
    
    UPROPERTY(Transient)
    bool bReturningToInventory;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EWeaponAnimation WeaponAnimType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsRevolver;
    
    UPROPERTY(EditAnywhere)
    float HitAccuracyMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* FiredRoundAudioEvent;
    
    ATWDWeaponImposterGun();
    UFUNCTION(BlueprintPure)
    bool PredictFireModeTransform(ESDIInteractiveInteractType Type, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsThreat(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    bool IsHighThreat(ATWDCharacter* Character);
    
};

