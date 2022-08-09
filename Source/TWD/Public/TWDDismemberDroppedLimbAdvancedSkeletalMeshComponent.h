#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TWDDismemberDroppedLimbAdvancedSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDDismemberDroppedLimbAdvancedSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> PoseCopyMesh;
    
    UPROPERTY(Transient)
    bool bBlendPhysicsNextTick;
    
public:
    UTWDDismemberDroppedLimbAdvancedSkeletalMeshComponent();
};

