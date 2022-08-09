#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIPhysicalMaterial.h"
#include "TWDPhysicalMaterial.generated.h"

class UParticleSystem;
class UObject;
class AActor;

UCLASS(Blueprintable, CollapseCategories)
class UTWDPhysicalMaterial : public USDIPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DefaultBulletParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultBulletSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultBulletDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBulletOrientUsingImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultGripSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterNoiseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectNoiseMultiplier;
    
public:
    UTWDPhysicalMaterial();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectNoiseMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetDefaultGripSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetDefaultFootstepSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterNoiseMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetBulletSound(UClass* BulletClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetBulletParticle(bool& bOrientUsingImpactVelocity, UClass* BulletClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetBulletDecal(UClass* BulletClass) const;
    
};

