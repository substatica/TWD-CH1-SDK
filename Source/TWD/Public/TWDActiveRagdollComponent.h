#pragma once
#include "CoreMinimal.h"
#include "SDIActiveRagdollComponent.h"
#include "TWDActiveRagdollComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDActiveRagdollComponent : public USDIActiveRagdollComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasGrappling;
    
public:
    UTWDActiveRagdollComponent();
};

