#pragma once
#include "CoreMinimal.h"
#include "SDIHandMeshComponent.h"
#include "TWDHandMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDHandMeshComponent : public USDIHandMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float StabDragLocationPIDScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float WindedLocationPIDScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float WindedRotationPIDScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldingDraggedRagdollMinMass;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldingDraggedRagdollAngularDamping;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldingDraggedRagdollLinearDamping;
    
    UPROPERTY(Transient)
    bool bLastHoldingDraggedRagdollState;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedPreHoldingDraggedRagdollMass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedPreHoldingDraggedRagdollAngularDamping;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedPreHoldingDraggedRagdollLinearDamping;
    
public:
    UTWDHandMeshComponent();
};

