#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "TWDLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTWDLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UTWDLocalPlayer();
};

