#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "TWDCharacterStabModifierSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDCharacterStabModifierSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPushMotionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPullMotionMultiplier;
    
public:
    UTWDCharacterStabModifierSphereComponent();
};

