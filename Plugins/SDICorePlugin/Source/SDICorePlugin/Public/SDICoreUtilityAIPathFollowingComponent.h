#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SDICoreUtilityAIPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreUtilityAIPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    USDICoreUtilityAIPathFollowingComponent();
};

