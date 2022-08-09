#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIPhysicalMaterial.h"
#include "TWDPhysicalMaterial.generated.h"

class AActor;
class UParticleSystem;
class UObject;

UCLASS(CollapseCategories)
class UTWDPhysicalMaterial : public USDIPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* DefaultBulletParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* DefaultBulletSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> DefaultBulletDecal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBulletOrientUsingImpactVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* DefaultFootstepSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* DefaultGripSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterNoiseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ObjectNoiseMultiplier;
    
public:
    UTWDPhysicalMaterial();
    UFUNCTION(BlueprintPure)
    float GetObjectNoiseMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetDefaultGripSound() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetDefaultFootstepSound() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterNoiseMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetBulletSound(UClass* BulletClass) const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetBulletParticle(bool& bOrientUsingImpactVelocity, UClass* BulletClass) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetBulletDecal(UClass* BulletClass) const;
    
};

