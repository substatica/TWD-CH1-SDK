#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandInteractComponent.h"
#include "SDIPlayerHandAdvancedInteractComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandAdvancedInteractComponent : public USDIPlayerHandInteractComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreNonClimbableRadius;
    
public:
    USDIPlayerHandAdvancedInteractComponent();
};

