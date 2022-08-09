#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "TWDCharacterStabModifierSphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDCharacterStabModifierSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StabPushMotionMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StabPullMotionMultiplier;
    
public:
    UTWDCharacterStabModifierSphereComponent();
};

