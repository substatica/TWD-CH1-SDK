#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TWDDismemberDroppedLimbAdvancedSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDDismemberDroppedLimbAdvancedSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> PoseCopyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlendPhysicsNextTick;
    
public:
    UTWDDismemberDroppedLimbAdvancedSkeletalMeshComponent();
};

