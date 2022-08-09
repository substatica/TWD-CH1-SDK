#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "SDICoreGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class SDICOREPLUGIN_API USDICoreGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    USDICoreGameEngine();
};

