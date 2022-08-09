#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandInteractComponent.h"
#include "Engine/EngineTypes.h"
#include "SDIPlayerHandPhysicalInteractComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandPhysicalInteractComponent : public USDIPlayerHandInteractComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DebounceTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinPhysicalInteractPushTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PhysicalInteractPushThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PhysicalInteractPushReleaseThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PhysicalInteractMagnetEngageDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PhysicalInteractMagnetDisengageDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult PhysicalInteractResult;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DebounceTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPhysicalInteractionPushed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PhysicalInteractionPushPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult PhysicalInteractPushCollision;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPhysicalInteractPushCollisionValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PhysicalInteractPushTime;
    
public:
    USDIPlayerHandPhysicalInteractComponent();
    UFUNCTION(BlueprintPure)
    FHitResult K2GetPhysicalInteractResult() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetGetPhysicalInteractActor() const;
    
};

