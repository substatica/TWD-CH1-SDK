#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "SDIWorldSettings.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    ASDIWorldSettings();
};

