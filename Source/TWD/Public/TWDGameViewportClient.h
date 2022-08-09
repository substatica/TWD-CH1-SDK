#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "TWDGameViewportClient.generated.h"

UCLASS(NonTransient)
class TWD_API UTWDGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UTWDGameViewportClient();
};

