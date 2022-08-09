#pragma once
#include "CoreMinimal.h"
#include "TWDSkinSkeletalMeshSetArmor.generated.h"

class UParticleSystem;
class UDestructibleMesh;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FTWDSkinSkeletalMeshSetArmor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ArmorAmount;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UParticleSystem> BreakFXParticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BreakFXDestructibleMeshLifespan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UDestructibleMesh> BreakFXDestructibleMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BreakFXDestructibleMeshImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* BreakFXSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BreakFXSocket;
    
    UPROPERTY(Transient)
    UParticleSystem* PreloadedBreakFXParticle;
    
    UPROPERTY(Transient)
    UDestructibleMesh* PreloadedBreakFXDestructibleMesh;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float DestroyedTimestamp;
    
    TWD_API FTWDSkinSkeletalMeshSetArmor();
};

