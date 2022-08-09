#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESDIAxis.h"
#include "TWDCharacterDamageFX.generated.h"

class UParticleSystem;
class UPhysicalMaterial;
class UDamageType;

USTRUCT(BlueprintType)
struct FTWDCharacterDamageFX {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    float MinImpactVelocity;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(EditAnywhere)
    bool bAttach;
    
    UPROPERTY(EditAnywhere)
    bool bOrientUsingImpactVelocity;
    
    UPROPERTY(EditAnywhere)
    ESDIAxis OrientationAxis;
    
    TWD_API FTWDCharacterDamageFX();
};

