#pragma once
#include "CoreMinimal.h"
#include "SDIActiveRagdollComponent.h"
#include "TWDActiveRagdollComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDActiveRagdollComponent : public USDIActiveRagdollComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bWasGrappling;
    
public:
    UTWDActiveRagdollComponent();
};

