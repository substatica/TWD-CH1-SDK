#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandAdvancedInteractComponent.h"
#include "TWDPlayerHandInteractComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDPlayerHandInteractComponent : public USDIPlayerHandAdvancedInteractComponent {
    GENERATED_BODY()
public:
    UTWDPlayerHandInteractComponent();
};

