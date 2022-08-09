#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandInteractComponent.h"
#include "SDIPlayerHandAdvancedInteractComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandAdvancedInteractComponent : public USDIPlayerHandInteractComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float IgnoreNonClimbableRadius;
    
public:
    USDIPlayerHandAdvancedInteractComponent();
};

